[@bs.module] external collapse: ReasonReact.reactClass = "antd/lib/collapse";

[@bs.obj]
external makeProps:
  (
    ~accordion: bool=?,
    ~activeKey: array(string)=?,
    ~bordered: bool=?,
    ~defaultActiveKey: array(string)=?,
    ~onChange: string => unit=?,
    ~destroyInactivePanel: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~accordion=?,
      ~activeKey=?,
      ~bordered=?,
      ~defaultActiveKey=?,
      ~onChange=?,
      ~destroyInactivePanel=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=collapse,
    ~props=
      makeProps(
        ~accordion?,
        ~activeKey=?Js.Option.map((. b) => Array.of_list(b), activeKey),
        ~bordered?,
        ~defaultActiveKey=?
          Js.Option.map((. b) => Array.of_list(b), defaultActiveKey),
        ~onChange?,
        ~destroyInactivePanel?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module Panel = {
  [@bs.module "antd/lib/collapse"]
  external panel: ReasonReact.reactClass = "Panel";
  [@bs.obj]
  external makeProps:
    (
      ~disabled: bool=?,
      ~forceRender: bool=?,
      ~header: string=?,
      ~key: string=?,
      ~showArrow: bool=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~disabled=?,
        ~forceRender=?,
        ~header=?,
        ~key_=?,
        ~showArrow=?,
        ~id=?,
        ~className=?,
        ~style=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=panel,
      ~props=
        makeProps(
          ~disabled?,
          ~forceRender?,
          ~header?,
          ~key=?key_,
          ~showArrow?,
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
          "showArrow": option('showArrow),
          "key_": option('key_),
          "header": option('header),
          "forceRender": option('forceRender),
          "disabled": option('disabled),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~id=?reactProps##id,
        ~showArrow=?reactProps##showArrow,
        ~key_=?reactProps##key_,
        ~header=?reactProps##header,
        ~forceRender=?reactProps##forceRender,
        ~disabled=?reactProps##disabled,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~disabled: 'disabled=?,
      ~forceRender: 'forceRender=?,
      ~header: 'header=?,
      ~key_: 'key_=?,
      ~showArrow: 'showArrow=?,
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
      "showArrow": option('showArrow),
      "key_": option('key_),
      "header": option('header),
      "forceRender": option('forceRender),
      "disabled": option('disabled),
      "children": 'children,
    } =
    "";
};
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
        "destroyInactivePanel": option('destroyInactivePanel),
        "onChange": option('onChange),
        "defaultActiveKey": option('defaultActiveKey),
        "bordered": option('bordered),
        "activeKey": option('activeKey),
        "accordion": option('accordion),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~destroyInactivePanel=?reactProps##destroyInactivePanel,
      ~onChange=?reactProps##onChange,
      ~defaultActiveKey=?reactProps##defaultActiveKey,
      ~bordered=?reactProps##bordered,
      ~activeKey=?reactProps##activeKey,
      ~accordion=?reactProps##accordion,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~accordion: 'accordion=?,
    ~activeKey: 'activeKey=?,
    ~bordered: 'bordered=?,
    ~defaultActiveKey: 'defaultActiveKey=?,
    ~onChange: 'onChange=?,
    ~destroyInactivePanel: 'destroyInactivePanel=?,
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
    "destroyInactivePanel": option('destroyInactivePanel),
    "onChange": option('onChange),
    "defaultActiveKey": option('defaultActiveKey),
    "bordered": option('bordered),
    "activeKey": option('activeKey),
    "accordion": option('accordion),
    "children": 'children,
  } =
  "";

/*
 accordion	If true, Collapse renders as Accordion	boolean	false
 activeKey	Key of the active panel	string[]|string	No default value. In accordion mode, it's the key of the first panel.
 bordered	Toggles rendering of the border around the collapse block	boolean	true
 defaultActiveKey	Key of the initial active panel	string	-
 onChange	Callback function executed when active panel is changed	Function	-
 destroyInactivePanel	Destroy Inactive Panel
 */

/*
 disabled	If true, panel cannot be opened or closed	boolean	false
 forceRender	Forced render of content on panel, instead of lazy rending after clicking on header	boolean	false
 header	Title of the panel	string|ReactNode	-
 key	Unique key identifying the panel from among its siblings	string	-
 showArrow	If false, panel will not show arrow icon	boolean	true
  */
