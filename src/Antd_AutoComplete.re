[@bs.module]
external autoComplete: ReasonReact.reactClass = "antd/lib/auto-complete";

[%bs.raw {|require("antd/lib/auto-complete/style")|}];

[@bs.obj]
external makeProps:
  (
    ~allowClear: bool=?,
    ~autoFocus: bool=?,
    ~backfill: bool=?,
    ~dataSource: array(string)=?,
    ~defaultActiveFirstOption: bool=?,
    ~defaultValue: string=?,
    ~disabled: bool=?,
    ~filterOption: bool=?,
    ~optionLabelProp: string=?,
    ~placeholder: string=?,
    ~value: string=?,
    ~onBlur: ReactEvent.Focus.t => unit=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~onFocus: ReactEvent.Form.t => unit=?,
    ~onSearch: ReactEvent.Form.t => unit=?,
    ~onSelect: ReactEvent.Form.t => unit=?,
    ~defaultOpen: bool=?,
    ~open_: bool=?,
    ~onDropdownVisibleChange: string => unit=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~allowClear=?,
      ~autoFocus=?,
      ~backfill=?,
      ~dataSource=?,
      ~defaultActiveFirstOption=?,
      ~defaultValue=?,
      ~disabled=?,
      ~filterOption=?,
      ~optionLabelProp=?,
      ~placeholder=?,
      ~value=?,
      ~onBlur=?,
      ~onChange=?,
      ~onFocus=?,
      ~onSearch=?,
      ~onSelect=?,
      ~defaultOpen=?,
      ~open_=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=autoComplete,
    ~props=
      makeProps(
        ~allowClear?,
        ~autoFocus?,
        ~backfill?,
        ~dataSource=?Js.Option.map((. b) => Array.of_list(b), dataSource),
        ~defaultActiveFirstOption?,
        ~defaultValue?,
        ~disabled?,
        ~filterOption?,
        ~optionLabelProp?,
        ~placeholder?,
        ~value?,
        ~onBlur?,
        ~onChange?,
        ~onFocus?,
        ~onSearch?,
        ~onSelect?,
        ~defaultOpen?,
        ~open_?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );
/**
 * This is a wrapper created to let this component be used from the new React api.
 * Please convert this component to a [@react.component] function and then remove this wrapping code.
 */
let make =
  ReasonReactCompat.wrapReasonReactForReact(
    ~component=ReasonReact.statelessComponent("TemporaryRefactorComponent"),
    (
      reactProps: {
        .
        "style": option('style),
        "className": option('className),
        "open_": option('open_),
        "defaultOpen": option('defaultOpen),
        "onSelect": option('onSelect),
        "onSearch": option('onSearch),
        "onFocus": option('onFocus),
        "onChange": option('onChange),
        "onBlur": option('onBlur),
        "value": option('value),
        "placeholder": option('placeholder),
        "optionLabelProp": option('optionLabelProp),
        "filterOption": option('filterOption),
        "disabled": option('disabled),
        "defaultValue": option('defaultValue),
        "defaultActiveFirstOption": option('defaultActiveFirstOption),
        "dataSource": option('dataSource),
        "backfill": option('backfill),
        "autoFocus": option('autoFocus),
        "allowClear": option('allowClear),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~open_=?reactProps##open_,
      ~defaultOpen=?reactProps##defaultOpen,
      ~onSelect=?reactProps##onSelect,
      ~onSearch=?reactProps##onSearch,
      ~onFocus=?reactProps##onFocus,
      ~onChange=?reactProps##onChange,
      ~onBlur=?reactProps##onBlur,
      ~value=?reactProps##value,
      ~placeholder=?reactProps##placeholder,
      ~optionLabelProp=?reactProps##optionLabelProp,
      ~filterOption=?reactProps##filterOption,
      ~disabled=?reactProps##disabled,
      ~defaultValue=?reactProps##defaultValue,
      ~defaultActiveFirstOption=?reactProps##defaultActiveFirstOption,
      ~dataSource=?reactProps##dataSource,
      ~backfill=?reactProps##backfill,
      ~autoFocus=?reactProps##autoFocus,
      ~allowClear=?reactProps##allowClear,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~allowClear: 'allowClear=?,
    ~autoFocus: 'autoFocus=?,
    ~backfill: 'backfill=?,
    ~dataSource: 'dataSource=?,
    ~defaultActiveFirstOption: 'defaultActiveFirstOption=?,
    ~defaultValue: 'defaultValue=?,
    ~disabled: 'disabled=?,
    ~filterOption: 'filterOption=?,
    ~optionLabelProp: 'optionLabelProp=?,
    ~placeholder: 'placeholder=?,
    ~value: 'value=?,
    ~onBlur: 'onBlur=?,
    ~onChange: 'onChange=?,
    ~onFocus: 'onFocus=?,
    ~onSearch: 'onSearch=?,
    ~onSelect: 'onSelect=?,
    ~defaultOpen: 'defaultOpen=?,
    ~open_: 'open_=?,
    ~className: 'className=?,
    ~style: 'style=?,
    unit
  ) =>
  {
    .
    "style": option('style),
    "className": option('className),
    "open_": option('open_),
    "defaultOpen": option('defaultOpen),
    "onSelect": option('onSelect),
    "onSearch": option('onSearch),
    "onFocus": option('onFocus),
    "onChange": option('onChange),
    "onBlur": option('onBlur),
    "value": option('value),
    "placeholder": option('placeholder),
    "optionLabelProp": option('optionLabelProp),
    "filterOption": option('filterOption),
    "disabled": option('disabled),
    "defaultValue": option('defaultValue),
    "defaultActiveFirstOption": option('defaultActiveFirstOption),
    "dataSource": option('dataSource),
    "backfill": option('backfill),
    "autoFocus": option('autoFocus),
    "allowClear": option('allowClear),
    "children": 'children,
  } =
  "";

/*
 allowClear	Show clear button, effective in multiple mode only.	boolean	false
 autoFocus	get focus when component mounted	boolean	false
 backfill	backfill selected item the input when using keyboard	boolean	false
 children (for customize input element)	customize input element	HTMLInputElement / HTMLTextAreaElement / React.ReactElement	<Input />
 children (for dataSource)	Data source for autocomplet	React.ReactElement / Array<React.ReactElement>	-
 dataSource	Data source for autocomplete	DataSourceItemType[]
 defaultActiveFirstOption	Whether active first option by default	boolean	true
 defaultValue	Initial selected option.	string|string[]|{ key: string, label: string|ReactNode }|Array<{ key: string, label: string|ReactNode }>	-
 disabled	Whether disabled select	boolean	false
 filterOption	If true, filter options by input, if function, filter options against it. The function will receive two arguments, inputValue and option, if the function returns true, the option will be included in the filtered set; Otherwise, it will be excluded.	boolean or function(inputValue, option)	true
 optionLabelProp	Which prop value of option will render as content of select.	string	children
 placeholder	placeholder of input	string	-
 value	selected option	string|string[]|{ key: string, label: string|ReactNode }|Array<{ key: string, label: string|ReactNode }>	-
 onBlur	Called when leaving the component.	function()	-
 onChange	Called when select an option or input value change, or value of input is changed	function(value)	-
 onFocus	Called when entering the component	function()	-
 onSearch	Called when searching items.	function(value)	-
 onSelect	Called when a option is selected. param is option's value and option instance.	function(value, option)	-
 defaultOpen	Initial open state of dropdown	boolean	-
 open	Controlled open state of dropdown	boolean	-
 onDropdownVisibleChange	Call when dropdown open
 */
