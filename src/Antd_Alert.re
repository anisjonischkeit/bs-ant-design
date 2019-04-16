[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/alert";

[%bs.raw {|require("antd/lib/alert/style")|}];

[@bs.deriving jsConverter]
type alertType = [ | `success | `info | `warning | `error];

[@bs.obj]
external makeProps:
  (
    ~afterClose: unit => unit=?,
    ~banner: bool=?,
    ~closable: bool=?,
    ~closeText: ReasonReact.reactElement=?,
    ~description: ReasonReact.reactElement=?,
    ~iconType: string=?,
    ~message: ReasonReact.reactElement=?,
    ~showIcon: bool=?,
    ~_type: string=?,
    ~onClose: ReactEvent.Mouse.t => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~afterClose=?,
      ~banner=?,
      ~closable=?,
      ~closeText=?,
      ~description=?,
      ~iconType=?,
      ~message=?,
      ~showIcon=?,
      ~_type=?,
      ~onClose=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~afterClose?,
        ~banner?,
        ~closable?,
        ~closeText?,
        ~description?,
        ~iconType?,
        ~message?,
        ~showIcon?,
        ~_type=?Js.Option.map((. b) => alertTypeToJs(b), _type),
        ~onClose?,
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
        "onClose": option('onClose),
        "_type": option('T_type),
        "showIcon": option('showIcon),
        "message": option('message),
        "iconType": option('iconType),
        "description": option('description),
        "closeText": option('closeText),
        "closable": option('closable),
        "banner": option('banner),
        "afterClose": option('afterClose),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~onClose=?reactProps##onClose,
      ~_type=?reactProps##_type,
      ~showIcon=?reactProps##showIcon,
      ~message=?reactProps##message,
      ~iconType=?reactProps##iconType,
      ~description=?reactProps##description,
      ~closeText=?reactProps##closeText,
      ~closable=?reactProps##closable,
      ~banner=?reactProps##banner,
      ~afterClose=?reactProps##afterClose,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~afterClose: 'afterClose=?,
    ~banner: 'banner=?,
    ~closable: 'closable=?,
    ~closeText: 'closeText=?,
    ~description: 'description=?,
    ~iconType: 'iconType=?,
    ~message: 'message=?,
    ~showIcon: 'showIcon=?,
    ~_type: 'T_type=?,
    ~onClose: 'onClose=?,
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
    "onClose": option('onClose),
    "_type": option('T_type),
    "showIcon": option('showIcon),
    "message": option('message),
    "iconType": option('iconType),
    "description": option('description),
    "closeText": option('closeText),
    "closable": option('closable),
    "banner": option('banner),
    "afterClose": option('afterClose),
    "children": 'children,
  } =
  "";

/*
 afterClose	Called when close animation is finished	() => void	-
 banner	Whether to show as banner	boolean	false
 closable	Whether Alert can be closed	boolean	-
 closeText	Close text to show	string|ReactNode	-
 description	Additional content of Alert	string|ReactNode	-
 iconType	Icon type, effective when showIcon is true	string	-
 message	Content of Alert	string|ReactNode	-
 showIcon	Whether to show icon	boolean	false, in banner mode default is true
 type	Type of Alert styles, options: success, info, warning, error	string	info, in banner mode default is warning
 onClose	Callback when Alert is closed	(e: MouseEvent) => void	-
    */
