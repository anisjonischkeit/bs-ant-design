[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/switch";

[%bs.raw {|require("antd/lib/switch/style")|}];

[@bs.deriving jsConverter]
type size = [ | `default | `small];

[@bs.obj]
external makeProps:
  (
    ~autoFocus: bool=?,
    ~checked: bool=?,
    ~checkedChildren: ReasonReact.reactElement=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~loading: bool=?,
    ~size: string=?,
    ~unCheckedChildren: ReasonReact.reactElement=?,
    ~onChange: bool => unit=?,
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
      ~checkedChildren=?,
      ~defaultChecked=?,
      ~disabled=?,
      ~loading=?,
      ~size=?,
      ~unCheckedChildren=?,
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
        ~checkedChildren?,
        ~defaultChecked?,
        ~disabled?,
        ~loading?,
        ~size=?Js.Option.map((. b) => sizeToJs(b), size),
        ~unCheckedChildren?,
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
        "unCheckedChildren": option('unCheckedChildren),
        "size": option('size),
        "loading": option('loading),
        "disabled": option('disabled),
        "defaultChecked": option('defaultChecked),
        "checkedChildren": option('checkedChildren),
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
      ~unCheckedChildren=?reactProps##unCheckedChildren,
      ~size=?reactProps##size,
      ~loading=?reactProps##loading,
      ~disabled=?reactProps##disabled,
      ~defaultChecked=?reactProps##defaultChecked,
      ~checkedChildren=?reactProps##checkedChildren,
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
    ~checkedChildren: 'checkedChildren=?,
    ~defaultChecked: 'defaultChecked=?,
    ~disabled: 'disabled=?,
    ~loading: 'loading=?,
    ~size: 'size=?,
    ~unCheckedChildren: 'unCheckedChildren=?,
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
    "unCheckedChildren": option('unCheckedChildren),
    "size": option('size),
    "loading": option('loading),
    "disabled": option('disabled),
    "defaultChecked": option('defaultChecked),
    "checkedChildren": option('checkedChildren),
    "checked": option('checked),
    "autoFocus": option('autoFocus),
    "children": 'children,
  } =
  "";

/*
 autoFocus	get focus when component mounted	boolean	false
 checked	determine whether the Switch is checked	boolean	false
 checkedChildren	content to be shown when the state is checked	string|ReactNode
 defaultChecked	to set the initial state	boolean	false
 disabled	Disable switch	boolean	false
 loading	loading state of switch	boolean	false
 size	the size of the Switch, options: default small	string	default
 unCheckedChildren	content to be shown when the state is unchecked	string|ReactNode
 onChange	a callback function, can be executed when the checked state is changing	Function(checked:Boolean)
  */
