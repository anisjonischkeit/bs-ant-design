[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/skeleton";

[%bs.raw {|require("antd/lib/skeleton/style")|}];

[@bs.deriving abstract]
type avatarProps = {
  .
  "size": int,
  "shape": string,
};

[@bs.deriving abstract]
type titleProps = {. "width": int};

[@bs.deriving abstract]
type paragraphProps = {
  .
  "rows": int,
  "width": int,
};

[@bs.obj]
external makeProps:
  (
    ~active: bool=?,
    ~avatar: bool=?,
    ~loading: bool=?,
    ~paragraph: paragraphProps=?,
    ~title: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~active=?,
      ~avatar=?,
      ~loading=?,
      ~paragraph=?,
      ~title=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~active?,
        ~avatar?,
        ~loading?,
        ~paragraph?,
        ~title?,
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
        "title": option('title),
        "paragraph": option('paragraph),
        "loading": option('loading),
        "avatar": option('avatar),
        "active": option('active),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~title=?reactProps##title,
      ~paragraph=?reactProps##paragraph,
      ~loading=?reactProps##loading,
      ~avatar=?reactProps##avatar,
      ~active=?reactProps##active,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~active: 'active=?,
    ~avatar: 'avatar=?,
    ~loading: 'loading=?,
    ~paragraph: 'paragraph=?,
    ~title: 'title=?,
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
    "title": option('title),
    "paragraph": option('paragraph),
    "loading": option('loading),
    "avatar": option('avatar),
    "active": option('active),
    "children": 'children,
  } =
  "";

/*
 size	Set the size of avatar	Enum{ 'large', 'small', 'default' }	-
 shape	Set the shape of avatar	Enum{ 'circle', 'square' }	-
 */

/*
 width	Set the width of title	number | string
 */

/*
 PARAGRAPH PROPS
 rows	Set the row count of paragraph	number	-
 width	Set the width of paragraph. When width is an Array, it can set the width of each row. Otherwise only set the last row width	number | string | Array<number | string>	-
 */

/*
 active	Show animation effect	boolean	false
 avatar	Show avatar placeholder	boolean | SkeletonAvatarProps	false
 loading	Display the skeleton when true	boolean	-
 paragraph	Show paragraph placeholder	boolean | SkeletonParagraphProps	true
 title	Show title placeholder	boolean | SkeletonTitleProps	true
 */
