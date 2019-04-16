[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/list";
[%bs.raw {|require("antd/lib/list/style")|}];

[@bs.deriving jsConverter]
type position = [ | `top | `bottom | `both];

type pagination = {. "position": position};

type grid = {
  .
  "column": int,
  "gutter": int,
  "size": string,
  "xs": int,
  "sm": int,
  "md": int,
  "lg": int,
  "xl": int,
  "xxl": int,
};

[@bs.obj]
external makeProps:
  (
    ~dataSource: array(ReasonReact.reactElement)=?,
    ~renderItem: ReasonReact.reactElement => ReasonReact.reactElement=?,
    ~bordered: bool=?,
    ~footer: ReasonReact.reactElement=?,
    ~grid: grid=?,
    ~header: ReasonReact.reactElement=?,
    ~itemLayout: string=?,
    ~loading: ReasonReact.reactElement=?,
    ~loadMore: ReasonReact.reactElement=?,
    ~locale: bool=?,
    ~pagination: pagination=?,
    ~split: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~dataSource=?,
      ~renderItem=?,
      ~bordered=?,
      ~footer=?,
      ~grid=?,
      ~header=?,
      ~itemLayout=?,
      ~loading=?,
      ~loadMore=?,
      ~locale=?,
      ~pagination=?,
      ~split=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~dataSource=?Js.Option.map((. b) => Array.of_list(b), dataSource),
        ~renderItem?,
        ~bordered?,
        ~footer?,
        ~grid?,
        ~header?,
        ~itemLayout?,
        ~loading?,
        ~loadMore?,
        ~locale?,
        ~pagination?,
        ~split?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module Item = {
  [@bs.module "antd/lib/list"]
  external reactClass: ReasonReact.reactClass = "Item";
  [@bs.obj]
  external makeProps:
    (
      ~actions: array(ReasonReact.reactElement)=?,
      ~extra: ReasonReact.reactElement=?,
      unit
    ) =>
    _ =
    "";
  let make = (~actions=?, ~extra=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~actions?, ~extra?, ()),
      children,
    );

  module Meta = {
    [@bs.module "antd/lib/list"]
    external reactClass: ReasonReact.reactClass = "Meta";
    [@bs.obj]
    external makeProps:
      (
        ~avatar: ReasonReact.reactElement=?,
        ~description: ReasonReact.reactElement=?,
        ~title: ReasonReact.reactElement=?,
        ~className: string=?,
        ~style: ReactDOMRe.style=?,
        unit
      ) =>
      _ =
      "";
    let make =
        (
          ~avatar=?,
          ~description=?,
          ~title=?,
          ~className=?,
          ~style=?,
          children,
        ) =>
      ReasonReact.wrapJsForReason(
        ~reactClass,
        ~props=
          makeProps(
            ~avatar?,
            ~description?,
            ~title?,
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
        ~component=
          ReasonReact.statelessComponent("TemporaryRefactorComponent"),
        (
          reactProps: {
            .
            "style": option('style),
            "className": option('className),
            "title": option('title),
            "description": option('description),
            "avatar": option('avatar),
            "children": 'children,
          },
        ) =>
        make(
          ~style=?reactProps##style,
          ~className=?reactProps##className,
          ~title=?reactProps##title,
          ~description=?reactProps##description,
          ~avatar=?reactProps##avatar,
          reactProps##children,
        )
      );
    [@bs.obj]
    external makeProps:
      (
        ~children: 'children,
        ~avatar: 'avatar=?,
        ~description: 'description=?,
        ~title: 'title=?,
        ~className: 'className=?,
        ~style: 'style=?,
        unit
      ) =>
      {
        .
        "style": option('style),
        "className": option('className),
        "title": option('title),
        "description": option('description),
        "avatar": option('avatar),
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
          "extra": option('extra),
          "actions": option('actions),
          "children": 'children,
        },
      ) =>
      make(
        ~extra=?reactProps##extra,
        ~actions=?reactProps##actions,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (~children: 'children, ~actions: 'actions=?, ~extra: 'extra=?, unit) =>
    {
      .
      "extra": option('extra),
      "actions": option('actions),
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
        "split": option('split),
        "pagination": option('pagination),
        "locale": option('locale),
        "loadMore": option('loadMore),
        "loading": option('loading),
        "itemLayout": option('itemLayout),
        "header": option('header),
        "grid": option('grid),
        "footer": option('footer),
        "bordered": option('bordered),
        "renderItem": option('renderItem),
        "dataSource": option('dataSource),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~split=?reactProps##split,
      ~pagination=?reactProps##pagination,
      ~locale=?reactProps##locale,
      ~loadMore=?reactProps##loadMore,
      ~loading=?reactProps##loading,
      ~itemLayout=?reactProps##itemLayout,
      ~header=?reactProps##header,
      ~grid=?reactProps##grid,
      ~footer=?reactProps##footer,
      ~bordered=?reactProps##bordered,
      ~renderItem=?reactProps##renderItem,
      ~dataSource=?reactProps##dataSource,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~dataSource: 'dataSource=?,
    ~renderItem: 'renderItem=?,
    ~bordered: 'bordered=?,
    ~footer: 'footer=?,
    ~grid: 'grid=?,
    ~header: 'header=?,
    ~itemLayout: 'itemLayout=?,
    ~loading: 'loading=?,
    ~loadMore: 'loadMore=?,
    ~locale: 'locale=?,
    ~pagination: 'pagination=?,
    ~split: 'split=?,
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
    "split": option('split),
    "pagination": option('pagination),
    "locale": option('locale),
    "loadMore": option('loadMore),
    "loading": option('loading),
    "itemLayout": option('itemLayout),
    "header": option('header),
    "grid": option('grid),
    "footer": option('footer),
    "bordered": option('bordered),
    "renderItem": option('renderItem),
    "dataSource": option('dataSource),
    "children": 'children,
  } =
  "";

/*
 column	column of grid	number	-
 gutter	spacing between grid	number	0
 size	Size of list	default | middle | small	default
 xs	<576px column of grid	number	-
 sm	?576px column of grid	number	-
 md	?768px column of grid	number	-
 lg	?992px column of grid	number	-
 xl	?1200px column of grid	number	-
 xxl	?1600px column of grid	number	-
 */

/*
 bordered	Toggles rendering of the border around the list	boolean	false
 footer	List footer renderer	string|ReactNode	-
 grid	The grid type of list. You can set grid to something like {gutter: 16, column: 4}	object	-
 header	List header renderer	string|ReactNode	-
 itemLayout	The layout of list, default is horizontal, If a vertical list is desired, set the itemLayout property to vertical	string	-
 loading	Shows a loading indicator while the contents of the list are being fetched	boolean|object (more)	false
 loadMore	Shows a load more content	string|ReactNode	-
 locale	i18n text including empty text	object	emptyText: 'No Data'
 pagination	Pagination config, hide it by setting it to false	boolean | object	false
 split	Toggles rendering of the split under the list item	boolean	true
 */

/*
 actions	The actions content of list item. If itemLayout is vertical, shows the content on bottom, otherwise shows content on the far right.	Array	-
 extra	The extra content of list item. If itemLayout is vertical, shows the content on right, otherwise shows content on the far right.	string|ReactNode	-

 */

/*
 avatar	The avatar of list item	ReactNode	-
 description	The description of list item	string|ReactNode	-
 title	The title of list item	string|ReactNode	-
   */
