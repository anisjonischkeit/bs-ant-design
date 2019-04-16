/*
 autoFocus	get focus when component mounted	boolean	false
 defaultValue	initial value	number
 disabled	disable the input	boolean	false
 formatter	Specifies the format of the value presented	function(value: number | string): string	-
 max	max value	number	Infinity
 min	min value	number	-Infinity
 parser	Specifies the value extracted from formatter	function( string): number	-
 precision	precision of input value	number	-
 size	width of input box	string	-
 step	The number to which the current value is increased or decreased. It can be an integer or decimal.	number|string	1
 value	current value	number
 onChange	The callback triggered when the value is changed.	function(value: number | string)
 */

[@bs.module]
external reactClass: ReasonReact.reactClass = "antd/lib/input-number";

[%bs.raw {|require("antd/lib/input-number/style")|}];

[@bs.obj]
external makeProps:
  (
    ~autoFocus: bool=?,
    ~defaultValue: float=?,
    ~disabled: bool=?,
    ~formatter: (int, string) => string=?,
    ~max: float=?,
    ~min: float=?,
    ~parser: string => int=?,
    ~precision: int=?,
    ~size: string=?,
    ~step: string=?,
    ~value: string=?,
    ~onChange: ReactEvent.Keyboard.t=?,
    ~onPressEnter: ReactEvent.Keyboard.t=?,
    ~onBlur: ReactEvent.Keyboard.t=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~id: string=?,
    ~placeholder: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~autoFocus=?,
      ~defaultValue=?,
      ~disabled=?,
      ~formatter=?,
      ~max=?,
      ~min=?,
      ~parser=?,
      ~precision=?,
      ~size=?,
      ~step=?,
      ~value=?,
      ~onChange=?,
      ~onPressEnter=?,
      ~onBlur=?,
      ~className=?,
      ~style=?,
      ~id=?,
      ~placeholder=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~autoFocus?,
        ~defaultValue?,
        ~disabled?,
        ~formatter?,
        ~max?,
        ~min?,
        ~parser?,
        ~precision?,
        ~size?,
        ~step?,
        ~value?,
        ~onChange?,
        ~onPressEnter?,
        ~onBlur?,
        ~className?,
        ~style?,
        ~id?,
        ~placeholder?,
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
        "placeholder": option('placeholder),
        "id": option('id),
        "style": option('style),
        "className": option('className),
        "onBlur": option('onBlur),
        "onPressEnter": option('onPressEnter),
        "onChange": option('onChange),
        "value": option('value),
        "step": option('step),
        "size": option('size),
        "precision": option('precision),
        "parser": option('parser),
        "min": option('min),
        "max": option('max),
        "formatter": option('formatter),
        "disabled": option('disabled),
        "defaultValue": option('defaultValue),
        "autoFocus": option('autoFocus),
        "children": 'children,
      },
    ) =>
    make(
      ~placeholder=?reactProps##placeholder,
      ~id=?reactProps##id,
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~onBlur=?reactProps##onBlur,
      ~onPressEnter=?reactProps##onPressEnter,
      ~onChange=?reactProps##onChange,
      ~value=?reactProps##value,
      ~step=?reactProps##step,
      ~size=?reactProps##size,
      ~precision=?reactProps##precision,
      ~parser=?reactProps##parser,
      ~min=?reactProps##min,
      ~max=?reactProps##max,
      ~formatter=?reactProps##formatter,
      ~disabled=?reactProps##disabled,
      ~defaultValue=?reactProps##defaultValue,
      ~autoFocus=?reactProps##autoFocus,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~autoFocus: 'autoFocus=?,
    ~defaultValue: 'defaultValue=?,
    ~disabled: 'disabled=?,
    ~formatter: 'formatter=?,
    ~max: 'max=?,
    ~min: 'min=?,
    ~parser: 'parser=?,
    ~precision: 'precision=?,
    ~size: 'size=?,
    ~step: 'step=?,
    ~value: 'value=?,
    ~onChange: 'onChange=?,
    ~onPressEnter: 'onPressEnter=?,
    ~onBlur: 'onBlur=?,
    ~className: 'className=?,
    ~style: 'style=?,
    ~id: 'id=?,
    ~placeholder: 'placeholder=?,
    unit
  ) =>
  {
    .
    "placeholder": option('placeholder),
    "id": option('id),
    "style": option('style),
    "className": option('className),
    "onBlur": option('onBlur),
    "onPressEnter": option('onPressEnter),
    "onChange": option('onChange),
    "value": option('value),
    "step": option('step),
    "size": option('size),
    "precision": option('precision),
    "parser": option('parser),
    "min": option('min),
    "max": option('max),
    "formatter": option('formatter),
    "disabled": option('disabled),
    "defaultValue": option('defaultValue),
    "autoFocus": option('autoFocus),
    "children": 'children,
  } =
  "";
