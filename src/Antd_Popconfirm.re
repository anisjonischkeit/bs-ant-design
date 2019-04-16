[@bs.module]
external reactClass: ReasonReact.reactClass = "antd/lib/popconfirm";

[%bs.raw {|require("antd/lib/popconfirm/style")|}];

[@bs.deriving jsConverter]
type placementType = [
  | `top
  | `left
  | `right
  | `bottom
  | `topLeft
  | `topRight
  | `bottomLeft
  | `bottomRight
  | `leftTop
  | `leftBottom
  | `rightTop
  | `rightBottom
];

[@bs.deriving jsConverter]
type triggerType = [ | `hover | `focus | `click | `contextMenu];

[@bs.obj]
external makeProps:
  (
    ~arrowPointAtCenter: bool=?,
    ~autoAdjustOverflow: bool=?,
    ~defaultVisible: bool=?,
    ~getPopupContainer: Dom.element => Dom.htmlElement=?,
    ~mouseEnterDelay: float=?,
    ~mouseLeaveDelay: float=?,
    ~overlayClassName: string=?,
    ~overlayStyle: ReactDOMRe.Style.t=?,
    ~placement: string=?,
    ~trigger: string=?,
    ~visible: bool=?,
    ~onVisibleChange: bool => unit=?,
    ~cancelText: string=?,
    ~okText: string=?,
    ~okType: string=?,
    ~title: ReasonReact.reactElement=?,
    ~onCancel: ReactEvent.Mouse.t => unit=?,
    ~onConfirm: ReactEvent.Mouse.t => unit=?,
    ~icon: ReasonReact.reactElement=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~arrowPointAtCenter=?,
      ~autoAdjustOverflow=?,
      ~defaultVisible=?,
      ~getPopupContainer=?,
      ~mouseEnterDelay=?,
      ~mouseLeaveDelay=?,
      ~overlayClassName=?,
      ~overlayStyle=?,
      ~placement=?,
      ~trigger=?,
      ~visible=?,
      ~onVisibleChange=?,
      ~cancelText=?,
      ~okText=?,
      ~okType=?,
      ~title=?,
      ~onCancel=?,
      ~onConfirm=?,
      ~icon=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~arrowPointAtCenter?,
        ~autoAdjustOverflow?,
        ~defaultVisible?,
        ~getPopupContainer?,
        ~mouseEnterDelay?,
        ~mouseLeaveDelay?,
        ~overlayClassName?,
        ~overlayStyle?,
        ~placement=?Js.Option.map((. b) => placementTypeToJs(b), placement),
        ~trigger=?Js.Option.map((. b) => triggerTypeToJs(b), trigger),
        ~visible?,
        ~onVisibleChange?,
        ~cancelText?,
        ~okText?,
        ~okType?,
        ~title?,
        ~onCancel?,
        ~onConfirm?,
        ~icon?,
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
        "icon": option('icon),
        "onConfirm": option('onConfirm),
        "onCancel": option('onCancel),
        "title": option('title),
        "okType": option('okType),
        "okText": option('okText),
        "cancelText": option('cancelText),
        "onVisibleChange": option('onVisibleChange),
        "visible": option('visible),
        "trigger": option('trigger),
        "placement": option('placement),
        "overlayStyle": option('overlayStyle),
        "overlayClassName": option('overlayClassName),
        "mouseLeaveDelay": option('mouseLeaveDelay),
        "mouseEnterDelay": option('mouseEnterDelay),
        "getPopupContainer": option('getPopupContainer),
        "defaultVisible": option('defaultVisible),
        "autoAdjustOverflow": option('autoAdjustOverflow),
        "arrowPointAtCenter": option('arrowPointAtCenter),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~icon=?reactProps##icon,
      ~onConfirm=?reactProps##onConfirm,
      ~onCancel=?reactProps##onCancel,
      ~title=?reactProps##title,
      ~okType=?reactProps##okType,
      ~okText=?reactProps##okText,
      ~cancelText=?reactProps##cancelText,
      ~onVisibleChange=?reactProps##onVisibleChange,
      ~visible=?reactProps##visible,
      ~trigger=?reactProps##trigger,
      ~placement=?reactProps##placement,
      ~overlayStyle=?reactProps##overlayStyle,
      ~overlayClassName=?reactProps##overlayClassName,
      ~mouseLeaveDelay=?reactProps##mouseLeaveDelay,
      ~mouseEnterDelay=?reactProps##mouseEnterDelay,
      ~getPopupContainer=?reactProps##getPopupContainer,
      ~defaultVisible=?reactProps##defaultVisible,
      ~autoAdjustOverflow=?reactProps##autoAdjustOverflow,
      ~arrowPointAtCenter=?reactProps##arrowPointAtCenter,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~arrowPointAtCenter: 'arrowPointAtCenter=?,
    ~autoAdjustOverflow: 'autoAdjustOverflow=?,
    ~defaultVisible: 'defaultVisible=?,
    ~getPopupContainer: 'getPopupContainer=?,
    ~mouseEnterDelay: 'mouseEnterDelay=?,
    ~mouseLeaveDelay: 'mouseLeaveDelay=?,
    ~overlayClassName: 'overlayClassName=?,
    ~overlayStyle: 'overlayStyle=?,
    ~placement: 'placement=?,
    ~trigger: 'trigger=?,
    ~visible: 'visible=?,
    ~onVisibleChange: 'onVisibleChange=?,
    ~cancelText: 'cancelText=?,
    ~okText: 'okText=?,
    ~okType: 'okType=?,
    ~title: 'title=?,
    ~onCancel: 'onCancel=?,
    ~onConfirm: 'onConfirm=?,
    ~icon: 'icon=?,
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
    "icon": option('icon),
    "onConfirm": option('onConfirm),
    "onCancel": option('onCancel),
    "title": option('title),
    "okType": option('okType),
    "okText": option('okText),
    "cancelText": option('cancelText),
    "onVisibleChange": option('onVisibleChange),
    "visible": option('visible),
    "trigger": option('trigger),
    "placement": option('placement),
    "overlayStyle": option('overlayStyle),
    "overlayClassName": option('overlayClassName),
    "mouseLeaveDelay": option('mouseLeaveDelay),
    "mouseEnterDelay": option('mouseEnterDelay),
    "getPopupContainer": option('getPopupContainer),
    "defaultVisible": option('defaultVisible),
    "autoAdjustOverflow": option('autoAdjustOverflow),
    "arrowPointAtCenter": option('arrowPointAtCenter),
    "children": 'children,
  } =
  "";

/*
 COMMON API
 -----------------------
 arrowPointAtCenter	Whether the arrow is pointed at the center of target, supported after antd@1.11+	boolean	false
 autoAdjustOverflow	Whether to adjust popup placement automatically when popup is off screen	boolean	true
 defaultVisible	Whether the floating tooltip card is visible by default	boolean	false
 getPopupContainer	The DOM container of the tip, the default behavior is to create a div element in body	Function(triggerNode)	() => document.body
 mouseEnterDelay	Delay in seconds, before tooltip is shown on mouse enter	number	0
 mouseLeaveDelay	Delay in seconds, before tooltip is hidden on mouse leave	number	0.1
 overlayClassName	Class name of the tooltip card	string	-
 overlayStyle	Style of the tooltip card	object	-
 placement	The position of the tooltip relative to the target, which can be one of top left right bottom topLeft topRight bottomLeft bottomRight leftTop leftBottom rightTop rightBottom	string	top
 trigger	Tooltip trigger mode	hover | focus | click | contextMenu	hover
 visible	Whether the floating tooltip card is visible or not	boolean	false
 onVisibleChange	Callback executed when visibility of the tooltip card is changed	(visible) => void	-
 align	this value will be merged into placement's config, please refer to the settings rc-tooltip	Object	-

 */

/*
 cancelText	text of the Cancel button	string	Cancel
 okText	text of the Confirm button	string	Confirm
 okType	Button type of the Confirm button	string	primary
 title	title of the confirmation box	string|ReactNode	-
 onCancel	callback of cancel	function(e)	-
 onConfirm	callback of confirmation	function(e)	-
 icon	customize icon of confirmation	ReactNode	<Icon type="exclamation-circle" />
  */
