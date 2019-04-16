[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/rate";

[%bs.raw {|require("antd/lib/rate/style")|}];

[@bs.obj]
external makeProps:
  (
    ~allowClear: bool=?,
    ~allowHalf: bool=?,
    ~autoFocus: bool=?,
    ~character: ReasonReact.reactElement=?,
    ~className: string=?,
    ~count: int=?,
    ~defaultValue: int=?,
    ~disabled: bool=?,
    ~style: ReactDOMRe.Style.t=?,
    ~value: string=?,
    ~onBlur: ReactEvent.Focus.t => unit=?,
    ~onChange: float => unit=?,
    ~onFocus: ReactEvent.Focus.t => unit=?,
    ~onHoverChange: float => unit=?,
    ~onKeyDown: ReactEvent.Focus.t => unit=?,
    ~id: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~allowClear=?,
      ~allowHalf=?,
      ~autoFocus=?,
      ~character=?,
      ~className=?,
      ~count=?,
      ~defaultValue=?,
      ~disabled=?,
      ~style=?,
      ~value=?,
      ~onBlur=?,
      ~onChange=?,
      ~onFocus=?,
      ~onHoverChange=?,
      ~onKeyDown=?,
      ~id=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~allowClear?,
        ~allowHalf?,
        ~autoFocus?,
        ~character?,
        ~className?,
        ~count?,
        ~defaultValue?,
        ~disabled?,
        ~style?,
        ~value?,
        ~onBlur?,
        ~onChange?,
        ~onFocus?,
        ~onHoverChange?,
        ~onKeyDown?,
        ~id?,
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
        "id": option('id),
        "onKeyDown": option('onKeyDown),
        "onHoverChange": option('onHoverChange),
        "onFocus": option('onFocus),
        "onChange": option('onChange),
        "onBlur": option('onBlur),
        "value": option('value),
        "style": option('style),
        "disabled": option('disabled),
        "defaultValue": option('defaultValue),
        "count": option('count),
        "className": option('className),
        "character": option('character),
        "autoFocus": option('autoFocus),
        "allowHalf": option('allowHalf),
        "allowClear": option('allowClear),
        "children": 'children,
      },
    ) =>
    make(
      ~id=?reactProps##id,
      ~onKeyDown=?reactProps##onKeyDown,
      ~onHoverChange=?reactProps##onHoverChange,
      ~onFocus=?reactProps##onFocus,
      ~onChange=?reactProps##onChange,
      ~onBlur=?reactProps##onBlur,
      ~value=?reactProps##value,
      ~style=?reactProps##style,
      ~disabled=?reactProps##disabled,
      ~defaultValue=?reactProps##defaultValue,
      ~count=?reactProps##count,
      ~className=?reactProps##className,
      ~character=?reactProps##character,
      ~autoFocus=?reactProps##autoFocus,
      ~allowHalf=?reactProps##allowHalf,
      ~allowClear=?reactProps##allowClear,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~allowClear: 'allowClear=?,
    ~allowHalf: 'allowHalf=?,
    ~autoFocus: 'autoFocus=?,
    ~character: 'character=?,
    ~className: 'className=?,
    ~count: 'count=?,
    ~defaultValue: 'defaultValue=?,
    ~disabled: 'disabled=?,
    ~style: 'style=?,
    ~value: 'value=?,
    ~onBlur: 'onBlur=?,
    ~onChange: 'onChange=?,
    ~onFocus: 'onFocus=?,
    ~onHoverChange: 'onHoverChange=?,
    ~onKeyDown: 'onKeyDown=?,
    ~id: 'id=?,
    unit
  ) =>
  {
    .
    "id": option('id),
    "onKeyDown": option('onKeyDown),
    "onHoverChange": option('onHoverChange),
    "onFocus": option('onFocus),
    "onChange": option('onChange),
    "onBlur": option('onBlur),
    "value": option('value),
    "style": option('style),
    "disabled": option('disabled),
    "defaultValue": option('defaultValue),
    "count": option('count),
    "className": option('className),
    "character": option('character),
    "autoFocus": option('autoFocus),
    "allowHalf": option('allowHalf),
    "allowClear": option('allowClear),
    "children": 'children,
  } =
  "";

/*
 allowClear	whether to allow clear when click again	boolean	true
 allowHalf	whether to allow semi selection	boolean	false
 autoFocus	get focus when component mounted	boolean	false
 character	custom character of rate	ReactNode	<Icon type="star" />
 className	custom class name of rate	string	-
 count	star count	number	5
 defaultValue	default value	number	0
 disabled	read only, unable to interact	boolean	false
 style	custom style object of rate	object	-
 value	current value	number	-
 onBlur	callback when component lose focus	Function()	-
 onChange	callback when select value	Function(value: number)	-
 onFocus	callback when component get focus	Function()	-
 onHoverChange	callback when hover item	Function(value: number)	-
 onKeyDown	callback when keydown on component	Function(event)
 */
