[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/modal";

[%bs.raw {|require("antd/lib/modal/style")|}];

[@bs.deriving abstract]
type buttonProps = {. "disabled": bool};

[@bs.obj]
external makeProps:
  (
    ~afterClose: unit => unit=?,
    ~bodyStyle: ReactDOMRe.Style.t=?,
    ~cancelText: string=?,
    ~centered: bool=?,
    ~closable: bool=?,
    ~confirmLoading: bool=?,
    ~destroyOnClose: bool=?,
    ~footer: ReasonReact.reactElement=?,
    ~getContainer: Dom.element => Dom.htmlElement=?,
    ~mask: bool=?,
    ~maskClosable: bool=?,
    ~maskStyle: ReactDOMRe.Style.t=?,
    ~okText: string=?,
    ~okType: string=?,
    ~okButtonProps: buttonProps=?,
    ~cancelButtonProps: buttonProps=?,
    ~style: ReasonReact.reactElement=?,
    ~title: ReasonReact.reactElement=?,
    ~visible: bool=?,
    ~width: int=?,
    ~wrapClassName: string=?,
    ~zIndex: int=?,
    ~onCancel: ReactEvent.Mouse.t => unit=?,
    ~onOk: ReactEvent.Mouse.t => unit=?,
    ~id: string=?,
    ~className: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~afterClose=?,
      ~bodyStyle=?,
      ~cancelText=?,
      ~centered=?,
      ~closable=?,
      ~confirmLoading=?,
      ~destroyOnClose=?,
      ~footer=?,
      ~getContainer=?,
      ~mask=?,
      ~maskClosable=?,
      ~maskStyle=?,
      ~okText=?,
      ~okType=?,
      ~okButtonProps=?,
      ~cancelButtonProps=?,
      ~style=?,
      ~title=?,
      ~visible=?,
      ~width=?,
      ~wrapClassName=?,
      ~zIndex=?,
      ~onCancel=?,
      ~onOk=?,
      ~id=?,
      ~className=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~afterClose?,
        ~bodyStyle?,
        ~cancelText?,
        ~centered?,
        ~closable?,
        ~confirmLoading?,
        ~destroyOnClose?,
        ~footer?,
        ~getContainer?,
        ~mask?,
        ~maskClosable?,
        ~maskStyle?,
        ~okText?,
        ~okType?,
        ~okButtonProps?,
        ~cancelButtonProps?,
        ~style?,
        ~title?,
        ~visible?,
        ~width?,
        ~wrapClassName?,
        ~zIndex?,
        ~onCancel?,
        ~onOk?,
        ~id?,
        ~className?,
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
        "className": option('className),
        "id": option('id),
        "onOk": option('onOk),
        "onCancel": option('onCancel),
        "zIndex": option('zIndex),
        "wrapClassName": option('wrapClassName),
        "width": option('width),
        "visible": option('visible),
        "title": option('title),
        "style": option('style),
        "cancelButtonProps": option('cancelButtonProps),
        "okButtonProps": option('okButtonProps),
        "okType": option('okType),
        "okText": option('okText),
        "maskStyle": option('maskStyle),
        "maskClosable": option('maskClosable),
        "mask": option('mask),
        "getContainer": option('getContainer),
        "footer": option('footer),
        "destroyOnClose": option('destroyOnClose),
        "confirmLoading": option('confirmLoading),
        "closable": option('closable),
        "centered": option('centered),
        "cancelText": option('cancelText),
        "bodyStyle": option('bodyStyle),
        "afterClose": option('afterClose),
        "children": 'children,
      },
    ) =>
    make(
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~onOk=?reactProps##onOk,
      ~onCancel=?reactProps##onCancel,
      ~zIndex=?reactProps##zIndex,
      ~wrapClassName=?reactProps##wrapClassName,
      ~width=?reactProps##width,
      ~visible=?reactProps##visible,
      ~title=?reactProps##title,
      ~style=?reactProps##style,
      ~cancelButtonProps=?reactProps##cancelButtonProps,
      ~okButtonProps=?reactProps##okButtonProps,
      ~okType=?reactProps##okType,
      ~okText=?reactProps##okText,
      ~maskStyle=?reactProps##maskStyle,
      ~maskClosable=?reactProps##maskClosable,
      ~mask=?reactProps##mask,
      ~getContainer=?reactProps##getContainer,
      ~footer=?reactProps##footer,
      ~destroyOnClose=?reactProps##destroyOnClose,
      ~confirmLoading=?reactProps##confirmLoading,
      ~closable=?reactProps##closable,
      ~centered=?reactProps##centered,
      ~cancelText=?reactProps##cancelText,
      ~bodyStyle=?reactProps##bodyStyle,
      ~afterClose=?reactProps##afterClose,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~afterClose: 'afterClose=?,
    ~bodyStyle: 'bodyStyle=?,
    ~cancelText: 'cancelText=?,
    ~centered: 'centered=?,
    ~closable: 'closable=?,
    ~confirmLoading: 'confirmLoading=?,
    ~destroyOnClose: 'destroyOnClose=?,
    ~footer: 'footer=?,
    ~getContainer: 'getContainer=?,
    ~mask: 'mask=?,
    ~maskClosable: 'maskClosable=?,
    ~maskStyle: 'maskStyle=?,
    ~okText: 'okText=?,
    ~okType: 'okType=?,
    ~okButtonProps: 'okButtonProps=?,
    ~cancelButtonProps: 'cancelButtonProps=?,
    ~style: 'style=?,
    ~title: 'title=?,
    ~visible: 'visible=?,
    ~width: 'width=?,
    ~wrapClassName: 'wrapClassName=?,
    ~zIndex: 'zIndex=?,
    ~onCancel: 'onCancel=?,
    ~onOk: 'onOk=?,
    ~id: 'id=?,
    ~className: 'className=?,
    unit
  ) =>
  {
    .
    "className": option('className),
    "id": option('id),
    "onOk": option('onOk),
    "onCancel": option('onCancel),
    "zIndex": option('zIndex),
    "wrapClassName": option('wrapClassName),
    "width": option('width),
    "visible": option('visible),
    "title": option('title),
    "style": option('style),
    "cancelButtonProps": option('cancelButtonProps),
    "okButtonProps": option('okButtonProps),
    "okType": option('okType),
    "okText": option('okText),
    "maskStyle": option('maskStyle),
    "maskClosable": option('maskClosable),
    "mask": option('mask),
    "getContainer": option('getContainer),
    "footer": option('footer),
    "destroyOnClose": option('destroyOnClose),
    "confirmLoading": option('confirmLoading),
    "closable": option('closable),
    "centered": option('centered),
    "cancelText": option('cancelText),
    "bodyStyle": option('bodyStyle),
    "afterClose": option('afterClose),
    "children": 'children,
  } =
  "";

/*
 afterClose	Specify a function that will be called when modal is closed completely.	function	-
 bodyStyle	Body style for modal body element. Such as height, padding etc.	object	{}
 cancelText	Text of the Cancel button	string	Cancel
 centered	Centered Modal	Boolean	false
 closable	Whether a close (x) button is visible on top right of the modal dialog or not	boolean	true
 confirmLoading	Whether to apply loading visual effect for OK button or not	boolean	false
 destroyOnClose	Whether to unmount child compenents on onClose	boolean	false
 footer	Footer content, set as footer={null} when you don't need default buttons	string|ReactNode	OK and Cancel buttons
 getContainer	Return the mount node for Modal	(instance): HTMLElement	() => document.body
 mask	Whether show mask or not.	Boolean	true
 maskClosable	Whether to close the modal dialog when the mask (area outside the modal) is clicked	boolean	true
 maskStyle	Style for modal's mask element.	object	{}
 okText	Text of the OK button	string	OK
 okType	Button type of the OK button	string	primary
 okButtonProps	The ok button props	ButtonProps	-
 cancelButtonProps	The cancel button props	ButtonProps	-
 style	Style of floating layer, typically used at least for adjusting the position.	object	-
 title	The modal dialog's title	string|ReactNode	-
 visible	Whether the modal dialog is visible or not	boolean	false
 width	Width of the modal dialog	string|number	520
 wrapClassName	The class name of the container of the modal dialog	string	-
 zIndex	The z-index of the Modal	Number	1000
 onCancel	Specify a function that will be called when a user clicks mask, close button on top right or Cancel button	function(e)	-
 onOk	Specify a function that will be called when a user clicks the OK button	function(e)	-

    */
