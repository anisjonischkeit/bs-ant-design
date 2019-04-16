[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/upload";

[%bs.raw {|require("antd/lib/upload/style")|}];

[@bs.deriving jsConverter]
type listType = [ | `text | `picture | [@bs.as "picture-card"] `pictureCard];

[@bs.obj]
external makeProps:
  (
    ~accept: string=?,
    ~action: string,
    ~directory: bool=?,
    ~beforeUpload: string => unit=?,
    ~customRequest: string => unit=?,
    ~disabled: bool=?,
    ~listType: string=?,
    ~multiple: bool=?,
    ~name: string=?,
    ~showUploadList: bool=?,
    ~supportServerRender: bool=?,
    ~withCredentials: bool=?,
    ~onChange: bool=?,
    ~onPreview: bool=?,
    ~onRemove: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~accept=?,
      ~action,
      ~directory=?,
      ~beforeUpload=?,
      ~customRequest=?,
      ~disabled=?,
      ~listType=?,
      ~multiple=?,
      ~name=?,
      ~showUploadList=?,
      ~supportServerRender=?,
      ~withCredentials=?,
      ~onChange=?,
      ~onPreview=?,
      ~onRemove=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~accept?,
        ~action,
        ~directory?,
        ~beforeUpload?,
        ~customRequest?,
        ~disabled?,
        ~listType=?Js.Option.map((. b) => listTypeToJs(b), listType),
        ~multiple?,
        ~name?,
        ~showUploadList?,
        ~supportServerRender?,
        ~withCredentials?,
        ~onChange?,
        ~onPreview?,
        ~onRemove?,
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
        "onRemove": option('onRemove),
        "onPreview": option('onPreview),
        "onChange": option('onChange),
        "withCredentials": option('withCredentials),
        "supportServerRender": option('supportServerRender),
        "showUploadList": option('showUploadList),
        "name": option('name),
        "multiple": option('multiple),
        "listType": option('listType),
        "disabled": option('disabled),
        "customRequest": option('customRequest),
        "beforeUpload": option('beforeUpload),
        "directory": option('directory),
        "action": 'action,
        "accept": option('accept),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~onRemove=?reactProps##onRemove,
      ~onPreview=?reactProps##onPreview,
      ~onChange=?reactProps##onChange,
      ~withCredentials=?reactProps##withCredentials,
      ~supportServerRender=?reactProps##supportServerRender,
      ~showUploadList=?reactProps##showUploadList,
      ~name=?reactProps##name,
      ~multiple=?reactProps##multiple,
      ~listType=?reactProps##listType,
      ~disabled=?reactProps##disabled,
      ~customRequest=?reactProps##customRequest,
      ~beforeUpload=?reactProps##beforeUpload,
      ~directory=?reactProps##directory,
      ~action=reactProps##action,
      ~accept=?reactProps##accept,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~accept: 'accept=?,
    ~action: 'action,
    ~directory: 'directory=?,
    ~beforeUpload: 'beforeUpload=?,
    ~customRequest: 'customRequest=?,
    ~disabled: 'disabled=?,
    ~listType: 'listType=?,
    ~multiple: 'multiple=?,
    ~name: 'name=?,
    ~showUploadList: 'showUploadList=?,
    ~supportServerRender: 'supportServerRender=?,
    ~withCredentials: 'withCredentials=?,
    ~onChange: 'onChange=?,
    ~onPreview: 'onPreview=?,
    ~onRemove: 'onRemove=?,
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
    "onRemove": option('onRemove),
    "onPreview": option('onPreview),
    "onChange": option('onChange),
    "withCredentials": option('withCredentials),
    "supportServerRender": option('supportServerRender),
    "showUploadList": option('showUploadList),
    "name": option('name),
    "multiple": option('multiple),
    "listType": option('listType),
    "disabled": option('disabled),
    "customRequest": option('customRequest),
    "beforeUpload": option('beforeUpload),
    "directory": option('directory),
    "action": 'action,
    "accept": option('accept),
    "children": 'children,
  } =
  "";

/*
 accept	File types that can be accepted. See input accept Attribute	string	-
 action	Required. Uploading URL	string|(file) => Promise	-
 directory	support upload whole directory (caniuse)	boolean	false
 beforeUpload	Hook function which will be executed before uploading. Uploading will be stopped with false or a rejected Promise returned. Warning?this function is not supported in IE9?	(file, fileList) => boolean | Promise	-
 customRequest	override for the default xhr behavior allowing for additional customization and ability to implement your own XMLHttpRequest	Function	-
 data	Uploading params or function which can return uploading params.	object|function(file)	-
 defaultFileList	Default list of files that have been uploaded.	object[]	-
 disabled	disable upload button	boolean	false
 fileList	List of files that have been uploaded (controlled). Here is a common issue #2423 when using it	object[]	-
 headers	Set request headers, valid above IE10.	object	-
 listType	Built-in stylesheets, support for three types: text, picture or picture-card	string	'text'
 multiple	Whether to support selected multiple file. IE10+ supported. You can select multiple files with CTRL holding down while multiple is set to be true	boolean	false
 name	The name of uploading file	string	'file'
 showUploadList	Whether to show default upload list, could be an object to specify showPreviewIcon and showRemoveIcon individually	Boolean or { showPreviewIcon?: boolean, showRemoveIcon?: boolean }	true
 supportServerRender	Need to be turned on while the server side is rendering.	boolean	false
 withCredentials	ajax upload with cookie sent	boolean	false
 onChange	A callback function, can be executed when uploading state is changing. See onChange	Function	-
 onPreview	A callback function, will be executed when file link or preview icon is clicked.	Function(file)	-
 onRemove	A callback function, will be executed when removing file button is clicked, remove event will be prevented when return value is false or a Promise which resolve(false) or reject.	Function(file): boolean | Promise	-
 */
