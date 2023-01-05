function [n,values]=get_value_list
f=figure;
set(f,'Menu','none','Toolbar','none')%have a clean window
h=struct;
h.f=f;
%setup the GUI elements
h.editfield=uicontrol('Parent',f,...
    'Style','edit',...
    'HorizontalAlignment','left',...
    'max',inf,...%maximum number of values
    'Units','Normalized',...
    'Position',[0.075 0.075 0.6 0.80]);
h.explanation=uicontrol('Parent',f,...
    'Style','text',...
    'String','Type the frequencies here, each values on one line:',...
    'Units','Normalized',...
    'Position',[0.075 0.875 0.6 0.075]);
h.testValuesButton=uicontrol('Parent',f,...
    'Style','pushbutton',...
    'String','Test if values are valid',...
    'Callback',@testValues,...
    'Units','Normalized',...
    'Position',[0.725 0.5 0.225 0.375]);
h.outputValuesButton=uicontrol('Parent',f,...
    'Style','pushbutton',...
    'String','Output values',...
    'Callback',@outputValues,...
    'Units','Normalized',...
    'Position',[0.725 0.075 0.225 0.375]);
guidata(h.f,h)%store handles to guidata to access them in callbacks
%wait for the 'output values' button
uiwait(h.f)
try
    %reload h struct, which now contains the output values
    h=guidata(h.f);
    values=h.values;
    %close figure
    close(h.f)
catch
    %the figure was closed during uiwait
    values=[];
end
n=numel(values);
end
function testValues(hObject,evnt) %#ok<INUSD>
h=guidata(hObject);
str=get(h.editfield,'String');
if isempty(str)
    h.values=[];
else
    %convert to numeric values, and remove invalid values
    vals=num2cell(str,2);
    vals=cellfun(@str2double,vals);
    vals(isnan(vals))=[];
    
    %output the valid numbers back to the edit field
    str=pad(cellfun(@num2str,num2cell(vals),'UniformOutput',false));
    str=cell2mat(str);
    set(h.editfield,'String',str);
    
    %set output
    h.values=vals;
end
guidata(h.f,h)
end
function outputValues(hObject,evnt) %#ok<INUSD>
h=guidata(hObject);
testValues(hObject)%will store the valid values in h.values
uiresume(h.f)
end