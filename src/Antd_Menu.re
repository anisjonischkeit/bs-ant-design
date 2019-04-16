[@bs.module] external menu: ReasonReact.reactClass = "antd/lib/menu";

[%bs.raw {|require("antd/lib/menu/style")|}];

[@bs.deriving jsConverter]
type theme = [ | [@bs.as "light"] `Light | [@bs.as "dark"] `Dark];

[@bs.deriving jsConverter]
type mode = [
  | [@bs.as "horizontal"] `Horizontal
  | [@bs.as "vertical"] `Vertical
  | [@bs.as "vertical-left"] `VerticalLeft
  | [@bs.as "vertical-right"] `VerticalRight
  | [@bs.as "inline"] `Inline
];

type clickParams = {
  .
  "key": string,
  "path": array(string),
  "domEvent": ReactEvent.Mouse.t,
};

[@bs.obj]
external makeProps:
  (
    ~id: string=?,
    ~theme: string=?,
    ~mode: string=?,
    ~selectable: bool=?,
    ~selectedKeys: array(string)=?,
    ~defaultSelectedKeys: array(string)=?,
    ~openKeys: array(string)=?,
    ~defaultOpenKeys: array(string)=?,
    ~onOpenChange: array(string) => unit=?,
    ~onClick: clickParams=?,
    ~onSelect: clickParams => unit=?,
    ~onDeselect: clickParams => unit=?,
    ~style: ReactDOMRe.Style.t=?,
    ~openTransitionName: string=?,
    ~openAnimation: string=?,
    ~className: string=?,
    ~prefixCls: string=?,
    ~multiple: bool=?,
    ~inlineIndent: int=?,
    ~inlineCollapsed: bool=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~theme=?,
      ~mode=?,
      ~selectable=?,
      ~selectedKeys=?,
      ~defaultSelectedKeys=?,
      ~openKeys=?,
      ~defaultOpenKeys=?,
      ~onOpenChange=?,
      ~onSelect=?,
      ~onDeselect=?,
      ~onClick=?,
      ~openTransitionName=?,
      ~openAnimation=?,
      ~className=?,
      ~prefixCls=?,
      ~multiple=?,
      ~inlineIndent=?,
      ~inlineCollapsed=?,
      ~id=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=menu,
    ~props=
      makeProps(
        ~theme=?Js.Option.map((. b) => themeToJs(b), theme),
        ~mode=?Js.Option.map((. b) => modeToJs(b), mode),
        ~selectable?,
        ~selectedKeys=?
          Js.Option.map((. b) => Array.of_list(b), selectedKeys),
        ~defaultSelectedKeys=?
          Js.Option.map((. b) => Array.of_list(b), defaultSelectedKeys),
        ~openKeys=?Js.Option.map((. b) => Array.of_list(b), openKeys),
        ~defaultOpenKeys=?
          Js.Option.map((. b) => Array.of_list(b), defaultOpenKeys),
        ~onOpenChange?,
        ~onSelect?,
        ~onDeselect?,
        ~onClick?,
        ~openTransitionName?,
        ~openAnimation?,
        ~prefixCls?,
        ~multiple?,
        ~inlineIndent?,
        ~inlineCollapsed?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module Item = {
  [@bs.module "antd/lib/menu"] external item: ReasonReact.reactClass = "Item";
  [@bs.obj]
  external makeProps:
    (
      ~key: string=?,
      ~disabled: bool=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make = (~disabled=?, ~key_=?, ~id=?, ~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=item,
      ~props=
        makeProps(~key=?key_, ~disabled?, ~id?, ~className?, ~style?, ()),
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
          "key_": option('key_),
          "disabled": option('disabled),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~id=?reactProps##id,
        ~key_=?reactProps##key_,
        ~disabled=?reactProps##disabled,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~disabled: 'disabled=?,
      ~key_: 'key_=?,
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
      "key_": option('key_),
      "disabled": option('disabled),
      "children": 'children,
    } =
    "";
};

module SubMenu = {
  [@bs.module "antd/lib/menu"]
  external subMenu: ReasonReact.reactClass = "SubMenu";
  [@bs.obj]
  external makeProps:
    (
      ~disabled: bool=?,
      ~key: string=?,
      ~title: ReasonReact.reactElement=?,
      ~onTitleClick: ReactEvent.Mouse.t=?,
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
        ~key_=?,
        ~title=?,
        ~onTitleClick=?,
        ~id=?,
        ~className=?,
        ~style=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=subMenu,
      ~props=
        makeProps(
          ~disabled?,
          ~key=?key_,
          ~title?,
          ~onTitleClick?,
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
          "onTitleClick": option('onTitleClick),
          "title": option('title),
          "key_": option('key_),
          "disabled": option('disabled),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~id=?reactProps##id,
        ~onTitleClick=?reactProps##onTitleClick,
        ~title=?reactProps##title,
        ~key_=?reactProps##key_,
        ~disabled=?reactProps##disabled,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~disabled: 'disabled=?,
      ~key_: 'key_=?,
      ~title: 'title=?,
      ~onTitleClick: 'onTitleClick=?,
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
      "onTitleClick": option('onTitleClick),
      "title": option('title),
      "key_": option('key_),
      "disabled": option('disabled),
      "children": 'children,
    } =
    "";
};

module ItemGroup = {
  [@bs.module "antd/lib/menu"]
  external itemGroup: ReasonReact.reactClass = "ItemGroup";
  [@bs.obj]
  external makeProps:
    (
      ~title: ReasonReact.reactElement=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make = (~id=?, ~className=?, ~style=?, ~title=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=itemGroup,
      ~props=makeProps(~title?, ~id?, ~className?, ~style?, ()),
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
          "title": option('title),
          "style": option('style),
          "className": option('className),
          "id": option('id),
          "children": 'children,
        },
      ) =>
      make(
        ~title=?reactProps##title,
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~id=?reactProps##id,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~id: 'id=?,
      ~className: 'className=?,
      ~style: 'style=?,
      ~title: 'title=?,
      unit
    ) =>
    {
      .
      "title": option('title),
      "style": option('style),
      "className": option('className),
      "id": option('id),
      "children": 'children,
    } =
    "";
};

module Divider = {
  [@bs.module "antd/lib/menu"]
  external divider: ReasonReact.reactClass = "Divider";
  [@bs.obj]
  external makeProps:
    (
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make = (~id=?, ~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=divider,
      ~props=makeProps(~id?, ~className?, ~style?, ()),
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
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~id=?reactProps##id,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
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
        "id": option('id),
        "inlineCollapsed": option('inlineCollapsed),
        "inlineIndent": option('inlineIndent),
        "multiple": option('multiple),
        "prefixCls": option('prefixCls),
        "className": option('className),
        "openAnimation": option('openAnimation),
        "openTransitionName": option('openTransitionName),
        "onClick": option('onClick),
        "onDeselect": option('onDeselect),
        "onSelect": option('onSelect),
        "onOpenChange": option('onOpenChange),
        "defaultOpenKeys": option('defaultOpenKeys),
        "openKeys": option('openKeys),
        "defaultSelectedKeys": option('defaultSelectedKeys),
        "selectedKeys": option('selectedKeys),
        "selectable": option('selectable),
        "mode": option('mode),
        "theme": option('theme),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~id=?reactProps##id,
      ~inlineCollapsed=?reactProps##inlineCollapsed,
      ~inlineIndent=?reactProps##inlineIndent,
      ~multiple=?reactProps##multiple,
      ~prefixCls=?reactProps##prefixCls,
      ~className=?reactProps##className,
      ~openAnimation=?reactProps##openAnimation,
      ~openTransitionName=?reactProps##openTransitionName,
      ~onClick=?reactProps##onClick,
      ~onDeselect=?reactProps##onDeselect,
      ~onSelect=?reactProps##onSelect,
      ~onOpenChange=?reactProps##onOpenChange,
      ~defaultOpenKeys=?reactProps##defaultOpenKeys,
      ~openKeys=?reactProps##openKeys,
      ~defaultSelectedKeys=?reactProps##defaultSelectedKeys,
      ~selectedKeys=?reactProps##selectedKeys,
      ~selectable=?reactProps##selectable,
      ~mode=?reactProps##mode,
      ~theme=?reactProps##theme,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~theme: 'theme=?,
    ~mode: 'mode=?,
    ~selectable: 'selectable=?,
    ~selectedKeys: 'selectedKeys=?,
    ~defaultSelectedKeys: 'defaultSelectedKeys=?,
    ~openKeys: 'openKeys=?,
    ~defaultOpenKeys: 'defaultOpenKeys=?,
    ~onOpenChange: 'onOpenChange=?,
    ~onSelect: 'onSelect=?,
    ~onDeselect: 'onDeselect=?,
    ~onClick: 'onClick=?,
    ~openTransitionName: 'openTransitionName=?,
    ~openAnimation: 'openAnimation=?,
    ~className: 'className=?,
    ~prefixCls: 'prefixCls=?,
    ~multiple: 'multiple=?,
    ~inlineIndent: 'inlineIndent=?,
    ~inlineCollapsed: 'inlineCollapsed=?,
    ~id: 'id=?,
    ~style: 'style=?,
    unit
  ) =>
  {
    .
    "style": option('style),
    "id": option('id),
    "inlineCollapsed": option('inlineCollapsed),
    "inlineIndent": option('inlineIndent),
    "multiple": option('multiple),
    "prefixCls": option('prefixCls),
    "className": option('className),
    "openAnimation": option('openAnimation),
    "openTransitionName": option('openTransitionName),
    "onClick": option('onClick),
    "onDeselect": option('onDeselect),
    "onSelect": option('onSelect),
    "onOpenChange": option('onOpenChange),
    "defaultOpenKeys": option('defaultOpenKeys),
    "openKeys": option('openKeys),
    "defaultSelectedKeys": option('defaultSelectedKeys),
    "selectedKeys": option('selectedKeys),
    "selectable": option('selectable),
    "mode": option('mode),
    "theme": option('theme),
    "children": 'children,
  } =
  "";
