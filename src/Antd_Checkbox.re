[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/checkbox";

[%bs.raw {|require("antd/lib/checkbox/style")|}];

type clickParams = {. "domEvent": ReactEvent.Mouse.t};

[@bs.obj]
external makeProps:
  (
    ~autoFocus: bool=?,
    ~checked: bool=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~indeterminate: bool=?,
    ~onChange: clickParams=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~autoFocus=?,
      ~checked=?,
      ~defaultChecked=?,
      ~disabled=?,
      ~indeterminate=?,
      ~onChange=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~autoFocus?,
        ~checked?,
        ~defaultChecked?,
        ~disabled?,
        ~indeterminate?,
        ~onChange?,
        ~id?,
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
        "id": option('id),
        "onChange": option('onChange),
        "indeterminate": option('indeterminate),
        "disabled": option('disabled),
        "defaultChecked": option('defaultChecked),
        "checked": option('checked),
        "autoFocus": option('autoFocus),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~onChange=?reactProps##onChange,
      ~indeterminate=?reactProps##indeterminate,
      ~disabled=?reactProps##disabled,
      ~defaultChecked=?reactProps##defaultChecked,
      ~checked=?reactProps##checked,
      ~autoFocus=?reactProps##autoFocus,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~autoFocus: 'autoFocus=?,
    ~checked: 'checked=?,
    ~defaultChecked: 'defaultChecked=?,
    ~disabled: 'disabled=?,
    ~indeterminate: 'indeterminate=?,
    ~onChange: 'onChange=?,
    ~id: 'id=?,
    ~className: 'className=?,
    ~style: 'style=?,
    unit
  ) =>
  {
    .
    "style": option('style),
    "className": option('className),
    "id": option('id),
    "onChange": option('onChange),
    "indeterminate": option('indeterminate),
    "disabled": option('disabled),
    "defaultChecked": option('defaultChecked),
    "checked": option('checked),
    "autoFocus": option('autoFocus),
    "children": 'children,
  } =
  "";

/*
 autoFocus	get focus when component mounted	boolean	false
 checked	Specifies whether the checkbox is selected.	boolean	false
 defaultChecked	Specifies the initial state: whether or not the checkbox is selected.	boolean	false
 disabled	Disable checkbox	boolean	false
 indeterminate	indeterminate checked state of checkbox	boolean	false
 onChange	The callback function that is triggered when the state changes.	Function(e:Event)
 */
