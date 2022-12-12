﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Camera>
struct Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<CW.Common.CwInputManager/Finger>
struct Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>
struct Action_2_tD344092D96CD0E43070CBCDAFD460F86AC996BCC;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_tC56A812DB62E3B254ED968BE9E6EE9AD8151B7BB;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<CW.Common.CwRoot>
struct List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4;
// System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock>
struct List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>
struct List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86;
// System.Collections.Generic.List`1<CW.Common.CwShaderBundle/ShaderVariant>
struct List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Stack`1<UnityEngine.RenderTexture>
struct Stack_1_t469243EEB74368B7691A7AA38163A13188939070;
// System.Collections.Generic.Stack`1<CW.Common.CwInputManager/Finger>
struct Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E;
// System.Collections.Generic.Stack`1<UnityEngine.Random/State>
struct Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// CW.Common.CwDemoButtonBuilder[]
struct CwDemoButtonBuilderU5BU5D_t4A70D589EC0841F2D1AF2474AD33E5E2B4989F49;
// CW.Common.CwRoot[]
struct CwRootU5BU5D_tDC5CDD8C7D3B94A2DE748E8FEB374CCD868B5A6B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.MaterialPropertyBlock[]
struct MaterialPropertyBlockU5BU5D_t54E275A44D5D86AA670B971EC2843A832AED93E8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// CW.Common.CwInputManager/Finger[]
struct FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F;
// CW.Common.CwShaderBundle/ShaderVariant[]
struct ShaderVariantU5BU5D_tD0C1DEAF256A2E49BE4EDA5A9FEA0EC16066282C;
// UnityEngine.Random/State[]
struct StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// CW.Common.CwCameraLook
struct CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C;
// CW.Common.CwCameraMove
struct CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36;
// CW.Common.CwCameraPivot
struct CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705;
// CW.Common.CwChild
struct CwChild_tD21FBD08C8B782B50B2EDF73D7C471D2B5CAA33D;
// CW.Common.CwDemo
struct CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F;
// CW.Common.CwDemoButton
struct CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9;
// CW.Common.CwDemoButtonBuilder
struct CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B;
// CW.Common.CwDepthTextureMode
struct CwDepthTextureMode_t62CC937DA3EE0B6FCBC25CCD24396A050F4797B9;
// CW.Common.CwFollow
struct CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5;
// CW.Common.CwGuide
struct CwGuide_t51C32B2C30A0D720E8721FD8931FBADB48DA7507;
// CW.Common.CwInputManager
struct CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200;
// CW.Common.CwLightIntensity
struct CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C;
// CW.Common.CwRoot
struct CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D;
// CW.Common.CwRotate
struct CwRotate_t34CF440B91575AACCDFD750683F5847253538181;
// CW.Common.CwSeedAttribute
struct CwSeedAttribute_t9F800A51472978B4BF286BE5131410B193522713;
// CW.Common.CwShaderBundle
struct CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// CW.Common.CwHelper/<>c
struct U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902;
// CW.Common.CwInputManager/Finger
struct Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE;
// CW.Common.CwInputManager/Link
struct Link_tC07AC9804DFBD1138DD4915F223C14F7403F8EE3;
// CW.Common.CwShaderBundle/ShaderVariant
struct ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHasChildren_t7B8BA73FFAC4F9D5CB61F49F5D204D15FE572A5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t469243EEB74368B7691A7AA38163A13188939070_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral18CB9DCCBE4C6D07F0E9FEB150B09A9AE69921E7;
IL2CPP_EXTERN_C String_t* _stringLiteral2D4198942C13D7ECBA4C8E0C0BFB5C51204A710D;
IL2CPP_EXTERN_C String_t* _stringLiteral4E911FAC2FACF1A59F259BF1BA9A057B95AFE630;
IL2CPP_EXTERN_C String_t* _stringLiteral51CBDF1AF6B79F813F7DD92FE05A6534E5F9A75F;
IL2CPP_EXTERN_C String_t* _stringLiteral60D7303A8BF0AE95E631B05826EE533A93F3D62E;
IL2CPP_EXTERN_C String_t* _stringLiteral64056F676276236BDF448145DA92C1E5FD112B5E;
IL2CPP_EXTERN_C String_t* _stringLiteral75DFD766D995E2CBB4A75B2EC72629FE2B24A238;
IL2CPP_EXTERN_C String_t* _stringLiteralC1D19615EC4094F2C6E7D12448A74C558353F82C;
IL2CPP_EXTERN_C String_t* _stringLiteralC2C868D2A91533BB109F1C341D64973B6E35E98A;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE8F6847C314C91BB3146DCB16C31E2EF0920BA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF11819FFC8E11495D515B2F62E0220A9519F4064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B_m0D91A4B384E3062E3EB6BBA8A618320443183208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m84A5DAB222193F19C8E620E93C06AC279D9FA17B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6AF512E04EA0E019FE56D468FEAF4CABBBB397A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4FD523554758BD1E360641A9A48C7EE5641A7B29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_m9100DAE1F99BB2ACAF476AE8CA0D52412DA165C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_mCAC6CC94A7CFA5CF3BFA775F6E000DEDCD46DF1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9_mE338E4A2DE6920762B9DB637E08B93A240A2134F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m34A07B5F2BA0E1FC616DB5D30698A80A8162C541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m35730E7FE7953C0E294C503E0020D8A6227072DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFFA36DD93284ADED6769B0CEAB6312034A34E30C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5D88EA8AA491CFF029747A32EF3F1793EE7B135B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8866013E95EF79D191587164D59BB8F7D6979AF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFAA1DC20EE261247AEEF3B77E2BE2672DFE87290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mF7D7BDEE46F308F1D8BC6CEF07343CDD841FFE4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mBC15F699CED7C1BB5F3B3EF4A154E280EB081DD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m066F767F4F8D483FA602C86BB904F1DB1E429868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7DDB158E18477D8590513E5FDFF2124447EF0088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8C5A32893A8BADD7A904C56CE8B10DAAAE34C3F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC21FF125DF7502D850E75E21D9C3A2C8F183041F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD1F29CADB45CDC47AE42C4E6A2EF86681F37F9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m65685DB34513A8BD0BCEC7BF3618C468764D6DD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8B6D3CA49A5B2FBFCD9190085DA9D19105AD3940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_m47AD7512D17094FEFA2816091989A48438F41B10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m463049A3D63030CC79C8E01687070A6E12C16C89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m6CF5DFD72EDCAD3E4A16E32BA17F20D2336689CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mB76E5CDBB96C682804DB8CAF62019C27F3117881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m53F9BF01850D237B074FE4EE875746BB35A7D751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mEAD1FC02E5EE989C3C1A1EE85F107B7CCC3D3932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mF72377724F3ACCBA748983793EE35172B54007C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m1DD36665492168AB97F9AF4CC6B7161CD41CB4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m4894E96536A05123AB38699CDB34E96D04D7288F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m69162031460D8A5A90C92036736B044145EC54C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m90D559C4940F65AB3C9FA6342058A5BF979EE4E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__11_0_mCB0B677DFFB2E4CDBCDEED62074E09DF57D20356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__11_1_m0E6B50D0ACA6FB54EBFB1C0C1AA8C081925D8228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__11_2_mFEC634CA8AB11A28ED1E888C197B38AE180DFCCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__11_3_mBEEA09295429CE5332EC18217BA2E481981C8867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CwDemoButtonBuilderU5BU5D_t4A70D589EC0841F2D1AF2474AD33E5E2B4989F49;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t45A8B6DD0D0D4A5630E4C4DE2B0598751FABA925 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<CW.Common.CwRoot>
struct List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CwRootU5BU5D_tDC5CDD8C7D3B94A2DE748E8FEB374CCD868B5A6B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3, ____items_1)); }
	inline CwRootU5BU5D_tDC5CDD8C7D3B94A2DE748E8FEB374CCD868B5A6B* get__items_1() const { return ____items_1; }
	inline CwRootU5BU5D_tDC5CDD8C7D3B94A2DE748E8FEB374CCD868B5A6B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CwRootU5BU5D_tDC5CDD8C7D3B94A2DE748E8FEB374CCD868B5A6B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CwRootU5BU5D_tDC5CDD8C7D3B94A2DE748E8FEB374CCD868B5A6B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3_StaticFields, ____emptyArray_5)); }
	inline CwRootU5BU5D_tDC5CDD8C7D3B94A2DE748E8FEB374CCD868B5A6B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CwRootU5BU5D_tDC5CDD8C7D3B94A2DE748E8FEB374CCD868B5A6B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CwRootU5BU5D_tDC5CDD8C7D3B94A2DE748E8FEB374CCD868B5A6B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____items_1)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock>
struct List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialPropertyBlockU5BU5D_t54E275A44D5D86AA670B971EC2843A832AED93E8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09, ____items_1)); }
	inline MaterialPropertyBlockU5BU5D_t54E275A44D5D86AA670B971EC2843A832AED93E8* get__items_1() const { return ____items_1; }
	inline MaterialPropertyBlockU5BU5D_t54E275A44D5D86AA670B971EC2843A832AED93E8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialPropertyBlockU5BU5D_t54E275A44D5D86AA670B971EC2843A832AED93E8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialPropertyBlockU5BU5D_t54E275A44D5D86AA670B971EC2843A832AED93E8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09_StaticFields, ____emptyArray_5)); }
	inline MaterialPropertyBlockU5BU5D_t54E275A44D5D86AA670B971EC2843A832AED93E8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialPropertyBlockU5BU5D_t54E275A44D5D86AA670B971EC2843A832AED93E8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialPropertyBlockU5BU5D_t54E275A44D5D86AA670B971EC2843A832AED93E8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____items_1)); }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* get__items_1() const { return ____items_1; }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_StaticFields, ____emptyArray_5)); }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>
struct List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86, ____items_1)); }
	inline FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F* get__items_1() const { return ____items_1; }
	inline FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86_StaticFields, ____emptyArray_5)); }
	inline FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<CW.Common.CwShaderBundle/ShaderVariant>
struct List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ShaderVariantU5BU5D_tD0C1DEAF256A2E49BE4EDA5A9FEA0EC16066282C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248, ____items_1)); }
	inline ShaderVariantU5BU5D_tD0C1DEAF256A2E49BE4EDA5A9FEA0EC16066282C* get__items_1() const { return ____items_1; }
	inline ShaderVariantU5BU5D_tD0C1DEAF256A2E49BE4EDA5A9FEA0EC16066282C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ShaderVariantU5BU5D_tD0C1DEAF256A2E49BE4EDA5A9FEA0EC16066282C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ShaderVariantU5BU5D_tD0C1DEAF256A2E49BE4EDA5A9FEA0EC16066282C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248_StaticFields, ____emptyArray_5)); }
	inline ShaderVariantU5BU5D_tD0C1DEAF256A2E49BE4EDA5A9FEA0EC16066282C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ShaderVariantU5BU5D_tD0C1DEAF256A2E49BE4EDA5A9FEA0EC16066282C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ShaderVariantU5BU5D_tD0C1DEAF256A2E49BE4EDA5A9FEA0EC16066282C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<UnityEngine.RenderTexture>
struct Stack_1_t469243EEB74368B7691A7AA38163A13188939070  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t469243EEB74368B7691A7AA38163A13188939070, ____array_0)); }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* get__array_0() const { return ____array_0; }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t469243EEB74368B7691A7AA38163A13188939070, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t469243EEB74368B7691A7AA38163A13188939070, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t469243EEB74368B7691A7AA38163A13188939070, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<CW.Common.CwInputManager/Finger>
struct Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E, ____array_0)); }
	inline FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F* get__array_0() const { return ____array_0; }
	inline FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(FingerU5BU5D_t1F19E97C74E481E1FABDFED18DB0DDAD995BBA3F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<UnityEngine.Random/State>
struct Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7, ____array_0)); }
	inline StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* get__array_0() const { return ____array_0; }
	inline StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// CW.Common.CwHelper
struct CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C  : public RuntimeObject
{
public:

public:
};

struct CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<UnityEngine.Random/State> CW.Common.CwHelper::seedStates
	Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * ___seedStates_0;
	// System.Collections.Generic.List`1<UnityEngine.Material> CW.Common.CwHelper::tempMaterials
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___tempMaterials_1;
	// System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock> CW.Common.CwHelper::tempProperties
	List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * ___tempProperties_2;
	// System.Action`1<UnityEngine.Camera> CW.Common.CwHelper::OnCameraPreRender
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___OnCameraPreRender_3;
	// System.Action`1<UnityEngine.Camera> CW.Common.CwHelper::OnCameraPostRender
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___OnCameraPostRender_4;
	// System.Collections.Generic.Stack`1<UnityEngine.RenderTexture> CW.Common.CwHelper::actives
	Stack_1_t469243EEB74368B7691A7AA38163A13188939070 * ___actives_5;
	// System.Int32 CW.Common.CwHelper::uniqueSeed
	int32_t ___uniqueSeed_6;
	// System.Collections.Generic.List`1<UnityEngine.Material> CW.Common.CwHelper::materials
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___materials_7;

public:
	inline static int32_t get_offset_of_seedStates_0() { return static_cast<int32_t>(offsetof(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields, ___seedStates_0)); }
	inline Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * get_seedStates_0() const { return ___seedStates_0; }
	inline Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 ** get_address_of_seedStates_0() { return &___seedStates_0; }
	inline void set_seedStates_0(Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * value)
	{
		___seedStates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seedStates_0), (void*)value);
	}

	inline static int32_t get_offset_of_tempMaterials_1() { return static_cast<int32_t>(offsetof(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields, ___tempMaterials_1)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_tempMaterials_1() const { return ___tempMaterials_1; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_tempMaterials_1() { return &___tempMaterials_1; }
	inline void set_tempMaterials_1(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___tempMaterials_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterials_1), (void*)value);
	}

	inline static int32_t get_offset_of_tempProperties_2() { return static_cast<int32_t>(offsetof(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields, ___tempProperties_2)); }
	inline List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * get_tempProperties_2() const { return ___tempProperties_2; }
	inline List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 ** get_address_of_tempProperties_2() { return &___tempProperties_2; }
	inline void set_tempProperties_2(List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * value)
	{
		___tempProperties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempProperties_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnCameraPreRender_3() { return static_cast<int32_t>(offsetof(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields, ___OnCameraPreRender_3)); }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * get_OnCameraPreRender_3() const { return ___OnCameraPreRender_3; }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B ** get_address_of_OnCameraPreRender_3() { return &___OnCameraPreRender_3; }
	inline void set_OnCameraPreRender_3(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * value)
	{
		___OnCameraPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCameraPreRender_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnCameraPostRender_4() { return static_cast<int32_t>(offsetof(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields, ___OnCameraPostRender_4)); }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * get_OnCameraPostRender_4() const { return ___OnCameraPostRender_4; }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B ** get_address_of_OnCameraPostRender_4() { return &___OnCameraPostRender_4; }
	inline void set_OnCameraPostRender_4(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * value)
	{
		___OnCameraPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCameraPostRender_4), (void*)value);
	}

	inline static int32_t get_offset_of_actives_5() { return static_cast<int32_t>(offsetof(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields, ___actives_5)); }
	inline Stack_1_t469243EEB74368B7691A7AA38163A13188939070 * get_actives_5() const { return ___actives_5; }
	inline Stack_1_t469243EEB74368B7691A7AA38163A13188939070 ** get_address_of_actives_5() { return &___actives_5; }
	inline void set_actives_5(Stack_1_t469243EEB74368B7691A7AA38163A13188939070 * value)
	{
		___actives_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actives_5), (void*)value);
	}

	inline static int32_t get_offset_of_uniqueSeed_6() { return static_cast<int32_t>(offsetof(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields, ___uniqueSeed_6)); }
	inline int32_t get_uniqueSeed_6() const { return ___uniqueSeed_6; }
	inline int32_t* get_address_of_uniqueSeed_6() { return &___uniqueSeed_6; }
	inline void set_uniqueSeed_6(int32_t value)
	{
		___uniqueSeed_6 = value;
	}

	inline static int32_t get_offset_of_materials_7() { return static_cast<int32_t>(offsetof(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields, ___materials_7)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_materials_7() const { return ___materials_7; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_materials_7() { return &___materials_7; }
	inline void set_materials_7(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___materials_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materials_7), (void*)value);
	}
};


// CW.Common.CwInput
struct CwInput_t0020827328DF403D5FD956C55C849EF06B3CC52F  : public RuntimeObject
{
public:

public:
};


// CW.Common.CwShared
struct CwShared_tCAFFBFC8BF5706721962E5045C77F7E557AF367C  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// CW.Common.CwHelper/<>c
struct U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_StaticFields
{
public:
	// CW.Common.CwHelper/<>c CW.Common.CwHelper/<>c::<>9
	U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// CW.Common.CwInputManager/Link
struct Link_tC07AC9804DFBD1138DD4915F223C14F7403F8EE3  : public RuntimeObject
{
public:
	// CW.Common.CwInputManager/Finger CW.Common.CwInputManager/Link::Finger
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___Finger_0;

public:
	inline static int32_t get_offset_of_Finger_0() { return static_cast<int32_t>(offsetof(Link_tC07AC9804DFBD1138DD4915F223C14F7403F8EE3, ___Finger_0)); }
	inline Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * get_Finger_0() const { return ___Finger_0; }
	inline Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE ** get_address_of_Finger_0() { return &___Finger_0; }
	inline void set_Finger_0(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * value)
	{
		___Finger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Finger_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<CW.Common.CwInputManager/Finger>
struct Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE, ___list_0)); }
	inline List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * get_list_0() const { return ___list_0; }
	inline List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE, ___current_3)); }
	inline Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * get_current_3() const { return ___current_3; }
	inline Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<CW.Common.CwShaderBundle/ShaderVariant>
struct Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA, ___list_0)); }
	inline List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * get_list_0() const { return ___list_0; }
	inline List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA, ___current_3)); }
	inline ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB * get_current_3() const { return ___current_3; }
	inline ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 
{
public:
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795, ___m_Id_1)); }
	inline int32_t get_m_Id_1() const { return ___m_Id_1; }
	inline int32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(int32_t value)
	{
		___m_Id_1 = value;
	}
};

struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields, ___none_0)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_none_0() const { return ___none_0; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___none_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Random/State
struct State_t8E62E640CAE29BF61164F51619D1C04936074C15 
{
public:
	// System.Int32 UnityEngine.Random/State::s0
	int32_t ___s0_0;
	// System.Int32 UnityEngine.Random/State::s1
	int32_t ___s1_1;
	// System.Int32 UnityEngine.Random/State::s2
	int32_t ___s2_2;
	// System.Int32 UnityEngine.Random/State::s3
	int32_t ___s3_3;

public:
	inline static int32_t get_offset_of_s0_0() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s0_0)); }
	inline int32_t get_s0_0() const { return ___s0_0; }
	inline int32_t* get_address_of_s0_0() { return &___s0_0; }
	inline void set_s0_0(int32_t value)
	{
		___s0_0 = value;
	}

	inline static int32_t get_offset_of_s1_1() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s1_1)); }
	inline int32_t get_s1_1() const { return ___s1_1; }
	inline int32_t* get_address_of_s1_1() { return &___s1_1; }
	inline void set_s1_1(int32_t value)
	{
		___s1_1 = value;
	}

	inline static int32_t get_offset_of_s2_2() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s2_2)); }
	inline int32_t get_s2_2() const { return ___s2_2; }
	inline int32_t* get_address_of_s2_2() { return &___s2_2; }
	inline void set_s2_2(int32_t value)
	{
		___s2_2 = value;
	}

	inline static int32_t get_offset_of_s3_3() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s3_3)); }
	inline int32_t get_s3_3() const { return ___s3_3; }
	inline int32_t* get_address_of_s3_3() { return &___s3_3; }
	inline void set_s3_3(int32_t value)
	{
		___s3_3 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ColorSpace
struct ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CW.Common.CwSeedAttribute
struct CwSeedAttribute_t9F800A51472978B4BF286BE5131410B193522713  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.DepthTextureMode
struct DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.RenderTextureCreationFlags
struct RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureMemoryless
struct RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D 
{
public:
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;

public:
	inline static int32_t get_offset_of_m_Ptr_1() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D, ___m_Ptr_1)); }
	inline intptr_t get_m_Ptr_1() const { return ___m_Ptr_1; }
	inline intptr_t* get_address_of_m_Ptr_1() { return &___m_Ptr_1; }
	inline void set_m_Ptr_1(intptr_t value)
	{
		___m_Ptr_1 = value;
	}
};

struct ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___kRenderTypeTag_0;

public:
	inline static int32_t get_offset_of_kRenderTypeTag_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D_StaticFields, ___kRenderTypeTag_0)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_kRenderTypeTag_0() const { return ___kRenderTypeTag_0; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_kRenderTypeTag_0() { return &___kRenderTypeTag_0; }
	inline void set_kRenderTypeTag_0(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___kRenderTypeTag_0 = value;
	}
};


// UnityEngine.Rendering.ShadowSamplingMode
struct ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VRTextureUsage
struct VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CW.Common.CwDemoButton/LinkType
struct LinkType_t7A4145503715520E26D6487942732F0D80BF2C6E 
{
public:
	// System.Int32 CW.Common.CwDemoButton/LinkType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LinkType_t7A4145503715520E26D6487942732F0D80BF2C6E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CW.Common.CwDemoButton/ToggleType
struct ToggleType_tB4717CD5A4E1749CF8FCF5AF90D0CF979AEB943F 
{
public:
	// System.Int32 CW.Common.CwDemoButton/ToggleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleType_tB4717CD5A4E1749CF8FCF5AF90D0CF979AEB943F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CW.Common.CwFollow/FollowType
struct FollowType_tA4A4B3475BEBA5900B5485AD6D5E99046823B4FE 
{
public:
	// System.Int32 CW.Common.CwFollow/FollowType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FollowType_tA4A4B3475BEBA5900B5485AD6D5E99046823B4FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CW.Common.CwFollow/UpdateType
struct UpdateType_tF6B699D9E73E210FBAF97975EAD9782B9DD28EB9 
{
public:
	// System.Int32 CW.Common.CwFollow/UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_tF6B699D9E73E210FBAF97975EAD9782B9DD28EB9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CW.Common.CwInputManager/AxisGesture
struct AxisGesture_tEDB5C4A8A1160E7E648C1B569965BDCC74746E8B 
{
public:
	// System.Int32 CW.Common.CwInputManager/AxisGesture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisGesture_tEDB5C4A8A1160E7E648C1B569965BDCC74746E8B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CW.Common.CwInputManager/Finger
struct Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE  : public RuntimeObject
{
public:
	// System.Int32 CW.Common.CwInputManager/Finger::Index
	int32_t ___Index_0;
	// System.Single CW.Common.CwInputManager/Finger::Pressure
	float ___Pressure_1;
	// System.Boolean CW.Common.CwInputManager/Finger::Down
	bool ___Down_2;
	// System.Boolean CW.Common.CwInputManager/Finger::Up
	bool ___Up_3;
	// System.Single CW.Common.CwInputManager/Finger::Age
	float ___Age_4;
	// System.Boolean CW.Common.CwInputManager/Finger::StartedOverGui
	bool ___StartedOverGui_5;
	// UnityEngine.Vector2 CW.Common.CwInputManager/Finger::StartScreenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___StartScreenPosition_6;
	// UnityEngine.Vector2 CW.Common.CwInputManager/Finger::ScreenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___ScreenPosition_7;
	// UnityEngine.Vector2 CW.Common.CwInputManager/Finger::ScreenPositionOld
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___ScreenPositionOld_8;
	// UnityEngine.Vector2 CW.Common.CwInputManager/Finger::ScreenPositionOldOld
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___ScreenPositionOldOld_9;
	// UnityEngine.Vector2 CW.Common.CwInputManager/Finger::ScreenPositionOldOldOld
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___ScreenPositionOldOldOld_10;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE, ___Index_0)); }
	inline int32_t get_Index_0() const { return ___Index_0; }
	inline int32_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int32_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of_Pressure_1() { return static_cast<int32_t>(offsetof(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE, ___Pressure_1)); }
	inline float get_Pressure_1() const { return ___Pressure_1; }
	inline float* get_address_of_Pressure_1() { return &___Pressure_1; }
	inline void set_Pressure_1(float value)
	{
		___Pressure_1 = value;
	}

	inline static int32_t get_offset_of_Down_2() { return static_cast<int32_t>(offsetof(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE, ___Down_2)); }
	inline bool get_Down_2() const { return ___Down_2; }
	inline bool* get_address_of_Down_2() { return &___Down_2; }
	inline void set_Down_2(bool value)
	{
		___Down_2 = value;
	}

	inline static int32_t get_offset_of_Up_3() { return static_cast<int32_t>(offsetof(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE, ___Up_3)); }
	inline bool get_Up_3() const { return ___Up_3; }
	inline bool* get_address_of_Up_3() { return &___Up_3; }
	inline void set_Up_3(bool value)
	{
		___Up_3 = value;
	}

	inline static int32_t get_offset_of_Age_4() { return static_cast<int32_t>(offsetof(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE, ___Age_4)); }
	inline float get_Age_4() const { return ___Age_4; }
	inline float* get_address_of_Age_4() { return &___Age_4; }
	inline void set_Age_4(float value)
	{
		___Age_4 = value;
	}

	inline static int32_t get_offset_of_StartedOverGui_5() { return static_cast<int32_t>(offsetof(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE, ___StartedOverGui_5)); }
	inline bool get_StartedOverGui_5() const { return ___StartedOverGui_5; }
	inline bool* get_address_of_StartedOverGui_5() { return &___StartedOverGui_5; }
	inline void set_StartedOverGui_5(bool value)
	{
		___StartedOverGui_5 = value;
	}

	inline static int32_t get_offset_of_StartScreenPosition_6() { return static_cast<int32_t>(offsetof(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE, ___StartScreenPosition_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_StartScreenPosition_6() const { return ___StartScreenPosition_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_StartScreenPosition_6() { return &___StartScreenPosition_6; }
	inline void set_StartScreenPosition_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___StartScreenPosition_6 = value;
	}

	inline static int32_t get_offset_of_ScreenPosition_7() { return static_cast<int32_t>(offsetof(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE, ___ScreenPosition_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_ScreenPosition_7() const { return ___ScreenPosition_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_ScreenPosition_7() { return &___ScreenPosition_7; }
	inline void set_ScreenPosition_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___ScreenPosition_7 = value;
	}

	inline static int32_t get_offset_of_ScreenPositionOld_8() { return static_cast<int32_t>(offsetof(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE, ___ScreenPositionOld_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_ScreenPositionOld_8() const { return ___ScreenPositionOld_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_ScreenPositionOld_8() { return &___ScreenPositionOld_8; }
	inline void set_ScreenPositionOld_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___ScreenPositionOld_8 = value;
	}

	inline static int32_t get_offset_of_ScreenPositionOldOld_9() { return static_cast<int32_t>(offsetof(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE, ___ScreenPositionOldOld_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_ScreenPositionOldOld_9() const { return ___ScreenPositionOldOld_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_ScreenPositionOldOld_9() { return &___ScreenPositionOldOld_9; }
	inline void set_ScreenPositionOldOld_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___ScreenPositionOldOld_9 = value;
	}

	inline static int32_t get_offset_of_ScreenPositionOldOldOld_10() { return static_cast<int32_t>(offsetof(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE, ___ScreenPositionOldOldOld_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_ScreenPositionOldOldOld_10() const { return ___ScreenPositionOldOldOld_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_ScreenPositionOldOldOld_10() { return &___ScreenPositionOldOldOld_10; }
	inline void set_ScreenPositionOldOldOld_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___ScreenPositionOldOldOld_10 = value;
	}
};


// CW.Common.CwShaderBundle/Pipeline
struct Pipeline_tB22F3059F2140BDED42BF86E325F4C78EBCCF2BD 
{
public:
	// System.Int32 CW.Common.CwShaderBundle/Pipeline::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pipeline_tB22F3059F2140BDED42BF86E325F4C78EBCCF2BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_9;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_10;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_11;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_12;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmipCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmipCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CmipCountU3Ek__BackingField_4() const { return ___U3CmipCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmipCountU3Ek__BackingField_4() { return &___U3CmipCountU3Ek__BackingField_4; }
	inline void set_U3CmipCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CmipCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__graphicsFormat_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____graphicsFormat_5)); }
	inline int32_t get__graphicsFormat_5() const { return ____graphicsFormat_5; }
	inline int32_t* get_address_of__graphicsFormat_5() { return &____graphicsFormat_5; }
	inline void set__graphicsFormat_5(int32_t value)
	{
		____graphicsFormat_5 = value;
	}

	inline static int32_t get_offset_of_U3CstencilFormatU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CstencilFormatU3Ek__BackingField_6)); }
	inline int32_t get_U3CstencilFormatU3Ek__BackingField_6() const { return ___U3CstencilFormatU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CstencilFormatU3Ek__BackingField_6() { return &___U3CstencilFormatU3Ek__BackingField_6; }
	inline void set_U3CstencilFormatU3Ek__BackingField_6(int32_t value)
	{
		___U3CstencilFormatU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____depthBufferBits_7)); }
	inline int32_t get__depthBufferBits_7() const { return ____depthBufferBits_7; }
	inline int32_t* get_address_of__depthBufferBits_7() { return &____depthBufferBits_7; }
	inline void set__depthBufferBits_7(int32_t value)
	{
		____depthBufferBits_7 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CdimensionU3Ek__BackingField_9)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_9() const { return ___U3CdimensionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_9() { return &___U3CdimensionU3Ek__BackingField_9; }
	inline void set_U3CdimensionU3Ek__BackingField_9(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CshadowSamplingModeU3Ek__BackingField_10)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_10() const { return ___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return &___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_10(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvrUsageU3Ek__BackingField_11)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_11() const { return ___U3CvrUsageU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_11() { return &___U3CvrUsageU3Ek__BackingField_11; }
	inline void set_U3CvrUsageU3Ek__BackingField_11(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__flags_12() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____flags_12)); }
	inline int32_t get__flags_12() const { return ____flags_12; }
	inline int32_t* get_address_of__flags_12() { return &____flags_12; }
	inline void set__flags_12(int32_t value)
	{
		____flags_12 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmemorylessU3Ek__BackingField_13)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_13() const { return ___U3CmemorylessU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_13() { return &___U3CmemorylessU3Ek__BackingField_13; }
	inline void set_U3CmemorylessU3Ek__BackingField_13(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_13 = value;
	}
};

struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___depthFormatBits_8;

public:
	inline static int32_t get_offset_of_depthFormatBits_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields, ___depthFormatBits_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_depthFormatBits_8() const { return ___depthFormatBits_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_depthFormatBits_8() { return &___depthFormatBits_8; }
	inline void set_depthFormatBits_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___depthFormatBits_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthFormatBits_8), (void*)value);
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// CW.Common.CwInputManager/Axis
struct Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 
{
public:
	// System.Int32 CW.Common.CwInputManager/Axis::FingerCount
	int32_t ___FingerCount_0;
	// System.Boolean CW.Common.CwInputManager/Axis::FingerInvert
	bool ___FingerInvert_1;
	// CW.Common.CwInputManager/AxisGesture CW.Common.CwInputManager/Axis::FingerGesture
	int32_t ___FingerGesture_2;
	// System.Single CW.Common.CwInputManager/Axis::FingerSensitivity
	float ___FingerSensitivity_3;
	// UnityEngine.KeyCode CW.Common.CwInputManager/Axis::KeyNegative
	int32_t ___KeyNegative_4;
	// UnityEngine.KeyCode CW.Common.CwInputManager/Axis::KeyPositive
	int32_t ___KeyPositive_5;
	// UnityEngine.KeyCode CW.Common.CwInputManager/Axis::KeyNegativeAlt
	int32_t ___KeyNegativeAlt_6;
	// UnityEngine.KeyCode CW.Common.CwInputManager/Axis::KeyPositiveAlt
	int32_t ___KeyPositiveAlt_7;
	// System.Single CW.Common.CwInputManager/Axis::KeySensitivity
	float ___KeySensitivity_8;

public:
	inline static int32_t get_offset_of_FingerCount_0() { return static_cast<int32_t>(offsetof(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91, ___FingerCount_0)); }
	inline int32_t get_FingerCount_0() const { return ___FingerCount_0; }
	inline int32_t* get_address_of_FingerCount_0() { return &___FingerCount_0; }
	inline void set_FingerCount_0(int32_t value)
	{
		___FingerCount_0 = value;
	}

	inline static int32_t get_offset_of_FingerInvert_1() { return static_cast<int32_t>(offsetof(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91, ___FingerInvert_1)); }
	inline bool get_FingerInvert_1() const { return ___FingerInvert_1; }
	inline bool* get_address_of_FingerInvert_1() { return &___FingerInvert_1; }
	inline void set_FingerInvert_1(bool value)
	{
		___FingerInvert_1 = value;
	}

	inline static int32_t get_offset_of_FingerGesture_2() { return static_cast<int32_t>(offsetof(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91, ___FingerGesture_2)); }
	inline int32_t get_FingerGesture_2() const { return ___FingerGesture_2; }
	inline int32_t* get_address_of_FingerGesture_2() { return &___FingerGesture_2; }
	inline void set_FingerGesture_2(int32_t value)
	{
		___FingerGesture_2 = value;
	}

	inline static int32_t get_offset_of_FingerSensitivity_3() { return static_cast<int32_t>(offsetof(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91, ___FingerSensitivity_3)); }
	inline float get_FingerSensitivity_3() const { return ___FingerSensitivity_3; }
	inline float* get_address_of_FingerSensitivity_3() { return &___FingerSensitivity_3; }
	inline void set_FingerSensitivity_3(float value)
	{
		___FingerSensitivity_3 = value;
	}

	inline static int32_t get_offset_of_KeyNegative_4() { return static_cast<int32_t>(offsetof(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91, ___KeyNegative_4)); }
	inline int32_t get_KeyNegative_4() const { return ___KeyNegative_4; }
	inline int32_t* get_address_of_KeyNegative_4() { return &___KeyNegative_4; }
	inline void set_KeyNegative_4(int32_t value)
	{
		___KeyNegative_4 = value;
	}

	inline static int32_t get_offset_of_KeyPositive_5() { return static_cast<int32_t>(offsetof(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91, ___KeyPositive_5)); }
	inline int32_t get_KeyPositive_5() const { return ___KeyPositive_5; }
	inline int32_t* get_address_of_KeyPositive_5() { return &___KeyPositive_5; }
	inline void set_KeyPositive_5(int32_t value)
	{
		___KeyPositive_5 = value;
	}

	inline static int32_t get_offset_of_KeyNegativeAlt_6() { return static_cast<int32_t>(offsetof(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91, ___KeyNegativeAlt_6)); }
	inline int32_t get_KeyNegativeAlt_6() const { return ___KeyNegativeAlt_6; }
	inline int32_t* get_address_of_KeyNegativeAlt_6() { return &___KeyNegativeAlt_6; }
	inline void set_KeyNegativeAlt_6(int32_t value)
	{
		___KeyNegativeAlt_6 = value;
	}

	inline static int32_t get_offset_of_KeyPositiveAlt_7() { return static_cast<int32_t>(offsetof(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91, ___KeyPositiveAlt_7)); }
	inline int32_t get_KeyPositiveAlt_7() const { return ___KeyPositiveAlt_7; }
	inline int32_t* get_address_of_KeyPositiveAlt_7() { return &___KeyPositiveAlt_7; }
	inline void set_KeyPositiveAlt_7(int32_t value)
	{
		___KeyPositiveAlt_7 = value;
	}

	inline static int32_t get_offset_of_KeySensitivity_8() { return static_cast<int32_t>(offsetof(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91, ___KeySensitivity_8)); }
	inline float get_KeySensitivity_8() const { return ___KeySensitivity_8; }
	inline float* get_address_of_KeySensitivity_8() { return &___KeySensitivity_8; }
	inline void set_KeySensitivity_8(float value)
	{
		___KeySensitivity_8 = value;
	}
};

// Native definition for P/Invoke marshalling of CW.Common.CwInputManager/Axis
struct Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshaled_pinvoke
{
	int32_t ___FingerCount_0;
	int32_t ___FingerInvert_1;
	int32_t ___FingerGesture_2;
	float ___FingerSensitivity_3;
	int32_t ___KeyNegative_4;
	int32_t ___KeyPositive_5;
	int32_t ___KeyNegativeAlt_6;
	int32_t ___KeyPositiveAlt_7;
	float ___KeySensitivity_8;
};
// Native definition for COM marshalling of CW.Common.CwInputManager/Axis
struct Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshaled_com
{
	int32_t ___FingerCount_0;
	int32_t ___FingerInvert_1;
	int32_t ___FingerGesture_2;
	float ___FingerSensitivity_3;
	int32_t ___KeyNegative_4;
	int32_t ___KeyPositive_5;
	int32_t ___KeyNegativeAlt_6;
	int32_t ___KeyPositiveAlt_7;
	float ___KeySensitivity_8;
};

// CW.Common.CwInputManager/Trigger
struct Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 
{
public:
	// System.Boolean CW.Common.CwInputManager/Trigger::UseFinger
	bool ___UseFinger_0;
	// System.Boolean CW.Common.CwInputManager/Trigger::UseMouse
	bool ___UseMouse_1;
	// UnityEngine.KeyCode CW.Common.CwInputManager/Trigger::UseKey
	int32_t ___UseKey_2;

public:
	inline static int32_t get_offset_of_UseFinger_0() { return static_cast<int32_t>(offsetof(Trigger_t110F4322CEA9CB42A685848CBD224D4294605398, ___UseFinger_0)); }
	inline bool get_UseFinger_0() const { return ___UseFinger_0; }
	inline bool* get_address_of_UseFinger_0() { return &___UseFinger_0; }
	inline void set_UseFinger_0(bool value)
	{
		___UseFinger_0 = value;
	}

	inline static int32_t get_offset_of_UseMouse_1() { return static_cast<int32_t>(offsetof(Trigger_t110F4322CEA9CB42A685848CBD224D4294605398, ___UseMouse_1)); }
	inline bool get_UseMouse_1() const { return ___UseMouse_1; }
	inline bool* get_address_of_UseMouse_1() { return &___UseMouse_1; }
	inline void set_UseMouse_1(bool value)
	{
		___UseMouse_1 = value;
	}

	inline static int32_t get_offset_of_UseKey_2() { return static_cast<int32_t>(offsetof(Trigger_t110F4322CEA9CB42A685848CBD224D4294605398, ___UseKey_2)); }
	inline int32_t get_UseKey_2() const { return ___UseKey_2; }
	inline int32_t* get_address_of_UseKey_2() { return &___UseKey_2; }
	inline void set_UseKey_2(int32_t value)
	{
		___UseKey_2 = value;
	}
};

// Native definition for P/Invoke marshalling of CW.Common.CwInputManager/Trigger
struct Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshaled_pinvoke
{
	int32_t ___UseFinger_0;
	int32_t ___UseMouse_1;
	int32_t ___UseKey_2;
};
// Native definition for COM marshalling of CW.Common.CwInputManager/Trigger
struct Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshaled_com
{
	int32_t ___UseFinger_0;
	int32_t ___UseMouse_1;
	int32_t ___UseKey_2;
};

// CW.Common.CwShaderBundle/ShaderVariant
struct ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB  : public RuntimeObject
{
public:
	// CW.Common.CwShaderBundle/Pipeline CW.Common.CwShaderBundle/ShaderVariant::Pipe
	int32_t ___Pipe_0;
	// System.String CW.Common.CwShaderBundle/ShaderVariant::Code
	String_t* ___Code_1;
	// System.Int32 CW.Common.CwShaderBundle/ShaderVariant::Hash
	int32_t ___Hash_2;
	// System.Boolean CW.Common.CwShaderBundle/ShaderVariant::Dirty
	bool ___Dirty_3;

public:
	inline static int32_t get_offset_of_Pipe_0() { return static_cast<int32_t>(offsetof(ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB, ___Pipe_0)); }
	inline int32_t get_Pipe_0() const { return ___Pipe_0; }
	inline int32_t* get_address_of_Pipe_0() { return &___Pipe_0; }
	inline void set_Pipe_0(int32_t value)
	{
		___Pipe_0 = value;
	}

	inline static int32_t get_offset_of_Code_1() { return static_cast<int32_t>(offsetof(ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB, ___Code_1)); }
	inline String_t* get_Code_1() const { return ___Code_1; }
	inline String_t** get_address_of_Code_1() { return &___Code_1; }
	inline void set_Code_1(String_t* value)
	{
		___Code_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Code_1), (void*)value);
	}

	inline static int32_t get_offset_of_Hash_2() { return static_cast<int32_t>(offsetof(ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB, ___Hash_2)); }
	inline int32_t get_Hash_2() const { return ___Hash_2; }
	inline int32_t* get_address_of_Hash_2() { return &___Hash_2; }
	inline void set_Hash_2(int32_t value)
	{
		___Hash_2 = value;
	}

	inline static int32_t get_offset_of_Dirty_3() { return static_cast<int32_t>(offsetof(ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB, ___Dirty_3)); }
	inline bool get_Dirty_3() const { return ___Dirty_3; }
	inline bool* get_address_of_Dirty_3() { return &___Dirty_3; }
	inline void set_Dirty_3(bool value)
	{
		___Dirty_3 = value;
	}
};


// System.Action`1<UnityEngine.Camera>
struct Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<CW.Common.CwInputManager/Finger>
struct Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// CW.Common.CwGuide
struct CwGuide_t51C32B2C30A0D720E8721FD8931FBADB48DA7507  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String CW.Common.CwGuide::LongName
	String_t* ___LongName_4;
	// System.String CW.Common.CwGuide::ShortName
	String_t* ___ShortName_5;
	// UnityEngine.TextAsset CW.Common.CwGuide::Documentation
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___Documentation_6;
	// UnityEngine.Texture2D CW.Common.CwGuide::icon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___icon_7;
	// System.String CW.Common.CwGuide::version
	String_t* ___version_8;

public:
	inline static int32_t get_offset_of_LongName_4() { return static_cast<int32_t>(offsetof(CwGuide_t51C32B2C30A0D720E8721FD8931FBADB48DA7507, ___LongName_4)); }
	inline String_t* get_LongName_4() const { return ___LongName_4; }
	inline String_t** get_address_of_LongName_4() { return &___LongName_4; }
	inline void set_LongName_4(String_t* value)
	{
		___LongName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LongName_4), (void*)value);
	}

	inline static int32_t get_offset_of_ShortName_5() { return static_cast<int32_t>(offsetof(CwGuide_t51C32B2C30A0D720E8721FD8931FBADB48DA7507, ___ShortName_5)); }
	inline String_t* get_ShortName_5() const { return ___ShortName_5; }
	inline String_t** get_address_of_ShortName_5() { return &___ShortName_5; }
	inline void set_ShortName_5(String_t* value)
	{
		___ShortName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShortName_5), (void*)value);
	}

	inline static int32_t get_offset_of_Documentation_6() { return static_cast<int32_t>(offsetof(CwGuide_t51C32B2C30A0D720E8721FD8931FBADB48DA7507, ___Documentation_6)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_Documentation_6() const { return ___Documentation_6; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_Documentation_6() { return &___Documentation_6; }
	inline void set_Documentation_6(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___Documentation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Documentation_6), (void*)value);
	}

	inline static int32_t get_offset_of_icon_7() { return static_cast<int32_t>(offsetof(CwGuide_t51C32B2C30A0D720E8721FD8931FBADB48DA7507, ___icon_7)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_icon_7() const { return ___icon_7; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_icon_7() { return &___icon_7; }
	inline void set_icon_7(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___icon_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_7), (void*)value);
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(CwGuide_t51C32B2C30A0D720E8721FD8931FBADB48DA7507, ___version_8)); }
	inline String_t* get_version_8() const { return ___version_8; }
	inline String_t** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(String_t* value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_8), (void*)value);
	}
};


// CW.Common.CwShaderBundle
struct CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String CW.Common.CwShaderBundle::title
	String_t* ___title_4;
	// UnityEngine.Shader CW.Common.CwShaderBundle::target
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___target_5;
	// System.Int32 CW.Common.CwShaderBundle::variantHash
	int32_t ___variantHash_6;
	// System.Int32 CW.Common.CwShaderBundle::projectHash
	int32_t ___projectHash_7;
	// System.Collections.Generic.List`1<CW.Common.CwShaderBundle/ShaderVariant> CW.Common.CwShaderBundle::variants
	List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * ___variants_8;

public:
	inline static int32_t get_offset_of_title_4() { return static_cast<int32_t>(offsetof(CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9, ___title_4)); }
	inline String_t* get_title_4() const { return ___title_4; }
	inline String_t** get_address_of_title_4() { return &___title_4; }
	inline void set_title_4(String_t* value)
	{
		___title_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_4), (void*)value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9, ___target_5)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_target_5() const { return ___target_5; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_5), (void*)value);
	}

	inline static int32_t get_offset_of_variantHash_6() { return static_cast<int32_t>(offsetof(CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9, ___variantHash_6)); }
	inline int32_t get_variantHash_6() const { return ___variantHash_6; }
	inline int32_t* get_address_of_variantHash_6() { return &___variantHash_6; }
	inline void set_variantHash_6(int32_t value)
	{
		___variantHash_6 = value;
	}

	inline static int32_t get_offset_of_projectHash_7() { return static_cast<int32_t>(offsetof(CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9, ___projectHash_7)); }
	inline int32_t get_projectHash_7() const { return ___projectHash_7; }
	inline int32_t* get_address_of_projectHash_7() { return &___projectHash_7; }
	inline void set_projectHash_7(int32_t value)
	{
		___projectHash_7 = value;
	}

	inline static int32_t get_offset_of_variants_8() { return static_cast<int32_t>(offsetof(CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9, ___variants_8)); }
	inline List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * get_variants_8() const { return ___variants_8; }
	inline List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 ** get_address_of_variants_8() { return &___variants_8; }
	inline void set_variants_8(List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * value)
	{
		___variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variants_8), (void*)value);
	}
};


// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// CW.Common.CwCameraLook
struct CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean CW.Common.CwCameraLook::listen
	bool ___listen_4;
	// System.Single CW.Common.CwCameraLook::damping
	float ___damping_5;
	// System.Single CW.Common.CwCameraLook::sensitivity
	float ___sensitivity_6;
	// CW.Common.CwInputManager/Axis CW.Common.CwCameraLook::pitchControls
	Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___pitchControls_7;
	// CW.Common.CwInputManager/Axis CW.Common.CwCameraLook::yawControls
	Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___yawControls_8;
	// CW.Common.CwInputManager/Axis CW.Common.CwCameraLook::rollControls
	Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___rollControls_9;
	// UnityEngine.Quaternion CW.Common.CwCameraLook::remainingDelta
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___remainingDelta_10;

public:
	inline static int32_t get_offset_of_listen_4() { return static_cast<int32_t>(offsetof(CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C, ___listen_4)); }
	inline bool get_listen_4() const { return ___listen_4; }
	inline bool* get_address_of_listen_4() { return &___listen_4; }
	inline void set_listen_4(bool value)
	{
		___listen_4 = value;
	}

	inline static int32_t get_offset_of_damping_5() { return static_cast<int32_t>(offsetof(CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C, ___damping_5)); }
	inline float get_damping_5() const { return ___damping_5; }
	inline float* get_address_of_damping_5() { return &___damping_5; }
	inline void set_damping_5(float value)
	{
		___damping_5 = value;
	}

	inline static int32_t get_offset_of_sensitivity_6() { return static_cast<int32_t>(offsetof(CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C, ___sensitivity_6)); }
	inline float get_sensitivity_6() const { return ___sensitivity_6; }
	inline float* get_address_of_sensitivity_6() { return &___sensitivity_6; }
	inline void set_sensitivity_6(float value)
	{
		___sensitivity_6 = value;
	}

	inline static int32_t get_offset_of_pitchControls_7() { return static_cast<int32_t>(offsetof(CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C, ___pitchControls_7)); }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  get_pitchControls_7() const { return ___pitchControls_7; }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * get_address_of_pitchControls_7() { return &___pitchControls_7; }
	inline void set_pitchControls_7(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  value)
	{
		___pitchControls_7 = value;
	}

	inline static int32_t get_offset_of_yawControls_8() { return static_cast<int32_t>(offsetof(CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C, ___yawControls_8)); }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  get_yawControls_8() const { return ___yawControls_8; }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * get_address_of_yawControls_8() { return &___yawControls_8; }
	inline void set_yawControls_8(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  value)
	{
		___yawControls_8 = value;
	}

	inline static int32_t get_offset_of_rollControls_9() { return static_cast<int32_t>(offsetof(CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C, ___rollControls_9)); }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  get_rollControls_9() const { return ___rollControls_9; }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * get_address_of_rollControls_9() { return &___rollControls_9; }
	inline void set_rollControls_9(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  value)
	{
		___rollControls_9 = value;
	}

	inline static int32_t get_offset_of_remainingDelta_10() { return static_cast<int32_t>(offsetof(CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C, ___remainingDelta_10)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_remainingDelta_10() const { return ___remainingDelta_10; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_remainingDelta_10() { return &___remainingDelta_10; }
	inline void set_remainingDelta_10(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___remainingDelta_10 = value;
	}
};


// CW.Common.CwCameraMove
struct CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean CW.Common.CwCameraMove::listen
	bool ___listen_4;
	// System.Single CW.Common.CwCameraMove::damping
	float ___damping_5;
	// System.Single CW.Common.CwCameraMove::sensitivity
	float ___sensitivity_6;
	// CW.Common.CwInputManager/Axis CW.Common.CwCameraMove::horizontalControls
	Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___horizontalControls_7;
	// CW.Common.CwInputManager/Axis CW.Common.CwCameraMove::depthControls
	Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___depthControls_8;
	// CW.Common.CwInputManager/Axis CW.Common.CwCameraMove::verticalControls
	Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___verticalControls_9;
	// UnityEngine.Vector3 CW.Common.CwCameraMove::remainingDelta
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___remainingDelta_10;

public:
	inline static int32_t get_offset_of_listen_4() { return static_cast<int32_t>(offsetof(CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36, ___listen_4)); }
	inline bool get_listen_4() const { return ___listen_4; }
	inline bool* get_address_of_listen_4() { return &___listen_4; }
	inline void set_listen_4(bool value)
	{
		___listen_4 = value;
	}

	inline static int32_t get_offset_of_damping_5() { return static_cast<int32_t>(offsetof(CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36, ___damping_5)); }
	inline float get_damping_5() const { return ___damping_5; }
	inline float* get_address_of_damping_5() { return &___damping_5; }
	inline void set_damping_5(float value)
	{
		___damping_5 = value;
	}

	inline static int32_t get_offset_of_sensitivity_6() { return static_cast<int32_t>(offsetof(CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36, ___sensitivity_6)); }
	inline float get_sensitivity_6() const { return ___sensitivity_6; }
	inline float* get_address_of_sensitivity_6() { return &___sensitivity_6; }
	inline void set_sensitivity_6(float value)
	{
		___sensitivity_6 = value;
	}

	inline static int32_t get_offset_of_horizontalControls_7() { return static_cast<int32_t>(offsetof(CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36, ___horizontalControls_7)); }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  get_horizontalControls_7() const { return ___horizontalControls_7; }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * get_address_of_horizontalControls_7() { return &___horizontalControls_7; }
	inline void set_horizontalControls_7(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  value)
	{
		___horizontalControls_7 = value;
	}

	inline static int32_t get_offset_of_depthControls_8() { return static_cast<int32_t>(offsetof(CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36, ___depthControls_8)); }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  get_depthControls_8() const { return ___depthControls_8; }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * get_address_of_depthControls_8() { return &___depthControls_8; }
	inline void set_depthControls_8(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  value)
	{
		___depthControls_8 = value;
	}

	inline static int32_t get_offset_of_verticalControls_9() { return static_cast<int32_t>(offsetof(CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36, ___verticalControls_9)); }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  get_verticalControls_9() const { return ___verticalControls_9; }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * get_address_of_verticalControls_9() { return &___verticalControls_9; }
	inline void set_verticalControls_9(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  value)
	{
		___verticalControls_9 = value;
	}

	inline static int32_t get_offset_of_remainingDelta_10() { return static_cast<int32_t>(offsetof(CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36, ___remainingDelta_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_remainingDelta_10() const { return ___remainingDelta_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_remainingDelta_10() { return &___remainingDelta_10; }
	inline void set_remainingDelta_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___remainingDelta_10 = value;
	}
};


// CW.Common.CwCameraPivot
struct CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean CW.Common.CwCameraPivot::listen
	bool ___listen_4;
	// System.Single CW.Common.CwCameraPivot::damping
	float ___damping_5;
	// CW.Common.CwInputManager/Axis CW.Common.CwCameraPivot::pitchControls
	Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___pitchControls_6;
	// CW.Common.CwInputManager/Axis CW.Common.CwCameraPivot::yawControls
	Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___yawControls_7;
	// UnityEngine.Vector3 CW.Common.CwCameraPivot::remainingDelta
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___remainingDelta_8;

public:
	inline static int32_t get_offset_of_listen_4() { return static_cast<int32_t>(offsetof(CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705, ___listen_4)); }
	inline bool get_listen_4() const { return ___listen_4; }
	inline bool* get_address_of_listen_4() { return &___listen_4; }
	inline void set_listen_4(bool value)
	{
		___listen_4 = value;
	}

	inline static int32_t get_offset_of_damping_5() { return static_cast<int32_t>(offsetof(CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705, ___damping_5)); }
	inline float get_damping_5() const { return ___damping_5; }
	inline float* get_address_of_damping_5() { return &___damping_5; }
	inline void set_damping_5(float value)
	{
		___damping_5 = value;
	}

	inline static int32_t get_offset_of_pitchControls_6() { return static_cast<int32_t>(offsetof(CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705, ___pitchControls_6)); }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  get_pitchControls_6() const { return ___pitchControls_6; }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * get_address_of_pitchControls_6() { return &___pitchControls_6; }
	inline void set_pitchControls_6(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  value)
	{
		___pitchControls_6 = value;
	}

	inline static int32_t get_offset_of_yawControls_7() { return static_cast<int32_t>(offsetof(CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705, ___yawControls_7)); }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  get_yawControls_7() const { return ___yawControls_7; }
	inline Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * get_address_of_yawControls_7() { return &___yawControls_7; }
	inline void set_yawControls_7(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  value)
	{
		___yawControls_7 = value;
	}

	inline static int32_t get_offset_of_remainingDelta_8() { return static_cast<int32_t>(offsetof(CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705, ___remainingDelta_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_remainingDelta_8() const { return ___remainingDelta_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_remainingDelta_8() { return &___remainingDelta_8; }
	inline void set_remainingDelta_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___remainingDelta_8 = value;
	}
};


// CW.Common.CwChild
struct CwChild_tD21FBD08C8B782B50B2EDF73D7C471D2B5CAA33D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CW.Common.CwDemo
struct CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean CW.Common.CwDemo::upgradeInputModule
	bool ___upgradeInputModule_4;
	// System.Boolean CW.Common.CwDemo::changeExposureInHDRP
	bool ___changeExposureInHDRP_5;
	// System.Boolean CW.Common.CwDemo::changeVisualEnvironmentInHDRP
	bool ___changeVisualEnvironmentInHDRP_6;
	// System.Boolean CW.Common.CwDemo::changeFogInHDRP
	bool ___changeFogInHDRP_7;
	// System.Boolean CW.Common.CwDemo::changeCloudsInHDRP
	bool ___changeCloudsInHDRP_8;
	// System.Boolean CW.Common.CwDemo::changeMotionBlurInHDRP
	bool ___changeMotionBlurInHDRP_9;
	// System.Boolean CW.Common.CwDemo::upgradeLightsInHDRP
	bool ___upgradeLightsInHDRP_10;
	// System.Boolean CW.Common.CwDemo::upgradeCamerasInHDRP
	bool ___upgradeCamerasInHDRP_11;

public:
	inline static int32_t get_offset_of_upgradeInputModule_4() { return static_cast<int32_t>(offsetof(CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F, ___upgradeInputModule_4)); }
	inline bool get_upgradeInputModule_4() const { return ___upgradeInputModule_4; }
	inline bool* get_address_of_upgradeInputModule_4() { return &___upgradeInputModule_4; }
	inline void set_upgradeInputModule_4(bool value)
	{
		___upgradeInputModule_4 = value;
	}

	inline static int32_t get_offset_of_changeExposureInHDRP_5() { return static_cast<int32_t>(offsetof(CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F, ___changeExposureInHDRP_5)); }
	inline bool get_changeExposureInHDRP_5() const { return ___changeExposureInHDRP_5; }
	inline bool* get_address_of_changeExposureInHDRP_5() { return &___changeExposureInHDRP_5; }
	inline void set_changeExposureInHDRP_5(bool value)
	{
		___changeExposureInHDRP_5 = value;
	}

	inline static int32_t get_offset_of_changeVisualEnvironmentInHDRP_6() { return static_cast<int32_t>(offsetof(CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F, ___changeVisualEnvironmentInHDRP_6)); }
	inline bool get_changeVisualEnvironmentInHDRP_6() const { return ___changeVisualEnvironmentInHDRP_6; }
	inline bool* get_address_of_changeVisualEnvironmentInHDRP_6() { return &___changeVisualEnvironmentInHDRP_6; }
	inline void set_changeVisualEnvironmentInHDRP_6(bool value)
	{
		___changeVisualEnvironmentInHDRP_6 = value;
	}

	inline static int32_t get_offset_of_changeFogInHDRP_7() { return static_cast<int32_t>(offsetof(CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F, ___changeFogInHDRP_7)); }
	inline bool get_changeFogInHDRP_7() const { return ___changeFogInHDRP_7; }
	inline bool* get_address_of_changeFogInHDRP_7() { return &___changeFogInHDRP_7; }
	inline void set_changeFogInHDRP_7(bool value)
	{
		___changeFogInHDRP_7 = value;
	}

	inline static int32_t get_offset_of_changeCloudsInHDRP_8() { return static_cast<int32_t>(offsetof(CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F, ___changeCloudsInHDRP_8)); }
	inline bool get_changeCloudsInHDRP_8() const { return ___changeCloudsInHDRP_8; }
	inline bool* get_address_of_changeCloudsInHDRP_8() { return &___changeCloudsInHDRP_8; }
	inline void set_changeCloudsInHDRP_8(bool value)
	{
		___changeCloudsInHDRP_8 = value;
	}

	inline static int32_t get_offset_of_changeMotionBlurInHDRP_9() { return static_cast<int32_t>(offsetof(CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F, ___changeMotionBlurInHDRP_9)); }
	inline bool get_changeMotionBlurInHDRP_9() const { return ___changeMotionBlurInHDRP_9; }
	inline bool* get_address_of_changeMotionBlurInHDRP_9() { return &___changeMotionBlurInHDRP_9; }
	inline void set_changeMotionBlurInHDRP_9(bool value)
	{
		___changeMotionBlurInHDRP_9 = value;
	}

	inline static int32_t get_offset_of_upgradeLightsInHDRP_10() { return static_cast<int32_t>(offsetof(CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F, ___upgradeLightsInHDRP_10)); }
	inline bool get_upgradeLightsInHDRP_10() const { return ___upgradeLightsInHDRP_10; }
	inline bool* get_address_of_upgradeLightsInHDRP_10() { return &___upgradeLightsInHDRP_10; }
	inline void set_upgradeLightsInHDRP_10(bool value)
	{
		___upgradeLightsInHDRP_10 = value;
	}

	inline static int32_t get_offset_of_upgradeCamerasInHDRP_11() { return static_cast<int32_t>(offsetof(CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F, ___upgradeCamerasInHDRP_11)); }
	inline bool get_upgradeCamerasInHDRP_11() const { return ___upgradeCamerasInHDRP_11; }
	inline bool* get_address_of_upgradeCamerasInHDRP_11() { return &___upgradeCamerasInHDRP_11; }
	inline void set_upgradeCamerasInHDRP_11(bool value)
	{
		___upgradeCamerasInHDRP_11 = value;
	}
};


// CW.Common.CwDemoButton
struct CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// CW.Common.CwDemoButton/LinkType CW.Common.CwDemoButton::link
	int32_t ___link_4;
	// System.String CW.Common.CwDemoButton::urlTarget
	String_t* ___urlTarget_5;
	// UnityEngine.Transform CW.Common.CwDemoButton::isolateTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___isolateTarget_6;
	// CW.Common.CwDemoButton/ToggleType CW.Common.CwDemoButton::isolateToggle
	int32_t ___isolateToggle_7;
	// UnityEngine.CanvasGroup CW.Common.CwDemoButton::cachedCanvasGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___cachedCanvasGroup_8;
	// UnityEngine.Transform CW.Common.CwDemoButton::previousChild
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___previousChild_9;

public:
	inline static int32_t get_offset_of_link_4() { return static_cast<int32_t>(offsetof(CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9, ___link_4)); }
	inline int32_t get_link_4() const { return ___link_4; }
	inline int32_t* get_address_of_link_4() { return &___link_4; }
	inline void set_link_4(int32_t value)
	{
		___link_4 = value;
	}

	inline static int32_t get_offset_of_urlTarget_5() { return static_cast<int32_t>(offsetof(CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9, ___urlTarget_5)); }
	inline String_t* get_urlTarget_5() const { return ___urlTarget_5; }
	inline String_t** get_address_of_urlTarget_5() { return &___urlTarget_5; }
	inline void set_urlTarget_5(String_t* value)
	{
		___urlTarget_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___urlTarget_5), (void*)value);
	}

	inline static int32_t get_offset_of_isolateTarget_6() { return static_cast<int32_t>(offsetof(CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9, ___isolateTarget_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_isolateTarget_6() const { return ___isolateTarget_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_isolateTarget_6() { return &___isolateTarget_6; }
	inline void set_isolateTarget_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___isolateTarget_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isolateTarget_6), (void*)value);
	}

	inline static int32_t get_offset_of_isolateToggle_7() { return static_cast<int32_t>(offsetof(CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9, ___isolateToggle_7)); }
	inline int32_t get_isolateToggle_7() const { return ___isolateToggle_7; }
	inline int32_t* get_address_of_isolateToggle_7() { return &___isolateToggle_7; }
	inline void set_isolateToggle_7(int32_t value)
	{
		___isolateToggle_7 = value;
	}

	inline static int32_t get_offset_of_cachedCanvasGroup_8() { return static_cast<int32_t>(offsetof(CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9, ___cachedCanvasGroup_8)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_cachedCanvasGroup_8() const { return ___cachedCanvasGroup_8; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_cachedCanvasGroup_8() { return &___cachedCanvasGroup_8; }
	inline void set_cachedCanvasGroup_8(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___cachedCanvasGroup_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedCanvasGroup_8), (void*)value);
	}

	inline static int32_t get_offset_of_previousChild_9() { return static_cast<int32_t>(offsetof(CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9, ___previousChild_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_previousChild_9() const { return ___previousChild_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_previousChild_9() { return &___previousChild_9; }
	inline void set_previousChild_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___previousChild_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousChild_9), (void*)value);
	}
};


// CW.Common.CwDemoButtonBuilder
struct CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CW.Common.CwDemoButtonBuilder::buttonPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonPrefab_4;
	// UnityEngine.RectTransform CW.Common.CwDemoButtonBuilder::buttonRoot
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___buttonRoot_5;
	// UnityEngine.Sprite CW.Common.CwDemoButtonBuilder::icon
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___icon_6;
	// UnityEngine.Color CW.Common.CwDemoButtonBuilder::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_7;
	// System.String CW.Common.CwDemoButtonBuilder::overrideName
	String_t* ___overrideName_8;
	// UnityEngine.GameObject CW.Common.CwDemoButtonBuilder::clone
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___clone_9;

public:
	inline static int32_t get_offset_of_buttonPrefab_4() { return static_cast<int32_t>(offsetof(CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B, ___buttonPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonPrefab_4() const { return ___buttonPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonPrefab_4() { return &___buttonPrefab_4; }
	inline void set_buttonPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonRoot_5() { return static_cast<int32_t>(offsetof(CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B, ___buttonRoot_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_buttonRoot_5() const { return ___buttonRoot_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_buttonRoot_5() { return &___buttonRoot_5; }
	inline void set_buttonRoot_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___buttonRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonRoot_5), (void*)value);
	}

	inline static int32_t get_offset_of_icon_6() { return static_cast<int32_t>(offsetof(CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B, ___icon_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_icon_6() const { return ___icon_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_icon_6() { return &___icon_6; }
	inline void set_icon_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___icon_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_6), (void*)value);
	}

	inline static int32_t get_offset_of_color_7() { return static_cast<int32_t>(offsetof(CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B, ___color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_7() const { return ___color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_7() { return &___color_7; }
	inline void set_color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_7 = value;
	}

	inline static int32_t get_offset_of_overrideName_8() { return static_cast<int32_t>(offsetof(CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B, ___overrideName_8)); }
	inline String_t* get_overrideName_8() const { return ___overrideName_8; }
	inline String_t** get_address_of_overrideName_8() { return &___overrideName_8; }
	inline void set_overrideName_8(String_t* value)
	{
		___overrideName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overrideName_8), (void*)value);
	}

	inline static int32_t get_offset_of_clone_9() { return static_cast<int32_t>(offsetof(CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B, ___clone_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_clone_9() const { return ___clone_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_clone_9() { return &___clone_9; }
	inline void set_clone_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___clone_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clone_9), (void*)value);
	}
};


// CW.Common.CwDepthTextureMode
struct CwDepthTextureMode_t62CC937DA3EE0B6FCBC25CCD24396A050F4797B9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.DepthTextureMode CW.Common.CwDepthTextureMode::depthMode
	int32_t ___depthMode_4;
	// UnityEngine.Camera CW.Common.CwDepthTextureMode::cachedCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cachedCamera_5;

public:
	inline static int32_t get_offset_of_depthMode_4() { return static_cast<int32_t>(offsetof(CwDepthTextureMode_t62CC937DA3EE0B6FCBC25CCD24396A050F4797B9, ___depthMode_4)); }
	inline int32_t get_depthMode_4() const { return ___depthMode_4; }
	inline int32_t* get_address_of_depthMode_4() { return &___depthMode_4; }
	inline void set_depthMode_4(int32_t value)
	{
		___depthMode_4 = value;
	}

	inline static int32_t get_offset_of_cachedCamera_5() { return static_cast<int32_t>(offsetof(CwDepthTextureMode_t62CC937DA3EE0B6FCBC25CCD24396A050F4797B9, ___cachedCamera_5)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cachedCamera_5() const { return ___cachedCamera_5; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cachedCamera_5() { return &___cachedCamera_5; }
	inline void set_cachedCamera_5(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cachedCamera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedCamera_5), (void*)value);
	}
};


// CW.Common.CwFollow
struct CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// CW.Common.CwFollow/FollowType CW.Common.CwFollow::follow
	int32_t ___follow_4;
	// UnityEngine.Transform CW.Common.CwFollow::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_5;
	// System.Single CW.Common.CwFollow::damping
	float ___damping_6;
	// System.Boolean CW.Common.CwFollow::rotate
	bool ___rotate_7;
	// System.Boolean CW.Common.CwFollow::ignoreZ
	bool ___ignoreZ_8;
	// CW.Common.CwFollow/UpdateType CW.Common.CwFollow::followIn
	int32_t ___followIn_9;
	// UnityEngine.Vector3 CW.Common.CwFollow::localPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition_10;
	// UnityEngine.Vector3 CW.Common.CwFollow::localRotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localRotation_11;

public:
	inline static int32_t get_offset_of_follow_4() { return static_cast<int32_t>(offsetof(CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5, ___follow_4)); }
	inline int32_t get_follow_4() const { return ___follow_4; }
	inline int32_t* get_address_of_follow_4() { return &___follow_4; }
	inline void set_follow_4(int32_t value)
	{
		___follow_4 = value;
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5, ___target_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_5() const { return ___target_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_5), (void*)value);
	}

	inline static int32_t get_offset_of_damping_6() { return static_cast<int32_t>(offsetof(CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5, ___damping_6)); }
	inline float get_damping_6() const { return ___damping_6; }
	inline float* get_address_of_damping_6() { return &___damping_6; }
	inline void set_damping_6(float value)
	{
		___damping_6 = value;
	}

	inline static int32_t get_offset_of_rotate_7() { return static_cast<int32_t>(offsetof(CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5, ___rotate_7)); }
	inline bool get_rotate_7() const { return ___rotate_7; }
	inline bool* get_address_of_rotate_7() { return &___rotate_7; }
	inline void set_rotate_7(bool value)
	{
		___rotate_7 = value;
	}

	inline static int32_t get_offset_of_ignoreZ_8() { return static_cast<int32_t>(offsetof(CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5, ___ignoreZ_8)); }
	inline bool get_ignoreZ_8() const { return ___ignoreZ_8; }
	inline bool* get_address_of_ignoreZ_8() { return &___ignoreZ_8; }
	inline void set_ignoreZ_8(bool value)
	{
		___ignoreZ_8 = value;
	}

	inline static int32_t get_offset_of_followIn_9() { return static_cast<int32_t>(offsetof(CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5, ___followIn_9)); }
	inline int32_t get_followIn_9() const { return ___followIn_9; }
	inline int32_t* get_address_of_followIn_9() { return &___followIn_9; }
	inline void set_followIn_9(int32_t value)
	{
		___followIn_9 = value;
	}

	inline static int32_t get_offset_of_localPosition_10() { return static_cast<int32_t>(offsetof(CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5, ___localPosition_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_localPosition_10() const { return ___localPosition_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_localPosition_10() { return &___localPosition_10; }
	inline void set_localPosition_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___localPosition_10 = value;
	}

	inline static int32_t get_offset_of_localRotation_11() { return static_cast<int32_t>(offsetof(CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5, ___localRotation_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_localRotation_11() const { return ___localRotation_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_localRotation_11() { return &___localRotation_11; }
	inline void set_localRotation_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___localRotation_11 = value;
	}
};


// CW.Common.CwInputManager
struct CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.LayerMask CW.Common.CwInputManager::guiLayers
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___guiLayers_4;

public:
	inline static int32_t get_offset_of_guiLayers_4() { return static_cast<int32_t>(offsetof(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200, ___guiLayers_4)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_guiLayers_4() const { return ___guiLayers_4; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_guiLayers_4() { return &___guiLayers_4; }
	inline void set_guiLayers_4(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___guiLayers_4 = value;
	}
};

struct CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields
{
public:
	// System.Action`1<CW.Common.CwInputManager/Finger> CW.Common.CwInputManager::OnFingerDown
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * ___OnFingerDown_5;
	// System.Action`1<CW.Common.CwInputManager/Finger> CW.Common.CwInputManager::OnFingerUpdate
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * ___OnFingerUpdate_6;
	// System.Action`1<CW.Common.CwInputManager/Finger> CW.Common.CwInputManager::OnFingerUp
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * ___OnFingerUp_7;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> CW.Common.CwInputManager::tempRaycastResults
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___tempRaycastResults_10;
	// UnityEngine.EventSystems.PointerEventData CW.Common.CwInputManager::tempPointerEventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___tempPointerEventData_11;
	// UnityEngine.EventSystems.EventSystem CW.Common.CwInputManager::tempEventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___tempEventSystem_12;
	// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger> CW.Common.CwInputManager::fingers
	List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___fingers_13;
	// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger> CW.Common.CwInputManager::filteredFingers
	List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___filteredFingers_14;
	// System.Collections.Generic.Stack`1<CW.Common.CwInputManager/Finger> CW.Common.CwInputManager::pool
	Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E * ___pool_15;

public:
	inline static int32_t get_offset_of_OnFingerDown_5() { return static_cast<int32_t>(offsetof(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields, ___OnFingerDown_5)); }
	inline Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * get_OnFingerDown_5() const { return ___OnFingerDown_5; }
	inline Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 ** get_address_of_OnFingerDown_5() { return &___OnFingerDown_5; }
	inline void set_OnFingerDown_5(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * value)
	{
		___OnFingerDown_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFingerDown_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnFingerUpdate_6() { return static_cast<int32_t>(offsetof(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields, ___OnFingerUpdate_6)); }
	inline Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * get_OnFingerUpdate_6() const { return ___OnFingerUpdate_6; }
	inline Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 ** get_address_of_OnFingerUpdate_6() { return &___OnFingerUpdate_6; }
	inline void set_OnFingerUpdate_6(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * value)
	{
		___OnFingerUpdate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFingerUpdate_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnFingerUp_7() { return static_cast<int32_t>(offsetof(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields, ___OnFingerUp_7)); }
	inline Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * get_OnFingerUp_7() const { return ___OnFingerUp_7; }
	inline Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 ** get_address_of_OnFingerUp_7() { return &___OnFingerUp_7; }
	inline void set_OnFingerUp_7(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * value)
	{
		___OnFingerUp_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFingerUp_7), (void*)value);
	}

	inline static int32_t get_offset_of_tempRaycastResults_10() { return static_cast<int32_t>(offsetof(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields, ___tempRaycastResults_10)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_tempRaycastResults_10() const { return ___tempRaycastResults_10; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_tempRaycastResults_10() { return &___tempRaycastResults_10; }
	inline void set_tempRaycastResults_10(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___tempRaycastResults_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempRaycastResults_10), (void*)value);
	}

	inline static int32_t get_offset_of_tempPointerEventData_11() { return static_cast<int32_t>(offsetof(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields, ___tempPointerEventData_11)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_tempPointerEventData_11() const { return ___tempPointerEventData_11; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_tempPointerEventData_11() { return &___tempPointerEventData_11; }
	inline void set_tempPointerEventData_11(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___tempPointerEventData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempPointerEventData_11), (void*)value);
	}

	inline static int32_t get_offset_of_tempEventSystem_12() { return static_cast<int32_t>(offsetof(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields, ___tempEventSystem_12)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_tempEventSystem_12() const { return ___tempEventSystem_12; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_tempEventSystem_12() { return &___tempEventSystem_12; }
	inline void set_tempEventSystem_12(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___tempEventSystem_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempEventSystem_12), (void*)value);
	}

	inline static int32_t get_offset_of_fingers_13() { return static_cast<int32_t>(offsetof(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields, ___fingers_13)); }
	inline List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * get_fingers_13() const { return ___fingers_13; }
	inline List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 ** get_address_of_fingers_13() { return &___fingers_13; }
	inline void set_fingers_13(List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * value)
	{
		___fingers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingers_13), (void*)value);
	}

	inline static int32_t get_offset_of_filteredFingers_14() { return static_cast<int32_t>(offsetof(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields, ___filteredFingers_14)); }
	inline List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * get_filteredFingers_14() const { return ___filteredFingers_14; }
	inline List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 ** get_address_of_filteredFingers_14() { return &___filteredFingers_14; }
	inline void set_filteredFingers_14(List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * value)
	{
		___filteredFingers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filteredFingers_14), (void*)value);
	}

	inline static int32_t get_offset_of_pool_15() { return static_cast<int32_t>(offsetof(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields, ___pool_15)); }
	inline Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E * get_pool_15() const { return ___pool_15; }
	inline Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E ** get_address_of_pool_15() { return &___pool_15; }
	inline void set_pool_15(Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E * value)
	{
		___pool_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_15), (void*)value);
	}
};


// CW.Common.CwLightIntensity
struct CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CW.Common.CwLightIntensity::multiplier
	float ___multiplier_4;
	// System.Single CW.Common.CwLightIntensity::intensityInStandard
	float ___intensityInStandard_5;
	// System.Single CW.Common.CwLightIntensity::intensityInURP
	float ___intensityInURP_6;
	// System.Single CW.Common.CwLightIntensity::intensityInHDRP
	float ___intensityInHDRP_7;
	// UnityEngine.Light CW.Common.CwLightIntensity::cachedLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___cachedLight_8;
	// System.Boolean CW.Common.CwLightIntensity::cachedLightSet
	bool ___cachedLightSet_9;

public:
	inline static int32_t get_offset_of_multiplier_4() { return static_cast<int32_t>(offsetof(CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C, ___multiplier_4)); }
	inline float get_multiplier_4() const { return ___multiplier_4; }
	inline float* get_address_of_multiplier_4() { return &___multiplier_4; }
	inline void set_multiplier_4(float value)
	{
		___multiplier_4 = value;
	}

	inline static int32_t get_offset_of_intensityInStandard_5() { return static_cast<int32_t>(offsetof(CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C, ___intensityInStandard_5)); }
	inline float get_intensityInStandard_5() const { return ___intensityInStandard_5; }
	inline float* get_address_of_intensityInStandard_5() { return &___intensityInStandard_5; }
	inline void set_intensityInStandard_5(float value)
	{
		___intensityInStandard_5 = value;
	}

	inline static int32_t get_offset_of_intensityInURP_6() { return static_cast<int32_t>(offsetof(CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C, ___intensityInURP_6)); }
	inline float get_intensityInURP_6() const { return ___intensityInURP_6; }
	inline float* get_address_of_intensityInURP_6() { return &___intensityInURP_6; }
	inline void set_intensityInURP_6(float value)
	{
		___intensityInURP_6 = value;
	}

	inline static int32_t get_offset_of_intensityInHDRP_7() { return static_cast<int32_t>(offsetof(CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C, ___intensityInHDRP_7)); }
	inline float get_intensityInHDRP_7() const { return ___intensityInHDRP_7; }
	inline float* get_address_of_intensityInHDRP_7() { return &___intensityInHDRP_7; }
	inline void set_intensityInHDRP_7(float value)
	{
		___intensityInHDRP_7 = value;
	}

	inline static int32_t get_offset_of_cachedLight_8() { return static_cast<int32_t>(offsetof(CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C, ___cachedLight_8)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_cachedLight_8() const { return ___cachedLight_8; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_cachedLight_8() { return &___cachedLight_8; }
	inline void set_cachedLight_8(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___cachedLight_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedLight_8), (void*)value);
	}

	inline static int32_t get_offset_of_cachedLightSet_9() { return static_cast<int32_t>(offsetof(CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C, ___cachedLightSet_9)); }
	inline bool get_cachedLightSet_9() const { return ___cachedLightSet_9; }
	inline bool* get_address_of_cachedLightSet_9() { return &___cachedLightSet_9; }
	inline void set_cachedLightSet_9(bool value)
	{
		___cachedLightSet_9 = value;
	}
};


// CW.Common.CwRoot
struct CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields
{
public:
	// System.Collections.Generic.List`1<CW.Common.CwRoot> CW.Common.CwRoot::instances
	List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * ___instances_4;

public:
	inline static int32_t get_offset_of_instances_4() { return static_cast<int32_t>(offsetof(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields, ___instances_4)); }
	inline List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * get_instances_4() const { return ___instances_4; }
	inline List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 ** get_address_of_instances_4() { return &___instances_4; }
	inline void set_instances_4(List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * value)
	{
		___instances_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instances_4), (void*)value);
	}
};


// CW.Common.CwRotate
struct CwRotate_t34CF440B91575AACCDFD750683F5847253538181  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 CW.Common.CwRotate::angularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___angularVelocity_4;
	// UnityEngine.Space CW.Common.CwRotate::relativeTo
	int32_t ___relativeTo_5;

public:
	inline static int32_t get_offset_of_angularVelocity_4() { return static_cast<int32_t>(offsetof(CwRotate_t34CF440B91575AACCDFD750683F5847253538181, ___angularVelocity_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_angularVelocity_4() const { return ___angularVelocity_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_angularVelocity_4() { return &___angularVelocity_4; }
	inline void set_angularVelocity_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___angularVelocity_4 = value;
	}

	inline static int32_t get_offset_of_relativeTo_5() { return static_cast<int32_t>(offsetof(CwRotate_t34CF440B91575AACCDFD750683F5847253538181, ___relativeTo_5)); }
	inline int32_t get_relativeTo_5() const { return ___relativeTo_5; }
	inline int32_t* get_address_of_relativeTo_5() { return &___relativeTo_5; }
	inline void set_relativeTo_5(int32_t value)
	{
		___relativeTo_5 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// CW.Common.CwDemoButtonBuilder[]
struct CwDemoButtonBuilderU5BU5D_t4A70D589EC0841F2D1AF2474AD33E5E2B4989F49  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * m_Items[1];

public:
	inline CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  m_Items[1];

public:
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<UnityEngine.Random/State>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m69162031460D8A5A90C92036736B044145EC54C6_gshared (Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m503CFC42924101FFC7AAB45FD1EE567AECFB2DDB_gshared (Action_2_tD344092D96CD0E43070CBCDAFD460F86AC996BCC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<UnityEngine.Random/State>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mEAD1FC02E5EE989C3C1A1EE85F107B7CCC3D3932_gshared (Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * __this, State_t8E62E640CAE29BF61164F51619D1C04936074C15  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<UnityEngine.Random/State>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t8E62E640CAE29BF61164F51619D1C04936074C15  Stack_1_Pop_m6CF5DFD72EDCAD3E4A16E32BA17F20D2336689CD_gshared (Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5D88EA8AA491CFF029747A32EF3F1793EE7B135B_gshared (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9_gshared (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD1F29CADB45CDC47AE42C4E6A2EF86681F37F9E4_gshared (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void CW.Common.CwInputManager::EnsureThisComponentExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_EnsureThisComponentExists_m9E2FBB171985D87EAA3E203069C20A820D21692A (const RuntimeMethod* method);
// System.Void CW.Common.CwCameraLook::AddToDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_AddToDelta_m7C47F6E3F43D73ACF9927740C3E1D12A404085D5 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method);
// System.Void CW.Common.CwCameraLook::DampenDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_DampenDelta_m7B54D4C90601B20D95F7F67617BA52224FCF627E (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single CW.Common.CwInputManager/Axis::GetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C (Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * __this, float ___delta0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Single CW.Common.CwHelper::DampenFactor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_DampenFactor_mAC5C9507C2B790590B77EB007310BFFE2B2A63EA (float ___speed0, float ___elapsed1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void CW.Common.CwInputManager/Axis::.ctor(System.Int32,System.Boolean,CW.Common.CwInputManager/AxisGesture,System.Single,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB (Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * __this, int32_t ___fCount0, bool ___fInvert1, int32_t ___fGesture2, float ___fSensitivty3, int32_t ___kNegative4, int32_t ___kPositive5, int32_t ___kNegativeAlt6, int32_t ___kPositiveAlt7, float ___kSensitivity8, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void CW.Common.CwCameraMove::AddToDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_AddToDelta_m5E51DC879E0A1FC2160A12319D8C246164537762 (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method);
// System.Void CW.Common.CwCameraMove::DampenDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_DampenDelta_mD80D481D712006D88C316D7DF2076F86D4AF8747 (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void CW.Common.CwCameraPivot::AddToDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraPivot_AddToDelta_m0C978BC86122ED2B60F8D1C206529EC6472E232F (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, const RuntimeMethod* method);
// System.Void CW.Common.CwCameraPivot::DampenDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraPivot_DampenDelta_m77D4051AF1DC6AB5E215239380D0C6F3F1785DE8 (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mB1BD0E139ACCAE694968F7D9CB096C60F69CE9FE (float ___current0, float ___target1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// CW.Common.CwShaderBundle/Pipeline CW.Common.CwShaderBundle::DetectProjectPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwShaderBundle_DetectProjectPipeline_m4499C17B2B448CE2587FC0C321A7DC0089456BCE (const RuntimeMethod* method);
// System.Void CW.Common.CwDemo::TryUpgradeEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_TryUpgradeEventSystem_mFA67238FF4284E20A76663E39952DF8D5DF80903 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method);
// System.Boolean CW.Common.CwShaderBundle::IsURP(CW.Common.CwShaderBundle/Pipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwShaderBundle_IsURP_mB55695B59F7E8B4224FA4F47208463152F028A72 (int32_t ___pipe0, const RuntimeMethod* method);
// System.Boolean CW.Common.CwShaderBundle::IsHDRP(CW.Common.CwShaderBundle/Pipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwShaderBundle_IsHDRP_m8EC8D4BB8BE1948B43288FAAF3A44260CCF16CF6 (int32_t ___pipe0, const RuntimeMethod* method);
// System.Void CW.Common.CwDemo::TryCreateVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_TryCreateVolume_m8FA31BA73781E36B7A90BBF43A3284EC88B2E963 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method);
// System.Void CW.Common.CwDemo::TryUpgradeLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_TryUpgradeLights_m217C1636D9C17E859B123361B88B5011AF1F3A4E (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method);
// System.Void CW.Common.CwDemo::TryUpgradeCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_TryUpgradeCameras_mC1BFC04CBEFF7673E13A4A1FE6B84C246543C9EE (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 CW.Common.CwDemoButton::GetCurrentLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwDemoButton_GetCurrentLevel_mD05EAEBA9C5AEE898C6FE454B704A9C02CCF5EA3 (const RuntimeMethod* method);
// System.Int32 CW.Common.CwDemoButton::GetLevelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwDemoButton_GetLevelCount_mDEFF4C9964ED424F0C7FA5DF1357975391519F03 (const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m139F4C59174EFB13F80AD10837BD0760E0B97835 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void CW.Common.CwDemoButton::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButton_LoadLevel_mA1408FF58831E46A531AFE7C9839AFAD537B0924 (int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByBuildIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneByBuildIndex_mDD0D6B69576B1A6087F9826648247CCAC0E2AF47 (int32_t ___buildIndex0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_path_m1B2CE5FA0F1875C94621EE44BECD5E5C39EBF8BE (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCountInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCountInBuildSettings_m4C1935F106D645DF6098310323D0F5EED8B0A564 (const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// UnityEngine.GameObject CW.Common.CwDemoButtonBuilder::DoInstantiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * CwDemoButtonBuilder_DoInstantiate_m9C6578CD922ECF4CBEB41CC143BE298714D330B6 (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<CW.Common.CwDemoButton>()
inline CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * GameObject_GetComponent_TisCwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9_mE338E4A2DE6920762B9DB637E08B93A240A2134F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void CW.Common.CwDemoButton::set_IsolateTarget(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CwDemoButton_set_IsolateTarget_m56237BF26DDDC298C8751D2B45B8D739C6086B01_inline (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<CW.Common.CwDemoButtonBuilder>(System.Boolean)
inline CwDemoButtonBuilderU5BU5D_t4A70D589EC0841F2D1AF2474AD33E5E2B4989F49* Component_GetComponentsInChildren_TisCwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B_m0D91A4B384E3062E3EB6BBA8A618320443183208 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  CwDemoButtonBuilderU5BU5D_t4A70D589EC0841F2D1AF2474AD33E5E2B4989F49* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// System.Void CW.Common.CwDemoButtonBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButtonBuilder_Build_mA04C1F6E5BF7689B1A7456602ECA2038CC2148D7 (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform,System.Boolean)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void CW.Common.CwDepthTextureMode::UpdateDepthMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDepthTextureMode_UpdateDepthMode_m5A19C2C38AA44469CF96FC6FBFC0FA4753D8CB71 (CwDepthTextureMode_t62CC937DA3EE0B6FCBC25CCD24396A050F4797B9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void CW.Common.CwFollow::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_UpdatePosition_m88A9AA964697435F74F3BECB93BB6A666BEDA4A2 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Convert_FromBase64String_mB2E4E2CD03B34DB7C2665694D5B2E967BC81E9A8 (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<UnityEngine.Random/State>::.ctor()
inline void Stack_1__ctor_m69162031460D8A5A90C92036736B044145EC54C6 (Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 *, const RuntimeMethod*))Stack_1__ctor_m69162031460D8A5A90C92036736B044145EC54C6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock>::.ctor()
inline void List_1__ctor_m7DDB158E18477D8590513E5FDFF2124447EF0088 (List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<UnityEngine.RenderTexture>::.ctor()
inline void Stack_1__ctor_m4894E96536A05123AB38699CDB34E96D04D7288F (Stack_1_t469243EEB74368B7691A7AA38163A13188939070 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t469243EEB74368B7691A7AA38163A13188939070 *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback__ctor_m6E26A220911F56F3E8936DDD217ED76A15B1915E (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9 (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m503CFC42924101FFC7AAB45FD1EE567AECFB2DDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginCameraRendering_mFD39085AC9718190F30434932156BCE641DC1454 (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_endCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_endCameraRendering_mFE12E577DA1BB3EC202B1C1F82546713BB8B4F04 (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void CW.Common.CwHelper::BeginSeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_BeginSeed_mEEA628D06359775E7E799C099E8523086ED5FDC0 (int32_t ___newSeed0, const RuntimeMethod* method);
// UnityEngine.Random/State UnityEngine.Random::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t8E62E640CAE29BF61164F51619D1C04936074C15  Random_get_state_mB5BB303DE4D0FD30AB8C8060EC0925C38A4A9020 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<UnityEngine.Random/State>::Push(!0)
inline void Stack_1_Push_mEAD1FC02E5EE989C3C1A1EE85F107B7CCC3D3932 (Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * __this, State_t8E62E640CAE29BF61164F51619D1C04936074C15  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 *, State_t8E62E640CAE29BF61164F51619D1C04936074C15 , const RuntimeMethod*))Stack_1_Push_mEAD1FC02E5EE989C3C1A1EE85F107B7CCC3D3932_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C (int32_t ___seed0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<UnityEngine.Random/State>::Pop()
inline State_t8E62E640CAE29BF61164F51619D1C04936074C15  Stack_1_Pop_m6CF5DFD72EDCAD3E4A16E32BA17F20D2336689CD (Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * __this, const RuntimeMethod* method)
{
	return ((  State_t8E62E640CAE29BF61164F51619D1C04936074C15  (*) (Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 *, const RuntimeMethod*))Stack_1_Pop_m6CF5DFD72EDCAD3E4A16E32BA17F20D2336689CD_gshared)(__this, method);
}
// System.Void UnityEngine.Random::set_state(UnityEngine.Random/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_set_state_m10870B08C03C9B4058B410F1ABD056946D392E3A (State_t8E62E640CAE29BF61164F51619D1C04936074C15  ___value0, const RuntimeMethod* method);
// UnityEngine.Color CW.Common.CwHelper::ToGamma(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  CwHelper_ToGamma_m1C0A4A5E1D992F16674EF36506E2F6348C62F288 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___linear0, const RuntimeMethod* method);
// System.Single CW.Common.CwHelper::Saturate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_Saturate_m0A1656389CBCE232156CA7CE073330876A2D8EA9 (float ___c0, const RuntimeMethod* method);
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_linear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_linear_m56FB2709C862D1A8E2B16B646FCD2E5FDF3CA904 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gamma()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gamma_mB6C6DA08F57C698AAB65B93F16B58F7C3F8F7E16 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, const RuntimeMethod* method);
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247 (float ___val10, float ___val21, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<UnityEngine.RenderTexture>::Push(!0)
inline void Stack_1_Push_mF72377724F3ACCBA748983793EE35172B54007C0 (Stack_1_t469243EEB74368B7691A7AA38163A13188939070 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t469243EEB74368B7691A7AA38163A13188939070 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<UnityEngine.RenderTexture>::Pop()
inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * Stack_1_Pop_m463049A3D63030CC79C8E01687070A6E12C16C89 (Stack_1_t469243EEB74368B7691A7AA38163A13188939070 * __this, const RuntimeMethod* method)
{
	return ((  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * (*) (Stack_1_t469243EEB74368B7691A7AA38163A13188939070 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
inline void List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock>::Clear()
inline void List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9 (List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0)
inline void List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock>::Add(!0)
inline void List_1_Add_m34A07B5F2BA0E1FC616DB5D30698A80A8162C541 (List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * __this, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 *, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Material>::ToArray()
inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	return ((  MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m9838EC09412E988925C4670E8E355E5EEFE35A25 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___value0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Material CW.Common.CwHelper::CreateTempMaterial(System.String,UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * CwHelper_CreateTempMaterial_mBE6B2217F25BEDB74197529D017196DB1D54D8E6 (String_t* ___materialName0, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.GameObject CW.Common.CwHelper::CreateGameObject(System.String,System.Int32,UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * CwHelper_CreateGameObject_mF686F3A1091C13F70AE98083523BF437234F55D7 (String_t* ___name0, int32_t ___layer1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition3, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___localRotation4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale5, String_t* ___recordUndo6, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::.ctor(System.Int32,System.Int32,UnityEngine.RenderTextureFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor__ctor_mB0D252CE93C0E10D01FD10C5C454B0645A16BEE3 (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___width0, int32_t ___height1, int32_t ___colorFormat2, int32_t ___depthBufferBits3, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_m7997BAA9A1DFE4D9D1B9F5047ECEE8464835B8DF (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___desc0, const RuntimeMethod* method);
// System.Void CW.Common.CwHelper::BeginActive(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_BeginActive_m916D2CDB069D2E75FE57C45111C1AF0ED9BC27A3 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___renderTexture0, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// System.Void CW.Common.CwHelper::EndActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_EndActive_m3BE05D7EF5E6CC92F148A2FC05BA3754CE898C06 (const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mCED0E66949120E69BFE9294DC0A11A6F9FDBD129 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Touch::get_pressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Touch_get_pressure_mD9B5B0AE17E051F0273CF1155998BC2342035CD4 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_mousePresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5 (const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::Clear()
inline void List_1_Clear_m8866013E95EF79D191587164D59BB8F7D6979AF0 (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::GetEnumerator()
inline Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  (*) (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<CW.Common.CwInputManager/Finger>::get_Current()
inline Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_inline (Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE * __this, const RuntimeMethod* method)
{
	return ((  Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * (*) (Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::Add(!0)
inline void List_1_Add_mFFA36DD93284ADED6769B0CEAB6312034A34E30C (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 *, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<CW.Common.CwInputManager/Finger>::MoveNext()
inline bool Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03 (Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<CW.Common.CwInputManager/Finger>::Dispose()
inline void Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54 (Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> CW.Common.CwInputManager::RaycastGui(UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * CwInputManager_RaycastGui_mF2389B0DEF27B9EBBB00B095DDF55E438C205A08 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, int32_t ___guiLayers1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, const RuntimeMethod*))List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
inline void List_1_Clear_m5D88EA8AA491CFF029747A32EF3F1793EE7B135B (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, const RuntimeMethod*))List_1_Clear_m5D88EA8AA491CFF029747A32EF3F1793EE7B135B_gshared)(__this, method);
}
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_m45A359AEC0BED3D47B50A862A2F69911373DE934 (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___raycastResults1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, int32_t, const RuntimeMethod*))List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9 (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::get_Count()
inline int32_t List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single CW.Common.CwInputManager::get_ScaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInputManager_get_ScaleFactor_m63BB3525D25E6CD46D2F376E283895E824B7EE47 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 CW.Common.CwInputManager::GetAveragePosition(System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInputManager_GetAveragePosition_mF75F8B3F6398662A234BC0189415484E7FD6B8AB (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___fingers0, const RuntimeMethod* method);
// UnityEngine.Vector2 CW.Common.CwInputManager::GetAverageOldPosition(System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInputManager_GetAverageOldPosition_mCB88199092F23B284BA24E3A0DF2B2B909FC5C5A (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___fingers0, const RuntimeMethod* method);
// System.Single CW.Common.CwInputManager::GetDeltaRadians(CW.Common.CwInputManager/Finger,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInputManager_GetDeltaRadians_mE931AFAE51CA19921890A54EE5844458B3428D11 (Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___finger0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___referencePoint1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lastReferencePoint2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<CW.Common.CwInputManager>()
inline CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * Object_FindObjectOfType_TisCwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_m47AD7512D17094FEFA2816091989A48438F41B10 (const RuntimeMethod* method)
{
	return ((  CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<CW.Common.CwInputManager>()
inline CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * GameObject_AddComponent_TisCwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_m9100DAE1F99BB2ACAF476AE8CA0D52412DA165C7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::get_Item(System.Int32)
inline Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * List_1_get_Item_m8B6D3CA49A5B2FBFCD9190085DA9D19105AD3940_inline (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * (*) (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mF7D7BDEE46F308F1D8BC6CEF07343CDD841FFE4F (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.Stack`1<CW.Common.CwInputManager/Finger>::Push(!0)
inline void Stack_1_Push_m53F9BF01850D237B074FE4EE875746BB35A7D751 (Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E *, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Int32 CW.Common.CwInput::GetTouchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwInput_GetTouchCount_m7132F160260D0D8E08D63AAE763842D44039459A (const RuntimeMethod* method);
// System.Void CW.Common.CwInput::GetTouch(System.Int32,System.Int32&,UnityEngine.Vector2&,System.Single&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInput_GetTouch_mF112E0705B5C608003D99002F7BD621FC09B1C1E (int32_t ___index0, int32_t* ___id1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___position2, float* ___pressure3, bool* ___set4, const RuntimeMethod* method);
// System.Void CW.Common.CwInputManager::AddFinger(System.Int32,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_AddFinger_m32CDEF2F29BE854008316FBEB79C27A7345440DF (CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * __this, int32_t ___index0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition1, float ___pressure2, bool ___up3, const RuntimeMethod* method);
// System.Boolean CW.Common.CwInput::GetMouseIsHeld(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetMouseIsHeld_m52F193B06A3A5B0A5280498CCEA63D33F2B62B5F (int32_t ___index0, const RuntimeMethod* method);
// System.Boolean CW.Common.CwInput::GetMouseWentUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetMouseWentUp_mE892979578B4B9997E02D4A7D4F631E4B512882D (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 CW.Common.CwInput::GetMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInput_GetMousePosition_m8BFEDF8A65C7AFF8C4CE871A5DAD24E38BE1EE54 (const RuntimeMethod* method);
// System.Void System.Action`1<CW.Common.CwInputManager/Finger>::Invoke(!0)
inline void Action_1_Invoke_mF11819FFC8E11495D515B2F62E0220A9519F4064 (Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// CW.Common.CwInputManager/Finger CW.Common.CwInputManager::FindFinger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * CwInputManager_FindFinger_m1242A02074881DA86B426437FA143050BB6642A8 (CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<CW.Common.CwInputManager/Finger>::get_Count()
inline int32_t Stack_1_get_Count_m90D559C4940F65AB3C9FA6342058A5BF979EE4E6_inline (Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// System.Void CW.Common.CwInputManager/Finger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Finger__ctor_mA5D2A6FF22CECB566F45C4AD2054BA9EFE121DD7 (Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<CW.Common.CwInputManager/Finger>::Pop()
inline Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * Stack_1_Pop_mB76E5CDBB96C682804DB8CAF62019C27F3117881 (Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E * __this, const RuntimeMethod* method)
{
	return ((  Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * (*) (Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Boolean CW.Common.CwInputManager::PointOverGui(UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInputManager_PointOverGui_m0D056023B9BA1A3A7208B1848CDDDFC682C0D159 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, int32_t ___guiLayers1, const RuntimeMethod* method);
// System.Single CW.Common.CwInputManager::HermiteInterpolate(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInputManager_HermiteInterpolate_m5CF4967A19AC3950938FA7B21B6E316C5B4C5322 (float ___y00, float ___y11, float ___y22, float ___y33, float ___mu4, float ___mu25, float ___mu36, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single CW.Common.CwInputManager::GetRadians(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInputManager_GetRadians_mF2DB9C38D8F578278E19EF0D9398AE3E096A7C9D (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___referencePoint1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE (float ___t0, float ___length1, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C (int32_t ___intVal0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
inline void List_1__ctor_mD1F29CADB45CDC47AE42C4E6A2EF86681F37F9E4 (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, int32_t, const RuntimeMethod*))List_1__ctor_mD1F29CADB45CDC47AE42C4E6A2EF86681F37F9E4_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::.ctor()
inline void List_1__ctor_mC21FF125DF7502D850E75E21D9C3A2C8F183041F (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<CW.Common.CwInputManager/Finger>::.ctor()
inline void Stack_1__ctor_m1DD36665492168AB97F9AF4CC6B7161CD41CB4BA (Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_tA2F349FE839781469A0344CF6039B51512394275 * Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Light_tA2F349FE839781469A0344CF6039B51512394275 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean CW.Common.CwShaderBundle::IsStandard(CW.Common.CwShaderBundle/Pipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwShaderBundle_IsStandard_mBBB6EF827FA60A9455D57B1023161D04CD6858A2 (int32_t ___pipe0, const RuntimeMethod* method);
// System.Void CW.Common.CwLightIntensity::ApplyIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwLightIntensity_ApplyIntensity_m1B50241C83C8E300BD4048371CD09D9F1D6328CE (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, float ___intensity0, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<CW.Common.CwRoot>::get_Count()
inline int32_t List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_inline (List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<CW.Common.CwRoot>::get_Item(System.Int32)
inline CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * List_1_get_Item_m65685DB34513A8BD0BCEC7BF3618C468764D6DD5_inline (List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * (*) (List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !!0 UnityEngine.GameObject::AddComponent<CW.Common.CwRoot>()
inline CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * GameObject_AddComponent_TisCwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_mCAC6CC94A7CFA5CF3BFA775F6E000DEDCD46DF1C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CW.Common.CwRoot>::Add(!0)
inline void List_1_Add_m35730E7FE7953C0E294C503E0020D8A6227072DA (List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * __this, CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 *, CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<CW.Common.CwRoot>::Remove(!0)
inline bool List_1_Remove_mBC15F699CED7C1BB5F3B3EF4A154E280EB081DD9 (List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * __this, CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 *, CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<CW.Common.CwRoot>::.ctor()
inline void List_1__ctor_m8C5A32893A8BADD7A904C56CE8B10DAAAE34C3F2 (List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CW.Common.CwShaderBundle/ShaderVariant>::.ctor()
inline void List_1__ctor_m066F767F4F8D483FA602C86BB904F1DB1E429868 (List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<CW.Common.CwShaderBundle/ShaderVariant>::GetEnumerator()
inline Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA  List_1_GetEnumerator_mFAA1DC20EE261247AEEF3B77E2BE2672DFE87290 (List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA  (*) (List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<CW.Common.CwShaderBundle/ShaderVariant>::get_Current()
inline ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB * Enumerator_get_Current_m4FD523554758BD1E360641A9A48C7EE5641A7B29_inline (Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA * __this, const RuntimeMethod* method)
{
	return ((  ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB * (*) (Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<CW.Common.CwShaderBundle/ShaderVariant>::MoveNext()
inline bool Enumerator_MoveNext_m6AF512E04EA0E019FE56D468FEAF4CABBBB397A2 (Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<CW.Common.CwShaderBundle/ShaderVariant>::Dispose()
inline void Enumerator_Dispose_m84A5DAB222193F19C8E620E93C06AC279D9FA17B (Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m12CA3C3D8C75E44FBFA73E2E34D9E743AF732B1E (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E (const RuntimeMethod* method);
// UnityEngine.Rendering.RenderPipelineAsset UnityEngine.Rendering.GraphicsSettings::get_currentRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF * GraphicsSettings_get_currentRenderPipeline_mDEBD1CD71B0917F918D9860C9351943A9677ADCA (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void CW.Common.CwHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3D833034BB724B5CDDB6C3EC41C8687BD9E2E27A (U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Camera>::Invoke(!0)
inline void Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136 (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger> CW.Common.CwInputManager::GetFingers(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * CwInputManager_GetFingers_mB6B736369E6D946BA7B187338E96CE3FEE56A5CF (bool ___ignoreStartedOverGui0, bool ___ignoreHover1, const RuntimeMethod* method);
// System.Boolean CW.Common.CwInput::GetKeyIsHeld(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetKeyIsHeld_m3F730B19A5A12381D7C1438FA71CBBF10B9ABA40 (int32_t ___oldKey0, const RuntimeMethod* method);
// UnityEngine.Vector2 CW.Common.CwInputManager::GetAverageDeltaScaled(System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInputManager_GetAverageDeltaScaled_m15C33507725EB67A0BC38D1C2478DFD8801F8E17 (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___fingers0, const RuntimeMethod* method);
// System.Single CW.Common.CwInputManager::GetAverageTwistRadians(System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInputManager_GetAverageTwistRadians_m05DEDF9443F2E701CBF1CBB68378F65E635D99D5 (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___fingers0, const RuntimeMethod* method);
// UnityEngine.Vector2 CW.Common.CwInputManager::GetAveragePullScaled(System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInputManager_GetAveragePullScaled_m96B901B599304E891E73BB66F106D69CFD80DA3E (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___fingers0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 CW.Common.CwInputManager::Hermite(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInputManager_Hermite_m0507F7DED4EB496EDE807D0DA6D3FFEEA9D8A361 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___c2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___d3, float ___t4, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::LerpUnclamped(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_LerpUnclamped_m144E59E67DEF95116D4736771F862202FF602097_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void CW.Common.CwInputManager/Trigger::.ctor(System.Boolean,System.Boolean,UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger__ctor_m29FBFE58CAA2197661060AAF75E5E720E3478C94 (Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * __this, bool ___uFinger0, bool ___uMouse1, int32_t ___uKey2, const RuntimeMethod* method);
// System.Boolean CW.Common.CwInput::GetKeyWentDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetKeyWentDown_mC2ACF3F2A6A961A3EA35FCD029D8667632B4C1C8 (int32_t ___oldKey0, const RuntimeMethod* method);
// System.Boolean CW.Common.CwInputManager/Trigger::WentDown(CW.Common.CwInputManager/Finger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Trigger_WentDown_mA2543329904D0039627FBCEA76F2C9D9E0B8D5D0 (Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___finger0, const RuntimeMethod* method);
// System.Boolean CW.Common.CwInputManager/Trigger::IsDown(CW.Common.CwInputManager/Finger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Trigger_IsDown_m64FF40DF49EC1322FF2F35BDC333C3B344A3B299 (Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___finger0, const RuntimeMethod* method);
// System.Boolean CW.Common.CwInput::GetKeyWentUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetKeyWentUp_mD9BC04BDFFBFE213221F83728187992D83F7F7FF (int32_t ___oldKey0, const RuntimeMethod* method);
// System.Boolean CW.Common.CwInputManager/Trigger::WentUp(CW.Common.CwInputManager/Finger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Trigger_WentUp_m3E7A7EE30E3630D55D4ED91521EA67180EB7F6CE (Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___finger0, bool ___useAnyFinger1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwCameraLook::set_Listen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_set_Listen_m6A049B68941326BA79B68B2D7D554B6D79A615DB (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		bool L_0 = ___value0;
		__this->set_listen_4(L_0);
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		return;
	}
}
// System.Boolean CW.Common.CwCameraLook::get_Listen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwCameraLook_get_Listen_mBB057478F19AB803F398C0959C80E3316C77A96A (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	{
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		bool L_0 = __this->get_listen_4();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraLook::set_Damping(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_set_Damping_m3FBB471BDC06D15381C257F36C94A6C1B63ABE4E (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		float L_0 = ___value0;
		__this->set_damping_5(L_0);
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		return;
	}
}
// System.Single CW.Common.CwCameraLook::get_Damping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwCameraLook_get_Damping_m765D60E6625F649092A63360589A8A2E5DC92EFD (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		float L_0 = __this->get_damping_5();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraLook::set_Sensitivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_set_Sensitivity_m12682FB1D8A5A565E667C893DC12493CA680F601 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Sensitivity { set { sensitivity = value; } get { return sensitivity; } } [SerializeField] private float sensitivity = 1.0f;
		float L_0 = ___value0;
		__this->set_sensitivity_6(L_0);
		// public float Sensitivity { set { sensitivity = value; } get { return sensitivity; } } [SerializeField] private float sensitivity = 1.0f;
		return;
	}
}
// System.Single CW.Common.CwCameraLook::get_Sensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwCameraLook_get_Sensitivity_m186BE6253F5E0727396EC0B057ED1D6D46F5ADF9 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	{
		// public float Sensitivity { set { sensitivity = value; } get { return sensitivity; } } [SerializeField] private float sensitivity = 1.0f;
		float L_0 = __this->get_sensitivity_6();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraLook::set_PitchControls(CW.Common.CwInputManager/Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_set_PitchControls_mBC3E4B87F287BE0A753EBA74115FE448C7A8A114 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___value0, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis PitchControls { set { pitchControls = value; } get { return pitchControls; } } [SerializeField] private CwInputManager.Axis pitchControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.VerticalDrag, -10.0f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = ___value0;
		__this->set_pitchControls_7(L_0);
		// public CwInputManager.Axis PitchControls { set { pitchControls = value; } get { return pitchControls; } } [SerializeField] private CwInputManager.Axis pitchControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.VerticalDrag, -10.0f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		return;
	}
}
// CW.Common.CwInputManager/Axis CW.Common.CwCameraLook::get_PitchControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  CwCameraLook_get_PitchControls_m14BA88DD62FC0204EAB69831DE33D683341A1ADE (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis PitchControls { set { pitchControls = value; } get { return pitchControls; } } [SerializeField] private CwInputManager.Axis pitchControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.VerticalDrag, -10.0f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = __this->get_pitchControls_7();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraLook::set_YawControls(CW.Common.CwInputManager/Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_set_YawControls_mB793CF5439E4A26A7D8322A48B5B658380C19EF8 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___value0, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis YawControls { set { yawControls = value; } get { return yawControls; } } [SerializeField] private CwInputManager.Axis yawControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.HorizontalDrag, 10.0f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = ___value0;
		__this->set_yawControls_8(L_0);
		// public CwInputManager.Axis YawControls { set { yawControls = value; } get { return yawControls; } } [SerializeField] private CwInputManager.Axis yawControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.HorizontalDrag, 10.0f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		return;
	}
}
// CW.Common.CwInputManager/Axis CW.Common.CwCameraLook::get_YawControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  CwCameraLook_get_YawControls_m2FFE8C4D5C19694C284E47D25D5C936874549ECE (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis YawControls { set { yawControls = value; } get { return yawControls; } } [SerializeField] private CwInputManager.Axis yawControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.HorizontalDrag, 10.0f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = __this->get_yawControls_8();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraLook::set_RollControls(CW.Common.CwInputManager/Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_set_RollControls_m06734661FA55E425277EBD591AA00F9782080B13 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___value0, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis RollControls { set { rollControls = value; } get { return rollControls; } } [SerializeField] private CwInputManager.Axis rollControls = new CwInputManager.Axis(2, true, CwInputManager.AxisGesture.Twist, 1.0f, KeyCode.E, KeyCode.Q, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = ___value0;
		__this->set_rollControls_9(L_0);
		// public CwInputManager.Axis RollControls { set { rollControls = value; } get { return rollControls; } } [SerializeField] private CwInputManager.Axis rollControls = new CwInputManager.Axis(2, true, CwInputManager.AxisGesture.Twist, 1.0f, KeyCode.E, KeyCode.Q, KeyCode.None, KeyCode.None, 45.0f);
		return;
	}
}
// CW.Common.CwInputManager/Axis CW.Common.CwCameraLook::get_RollControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  CwCameraLook_get_RollControls_m40988D86C45DB3EAD8B329DBD7B158D31E29C688 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis RollControls { set { rollControls = value; } get { return rollControls; } } [SerializeField] private CwInputManager.Axis rollControls = new CwInputManager.Axis(2, true, CwInputManager.AxisGesture.Twist, 1.0f, KeyCode.E, KeyCode.Q, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = __this->get_rollControls_9();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_Start_m13DC1E1E87666882F44E43FC8C5F83DBD67610F0 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CwInputManager.EnsureThisComponentExists();
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		CwInputManager_EnsureThisComponentExists_m9E2FBB171985D87EAA3E203069C20A820D21692A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraLook::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_OnDisable_mA67C8BB831AED8E3665F47CA436DD3ECD09B5ED9 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_Update_m13BCD96DEC4CCC5D87A217470968B8DC8807DB81 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	{
		// if (listen == true)
		bool L_0 = __this->get_listen_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// AddToDelta();
		CwCameraLook_AddToDelta_m7C47F6E3F43D73ACF9927740C3E1D12A404085D5(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// DampenDelta();
		CwCameraLook_DampenDelta_m7B54D4C90601B20D95F7F67617BA52224FCF627E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraLook::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_OnApplicationFocus_m8DCFE27B49D21F65F7E676C18EE8170D26DB8A9F (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, bool ___focus0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraLook::AddToDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_AddToDelta_m7C47F6E3F43D73ACF9927740C3E1D12A404085D5 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var delta = default(Vector3);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// delta.x = pitchControls.GetValue(Time.deltaTime);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * L_0 = __this->get_address_of_pitchControls_7();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_2;
		L_2 = Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C((Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 *)L_0, L_1, /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_2);
		// delta.y =   yawControls.GetValue(Time.deltaTime);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * L_3 = __this->get_address_of_yawControls_8();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_5;
		L_5 = Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C((Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 *)L_3, L_4, /*hidden argument*/NULL);
		(&V_0)->set_y_3(L_5);
		// delta.z =  rollControls.GetValue(Time.deltaTime);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * L_6 = __this->get_address_of_rollControls_9();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_8;
		L_8 = Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C((Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 *)L_6, L_7, /*hidden argument*/NULL);
		(&V_0)->set_z_4(L_8);
		// delta *= sensitivity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = __this->get_sensitivity_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// var oldRotation = transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// transform.Rotate(delta.x, delta.y, 0.0f, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		float L_16 = L_15.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		float L_18 = L_17.get_y_3();
		NullCheck(L_14);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_14, L_16, L_18, (0.0f), 1, /*hidden argument*/NULL);
		// transform.Rotate(0.0f, 0.0f, delta.z, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_0;
		float L_21 = L_20.get_z_4();
		NullCheck(L_19);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_19, (0.0f), (0.0f), L_21, 1, /*hidden argument*/NULL);
		// remainingDelta *= Quaternion.Inverse(oldRotation) * transform.localRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22 = __this->get_remainingDelta_10();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_23, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_25, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_24, L_26, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28;
		L_28 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_22, L_27, /*hidden argument*/NULL);
		__this->set_remainingDelta_10(L_28);
		// transform.localRotation = oldRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30 = V_1;
		NullCheck(L_29);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_29, L_30, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraLook::DampenDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook_DampenDelta_m7B54D4C90601B20D95F7F67617BA52224FCF627E (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var factor   = CwHelper.DampenFactor(damping, Time.deltaTime);
		float L_0 = __this->get_damping_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = CwHelper_DampenFactor_mAC5C9507C2B790590B77EB007310BFFE2B2A63EA(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var newDelta = Quaternion.Slerp(remainingDelta, Quaternion.identity, factor);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = __this->get_remainingDelta_10();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		float L_5 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// transform.localRotation = transform.localRotation * Quaternion.Inverse(newDelta) * remainingDelta;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_10, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_9, L_11, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = __this->get_remainingDelta_10();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_7, L_14, /*hidden argument*/NULL);
		// remainingDelta = newDelta;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = V_1;
		__this->set_remainingDelta_10(L_15);
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraLook__ctor_m79CD987253D8E246CEDE8C684659952A4FE00C53 (CwCameraLook_t00602A4712AE66AB58A8081BB28F3143713EF06C * __this, const RuntimeMethod* method)
{
	{
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		__this->set_listen_4((bool)1);
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		__this->set_damping_5((10.0f));
		// public float Sensitivity { set { sensitivity = value; } get { return sensitivity; } } [SerializeField] private float sensitivity = 1.0f;
		__this->set_sensitivity_6((1.0f));
		// public CwInputManager.Axis PitchControls { set { pitchControls = value; } get { return pitchControls; } } [SerializeField] private CwInputManager.Axis pitchControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.VerticalDrag, -10.0f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB((&L_0), 1, (bool)1, 1, (-10.0f), 0, 0, 0, 0, (45.0f), /*hidden argument*/NULL);
		__this->set_pitchControls_7(L_0);
		// public CwInputManager.Axis YawControls { set { yawControls = value; } get { return yawControls; } } [SerializeField] private CwInputManager.Axis yawControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.HorizontalDrag, 10.0f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB((&L_1), 1, (bool)1, 0, (10.0f), 0, 0, 0, 0, (45.0f), /*hidden argument*/NULL);
		__this->set_yawControls_8(L_1);
		// public CwInputManager.Axis RollControls { set { rollControls = value; } get { return rollControls; } } [SerializeField] private CwInputManager.Axis rollControls = new CwInputManager.Axis(2, true, CwInputManager.AxisGesture.Twist, 1.0f, KeyCode.E, KeyCode.Q, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB((&L_2), 2, (bool)1, 2, (1.0f), ((int32_t)101), ((int32_t)113), 0, 0, (45.0f), /*hidden argument*/NULL);
		__this->set_rollControls_9(L_2);
		// private Quaternion remainingDelta = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_remainingDelta_10(L_3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwCameraMove::set_Listen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_set_Listen_m452B89B249F04BB25AE3A832567A9A9603DA16BD (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		bool L_0 = ___value0;
		__this->set_listen_4(L_0);
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		return;
	}
}
// System.Boolean CW.Common.CwCameraMove::get_Listen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwCameraMove_get_Listen_mAAA29ABD13F1A0B7E6E2DAF2F475DE9CDB36EBD3 (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method)
{
	{
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		bool L_0 = __this->get_listen_4();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraMove::set_Damping(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_set_Damping_mFF8C490CE5F788A1E1BFC7D9A075C83AC23100E8 (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		float L_0 = ___value0;
		__this->set_damping_5(L_0);
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		return;
	}
}
// System.Single CW.Common.CwCameraMove::get_Damping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwCameraMove_get_Damping_m0E1A2EA0FB187531E586C5A6B37BFEEB216F414E (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method)
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		float L_0 = __this->get_damping_5();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraMove::set_Sensitivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_set_Sensitivity_m1ED18C230286E16BB909F65025719B2B099C5C82 (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Sensitivity { set { sensitivity = value; } get { return sensitivity; } } [SerializeField] private float sensitivity = 1.0f;
		float L_0 = ___value0;
		__this->set_sensitivity_6(L_0);
		// public float Sensitivity { set { sensitivity = value; } get { return sensitivity; } } [SerializeField] private float sensitivity = 1.0f;
		return;
	}
}
// System.Single CW.Common.CwCameraMove::get_Sensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwCameraMove_get_Sensitivity_m18953A2883F86B926710117B3CE3194FEC587079 (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method)
{
	{
		// public float Sensitivity { set { sensitivity = value; } get { return sensitivity; } } [SerializeField] private float sensitivity = 1.0f;
		float L_0 = __this->get_sensitivity_6();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraMove::set_HorizontalControls(CW.Common.CwInputManager/Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_set_HorizontalControls_m9A1FBE904DCA2BBC51461146F393AAF21EB3B00A (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___value0, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis HorizontalControls { set { horizontalControls = value; } get { return horizontalControls; } } [SerializeField] private CwInputManager.Axis horizontalControls = new CwInputManager.Axis(2, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.A, KeyCode.D, KeyCode.LeftArrow, KeyCode.RightArrow, 100.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = ___value0;
		__this->set_horizontalControls_7(L_0);
		// public CwInputManager.Axis HorizontalControls { set { horizontalControls = value; } get { return horizontalControls; } } [SerializeField] private CwInputManager.Axis horizontalControls = new CwInputManager.Axis(2, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.A, KeyCode.D, KeyCode.LeftArrow, KeyCode.RightArrow, 100.0f);
		return;
	}
}
// CW.Common.CwInputManager/Axis CW.Common.CwCameraMove::get_HorizontalControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  CwCameraMove_get_HorizontalControls_m7206B5408BB6EEFBA6135951CC5B5DB7751E8A05 (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis HorizontalControls { set { horizontalControls = value; } get { return horizontalControls; } } [SerializeField] private CwInputManager.Axis horizontalControls = new CwInputManager.Axis(2, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.A, KeyCode.D, KeyCode.LeftArrow, KeyCode.RightArrow, 100.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = __this->get_horizontalControls_7();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraMove::set_DepthControls(CW.Common.CwInputManager/Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_set_DepthControls_mA502A99BC9652022ED4BA97592B70EBD34CB657E (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___value0, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis DepthControls { set { depthControls = value; } get { return depthControls; } } [SerializeField] private CwInputManager.Axis depthControls = new CwInputManager.Axis(2, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.S, KeyCode.W, KeyCode.DownArrow, KeyCode.UpArrow, 100.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = ___value0;
		__this->set_depthControls_8(L_0);
		// public CwInputManager.Axis DepthControls { set { depthControls = value; } get { return depthControls; } } [SerializeField] private CwInputManager.Axis depthControls = new CwInputManager.Axis(2, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.S, KeyCode.W, KeyCode.DownArrow, KeyCode.UpArrow, 100.0f);
		return;
	}
}
// CW.Common.CwInputManager/Axis CW.Common.CwCameraMove::get_DepthControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  CwCameraMove_get_DepthControls_mBF7953911DE986E241BF9C2E44A28306B9EED395 (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis DepthControls { set { depthControls = value; } get { return depthControls; } } [SerializeField] private CwInputManager.Axis depthControls = new CwInputManager.Axis(2, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.S, KeyCode.W, KeyCode.DownArrow, KeyCode.UpArrow, 100.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = __this->get_depthControls_8();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraMove::set_VerticalControls(CW.Common.CwInputManager/Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_set_VerticalControls_m50FEBCB7FCA5B2CFC136FED875DFD2DD500585AE (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___value0, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis VerticalControls { set { verticalControls = value; } get { return verticalControls; } } [SerializeField] private CwInputManager.Axis verticalControls = new CwInputManager.Axis(3, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.F, KeyCode.R, KeyCode.None, KeyCode.None, 100.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = ___value0;
		__this->set_verticalControls_9(L_0);
		// public CwInputManager.Axis VerticalControls { set { verticalControls = value; } get { return verticalControls; } } [SerializeField] private CwInputManager.Axis verticalControls = new CwInputManager.Axis(3, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.F, KeyCode.R, KeyCode.None, KeyCode.None, 100.0f);
		return;
	}
}
// CW.Common.CwInputManager/Axis CW.Common.CwCameraMove::get_VerticalControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  CwCameraMove_get_VerticalControls_mCAD2C27F60041FB4040BCFEF7DAC85433F6C84FE (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis VerticalControls { set { verticalControls = value; } get { return verticalControls; } } [SerializeField] private CwInputManager.Axis verticalControls = new CwInputManager.Axis(3, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.F, KeyCode.R, KeyCode.None, KeyCode.None, 100.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = __this->get_verticalControls_9();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_Start_mD875088812DDA35FDDCADE3F12DC69CDAE081A4C (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CwInputManager.EnsureThisComponentExists();
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		CwInputManager_EnsureThisComponentExists_m9E2FBB171985D87EAA3E203069C20A820D21692A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_Update_m83B350E78E7939EE0488CE9A7632553EAD29D9ED (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method)
{
	{
		// if (listen == true)
		bool L_0 = __this->get_listen_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// AddToDelta();
		CwCameraMove_AddToDelta_m5E51DC879E0A1FC2160A12319D8C246164537762(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// DampenDelta();
		CwCameraMove_DampenDelta_mD80D481D712006D88C316D7DF2076F86D4AF8747(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraMove::AddToDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_AddToDelta_m5E51DC879E0A1FC2160A12319D8C246164537762 (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var delta = default(Vector3);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// delta.x = horizontalControls.GetValue(Time.deltaTime);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * L_0 = __this->get_address_of_horizontalControls_7();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_2;
		L_2 = Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C((Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 *)L_0, L_1, /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_2);
		// delta.y = verticalControls  .GetValue(Time.deltaTime);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * L_3 = __this->get_address_of_verticalControls_9();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_5;
		L_5 = Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C((Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 *)L_3, L_4, /*hidden argument*/NULL);
		(&V_0)->set_y_3(L_5);
		// delta.z = depthControls     .GetValue(Time.deltaTime);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * L_6 = __this->get_address_of_depthControls_8();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_8;
		L_8 = Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C((Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 *)L_6, L_7, /*hidden argument*/NULL);
		(&V_0)->set_z_4(L_8);
		// var oldPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// transform.Translate(delta * sensitivity * Time.deltaTime, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		float L_13 = __this->get_sensitivity_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_13, /*hidden argument*/NULL);
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE(L_11, L_16, 1, /*hidden argument*/NULL);
		// var acceleration = transform.position - oldPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// remainingDelta += acceleration;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get_remainingDelta_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_21, L_22, /*hidden argument*/NULL);
		__this->set_remainingDelta_10(L_23);
		// transform.position = oldPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_1;
		NullCheck(L_24);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraMove::DampenDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove_DampenDelta_mD80D481D712006D88C316D7DF2076F86D4AF8747 (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var factor   = CwHelper.DampenFactor(damping, Time.deltaTime);
		float L_0 = __this->get_damping_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = CwHelper_DampenFactor_mAC5C9507C2B790590B77EB007310BFFE2B2A63EA(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var newDelta = Vector3.Lerp(remainingDelta, Vector3.zero, factor);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_remainingDelta_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// transform.position += remainingDelta - newDelta;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7;
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_remainingDelta_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_10, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_13, /*hidden argument*/NULL);
		// remainingDelta = newDelta;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		__this->set_remainingDelta_10(L_14);
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraMove__ctor_m3CE9645A35BF24D1A085FCC541081D95107558D1 (CwCameraMove_t4A7627AE6107F7D913026D78087A8826FDE2EE36 * __this, const RuntimeMethod* method)
{
	{
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		__this->set_listen_4((bool)1);
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		__this->set_damping_5((10.0f));
		// public float Sensitivity { set { sensitivity = value; } get { return sensitivity; } } [SerializeField] private float sensitivity = 1.0f;
		__this->set_sensitivity_6((1.0f));
		// public CwInputManager.Axis HorizontalControls { set { horizontalControls = value; } get { return horizontalControls; } } [SerializeField] private CwInputManager.Axis horizontalControls = new CwInputManager.Axis(2, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.A, KeyCode.D, KeyCode.LeftArrow, KeyCode.RightArrow, 100.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB((&L_0), 2, (bool)0, 0, (1.0f), ((int32_t)97), ((int32_t)100), ((int32_t)276), ((int32_t)275), (100.0f), /*hidden argument*/NULL);
		__this->set_horizontalControls_7(L_0);
		// public CwInputManager.Axis DepthControls { set { depthControls = value; } get { return depthControls; } } [SerializeField] private CwInputManager.Axis depthControls = new CwInputManager.Axis(2, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.S, KeyCode.W, KeyCode.DownArrow, KeyCode.UpArrow, 100.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB((&L_1), 2, (bool)0, 0, (1.0f), ((int32_t)115), ((int32_t)119), ((int32_t)274), ((int32_t)273), (100.0f), /*hidden argument*/NULL);
		__this->set_depthControls_8(L_1);
		// public CwInputManager.Axis VerticalControls { set { verticalControls = value; } get { return verticalControls; } } [SerializeField] private CwInputManager.Axis verticalControls = new CwInputManager.Axis(3, false, CwInputManager.AxisGesture.HorizontalDrag, 1.0f, KeyCode.F, KeyCode.R, KeyCode.None, KeyCode.None, 100.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB((&L_2), 3, (bool)0, 0, (1.0f), ((int32_t)102), ((int32_t)114), 0, 0, (100.0f), /*hidden argument*/NULL);
		__this->set_verticalControls_9(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwCameraPivot::set_Listen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraPivot_set_Listen_m59BE4E1026A8217162353B67CABBF09FF259CC13 (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		bool L_0 = ___value0;
		__this->set_listen_4(L_0);
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		return;
	}
}
// System.Boolean CW.Common.CwCameraPivot::get_Listen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwCameraPivot_get_Listen_m8A41CDC6AC7F6D3976FE51697C863C5B96265860 (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, const RuntimeMethod* method)
{
	{
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		bool L_0 = __this->get_listen_4();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraPivot::set_Damping(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraPivot_set_Damping_mE5FDB6388E710A32714DEEDCC8D5A2CBF12EFEA5 (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		float L_0 = ___value0;
		__this->set_damping_5(L_0);
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		return;
	}
}
// System.Single CW.Common.CwCameraPivot::get_Damping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwCameraPivot_get_Damping_mB7349BCBCDAC7ED019342105011D538F421C66B3 (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, const RuntimeMethod* method)
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		float L_0 = __this->get_damping_5();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraPivot::set_PitchControls(CW.Common.CwInputManager/Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraPivot_set_PitchControls_mC93B34C85C76C96D380293EA9B09DCFA1BF6CC85 (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___value0, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis PitchControls { set { pitchControls = value; } get { return pitchControls; } } [SerializeField] private CwInputManager.Axis pitchControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.VerticalDrag, -0.1f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = ___value0;
		__this->set_pitchControls_6(L_0);
		// public CwInputManager.Axis PitchControls { set { pitchControls = value; } get { return pitchControls; } } [SerializeField] private CwInputManager.Axis pitchControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.VerticalDrag, -0.1f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		return;
	}
}
// CW.Common.CwInputManager/Axis CW.Common.CwCameraPivot::get_PitchControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  CwCameraPivot_get_PitchControls_m7D36F5E10EAA8E0DE89D2BB6CA6B4E1A571B8FA8 (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis PitchControls { set { pitchControls = value; } get { return pitchControls; } } [SerializeField] private CwInputManager.Axis pitchControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.VerticalDrag, -0.1f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = __this->get_pitchControls_6();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraPivot::set_YawControls(CW.Common.CwInputManager/Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraPivot_set_YawControls_m4DFDCC04C7C4F45AEF30103840A8C800483A05F3 (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  ___value0, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis YawControls { set { yawControls = value; } get { return yawControls; } } [SerializeField] private CwInputManager.Axis yawControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.HorizontalDrag, 0.1f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = ___value0;
		__this->set_yawControls_7(L_0);
		// public CwInputManager.Axis YawControls { set { yawControls = value; } get { return yawControls; } } [SerializeField] private CwInputManager.Axis yawControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.HorizontalDrag, 0.1f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		return;
	}
}
// CW.Common.CwInputManager/Axis CW.Common.CwCameraPivot::get_YawControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  CwCameraPivot_get_YawControls_m07A1B329B7F604E7808E58740DF6FAE6E7126836 (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, const RuntimeMethod* method)
{
	{
		// public CwInputManager.Axis YawControls { set { yawControls = value; } get { return yawControls; } } [SerializeField] private CwInputManager.Axis yawControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.HorizontalDrag, 0.1f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0 = __this->get_yawControls_7();
		return L_0;
	}
}
// System.Void CW.Common.CwCameraPivot::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraPivot_OnEnable_m553BFF57D5817A660BDA98356374861243E1A65B (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CwInputManager.EnsureThisComponentExists();
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		CwInputManager_EnsureThisComponentExists_m9E2FBB171985D87EAA3E203069C20A820D21692A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraPivot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraPivot_Update_m84756C6CCE506597E6B4F2A54F46D68CD5A1A1AA (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, const RuntimeMethod* method)
{
	{
		// if (listen == true)
		bool L_0 = __this->get_listen_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// AddToDelta();
		CwCameraPivot_AddToDelta_m0C978BC86122ED2B60F8D1C206529EC6472E232F(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// DampenDelta();
		CwCameraPivot_DampenDelta_m77D4051AF1DC6AB5E215239380D0C6F3F1785DE8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraPivot::AddToDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraPivot_AddToDelta_m0C978BC86122ED2B60F8D1C206529EC6472E232F (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, const RuntimeMethod* method)
{
	{
		// remainingDelta.x += pitchControls.GetValue(Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_remainingDelta_8();
		float* L_1 = L_0->get_address_of_x_2();
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * L_4 = __this->get_address_of_pitchControls_6();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_6;
		L_6 = Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C((Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 *)L_4, L_5, /*hidden argument*/NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_add((float)L_3, (float)L_6));
		// remainingDelta.y += yawControls  .GetValue(Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_remainingDelta_8();
		float* L_8 = L_7->get_address_of_y_3();
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * L_11 = __this->get_address_of_yawControls_7();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13;
		L_13 = Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C((Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 *)L_11, L_12, /*hidden argument*/NULL);
		*((float*)L_9) = (float)((float)il2cpp_codegen_add((float)L_10, (float)L_13));
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraPivot::DampenDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraPivot_DampenDelta_m77D4051AF1DC6AB5E215239380D0C6F3F1785DE8 (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var factor   = CwHelper.DampenFactor(damping, Time.deltaTime);
		float L_0 = __this->get_damping_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = CwHelper_DampenFactor_mAC5C9507C2B790590B77EB007310BFFE2B2A63EA(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var newDelta = Vector3.Lerp(remainingDelta, Vector3.zero, factor);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_remainingDelta_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// var euler = transform.localEulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// euler.x = -Mathf.DeltaAngle(euler.x, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		float L_10 = L_9.get_x_2();
		float L_11;
		L_11 = Mathf_DeltaAngle_mB1BD0E139ACCAE694968F7D9CB096C60F69CE9FE(L_10, (0.0f), /*hidden argument*/NULL);
		(&V_2)->set_x_2(((-L_11)));
		// euler += remainingDelta - newDelta;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_remainingDelta_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_13, L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// euler.x = Mathf.Clamp(euler.x, -89.0f, 89.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_2;
		float L_18 = L_17.get_x_2();
		float L_19;
		L_19 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_18, (-89.0f), (89.0f), /*hidden argument*/NULL);
		(&V_2)->set_x_2(L_19);
		// transform.localEulerAngles = euler;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_2;
		NullCheck(L_20);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_20, L_21, /*hidden argument*/NULL);
		// remainingDelta = newDelta;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		__this->set_remainingDelta_8(L_22);
		// }
		return;
	}
}
// System.Void CW.Common.CwCameraPivot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwCameraPivot__ctor_m00EB17AC11F617897B2EA18FA52598BEC3BD6320 (CwCameraPivot_tE8A57479814A030A60836DFB3927B1FF9283C705 * __this, const RuntimeMethod* method)
{
	{
		// public bool Listen { set { listen = value; } get { return listen; } } [SerializeField] private bool listen = true;
		__this->set_listen_4((bool)1);
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = 10.0f;
		__this->set_damping_5((10.0f));
		// public CwInputManager.Axis PitchControls { set { pitchControls = value; } get { return pitchControls; } } [SerializeField] private CwInputManager.Axis pitchControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.VerticalDrag, -0.1f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB((&L_0), 1, (bool)1, 1, (-0.100000001f), 0, 0, 0, 0, (45.0f), /*hidden argument*/NULL);
		__this->set_pitchControls_6(L_0);
		// public CwInputManager.Axis YawControls { set { yawControls = value; } get { return yawControls; } } [SerializeField] private CwInputManager.Axis yawControls = new CwInputManager.Axis(1, true, CwInputManager.AxisGesture.HorizontalDrag, 0.1f, KeyCode.None, KeyCode.None, KeyCode.None, KeyCode.None, 45.0f);
		Axis_t79A91070CF459AC48E341B14B92B90DE11419A91  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB((&L_1), 1, (bool)1, 0, (0.100000001f), 0, 0, 0, 0, (45.0f), /*hidden argument*/NULL);
		__this->set_yawControls_7(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwChild::DestroyGameObjectIfInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwChild_DestroyGameObjectIfInvalid_m2C1379389F1396C1AD76E123DE595AC7FF9892B6 (CwChild_tD21FBD08C8B782B50B2EDF73D7C471D2B5CAA33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHasChildren_t7B8BA73FFAC4F9D5CB61F49F5D204D15FE572A5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var parent = GetParent();
		RuntimeObject* L_0;
		L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* CW.Common.CwChild/IHasChildren CW.Common.CwChild::GetParent() */, __this);
		V_0 = L_0;
		// if (parent == null || parent.HasChild(this) == false)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, CwChild_tD21FBD08C8B782B50B2EDF73D7C471D2B5CAA33D * >::Invoke(0 /* System.Boolean CW.Common.CwChild/IHasChildren::HasChild(CW.Common.CwChild) */, IHasChildren_t7B8BA73FFAC4F9D5CB61F49F5D204D15FE572A5C_il2cpp_TypeInfo_var, L_2, __this);
		if (L_3)
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		// DestroyImmediate(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_4, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwChild::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwChild_Start_mD216DB4B39DBCA202DB429BFE701362BB83AC39E (CwChild_tD21FBD08C8B782B50B2EDF73D7C471D2B5CAA33D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwChild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwChild__ctor_m4410A4A822CA63FF9FA8674C7E143939A85FAD8B (CwChild_tD21FBD08C8B782B50B2EDF73D7C471D2B5CAA33D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwDemo::set_UpgradeInputModule(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_set_UpgradeInputModule_m2CACF221B993A3E5A0F909BB0683205B71DAA919 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UpgradeInputModule { set { upgradeInputModule = value; } get { return upgradeInputModule; } } [SerializeField] private bool upgradeInputModule = true;
		bool L_0 = ___value0;
		__this->set_upgradeInputModule_4(L_0);
		// public bool UpgradeInputModule { set { upgradeInputModule = value; } get { return upgradeInputModule; } } [SerializeField] private bool upgradeInputModule = true;
		return;
	}
}
// System.Boolean CW.Common.CwDemo::get_UpgradeInputModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwDemo_get_UpgradeInputModule_m5E0840F164B9ECBD1B02B63B05BAD6FAEED9896B (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// public bool UpgradeInputModule { set { upgradeInputModule = value; } get { return upgradeInputModule; } } [SerializeField] private bool upgradeInputModule = true;
		bool L_0 = __this->get_upgradeInputModule_4();
		return L_0;
	}
}
// System.Void CW.Common.CwDemo::set_ChangeExposureInHDRP(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_set_ChangeExposureInHDRP_m8B3628416EF218A99D8E489BE5894ADB0BDF403B (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ChangeExposureInHDRP { set { changeExposureInHDRP = value; } get { return changeExposureInHDRP; } } [SerializeField] private bool changeExposureInHDRP = true;
		bool L_0 = ___value0;
		__this->set_changeExposureInHDRP_5(L_0);
		// public bool ChangeExposureInHDRP { set { changeExposureInHDRP = value; } get { return changeExposureInHDRP; } } [SerializeField] private bool changeExposureInHDRP = true;
		return;
	}
}
// System.Boolean CW.Common.CwDemo::get_ChangeExposureInHDRP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwDemo_get_ChangeExposureInHDRP_m93C7F874256459B0CDFB39AA84E392E41E75A4B5 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// public bool ChangeExposureInHDRP { set { changeExposureInHDRP = value; } get { return changeExposureInHDRP; } } [SerializeField] private bool changeExposureInHDRP = true;
		bool L_0 = __this->get_changeExposureInHDRP_5();
		return L_0;
	}
}
// System.Void CW.Common.CwDemo::set_ChangeVisualEnvironmentInHDRP(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_set_ChangeVisualEnvironmentInHDRP_mFDD1DC810FF7D68B4BE6E0C571BAFA81365585FB (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ChangeVisualEnvironmentInHDRP { set { changeVisualEnvironmentInHDRP = value; } get { return changeVisualEnvironmentInHDRP; } } [SerializeField] private bool changeVisualEnvironmentInHDRP = true;
		bool L_0 = ___value0;
		__this->set_changeVisualEnvironmentInHDRP_6(L_0);
		// public bool ChangeVisualEnvironmentInHDRP { set { changeVisualEnvironmentInHDRP = value; } get { return changeVisualEnvironmentInHDRP; } } [SerializeField] private bool changeVisualEnvironmentInHDRP = true;
		return;
	}
}
// System.Boolean CW.Common.CwDemo::get_ChangeVisualEnvironmentInHDRP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwDemo_get_ChangeVisualEnvironmentInHDRP_m468164E9A639065EABC1DA93F068135F6B4FA68B (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// public bool ChangeVisualEnvironmentInHDRP { set { changeVisualEnvironmentInHDRP = value; } get { return changeVisualEnvironmentInHDRP; } } [SerializeField] private bool changeVisualEnvironmentInHDRP = true;
		bool L_0 = __this->get_changeVisualEnvironmentInHDRP_6();
		return L_0;
	}
}
// System.Void CW.Common.CwDemo::set_ChangeFogInHDRP(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_set_ChangeFogInHDRP_mD71155B9F349530548516B957197A7C6BBA7C1AC (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ChangeFogInHDRP { set { changeFogInHDRP = value; } get { return changeFogInHDRP; } } [SerializeField] private bool changeFogInHDRP = true;
		bool L_0 = ___value0;
		__this->set_changeFogInHDRP_7(L_0);
		// public bool ChangeFogInHDRP { set { changeFogInHDRP = value; } get { return changeFogInHDRP; } } [SerializeField] private bool changeFogInHDRP = true;
		return;
	}
}
// System.Boolean CW.Common.CwDemo::get_ChangeFogInHDRP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwDemo_get_ChangeFogInHDRP_mE1910A7A5352995AA5CDA81124631FBFA2ECACCD (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// public bool ChangeFogInHDRP { set { changeFogInHDRP = value; } get { return changeFogInHDRP; } } [SerializeField] private bool changeFogInHDRP = true;
		bool L_0 = __this->get_changeFogInHDRP_7();
		return L_0;
	}
}
// System.Void CW.Common.CwDemo::set_ChangeCloudsInHDRP(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_set_ChangeCloudsInHDRP_m945C565A2D473458F2B9628D21A26E065BA8AA01 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ChangeCloudsInHDRP { set { changeCloudsInHDRP = value; } get { return changeCloudsInHDRP; } } [SerializeField] private bool changeCloudsInHDRP = true;
		bool L_0 = ___value0;
		__this->set_changeCloudsInHDRP_8(L_0);
		// public bool ChangeCloudsInHDRP { set { changeCloudsInHDRP = value; } get { return changeCloudsInHDRP; } } [SerializeField] private bool changeCloudsInHDRP = true;
		return;
	}
}
// System.Boolean CW.Common.CwDemo::get_ChangeCloudsInHDRP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwDemo_get_ChangeCloudsInHDRP_m1524E005DBE4EEED6D2000081BDCA97A98BE5F02 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// public bool ChangeCloudsInHDRP { set { changeCloudsInHDRP = value; } get { return changeCloudsInHDRP; } } [SerializeField] private bool changeCloudsInHDRP = true;
		bool L_0 = __this->get_changeCloudsInHDRP_8();
		return L_0;
	}
}
// System.Void CW.Common.CwDemo::set_ChangeMotionBlurInHDRP(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_set_ChangeMotionBlurInHDRP_m3B73D86E70A439417A46D794AB10420442D53EC5 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ChangeMotionBlurInHDRP { set { changeMotionBlurInHDRP = value; } get { return changeMotionBlurInHDRP; } } [SerializeField] private bool changeMotionBlurInHDRP = true;
		bool L_0 = ___value0;
		__this->set_changeMotionBlurInHDRP_9(L_0);
		// public bool ChangeMotionBlurInHDRP { set { changeMotionBlurInHDRP = value; } get { return changeMotionBlurInHDRP; } } [SerializeField] private bool changeMotionBlurInHDRP = true;
		return;
	}
}
// System.Boolean CW.Common.CwDemo::get_ChangeMotionBlurInHDRP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwDemo_get_ChangeMotionBlurInHDRP_mBFA6988D6719EF347AB15F42365B435123386446 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// public bool ChangeMotionBlurInHDRP { set { changeMotionBlurInHDRP = value; } get { return changeMotionBlurInHDRP; } } [SerializeField] private bool changeMotionBlurInHDRP = true;
		bool L_0 = __this->get_changeMotionBlurInHDRP_9();
		return L_0;
	}
}
// System.Void CW.Common.CwDemo::set_UpgradeLightsInHDRP(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_set_UpgradeLightsInHDRP_m5B05DF737721CB315FF0F74EB01EEE78D122F764 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UpgradeLightsInHDRP { set { upgradeLightsInHDRP = value; } get { return upgradeLightsInHDRP; } } [SerializeField] private bool upgradeLightsInHDRP = true;
		bool L_0 = ___value0;
		__this->set_upgradeLightsInHDRP_10(L_0);
		// public bool UpgradeLightsInHDRP { set { upgradeLightsInHDRP = value; } get { return upgradeLightsInHDRP; } } [SerializeField] private bool upgradeLightsInHDRP = true;
		return;
	}
}
// System.Boolean CW.Common.CwDemo::get_UpgradeLightsInHDRP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwDemo_get_UpgradeLightsInHDRP_mFB20016BA62C006D51C9D4E7D8475F8FC207D63B (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// public bool UpgradeLightsInHDRP { set { upgradeLightsInHDRP = value; } get { return upgradeLightsInHDRP; } } [SerializeField] private bool upgradeLightsInHDRP = true;
		bool L_0 = __this->get_upgradeLightsInHDRP_10();
		return L_0;
	}
}
// System.Void CW.Common.CwDemo::set_UpgradeCamerasInHDRP(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_set_UpgradeCamerasInHDRP_m8B2EC881EEC9F78AD79EBF4E252AC9876A234C90 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UpgradeCamerasInHDRP { set { upgradeCamerasInHDRP = value; } get { return upgradeCamerasInHDRP; } } [SerializeField] private bool upgradeCamerasInHDRP = true;
		bool L_0 = ___value0;
		__this->set_upgradeCamerasInHDRP_11(L_0);
		// public bool UpgradeCamerasInHDRP { set { upgradeCamerasInHDRP = value; } get { return upgradeCamerasInHDRP; } } [SerializeField] private bool upgradeCamerasInHDRP = true;
		return;
	}
}
// System.Boolean CW.Common.CwDemo::get_UpgradeCamerasInHDRP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwDemo_get_UpgradeCamerasInHDRP_mFA2B23EF0EA7EB73394424CBFD99662A274D151F (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// public bool UpgradeCamerasInHDRP { set { upgradeCamerasInHDRP = value; } get { return upgradeCamerasInHDRP; } } [SerializeField] private bool upgradeCamerasInHDRP = true;
		bool L_0 = __this->get_upgradeCamerasInHDRP_11();
		return L_0;
	}
}
// System.Void CW.Common.CwDemo::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_OnEnable_m0618156E99879BADD3DE25D4AAF9E3C42F5A5A94 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// var pipeline = CwShaderBundle.DetectProjectPipeline();
		int32_t L_0;
		L_0 = CwShaderBundle_DetectProjectPipeline_m4499C17B2B448CE2587FC0C321A7DC0089456BCE(/*hidden argument*/NULL);
		// if (upgradeInputModule == true)
		bool L_1 = __this->get_upgradeInputModule_4();
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0013;
		}
	}
	{
		// TryUpgradeEventSystem();
		CwDemo_TryUpgradeEventSystem_mFA67238FF4284E20A76663E39952DF8D5DF80903(__this, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_0013:
	{
		// if (CwShaderBundle.IsURP(pipeline) == true)
		int32_t L_2 = G_B2_0;
		bool L_3;
		L_3 = CwShaderBundle_IsURP_mB55695B59F7E8B4224FA4F47208463152F028A72(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		if (!L_3)
		{
			G_B4_0 = L_2;
			goto IL_0021;
		}
	}
	{
		// TryApplyURP();
		VirtActionInvoker0::Invoke(5 /* System.Void CW.Common.CwDemo::TryApplyURP() */, __this);
		G_B4_0 = G_B3_0;
	}

IL_0021:
	{
		// if (CwShaderBundle.IsHDRP(pipeline) == true)
		bool L_4;
		L_4 = CwShaderBundle_IsHDRP_m8EC8D4BB8BE1948B43288FAAF3A44260CCF16CF6(G_B4_0, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// TryApplyHDRP();
		VirtActionInvoker0::Invoke(6 /* System.Void CW.Common.CwDemo::TryApplyHDRP() */, __this);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwDemo::TryApplyURP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_TryApplyURP_m5E1ACB92FD61D89C96925264211E801ED0A1CB02 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwDemo::TryApplyHDRP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_TryApplyHDRP_mB8CE457A17A834EFB9C517F8AA5A6EE8A2D81A3D (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// if (changeExposureInHDRP == true || changeVisualEnvironmentInHDRP == true || changeFogInHDRP == true)
		bool L_0 = __this->get_changeExposureInHDRP_5();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->get_changeVisualEnvironmentInHDRP_6();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->get_changeFogInHDRP_7();
		if (!L_2)
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		// TryCreateVolume();
		CwDemo_TryCreateVolume_m8FA31BA73781E36B7A90BBF43A3284EC88B2E963(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// if (upgradeLightsInHDRP == true)
		bool L_3 = __this->get_upgradeLightsInHDRP_10();
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// TryUpgradeLights();
		CwDemo_TryUpgradeLights_m217C1636D9C17E859B123361B88B5011AF1F3A4E(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// if (upgradeCamerasInHDRP == true)
		bool L_4 = __this->get_upgradeCamerasInHDRP_11();
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// TryUpgradeCameras();
		CwDemo_TryUpgradeCameras_mC1BFC04CBEFF7673E13A4A1FE6B84C246543C9EE(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwDemo::TryCreateVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_TryCreateVolume_m8FA31BA73781E36B7A90BBF43A3284EC88B2E963 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwDemo::TryUpgradeLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_TryUpgradeLights_m217C1636D9C17E859B123361B88B5011AF1F3A4E (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwDemo::TryUpgradeCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_TryUpgradeCameras_mC1BFC04CBEFF7673E13A4A1FE6B84C246543C9EE (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwDemo::TryUpgradeEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo_TryUpgradeEventSystem_mFA67238FF4284E20A76663E39952DF8D5DF80903 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemo__ctor_mF7E07BEF7E842232A661080394C264CA33152B23 (CwDemo_t40D5A39FEB5733D054923254B3A9D4C615359E7F * __this, const RuntimeMethod* method)
{
	{
		// public bool UpgradeInputModule { set { upgradeInputModule = value; } get { return upgradeInputModule; } } [SerializeField] private bool upgradeInputModule = true;
		__this->set_upgradeInputModule_4((bool)1);
		// public bool ChangeExposureInHDRP { set { changeExposureInHDRP = value; } get { return changeExposureInHDRP; } } [SerializeField] private bool changeExposureInHDRP = true;
		__this->set_changeExposureInHDRP_5((bool)1);
		// public bool ChangeVisualEnvironmentInHDRP { set { changeVisualEnvironmentInHDRP = value; } get { return changeVisualEnvironmentInHDRP; } } [SerializeField] private bool changeVisualEnvironmentInHDRP = true;
		__this->set_changeVisualEnvironmentInHDRP_6((bool)1);
		// public bool ChangeFogInHDRP { set { changeFogInHDRP = value; } get { return changeFogInHDRP; } } [SerializeField] private bool changeFogInHDRP = true;
		__this->set_changeFogInHDRP_7((bool)1);
		// public bool ChangeCloudsInHDRP { set { changeCloudsInHDRP = value; } get { return changeCloudsInHDRP; } } [SerializeField] private bool changeCloudsInHDRP = true;
		__this->set_changeCloudsInHDRP_8((bool)1);
		// public bool ChangeMotionBlurInHDRP { set { changeMotionBlurInHDRP = value; } get { return changeMotionBlurInHDRP; } } [SerializeField] private bool changeMotionBlurInHDRP = true;
		__this->set_changeMotionBlurInHDRP_9((bool)1);
		// public bool UpgradeLightsInHDRP { set { upgradeLightsInHDRP = value; } get { return upgradeLightsInHDRP; } } [SerializeField] private bool upgradeLightsInHDRP = true;
		__this->set_upgradeLightsInHDRP_10((bool)1);
		// public bool UpgradeCamerasInHDRP { set { upgradeCamerasInHDRP = value; } get { return upgradeCamerasInHDRP; } } [SerializeField] private bool upgradeCamerasInHDRP = true;
		__this->set_upgradeCamerasInHDRP_11((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwDemoButton::set_Link(CW.Common.CwDemoButton/LinkType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButton_set_Link_m6D0B3478EE33FF361E9140E52934D6906E7E7C56 (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public LinkType Link { set { link = value; } get { return link; } } [SerializeField] private LinkType link;
		int32_t L_0 = ___value0;
		__this->set_link_4(L_0);
		// public LinkType Link { set { link = value; } get { return link; } } [SerializeField] private LinkType link;
		return;
	}
}
// CW.Common.CwDemoButton/LinkType CW.Common.CwDemoButton::get_Link()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwDemoButton_get_Link_m1D0442734F98ADE666F8511F85ADFDA33D9D5E1E (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, const RuntimeMethod* method)
{
	{
		// public LinkType Link { set { link = value; } get { return link; } } [SerializeField] private LinkType link;
		int32_t L_0 = __this->get_link_4();
		return L_0;
	}
}
// System.Void CW.Common.CwDemoButton::set_UrlTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButton_set_UrlTarget_m0377835317BA1BD3E2736D63AD13C75ECBA30554 (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UrlTarget { set { urlTarget = value; } get { return urlTarget; } } [SerializeField] private string urlTarget;
		String_t* L_0 = ___value0;
		__this->set_urlTarget_5(L_0);
		// public string UrlTarget { set { urlTarget = value; } get { return urlTarget; } } [SerializeField] private string urlTarget;
		return;
	}
}
// System.String CW.Common.CwDemoButton::get_UrlTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CwDemoButton_get_UrlTarget_m360062F8BCD119C9857C9FF839C071731A0C569F (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, const RuntimeMethod* method)
{
	{
		// public string UrlTarget { set { urlTarget = value; } get { return urlTarget; } } [SerializeField] private string urlTarget;
		String_t* L_0 = __this->get_urlTarget_5();
		return L_0;
	}
}
// System.Void CW.Common.CwDemoButton::set_IsolateTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButton_set_IsolateTarget_m56237BF26DDDC298C8751D2B45B8D739C6086B01 (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform IsolateTarget { set { isolateTarget = value; } get { return isolateTarget; } } [SerializeField] private Transform isolateTarget;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_isolateTarget_6(L_0);
		// public Transform IsolateTarget { set { isolateTarget = value; } get { return isolateTarget; } } [SerializeField] private Transform isolateTarget;
		return;
	}
}
// UnityEngine.Transform CW.Common.CwDemoButton::get_IsolateTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * CwDemoButton_get_IsolateTarget_m7B7E1670EADE98E991E62FF6E8CE273329C56CC6 (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, const RuntimeMethod* method)
{
	{
		// public Transform IsolateTarget { set { isolateTarget = value; } get { return isolateTarget; } } [SerializeField] private Transform isolateTarget;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_isolateTarget_6();
		return L_0;
	}
}
// System.Void CW.Common.CwDemoButton::set_IsolateToggle(CW.Common.CwDemoButton/ToggleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButton_set_IsolateToggle_mC530C2F24E47D94FC81A7AAE2302DBA54841AA78 (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ToggleType IsolateToggle { set { isolateToggle = value; } get { return isolateToggle; } } [SerializeField] private ToggleType isolateToggle;
		int32_t L_0 = ___value0;
		__this->set_isolateToggle_7(L_0);
		// public ToggleType IsolateToggle { set { isolateToggle = value; } get { return isolateToggle; } } [SerializeField] private ToggleType isolateToggle;
		return;
	}
}
// CW.Common.CwDemoButton/ToggleType CW.Common.CwDemoButton::get_IsolateToggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwDemoButton_get_IsolateToggle_m139965F00E974F0205F11AEFAC05D46E0C644036 (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, const RuntimeMethod* method)
{
	{
		// public ToggleType IsolateToggle { set { isolateToggle = value; } get { return isolateToggle; } } [SerializeField] private ToggleType isolateToggle;
		int32_t L_0 = __this->get_isolateToggle_7();
		return L_0;
	}
}
// System.Void CW.Common.CwDemoButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButton_OnEnable_m5728110E2D427C3E11E921A9517BC2158AA8E04F (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cachedCanvasGroup = GetComponent<CanvasGroup>();
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0;
		L_0 = Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4(__this, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		__this->set_cachedCanvasGroup_8(L_0);
		// }
		return;
	}
}
// System.Void CW.Common.CwDemoButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButton_Update_m4DB7155905942AB83C6CABCD782B2D6B512F678B (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * V_0 = NULL;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float G_B8_0 = 0.0f;
	float G_B13_0 = 0.0f;
	{
		// var group = GetComponent<CanvasGroup>();
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0;
		L_0 = Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4(__this, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		V_0 = L_0;
		// if (group != null)
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0099;
		}
	}
	{
		// var alpha = 1.0f;
		V_1 = (1.0f);
		// switch (link)
		int32_t L_3 = __this->get_link_4();
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) > ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0076;
	}

IL_002a:
	{
		// alpha = GetCurrentLevel() >= 0 && GetLevelCount() > 1 ? 1.0f : 0.0f;
		int32_t L_6;
		L_6 = CwDemoButton_GetCurrentLevel_mD05EAEBA9C5AEE898C6FE454B704A9C02CCF5EA3(/*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7;
		L_7 = CwDemoButton_GetLevelCount_mDEFF4C9964ED424F0C7FA5DF1357975391519F03(/*hidden argument*/NULL);
		if ((((int32_t)L_7) > ((int32_t)1)))
		{
			goto IL_0041;
		}
	}

IL_003a:
	{
		G_B8_0 = (0.0f);
		goto IL_0046;
	}

IL_0041:
	{
		G_B8_0 = (1.0f);
	}

IL_0046:
	{
		V_1 = G_B8_0;
		// break;
		goto IL_0076;
	}

IL_0049:
	{
		// if (isolateTarget != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_isolateTarget_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		// alpha = isolateTarget.gameObject.activeInHierarchy == true ? 1.0f : 0.5f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_isolateTarget_6();
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0070;
		}
	}
	{
		G_B13_0 = (0.5f);
		goto IL_0075;
	}

IL_0070:
	{
		G_B13_0 = (1.0f);
	}

IL_0075:
	{
		V_1 = G_B13_0;
	}

IL_0076:
	{
		// group.alpha          = alpha;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_13 = V_0;
		float L_14 = V_1;
		NullCheck(L_13);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_13, L_14, /*hidden argument*/NULL);
		// group.blocksRaycasts = alpha > 0.0f;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_15 = V_0;
		float L_16 = V_1;
		NullCheck(L_15);
		CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A(L_15, (bool)((((float)L_16) > ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
		// group.interactable   = alpha > 0.0f;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_17 = V_0;
		float L_18 = V_1;
		NullCheck(L_17);
		CanvasGroup_set_interactable_m139F4C59174EFB13F80AD10837BD0760E0B97835(L_17, (bool)((((float)L_18) > ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwDemoButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButton_OnPointerDown_m89BDE317539323F6B3F3C3E9E013EB10B22DEC00 (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1D19615EC4094F2C6E7D12448A74C558353F82C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// switch (link)
		int32_t L_0 = __this->get_link_4();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0068;
			}
			case 3:
			{
				goto IL_0073;
			}
			case 4:
			{
				goto IL_008f;
			}
		}
	}
	{
		return;
	}

IL_0022:
	{
		// var index = GetCurrentLevel();
		int32_t L_2;
		L_2 = CwDemoButton_GetCurrentLevel_mD05EAEBA9C5AEE898C6FE454B704A9C02CCF5EA3(/*hidden argument*/NULL);
		V_1 = L_2;
		// if (index >= 0)
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_01a6;
		}
	}
	{
		// if (--index < 0)
		int32_t L_4 = V_1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		V_1 = L_5;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// index = GetLevelCount() - 1;
		int32_t L_6;
		L_6 = CwDemoButton_GetLevelCount_mDEFF4C9964ED424F0C7FA5DF1357975391519F03(/*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
	}

IL_003f:
	{
		// LoadLevel(index);
		int32_t L_7 = V_1;
		CwDemoButton_LoadLevel_mA1408FF58831E46A531AFE7C9839AFAD537B0924(L_7, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0046:
	{
		// var index = GetCurrentLevel();
		int32_t L_8;
		L_8 = CwDemoButton_GetCurrentLevel_mD05EAEBA9C5AEE898C6FE454B704A9C02CCF5EA3(/*hidden argument*/NULL);
		V_2 = L_8;
		// if (index >= 0)
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_01a6;
		}
	}
	{
		// if (++index >= GetLevelCount())
		int32_t L_10 = V_2;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		V_2 = L_11;
		int32_t L_12;
		L_12 = CwDemoButton_GetLevelCount_mDEFF4C9964ED424F0C7FA5DF1357975391519F03(/*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0061;
		}
	}
	{
		// index = 0;
		V_2 = 0;
	}

IL_0061:
	{
		// LoadLevel(index);
		int32_t L_13 = V_2;
		CwDemoButton_LoadLevel_mA1408FF58831E46A531AFE7C9839AFAD537B0924(L_13, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0068:
	{
		// Application.OpenURL("https://carloswilkes.com");
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(_stringLiteralC1D19615EC4094F2C6E7D12448A74C558353F82C, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0073:
	{
		// if (string.IsNullOrEmpty(urlTarget) == false)
		String_t* L_14 = __this->get_urlTarget_5();
		bool L_15;
		L_15 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_01a6;
		}
	}
	{
		// Application.OpenURL(urlTarget);
		String_t* L_16 = __this->get_urlTarget_5();
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(L_16, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_008f:
	{
		// if (isolateTarget != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = __this->get_isolateTarget_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_01a6;
		}
	}
	{
		// var parent = isolateTarget.transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = __this->get_isolateTarget_6();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_20, /*hidden argument*/NULL);
		// var active = isolateTarget.gameObject.activeSelf;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_isolateTarget_6();
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		bool L_24;
		L_24 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		// foreach (Transform child in parent.transform)
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_25, /*hidden argument*/NULL);
		V_4 = L_26;
	}

IL_00cd:
	try
	{ // begin try (depth: 1)
		{
			goto IL_010f;
		}

IL_00cf:
		{
			// foreach (Transform child in parent.transform)
			RuntimeObject* L_27 = V_4;
			NullCheck(L_27);
			RuntimeObject * L_28;
			L_28 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_27);
			V_5 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_28, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// if (child.gameObject.activeSelf == true)
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_5;
			NullCheck(L_29);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
			L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_29, /*hidden argument*/NULL);
			NullCheck(L_30);
			bool L_31;
			L_31 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_30, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_010f;
			}
		}

IL_00eb:
		{
			// if (child != isolateTarget)
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = V_5;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = __this->get_isolateTarget_6();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_34;
			L_34 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_32, L_33, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_0102;
			}
		}

IL_00fa:
		{
			// previousChild = child;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = V_5;
			__this->set_previousChild_9(L_35);
		}

IL_0102:
		{
			// child.gameObject.SetActive(false);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = V_5;
			NullCheck(L_36);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
			L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_36, /*hidden argument*/NULL);
			NullCheck(L_37);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_37, (bool)0, /*hidden argument*/NULL);
		}

IL_010f:
		{
			// foreach (Transform child in parent.transform)
			RuntimeObject* L_38 = V_4;
			NullCheck(L_38);
			bool L_39;
			L_39 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_38);
			if (L_39)
			{
				goto IL_00cf;
			}
		}

IL_0118:
		{
			IL2CPP_LEAVE(0x12F, FINALLY_011a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011a;
	}

FINALLY_011a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_40 = V_4;
			V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_40, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_41 = V_6;
			if (!L_41)
			{
				goto IL_012e;
			}
		}

IL_0127:
		{
			RuntimeObject* L_42 = V_6;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_42);
		}

IL_012e:
		{
			IL2CPP_END_FINALLY(282)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(282)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12F, IL_012f)
	}

IL_012f:
	{
		// switch (isolateToggle)
		int32_t L_43 = __this->get_isolateToggle_7();
		V_7 = L_43;
		int32_t L_44 = V_7;
		switch (L_44)
		{
			case 0:
			{
				goto IL_014b;
			}
			case 1:
			{
				goto IL_015d;
			}
			case 2:
			{
				goto IL_0172;
			}
		}
	}
	{
		return;
	}

IL_014b:
	{
		// isolateTarget.gameObject.SetActive(true);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45 = __this->get_isolateTarget_6();
		NullCheck(L_45);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_46, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_015d:
	{
		// isolateTarget.gameObject.SetActive(active == false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = __this->get_isolateTarget_6();
		NullCheck(L_47);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_47, /*hidden argument*/NULL);
		bool L_49 = V_3;
		NullCheck(L_48);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_48, (bool)((((int32_t)L_49) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0172:
	{
		// if (active == true && previousChild != null)
		bool L_50 = V_3;
		if (!L_50)
		{
			goto IL_0195;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51 = __this->get_previousChild_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_51, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0195;
		}
	}
	{
		// previousChild.gameObject.SetActive(true);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = __this->get_previousChild_9();
		NullCheck(L_53);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_54, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0195:
	{
		// isolateTarget.gameObject.SetActive(true);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55 = __this->get_isolateTarget_6();
		NullCheck(L_55);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_56, (bool)1, /*hidden argument*/NULL);
	}

IL_01a6:
	{
		// }
		return;
	}
}
// System.Int32 CW.Common.CwDemoButton::GetCurrentLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwDemoButton_GetCurrentLevel_mD05EAEBA9C5AEE898C6FE454B704A9C02CCF5EA3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var scene = UnityEngine.SceneManagement.SceneManager.GetActiveScene();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		// var index = scene.buildIndex;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		// if (index >= 0)
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		// if (UnityEngine.SceneManagement.SceneManager.GetSceneByBuildIndex(index).path != scene.path)
		int32_t L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4;
		L_4 = SceneManager_GetSceneByBuildIndex_mDD0D6B69576B1A6087F9826648247CCAC0E2AF47(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		String_t* L_5;
		L_5 = Scene_get_path_m1B2CE5FA0F1875C94621EE44BECD5E5C39EBF8BE((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = Scene_get_path_m1B2CE5FA0F1875C94621EE44BECD5E5C39EBF8BE((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0030:
	{
		// return index;
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Int32 CW.Common.CwDemoButton::GetLevelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwDemoButton_GetLevelCount_mDEFF4C9964ED424F0C7FA5DF1357975391519F03 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnityEngine.SceneManagement.SceneManager.sceneCountInBuildSettings;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = SceneManager_get_sceneCountInBuildSettings_m4C1935F106D645DF6098310323D0F5EED8B0A564(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CW.Common.CwDemoButton::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButton_LoadLevel_mA1408FF58831E46A531AFE7C9839AFAD537B0924 (int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.SceneManagement.SceneManager.LoadScene(index);
		int32_t L_0 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwDemoButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButton__ctor_m4197854462BD98274EABCAB84F736D81A69969AA (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwDemoButtonBuilder::set_ButtonPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButtonBuilder_set_ButtonPrefab_m67FEF3A24D2A27DC2EB144EC944282425D04D7E0 (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject ButtonPrefab { set { buttonPrefab = value; } get { return buttonPrefab; } } [SerializeField] private GameObject buttonPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_buttonPrefab_4(L_0);
		// public GameObject ButtonPrefab { set { buttonPrefab = value; } get { return buttonPrefab; } } [SerializeField] private GameObject buttonPrefab;
		return;
	}
}
// UnityEngine.GameObject CW.Common.CwDemoButtonBuilder::get_ButtonPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * CwDemoButtonBuilder_get_ButtonPrefab_m4F151C5E1BA57FE275A299D19302403275444816 (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, const RuntimeMethod* method)
{
	{
		// public GameObject ButtonPrefab { set { buttonPrefab = value; } get { return buttonPrefab; } } [SerializeField] private GameObject buttonPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_buttonPrefab_4();
		return L_0;
	}
}
// System.Void CW.Common.CwDemoButtonBuilder::set_ButtonRoot(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButtonBuilder_set_ButtonRoot_m6BF40CB5898CD7E8B0E8C22D3EB4EFBA56C4709D (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___value0, const RuntimeMethod* method)
{
	{
		// public RectTransform ButtonRoot { set { buttonRoot = value; } get { return buttonRoot; } } [SerializeField] private RectTransform buttonRoot;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___value0;
		__this->set_buttonRoot_5(L_0);
		// public RectTransform ButtonRoot { set { buttonRoot = value; } get { return buttonRoot; } } [SerializeField] private RectTransform buttonRoot;
		return;
	}
}
// UnityEngine.RectTransform CW.Common.CwDemoButtonBuilder::get_ButtonRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * CwDemoButtonBuilder_get_ButtonRoot_m299AE0F7062656279856390D95742E5B9CE60E88 (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, const RuntimeMethod* method)
{
	{
		// public RectTransform ButtonRoot { set { buttonRoot = value; } get { return buttonRoot; } } [SerializeField] private RectTransform buttonRoot;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_buttonRoot_5();
		return L_0;
	}
}
// System.Void CW.Common.CwDemoButtonBuilder::set_Icon(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButtonBuilder_set_Icon_mDCC3DD0C33282654DEB3DB306943703A4B21C5CF (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method)
{
	{
		// public Sprite Icon { set { icon = value; } get { return icon; } } [SerializeField] private Sprite icon;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = ___value0;
		__this->set_icon_6(L_0);
		// public Sprite Icon { set { icon = value; } get { return icon; } } [SerializeField] private Sprite icon;
		return;
	}
}
// UnityEngine.Sprite CW.Common.CwDemoButtonBuilder::get_Icon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * CwDemoButtonBuilder_get_Icon_m7BBF811A498907018150502E77EC013097451A05 (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, const RuntimeMethod* method)
{
	{
		// public Sprite Icon { set { icon = value; } get { return icon; } } [SerializeField] private Sprite icon;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_icon_6();
		return L_0;
	}
}
// System.Void CW.Common.CwDemoButtonBuilder::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButtonBuilder_set_Color_m8D18EEA17666E856F8FFE619FC17457FA1DB274C (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_color_7(L_0);
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		return;
	}
}
// UnityEngine.Color CW.Common.CwDemoButtonBuilder::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  CwDemoButtonBuilder_get_Color_mB0FB2B0686D6E5613D4AB916E84F7FE4D847BCCB (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, const RuntimeMethod* method)
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_color_7();
		return L_0;
	}
}
// System.Void CW.Common.CwDemoButtonBuilder::set_OverrideName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButtonBuilder_set_OverrideName_m5704EB26096F0F9C6D2E78860CFC3291A893724A (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string OverrideName { set { overrideName = value; } get { return overrideName; } } [SerializeField] [Multiline(3)] private string overrideName;
		String_t* L_0 = ___value0;
		__this->set_overrideName_8(L_0);
		// public string OverrideName { set { overrideName = value; } get { return overrideName; } } [SerializeField] [Multiline(3)] private string overrideName;
		return;
	}
}
// System.String CW.Common.CwDemoButtonBuilder::get_OverrideName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CwDemoButtonBuilder_get_OverrideName_m7A712A66AD0DD1B3DDC7B3AED4C05E3218805D53 (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, const RuntimeMethod* method)
{
	{
		// public string OverrideName { set { overrideName = value; } get { return overrideName; } } [SerializeField] [Multiline(3)] private string overrideName;
		String_t* L_0 = __this->get_overrideName_8();
		return L_0;
	}
}
// System.Void CW.Common.CwDemoButtonBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButtonBuilder_Build_mA04C1F6E5BF7689B1A7456602ECA2038CC2148D7 (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9_mE338E4A2DE6920762B9DB637E08B93A240A2134F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * V_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_1 = NULL;
	CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * V_2 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B8_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B9_1 = NULL;
	{
		// if (clone != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_clone_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// DestroyImmediate(clone);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_clone_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// if (buttonPrefab != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_buttonPrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		// clone = DoInstantiate();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = CwDemoButtonBuilder_DoInstantiate_m9C6578CD922ECF4CBEB41CC143BE298714D330B6(__this, /*hidden argument*/NULL);
		__this->set_clone_9(L_5);
		// clone.name = name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_clone_9();
		String_t* L_7;
		L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_6, L_7, /*hidden argument*/NULL);
		// var image = clone.GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_clone_9();
		NullCheck(L_8);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9;
		L_9 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		V_0 = L_9;
		// if (image != null)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		// image.sprite = icon;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = V_0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_13 = __this->get_icon_6();
		NullCheck(L_12);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_12, L_13, /*hidden argument*/NULL);
		// image.color  = color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = __this->get_color_7();
		NullCheck(L_14);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_15);
	}

IL_0074:
	{
		// var title = clone.GetComponentInChildren<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_clone_9();
		NullCheck(L_16);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17;
		L_17 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_16, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		V_1 = L_17;
		// if (title != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		// title.text = string.IsNullOrEmpty(overrideName) == false ? overrideName : name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = V_1;
		String_t* L_21 = __this->get_overrideName_8();
		bool L_22;
		L_22 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_21, /*hidden argument*/NULL);
		G_B7_0 = L_20;
		if (!L_22)
		{
			G_B8_0 = L_20;
			goto IL_009f;
		}
	}
	{
		String_t* L_23;
		L_23 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		G_B9_0 = L_23;
		G_B9_1 = G_B7_0;
		goto IL_00a5;
	}

IL_009f:
	{
		String_t* L_24 = __this->get_overrideName_8();
		G_B9_0 = L_24;
		G_B9_1 = G_B8_0;
	}

IL_00a5:
	{
		NullCheck(G_B9_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B9_1, G_B9_0);
	}

IL_00aa:
	{
		// var isolate = clone.GetComponent<CwDemoButton>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_clone_9();
		NullCheck(L_25);
		CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * L_26;
		L_26 = GameObject_GetComponent_TisCwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9_mE338E4A2DE6920762B9DB637E08B93A240A2134F(L_25, /*hidden argument*/GameObject_GetComponent_TisCwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9_mE338E4A2DE6920762B9DB637E08B93A240A2134F_RuntimeMethod_var);
		V_2 = L_26;
		// if (isolate != null)
		CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_27, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00cb;
		}
	}
	{
		// isolate.IsolateTarget = transform;
		CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * L_29 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		CwDemoButton_set_IsolateTarget_m56237BF26DDDC298C8751D2B45B8D739C6086B01_inline(L_29, L_30, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwDemoButtonBuilder::BuildAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButtonBuilder_BuildAll_mF2952954FAE551199A27F5F3E8C5D8A851D055B3 (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B_m0D91A4B384E3062E3EB6BBA8A618320443183208_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CwDemoButtonBuilderU5BU5D_t4A70D589EC0841F2D1AF2474AD33E5E2B4989F49* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var builder in transform.parent.GetComponentsInChildren<CwDemoButtonBuilder>(true))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		CwDemoButtonBuilderU5BU5D_t4A70D589EC0841F2D1AF2474AD33E5E2B4989F49* L_2;
		L_2 = Component_GetComponentsInChildren_TisCwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B_m0D91A4B384E3062E3EB6BBA8A618320443183208(L_1, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B_m0D91A4B384E3062E3EB6BBA8A618320443183208_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0022;
	}

IL_0016:
	{
		// foreach (var builder in transform.parent.GetComponentsInChildren<CwDemoButtonBuilder>(true))
		CwDemoButtonBuilderU5BU5D_t4A70D589EC0841F2D1AF2474AD33E5E2B4989F49* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// builder.Build();
		NullCheck(L_6);
		CwDemoButtonBuilder_Build_mA04C1F6E5BF7689B1A7456602ECA2038CC2148D7(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// foreach (var builder in transform.parent.GetComponentsInChildren<CwDemoButtonBuilder>(true))
		int32_t L_8 = V_1;
		CwDemoButtonBuilderU5BU5D_t4A70D589EC0841F2D1AF2474AD33E5E2B4989F49* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject CW.Common.CwDemoButtonBuilder::DoInstantiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * CwDemoButtonBuilder_DoInstantiate_m9C6578CD922ECF4CBEB41CC143BE298714D330B6 (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instantiate(buttonPrefab, buttonRoot, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_buttonPrefab_4();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_buttonRoot_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7(L_0, L_1, (bool)0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void CW.Common.CwDemoButtonBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDemoButtonBuilder__ctor_m4D73C4075A0881BFF7C68612D5E47ABC10643FD7 (CwDemoButtonBuilder_tDA8F9FFEF06983FD5C6F792F613A03C666AD4B1B * __this, const RuntimeMethod* method)
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_color_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwDepthTextureMode::set_DepthMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDepthTextureMode_set_DepthMode_mB1F9082871155DE069C10C2C90563177E2DCF1F0 (CwDepthTextureMode_t62CC937DA3EE0B6FCBC25CCD24396A050F4797B9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public DepthTextureMode DepthMode { set { depthMode = value; UpdateDepthMode(); } get { return depthMode; } } [SerializeField] private DepthTextureMode depthMode = DepthTextureMode.None;
		int32_t L_0 = ___value0;
		__this->set_depthMode_4(L_0);
		// public DepthTextureMode DepthMode { set { depthMode = value; UpdateDepthMode(); } get { return depthMode; } } [SerializeField] private DepthTextureMode depthMode = DepthTextureMode.None;
		CwDepthTextureMode_UpdateDepthMode_m5A19C2C38AA44469CF96FC6FBFC0FA4753D8CB71(__this, /*hidden argument*/NULL);
		// public DepthTextureMode DepthMode { set { depthMode = value; UpdateDepthMode(); } get { return depthMode; } } [SerializeField] private DepthTextureMode depthMode = DepthTextureMode.None;
		return;
	}
}
// UnityEngine.DepthTextureMode CW.Common.CwDepthTextureMode::get_DepthMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwDepthTextureMode_get_DepthMode_mD8FD45C2D21178E40B97271369A0B21C8786C521 (CwDepthTextureMode_t62CC937DA3EE0B6FCBC25CCD24396A050F4797B9 * __this, const RuntimeMethod* method)
{
	{
		// public DepthTextureMode DepthMode { set { depthMode = value; UpdateDepthMode(); } get { return depthMode; } } [SerializeField] private DepthTextureMode depthMode = DepthTextureMode.None;
		int32_t L_0 = __this->get_depthMode_4();
		return L_0;
	}
}
// System.Void CW.Common.CwDepthTextureMode::UpdateDepthMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDepthTextureMode_UpdateDepthMode_m5A19C2C38AA44469CF96FC6FBFC0FA4753D8CB71 (CwDepthTextureMode_t62CC937DA3EE0B6FCBC25CCD24396A050F4797B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cachedCamera == null) cachedCamera = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_cachedCamera_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (cachedCamera == null) cachedCamera = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_cachedCamera_5(L_2);
	}

IL_001a:
	{
		// cachedCamera.depthTextureMode = depthMode;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_cachedCamera_5();
		int32_t L_4 = __this->get_depthMode_4();
		NullCheck(L_3);
		Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwDepthTextureMode::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDepthTextureMode_Update_m1BD75E212ADA1564B97342508F8C29D8735166B1 (CwDepthTextureMode_t62CC937DA3EE0B6FCBC25CCD24396A050F4797B9 * __this, const RuntimeMethod* method)
{
	{
		// UpdateDepthMode();
		CwDepthTextureMode_UpdateDepthMode_m5A19C2C38AA44469CF96FC6FBFC0FA4753D8CB71(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwDepthTextureMode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwDepthTextureMode__ctor_m418952036500645574292125C8B5DCDC5A50FE7B (CwDepthTextureMode_t62CC937DA3EE0B6FCBC25CCD24396A050F4797B9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwFollow::set_Follow(CW.Common.CwFollow/FollowType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_set_Follow_mDB2DEE976A844530124609381FBD071CE9C4247F (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FollowType Follow { set { follow = value; } get { return follow; } } [SerializeField] private FollowType follow;
		int32_t L_0 = ___value0;
		__this->set_follow_4(L_0);
		// public FollowType Follow { set { follow = value; } get { return follow; } } [SerializeField] private FollowType follow;
		return;
	}
}
// CW.Common.CwFollow/FollowType CW.Common.CwFollow::get_Follow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwFollow_get_Follow_mDFC819AD0C7741D961CD061BBDE53C263CEEFE6D (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	{
		// public FollowType Follow { set { follow = value; } get { return follow; } } [SerializeField] private FollowType follow;
		int32_t L_0 = __this->get_follow_4();
		return L_0;
	}
}
// System.Void CW.Common.CwFollow::set_Target(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_set_Target_m0E383863AE9E396B4CFB0D36E7CB13F2958A80B9 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform Target { set { target = value; } get { return target; } } [SerializeField] private Transform target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_target_5(L_0);
		// public Transform Target { set { target = value; } get { return target; } } [SerializeField] private Transform target;
		return;
	}
}
// UnityEngine.Transform CW.Common.CwFollow::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * CwFollow_get_Target_m3C71458DAD9E71FD977BF61804D8184841D5E06F (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	{
		// public Transform Target { set { target = value; } get { return target; } } [SerializeField] private Transform target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_5();
		return L_0;
	}
}
// System.Void CW.Common.CwFollow::set_Damping(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_set_Damping_mE056FB1B064C0AF65ABE17A62A554FB3C6EC9992 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = -1.0f;
		float L_0 = ___value0;
		__this->set_damping_6(L_0);
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = -1.0f;
		return;
	}
}
// System.Single CW.Common.CwFollow::get_Damping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwFollow_get_Damping_mFCF7AC66826D784A48D7E6DAD1E2DF29E358B920 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = -1.0f;
		float L_0 = __this->get_damping_6();
		return L_0;
	}
}
// System.Void CW.Common.CwFollow::set_Rotate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_set_Rotate_m237BB8EB1365754A7BC6B2B29AC145D04CD7ABC8 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Rotate { set { rotate = value; } get { return rotate; } } [SerializeField] private bool rotate = true;
		bool L_0 = ___value0;
		__this->set_rotate_7(L_0);
		// public bool Rotate { set { rotate = value; } get { return rotate; } } [SerializeField] private bool rotate = true;
		return;
	}
}
// System.Boolean CW.Common.CwFollow::get_Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwFollow_get_Rotate_m87202EC09999D7B49B776A33D189ABF0550E9D76 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	{
		// public bool Rotate { set { rotate = value; } get { return rotate; } } [SerializeField] private bool rotate = true;
		bool L_0 = __this->get_rotate_7();
		return L_0;
	}
}
// System.Void CW.Common.CwFollow::set_IgnoreZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_set_IgnoreZ_m87CC82731B32E8652B43CB7B4F0AA52E1C641889 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IgnoreZ { set { ignoreZ = value; } get { return ignoreZ; } } [SerializeField] private bool ignoreZ;
		bool L_0 = ___value0;
		__this->set_ignoreZ_8(L_0);
		// public bool IgnoreZ { set { ignoreZ = value; } get { return ignoreZ; } } [SerializeField] private bool ignoreZ;
		return;
	}
}
// System.Boolean CW.Common.CwFollow::get_IgnoreZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwFollow_get_IgnoreZ_mB592ACE2444FC65A2E6EEF563A33076B0A142DE2 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	{
		// public bool IgnoreZ { set { ignoreZ = value; } get { return ignoreZ; } } [SerializeField] private bool ignoreZ;
		bool L_0 = __this->get_ignoreZ_8();
		return L_0;
	}
}
// System.Void CW.Common.CwFollow::set_FollowIn(CW.Common.CwFollow/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_set_FollowIn_mA7473A152277DF5D4B1C5A4CD09116B35AC16033 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public UpdateType FollowIn { set { followIn = value; } get { return followIn; } } [SerializeField] private UpdateType followIn = UpdateType.LateUpdate;
		int32_t L_0 = ___value0;
		__this->set_followIn_9(L_0);
		// public UpdateType FollowIn { set { followIn = value; } get { return followIn; } } [SerializeField] private UpdateType followIn = UpdateType.LateUpdate;
		return;
	}
}
// CW.Common.CwFollow/UpdateType CW.Common.CwFollow::get_FollowIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwFollow_get_FollowIn_mF52999229D44F5E3550ED52B2AB8D3C1E8D1893E (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	{
		// public UpdateType FollowIn { set { followIn = value; } get { return followIn; } } [SerializeField] private UpdateType followIn = UpdateType.LateUpdate;
		int32_t L_0 = __this->get_followIn_9();
		return L_0;
	}
}
// System.Void CW.Common.CwFollow::set_LocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_set_LocalPosition_m70E8EF87357B8B35AC89B9FC68D9D4BC0F225903 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 LocalPosition { set { localPosition = value; } get { return localPosition; } } [SerializeField] private Vector3 localPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_localPosition_10(L_0);
		// public Vector3 LocalPosition { set { localPosition = value; } get { return localPosition; } } [SerializeField] private Vector3 localPosition;
		return;
	}
}
// UnityEngine.Vector3 CW.Common.CwFollow::get_LocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CwFollow_get_LocalPosition_mBF14D8599B0C9C98EABC0050A7A31637A61B670B (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 LocalPosition { set { localPosition = value; } get { return localPosition; } } [SerializeField] private Vector3 localPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_localPosition_10();
		return L_0;
	}
}
// System.Void CW.Common.CwFollow::set_LocalRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_set_LocalRotation_mC165B7FBC103A4795209C3DA7086D37770B95000 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 LocalRotation { set { localRotation = value; } get { return localRotation; } } [SerializeField] private Vector3 localRotation;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_localRotation_11(L_0);
		// public Vector3 LocalRotation { set { localRotation = value; } get { return localRotation; } } [SerializeField] private Vector3 localRotation;
		return;
	}
}
// UnityEngine.Vector3 CW.Common.CwFollow::get_LocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CwFollow_get_LocalRotation_mAEEB0C6B45D3CCA6E09AA6D8EFB3C86A01CB1F00 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 LocalRotation { set { localRotation = value; } get { return localRotation; } } [SerializeField] private Vector3 localRotation;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_localRotation_11();
		return L_0;
	}
}
// System.Void CW.Common.CwFollow::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_UpdatePosition_m88A9AA964697435F74F3BECB93BB6A666BEDA4A2 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var finalTarget = target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_5();
		V_0 = L_0;
		// if (follow == FollowType.MainCamera)
		int32_t L_1 = __this->get_follow_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// var mainCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		V_1 = L_2;
		// if (mainCamera != null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// finalTarget = mainCamera.transform;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = V_1;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0026:
	{
		// if (finalTarget != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00c5;
		}
	}
	{
		// var currentPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// var targetPosition  = finalTarget.TransformPoint(localPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_localPosition_10();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		// var factor          = CwHelper.DampenFactor(damping, Time.deltaTime);
		float L_14 = __this->get_damping_6();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		float L_16;
		L_16 = CwHelper_DampenFactor_mAC5C9507C2B790590B77EB007310BFFE2B2A63EA(L_14, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		// if (ignoreZ == true)
		bool L_17 = __this->get_ignoreZ_8();
		if (!L_17)
		{
			goto IL_0072;
		}
	}
	{
		// targetPosition.z = currentPosition.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_2;
		float L_19 = L_18.get_z_4();
		(&V_3)->set_z_4(L_19);
	}

IL_0072:
	{
		// transform.position = Vector3.Lerp(currentPosition, targetPosition, factor);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_3;
		float L_23 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_21, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_24, /*hidden argument*/NULL);
		// if (rotate == true)
		bool L_25 = __this->get_rotate_7();
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		// var targetRotation = finalTarget.rotation * Quaternion.Euler(localRotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = V_0;
		NullCheck(L_26);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_localRotation_11();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_28, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_27, L_29, /*hidden argument*/NULL);
		V_5 = L_30;
		// transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, factor);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_32, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34 = V_5;
		float L_35 = V_4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
		L_36 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_33, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_31, L_36, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_Update_m1250CF505BF2887DF573E48D23436B47BB930BCE (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	{
		// if (followIn == UpdateType.Update)
		int32_t L_0 = __this->get_followIn_9();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpdatePosition();
		CwFollow_UpdatePosition_m88A9AA964697435F74F3BECB93BB6A666BEDA4A2(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwFollow::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow_LateUpdate_m33DB7CE2C021348D7F4CF6A39345491F76283DA7 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	{
		// if (followIn == UpdateType.LateUpdate)
		int32_t L_0 = __this->get_followIn_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		// UpdatePosition();
		CwFollow_UpdatePosition_m88A9AA964697435F74F3BECB93BB6A666BEDA4A2(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwFollow__ctor_m163B3F1032513849A7CD7A5EC24FC1802912DE66 (CwFollow_t2D4350F241E264E2139DD2022E1E4FE508AA6BC5 * __this, const RuntimeMethod* method)
{
	{
		// public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = -1.0f;
		__this->set_damping_6((-1.0f));
		// public bool Rotate { set { rotate = value; } get { return rotate; } } [SerializeField] private bool rotate = true;
		__this->set_rotate_7((bool)1);
		// public UpdateType FollowIn { set { followIn = value; } get { return followIn; } } [SerializeField] private UpdateType followIn = UpdateType.LateUpdate;
		__this->set_followIn_9(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture2D CW.Common.CwGuide::get_Icon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CwGuide_get_Icon_mBBACBCD5B4D8EEFFBD5869C2AAE0F7390F5E8336 (CwGuide_t51C32B2C30A0D720E8721FD8931FBADB48DA7507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D7303A8BF0AE95E631B05826EE533A93F3D62E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (icon == null)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_icon_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// icon = new Texture2D(1, 1);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_2, 1, 1, /*hidden argument*/NULL);
		__this->set_icon_7(L_2);
		// icon.LoadImage(System.Convert.FromBase64String("iVBORw0KGgoAAAANSUhEUgAAAMgAAADICAYAAACtWK6eAAAgAElEQVR4Ae2dffBkVZnfe5gZGGAG5UVgGEARBAEXFBd3haIUXF9KqdIYNUnpJrtozBpfSogVquJGsWqtFP+gBaW1tVakysQ/NGJEWaNRFBPU6KrLiMsoMFiiwyAOrzO8DjOT8+3f79Pz7afPud19+/bLDPepuv19nue8P+d8+9zbt2/3ij179nRaaSPQRiAfgQPy7tbbRqCNgCLQEqRdB20EKiLQEqQiOG1SG4GWIO0aaCNQEYGWIBXBaZPaCLQEaddAG4GKCLQEqQhOm9RGoCVIuwbaCFREYFVFWpu0/0RgRYNDeUbdWW4J0uDKmXFVTS76cbo+rN39ikAtQcZZGrPPO2wxeo/Gyevl6uolIsR+lPLVbXem5VqCzDTc2cbigspmWnaW8pb81DUsnXyOpYWNP9aJ3+uQTr5Sesy/UPaK9suKM5kPFsmwxqry5dJG9cV2Y7lhizemD7PVXsxDH0p+0hcKW4I0Nx1x0ZVqrsqXS4u+cW3vRyxLWmnRun8UXfV5vpxd8sm/cNISZLwpKS2wWEtVvlxa9FXZ46SpXzF/7KvbVYubtBKqHtKqdNrzvPgWDluCDE7JqAuqKl8uLfqq7FHSPE9JZ3Sejs8xLlbsSVFtUEfUc7Z8CyXP1Iv0YQuGSarKl0uLviq7lOb+nD6qb5QxkCe3iPE5Rl19wUddjkrzPK4rX7S97ELo+zNBFPxRpCpfLi36qmxPG0fP5cVXQo2VtKiPEgcWeg7lcz82PrWLTluy8YNKcz1ny7cwsq8TRMEeVUp5c/7oq7I9bRw9lxffpKiYUMco8WFxO0ZddtVBm5TzduVTf0hz3fMtnL6vEWSUSc/lGcUX87hdV8+VwzcJjlqWBUd+bBZqtOUnDT3i7uU80Y9NnUL5aBtdGEV5cv6Yb+b2ohOE4JYCk0uPvip7lDTPk9OrfKTVwVyZUX2KF3lLsZOfRekovXSIHKpX6ZEosoeJylEeHFZmrumLSJCqic2lRZ/bw/Rc+rg+8tfBXJlhPk8v6VpUpJUWmBYr4oSQr0QAfftbRIAokESoNOqRjcjnfcF2JO/C4SIRxIPogcr53ZfTq3ykgWoLfRqYq9N9rtMX90mPtucrpSmPhPQla2kRR52FHTESQDb9QXdUedmQRbpEfkTl3R7mJ30uuAgEiRNIIKLfbXRQZdAdXS/lKfnHKZvL6z7XaU8+90d9Eps2hCVhkQpzhxa3/EIO+gzKL10oEbLLyHZdtoR2VU46qLSFk3kTRMGJEn3YoPKjC10nbZhv0vRcO17nqHrMl7NLvpw/9ku2RHlZmF3Hso1PqEML3HXZpWNXSlO9SnehTvz00/NIJ1/0L5Q9T4LkAuc+9Cr0tKiPa2tiVIbD7Un0UfqRy5PrBz5H7xt+fMIoLExH6VrQQvQcMUQK+SEH6O0qXTuHBF2I0K5slauyKTM3nBdBFBgXt6OO7Sg9Z+Ovm6Y+VdXh6a7n2ovpuTy0lctLmuMo+cjjKB1hQQr90CKW7Qgh5IMM0tUn2RLpUcjDKRZ5VD+6ysiWyIfedSzKyzwI4gFSHNxGd4x6zpYvHpqc6Bu1bCkf/aXeaJfKVfmpyzFXr6cP0ykvjMJCFHI4KaRzrEw6JFE8dUAU+jAKUZRXAkqnH/Khy79QMmuCeIAUCLfRhVHP2fLlSJDzUWdVGnki0k/353ykV6WRBxwnL2WGjYE6HaVLWIgQA8wRBGIIdajd2HZyZYV2PFFtaAwSpbvedS7iy6wJ4jEgQPKhC6OOL6JPVk53n8oOs2P9VTZ9rspD2jh5VSb2k3pKGPPTnqN0CQsXYghHIYcI8nQ6qtpKyV2hDRnSY7/xkS6UKB9pXkc3cV4vsySIApAT/B5I5XNbuk8OehWS5mVzPk+PbY5j5/qcK+99yKVHX1X+Uhp9Ebqw8IQ6cuSQj10DhBxC718yi0IbyiA9lsNHBbIXTmZJEB+8giVx9ADmdF8M0jmUF5082J6GnkP3SfeDOvGl5L50/GDMj78KS2Vy/pxPdeP3/kl3YdE6ihB+QApQpNC1CCTxcXjd6F43uvomnbLowoWWWRFEgUHQHQlcDpl4R+lVh+rJpbsf3THqsuNBP6J/mF0ql/MP8w1LV6zVnygsWHD317/+9aOuvvrqc++///51P/nJT87zAmedddb3Nm7c+OnkG5ccqoY2QPVZOnFCFy6szOqJQp8sdAJVhSwE4bBD73LD8ni62sVGd6RfyoNehVX5cmnRN449LK/62ZMbb7zxyGuuuebFiQRrb7755nN6CSMq69ev/9U999zz1yn7zsIhAilNyKEdSDo7kZDTN9+xIJBjytolk3CuMguC+GShs9A0ePTcpOMT+gEZIioPvqh7edfVPja6I/0r+UhXHehg9I1je95KPS3eNb/61a/WfupTnzp727Zth37ve987O/WlUVkmyX9OlT6VDojieo4kkSCQxQki3cnBjgI2Oo5xK5vVKZb3S4sHYSFF1ILgUJovevll40N3mzyOUZfNoTaijs/7pjxuj5LHy7gey3ragC4S3H777euuuOKKl2/ZsuXIO++88/jUl5nJ1q1bT0uNrbYG46KWzWIXagw68Me4ub0QZEh9HZBZEkQBQTw4USewOXQyQAiNAT2Xjo/6yIsdUf3BR99ko5NesqvyetqAPm8SMDklPOecc/7qZz/72d+mdCeHk0K6DsUYkjh6zFKWnsi/kCSZ9imWBo4QHNnocZFgC30hows5IEbJxi+kPtflqzrUR6WX+op/1HzduhaRBKcfvqZz2IGrOi9ff2jClZ0zjji4883fPNy5dtO2NPx+ST80+BfJ82Q6dHoVD069uB4B/VRLukjDNYl0HU469OSer8xqB9EiQnxhyec2i80Xri901yGI0PVcHieG62oH29v0ftC/7gJf7m+lvq+QYP3aAzsnHbYmDSkvOYKknDrNYlEPQ4+p8hJXEYC4JrWrxx1E6dGnvDOVWRFEg9KAEYIDeiBd98WOHgmBDSqfdEfKOqod2Y7etvom27Gn7y8kSOPLynnHHZb133DDDRsuvvji36ZEyKGdwOMq2+PoOiRh3tWG9LkTQR3JyTRPsTRwhIA4+uLzIPqiJfC+4CECqHc0dEeVle1IfY5qW7b3oat/97vfPTLdBzjyK1/5ygvncWGc+jQgf3LM2nQadEDnzCMP7hyfdgAdOiV69hq/fh4oVsvx1r+/o/Oj3+/oK/uyl73s//3oRz+6Njl1muWHn27p1IpPuHRKlTvVGvaJVio2f+JoAU1bnChqy0niui9QX8C+yCEApIiodHzkVV1eh9e9Mt0jeE4iwXOuv/7602+55ZYXPPLII4eqk/OUWZKgapxnHLFmgCA//vGP/zSV+W/pYIE7ElvfRTTHPrfsImo6tza0m8i/ELuKFs4sxImg9twmePKhCwm2kMUuFAEgATpIuudf9Y1vfGN9WvzHfO1rXzvr1ltvfeH27dvXpjrmKotCgqogaJcqiOIrEmh38HmK8wdRfL6lSxxJj+SQf65E0UCnIQw+VzfBECqg2DG4ThIWPEQo4g9/+MPnfOADH/hn8WsTuY5M27cvkKAqBqenU7eCQBAwEkWkgRzMK/McsdDEYrinRRBGp2AgMTBuE0RIAbJ7gJEoB6bKu2S55JJLXnXttdf+JY3NCvd1ElTF6Y+OOrSzbvUBne07dVa0V6688soXXX755RuTR/MRyeFzGXWf85I+1x1j7yiXtGkTRK0QCNfxCWMQRyUHu8iBiRwXTYscWiBnHHHIzC6MFaRFEo09XqjrVDUR5Bepn3565brPaZxr5pxrEdkusheGJNP4FMsHLJ1DQZMOARxFVHYJoRa/fJAA1I4xcKxYseK/Jn9tgQTHr13dOWHd0qdCumFW+qizdkP7YMGrfnZP55O3/H6g5+mG4eXJ+Xg6nlg+9ImWdD7Zip9q6ZMs/zRLO48OnYqJLEIRQ7rQj2TOR6a5g0AMUCNEd3TiOGn8HUn99APCrD7llFMuGyV0LQlGidJgHn2EXBB/Q5Me5042h893TlcT8ud2jpJfZaYu0yRI7HwuMPIRRMdIDiYDYqjf0g/cvHnzmbEhXRfoaxOa3HYniNEZzz6tmiA+T5EkPp+ul9aB/BJhjijdxFm/qONNCoOMdeaCQtCUhi6MQYcc7CCQBIxtdd5/9tGdy845rvO65x3eniYNRGc8h76Kot03ylVXXXV68uXmyucyN+8ln5pQ2kLJ4Mib6V4pCDm/B9TfhSIxIAi7x+rTTjvtvbG7Rx+8qrNh3UHR3doTROBPjx28bfTpT3/6glSlE8TnMafn5t4JUdIn6PnkRadFkFLPYpBygYwkiURh51idno94YWzo/PVrO7vTBr1TL600EoHcDcN0antCqhyCaB593uK8at7li/PvdkrupUdd9lxEnW5KNNiceBBc94DFgBJ4yAGKHOwk0gfktc89vOt7/On+z+4HMraOkSOQ20GWC2vemCv0OJeac/lA9OUqeqRQekmq0kplGvGrs00LgxHGQ23JR5CEfhDsiJACXH366af/W1XmotOrF6RnGySPtQTx0Eyklz7JSt9oPiRV7PMXdZ/ruBbcpn/yScAla46vGtA0JDdADwi6B1SkkB3JIRti9PCXv/zlqbHjOr1CntzV7iDEYlLUN4U3HDq4YacL9TNS3cwh84etOZYOojP3oLoXdfkWQtTpaQoDF0qEBCqH8nE4MVyHJKqvTzi9kvOpXXs6u/a01yF9AZrAyJ1mfeYzn7kwVam5ieRgDkFfB8N0eql8cxcNYFriAywFRe0rjUCCBB0UKXr6GWec8Zex0356RdqTiSStNBOB3IX68qMBzFkOmXdPw+foncQvn+ueZ2a6Ot6EaCCSHLqPARMw2ehCSIAPW8jOsWrTpk0vSHaf+OkVCe2FOpGYHEvXIalm5soxN8/4hmGpsyo3c9GgmpY4kKqAeFBdhxjyoTtJBvrsp1cktgQhEpNj6Xtp6anLo1LtPnea75zNOlAa+jCcvOMT1qDOTksYvOpHL6EHFN2JATlWnnnmmf86djh3eqU8z3SCrHjWszsHnHhSZ9W553VW/9nrOwe9/Z1dPcZvVFu/fhJFP1aXfMxZRM23fI6lNRCrlq28cxWdtkxDfGClgHgwySMfxHAd38rbbrvtlNjh3OkVefRp1kErVdV+Kget6RxwzPpOlwzPPryz4uj1nQMSypeTFWsO7jz9Dz/IJQ316UJ904P6wu5eue66685L1v9OR2k+mVuh8rgtHSn5la60uVxQTosgDMoD4L4YDA9u1HvkSBVIH5Dc6RWZdD9kfyDIiqOP7S38Fc9KRNDuIGKkBT+OlIgzSh25C/XlcnHOsDXPrjPv8qE7ejfkFylApbkue+rSJEHUeQm4ZOUDoTwcBDAixJC/q6fTqz+nUrB0ekX6vvRJlha9Fn9vR+juDMlOO0KTotOu3Xf/euwqKx7B9QUf59HnGT2H6g/+sfs2rQJNEoQBggy2CmNglTcGWOTo+sY9vVJHFu46ZMxTIo2haVn53HoE0SO4OdHPI1144YU692I+HZlP5pb1QB7sEs7l1IpxNk0Q6s1hKQC5AOID2U0G6q06vVLmp9OXFnXDcOUKNT87aeqUaBo91g5SV/SsTXwE92Mf+9h5iSDXpTqZL1BBl+5zH21Po1vyIdLnRpImCOKDYVBgafDyx0AR1CzWOb2iE9pF1q4Wx5qVWZ0SNdvrFPjCBfwo7ehBtEiQ5b9b+J+pPHPH/DLH7vc1UdLVFdK4DpFv5kRpgiDquIsGJgGXrL0DZuAljEHtBrfO6RUNN0EQvevq1GTYp0S0ucioC3vtcHvuu3fsbta4Ych8ar5d9/mnHzkfaaDyzIwo0yCIBqJBSHzA6PhB/I4EskuOlFE4IMNOryjQxIX6ijVrOqsveBVV7vO48rnP7zxdgyAVj+D6XPn8aV5Ji7rPOTqxlS0RzowQ3RbtJbvwLH0aKoFwjAH1tBXpu1f/JnZk2KdXnr+JC/Vdv/m1V7nP63VPs0qP4H7yk5/U138gQsS++Uz5SrbiShq6cG7SNEE0OCTqDDyHKhP9kGbFqN+9ouEcTvx8yJNPdHY/9GCu6n3SN8mFeu6bvemO+vkpEJEYOTvOc85WTOVHXMc3E2yaILHTDD76ZTNo8uRs+bJ9HPX0ioabeD6kzr0D2l807N5bSR8515HcDcPlv4SLhPC5RVce9ByqS/JLSI96N3EWL9nF10DDDJCqGKij0sjn/j49PTn4TioBxzm9okwzp1l3Ud1+gfrQoY7kdpDlenzxR7Jga35d75vvlOZ2qXvKMxNRR5uWUTufC0T0rRj25OConW+CILt/v3XU5vaJfHWvQ0qfZOlPhdLAffGjC31uS7ripjQEHcQ/M5wGQao6Xxqo/DEt5+vWPe7plQo18Usn+lh0zxP6tc39Q+peh5Qewf3EJz7hj+BCDuYRkoD4QQVVuiTnW0qZ8essCMKgGZoPHh9I3i7efffd2ZPkYw8ZfD6aCqqwiV1kf/o0Sx/11pXcLpL+iSt+9V3zqDUGKUDWQLTxO9JF+WYu6uC8JQ68Z5944on9361e7ukt9z9Wq89NXKjvuW8/O82q+bWTl9sPZDAZhQt1rTEOFn608YNUKXSf655navoiEKQ0OAUjK5sfqneaM/FHvak3+9MOouA2fR2iKsPBohaS5r5heiqWFZWbuiwyQbp3T88///yfxihs/EO9HaSJXzrZnz7qVVzrXoeM8QgupAAhyqjE8HxxKUzdngdB4tcGKu2PfvSjN8Uo/Pz+ejuI6mniayf706dZdT/qVSwnfASXha81iC6URHvJO4fXWRDECYAOxiHjBzuvfvWrt8VMsu8Ij37m8uR8zVyo7z/3Q7pfXEwPatWR3IX6t771rXih7gSIutuRFNFWF51Adbo8dplpEKS3uEfoDXmF6BTDF/3d9I3bHiXfWNgEQfanHUTBq3ualbtQt9/KYoFrjXHI5zp5SqjuSUhH7zpn8TKtb/PmFnX0YYMar3QO7M66det2xL9uvvPh7AdcKlMpTXyStS9fh+j7ZHsefrAjku95+KFlrPcds4pHcCMRIIWQxV7SSdc8up6bV6X7+snlmcjXNEHUWXUaofOO0t1W3ujrs9/1rnfdmG5CvZFKhXUv1HXDcNJfOukurLTQmn5W3Mc3ia6bmRAAMnSJUePr7VX9qHgE96j0hOGWVLZEDCcHJBgVWTtVXWssrYk/8YQQDNCDwqOyIiKH7vJx8Iec+scbP/RTHbpJKDx4y5Ytzz7++OP/U9L75CtvOLWz7qDxnxQ8Jt1o1F+zTSIH/vO3d1adphvH8xORYGnhL+PyjtBJ3zyelbz17+8YeMLwFa94xcabbrpJj+Dq0xQOdYpjnD/61J976tCvkesQQcCk9t5spTcuTe8gpQ727QgpE3YOVUeff8OGDdkZ1w3DC45bV2qz6Nf9kEkJ0j3NmgFBSqdE2sUWQc44Ys0AQTKP4Pqbpuu8qY6DWhu8KUufqjRBEO/wsM4yoBzKV3UM1K0bhnUI0sSF+q7fNPdJ1qxOiQYC2IBDF+rXbsp+0OhEQNfClj6MEPQMIoD4HZXGenJ/I3oTBIkdYZHLn9MZjCP5QLZQYffQtr38ztRrr+51SBO/dFLnee5FOCXqBa8hZcJHcIeRRb2EHI6snYZGUa5mGgShNR9E1CFCDp0cvfR0w/D7F110kT5j78kkNwy1i0z6SyfaReIX/hb9lKgXvIYUHsHdvlPTtlf0CO4HP/jBXyQPu4ejFjsHfuwSqnKl+VqSb6oyTYKo470FbnrJn8srX5cw6VOR7D6uG4b87ZoqHlV0R31tvS8F95rY+X+/0/2Fwr07w729tGeScsYRhwxch6Rv9p6eCHJbigMEELL4cz7SIhJK+RHpMyGKOtqUsMBVX6nz5CHd7Zzuu0n/W9Ryr+d6wzD9fKdIsuv2TbV+QqepwM+7Hv1WVpR0OnxW8tUlRSQJ5MCv5lyPzTdmN0mQ2KkcCZQn55dPBIiEcP/uww47bOD2ed0bhk1cqGswrXQ6FY/gahGzW7gefaSx6EtYCrfyT0WmQRAIoA5HXfawA5Ion+t73v3ud9+UfH1S90JdlTTx9fe+zjxDjdx3shSK9Aiu7mNBBtDJIJ/bkRiqxhc/Oqj0qco0CEKHIQeEkB99GLKb9OGll16qc9o+ue/xpzvbn9R9pPGlia+djN/q/ldizEdwIymwq8hBmoI3M3KosWkRxMmhdiT40CEJJJDtekzffdxxx2W/5173CcP2NEtT0YzkdpEaj+BChCqkwzMhSlME8cXPAEAW+jAUOcgDUXJIvT2s+4RhE8+G9DrxDFfG+K0srTkOiIAtxOfo0cUvn+uepzFdHWpSWOCqM6fjKyGEUHpO360bhrHDda9DdMNwp7692MrEEai4UPfFHwlAGgt9FCz1VWUbl6YJQgd91UVd9rBD5CAPROliumE48Ad7k9wwbK9DmLLJsOYjuKMQgjx0EHsqhKARcFoEoX7IwWIvISRQOrpjz191w5BGx8H2OmScaFXnrfEILjuIkIXvOiQgDbu6Iw2mTpMgWtSSHMrHokePthMk6t2K/WXzw9nrd8+S1duPerNhqeXMXajbI7gscidA1N0mP6SItvroabX6PKxQkwTRAi8JaU4GdC1+dCFkcB1fF3M3DG/ZVv+XTkqdbv3jRSB3ob78CK4WstZaPNzvBCjpdIh02dKnJk0ShE6y2GWjO5b8kIC8sqPezZN+yGHgQn3zQ9lHRtTWUGl3kaEhGinDn6T/US+IE0MLOtoseFDp6KCqdl12FKU3KtMgCB3U4nZhseN3O5IBsmTx6quvHrhQv+uRp2rfMGyvQ3ya6utVj+CmWp0UTgD3QwBQnUEvYf0Oj1BymgRR804CuuO+YXqWIKUbhnfUvA5pP8liaiZH/QtuFP0LbvJFImD7ws/5PD1WLVvpU5NpE8Q7PioZlC9LjOD3urv6z2teh7Q7yEAoazv0CG6U5QfdWPxV6GQgHwTwNNfVHHZsemK7aYJocSPoEEP+6CPNUeSINoSRv6unG4Y/V4UudW8Y8ksnXler14tA7kJ9uSYWPMiiHhVVjfJKwCWr/7UqrT/nCFbTBKFJLWQJ6Lov/pIOIZws7tv1pje9aVO3BXup+9V3VdF+7cQCOYF67mgX6pDEUQtbtrB0qGcQAJRvajItgsQOQ5QSIfBDAtmQA18fpqfV7oiNPPb0nto/Sdp+khWjWc/mEdxY2v4FVwvbiQEpHNFLRIEcpMfmGrPVkWmLk0Ntue3EQBdWkYN05RmQujcM2wv1gVDWdugR3Cjpm70vTD7I4Rh1Fn0JqVrpiOv4GsFpEEQLuCSkCeMBKfCzY8hG78Ombxju2qOmWpk0AoVHcOOPWmtRa/2xW7heIof71U3sqMtuRKZBEDrGQpeN7hjzkQYJ3Had9N1N3zBsr0OYkskw95WT5RohAcgCr0IVVTqCDuKfCk6TIHRYi9uFxZ5DLX78PSIkX1Zvbxh6WBdHL3313R7B1eKGJKB8+NFzqIHKXyXD0qvK9qXNgiBqkEUvRNw3TI8EUf7iE4Z1bxi290OYmsmw9AjuVVdddXqqWYtX684RHb9sP5LZZytNEvMseRt8nRVBvMvDyNBd/KkAyK4SScIPGnvdXb29YTgQkpk7cqdZ119//YtTR7TmOLTAXfcFn9M1Dvkl4JI1pddpEUSLG0EXuq50fI5OCPz4ZPcRpckbhupQ+2mWojC55G4YLv8Lbm7hl3zqCGnoOXSf9MZkWgShg1rQEtB1Fn8V9pEhFXZb5XY3fcOwvR+iKZpcStchqWatORa96/hGQXVQ+STgktXw67QJErsLUapI0V34qSC7hqMTpKs3fcOw/SQrTlk9e8RHcEclw7BOQBJwWP6R02dJECeHOug2hIEM0R4gRirvvoEB171h2F6oD4SytiP3CO4111yj+yGjEGPUPLF/jZJkmgSBAHEAsklzjKRwG+I4KXp6kzcM2186yU1XPV/uQv3b3/62LtSrFr8a80WODtbrTM1S0yQIXWKhy0aPmEuDAOSFJLJJ62LzNwxVbSuTRiB3ob78Z6wlgqhJiECe6HM76rIblVkQhA5rYecEAjgWyZAq6COH7PaGYS6s8/fldpDlXrH4x0UVdwL5IPG7b2J9lgRRZ50EdfQBcqQ6G79h2F6oT7yuuhWULtRvvPHGo1KGSA6VcV+3jiEvkAIckn385FkTxHs4CkHYSSCGyqBH9Lq7envDcCAkM3fkHsG94oorLkgdYVFHpI/yc1T5SJsKTpsgWtAIOsSQP/pIEzo58OMjvUeSpm8YtvdDmLbJMPcI7s0333zOcq1ODsgAesM5n6dPTZ82Qei4FrQEdJ3FX4U9IqSCWb3pG4btx72aoskld6G+XCuLXojkdPeRT4gf9LTG9FkRJHYYolSRQmmQwfPh68Pmbxiq+lYmjcDpR+g/dIaKFjkLPepemDz4oo1fWJXm+Sr1eRDEyaHOue1EcL2PDKlMyR4YbHvDcCAkM3Xot7LWrR5cZldeeSVPGI6ykJVnlHyNj22w54030SNArmYnh9IhBQTAFroPvQ+bvGGoXzpp/xohN2Xj+3KP4H71q1/9o/Fr6paoIkvjJJoFQYgDi102esRcmkjg+dzuI0jTNwzb6xBNR33RI8z6sOOPjxl8Rv0HP/jBH2dq9gXueibrbFyzJAgj0mLPiZMAHTI49pEiVdSzm75h2H71PTdN/T5I8MhTuzr3P/F0555Hn+r8bsdTnTvSbyXf9fCTnS1Jvz3zu8lr167d3l/TYlqr5tQtCDAOQhKV6ZHC9aqfJD3n6MGfxBw29vaj3r0RUix2px1BN1F16qnvrOkNRKeiwyT3w+KvfOUrf5Ip57W5nsk6G9e8COKjUyCGHZADYig/ekSvu6vrhmEdgjyVFoPeIVeuWIjdfmBcTTsmIRRNrX0AABMLSURBVEFVX/TD4lHe//73/zT5xiEBeVkrsUrZ5Mml1fLNiiDqOKsM3QfKwPA5Ojnw45PdRxDdMEy/BXuWR6PuT5KqDr1jHrKKrnut+6Y+LRKUorF1x5PZpNe85jV/WE7QHEoc0ZdS9qZhgzEf/sZwVgShwxqQVhsoP4MUDjv6yJDyD9i6YRgJMslPkupC/ZBV87hUU2jqiU59Eq876ns8LapX4+il7njwic69j+/s6J+HNz/0ZOfexwZ3j+Xa4lzLLR/i6e6LupchTVjye56h+oo9s/uxNN6GhTq06oQrl3WhCAuuTrofByb7oHDop8R16G5U71ixYsVfJ7tP/vbCkzovOFxZx5ODEzmOX6umF0vmSQJFYs364zoHHnFE5+DjjuscnPRv/eSXnb/6m2tHCtKRRx75wLZt2/5Lyqz/zdOhfz/i0JajQ8zyY2eynw6HfriDH+/gzTJHrJStnsx6B/FeaiAiCEz3gZV0gjAMvZ2urhuGdQgyz0+ydDGsYx47AQGMRFgixQaSe7j5xoE//eqlRSWR4xPJV5rjnJ8qPA3fVHGWBNHgRIicKE3iKF1EEMYDv2OPNLphuPzfeKnokug/DF/3vMMxR0Z9SiOSHLRyOqdZkEBtqC2RQR8M6AOCWcrqww/vHHj4EZ21J5/cxQOTvfbkU0buwvd/NPBvFNmy73jHO25KCb25Snqc22irHnzSZyqzJAgDY+bZPRi8o/JiOwnky9ke8O5Pkl533XXn0aAw91Gjp1fpurCdhCCLQgKNcVIilOJ06213lZJ6/nSf6svp06t/Sg7mlvlk/tzvOnXgk13SydsIzoMgdFwDzO0oDNxxKClSXQS5+4RhJAj/YbjuIF3ijCejPECld33lm/dOwMimRQTqd/zNb7d2tu8Y/JfhM888c9s555yz9XOf+9wPU35dY+h6ozdPy7rP8zA9FemK8iGu42sM50kQDWJYQHLpkEVpMdhdu+kbhjrtkUACftjBydDNMIeXWRKhNLxfbPp1Numyyy77p0suuUSJPk+5C2ulM5/CYYfaU56py7wJ4gMcFhSleyCj7pMgfUDq3jAUIfTViXnKAWvWpE+MNnQ/NdK1gj49GucaYZp9/8Wmu7LVv/Od73yFDiVu3br1mmOPPTbOUbR9juN68DaUJgGXrCm8zpogGhCnVejCOFB8jgqmbDCn9wJ+yimn/G75py5TkSXR5/KLLjkiiBgrDx7puYq5DO/W2zYPbXf9+vXv37Jly5Vpd+djWZD5ZO58zkt6qT3yl9LH9s+aIHRQA+Ei3QnDAIchwSzie9/73u9feuml/4IGhbdse9TNuer7IhFKASvtIDH/hg0bLk/33S5PficHc8icR1t+CelVejdjky+zvFFIvyGEUMdMbxj+99c8v7N+re43zkb2JyLkIvbQw490Tnnpv8wlZX2JIB9KCVywa0uXzs3BeINQNwe5QSgUsXSzUMjhhJLuhErmZDKvHcR7rQGJKD4w3i1ABu42gYlI4IQDsjHdD5kWQQ59vu4hpPsJ6Q7z2q5+RFcf6MR+5Lj1tl8PjObog1d1jj1kdUdf8dEfq7p8/OMfP/XDH/7wPyaf5k1z5OhzyVyDqgYdlA+Rr3GZB0E0EHaROCAG6Shdh4KHju0BzQU61t+5s4GL7WciEWIgdz3+eOfxe7Z0HvjpP3T+/IVHdk5+9sGdQ9OXOv1b0//qf92RCKI3/L3yu9/9Ts8d+JsYJPG59HmO+t7KljSlT03mQRAGw8DYPWIgcnYMomzlc39Pf/Ob3/z9L3/5y+fToFA7SF055tWv6Rz76tfWLb5Pltux+c7OUw8+mI4HEiHu6YgYj961uTeW5yXtL844ume7ct/j/eRQ2hve8IbbE3Ca1Jur5IMocT5z68B9qla2S7Q9bSx9ngShoxpM3FEIgPKgRyyRo/fu9L73vW9jJEju2QQ68kxFkaC7I2y9p/PUAw90CaHdYfcT9T/aLn3N/eKLL96a4tybI9OdLMxtnHO3ZzJdi0AQDdQHLl0SfdgxkDm7OwEXXnjhfUtV9b/+7L4dfacC/an7pzUNElRFautjuqbOinYPDogS51BznfN5hawH4dRkUQjiA/SBu07A5JMO4ifYQvmwk9ovdW8Y9teyeJbe9bUT7EinQE3tBHVHqefRC8LplebHdeaN+WSOfQ24HqsnLfonsudFEA2G0yp0HyB6DgmcBzLqBHvXySef/NvNmzef4FHaF24Yen9ddxIsXSin06J0fbAzXSfMS3Q6pR1DpLg3/WjDZmFmB0n3Qe5IfWT3yJFD88bcMae5NaCh4kcXNi7zIggD0SC5SHfCeDqBcCR4IEElwD18z3ve838+9KEPvZ0KhYt0w9D7hb707v9AdydYFBKobzo1vS8tfC1+vcns2Lmr8/P79f3D0SRdE34x5dS5VyQH88V8Cplv1/EJEdfxNYbzuFFI5yGEUEfuhiFPF4rIHHrKUI/4gbrrx9OGemRQtj9puCY9Yfg3ydcndW4YNvkpFiTofjL0RDot2ry5e3r0RLpQnqfokdntO5/u6DRURPj9ozuz9zPq9DHdJNQdRX9KEF2k4fAdZhiRRI5IIHWtMdLMewfRYBANSkQRxiMGQTYHu4dsdN6RwJTUL9O8YUhLi0qC7U/u6tyRnrDUKZF2Af2ohXCan/B94QtfuCzFBRKwi0QCMKcljAs/2gp9zseUjI3zJIgGwi7iHWeAQj8UNNkEz3X5IIMj70YpuV+auGGoGpdOgbb07hUsyk6gvumU6NF0J1s/oMBuMM4pkepoQr74xS/+h7e+9a13p7qcGJEcPm8+x74Goq7u4WuiqwN1zJMgdEYDlLB7gEvevQFQPkiCTiAVXNc92E+nz96/e8MNN1xIhcI6Nwy1+O/tfDN7w8zrnqXOBbJOiXakXzfkAjl3k25W/XrpS1/6/bPOOuv2z372s99Nbfqugc4bF+jzp3mMtuY7HhqOfIjr+CbGeV6DqPPsIEIdug7xQ9cgHCIzR/y1E12DcB2iaxCO7rXIN7/5zeNf97rX/cfk75Mb33x6n72oBqdEfoGsn9OZ5inRsFicdNJJv0lfYf/DRz7yke+89rWv3Zrys9iFvlNAihx6GXSRQzpvciXCyD+MNCnLZLIIO4iPIA64ZLNbRCSoYDfoyxPo7XT1RbthOM0L5IHBj+DQj1+8+MUvvuONb3zjprPPPvsPr3rVq3Tjldg6xsUtO5IEn/spJ/T6mFfNfyRCcvXtHLKnJotGkDjQSJAYOGwPrnQFnJ0HPdbd/aTGv1w3kGEKDk6J/AJZ1wfzPCXSr1EeddRRO9IzNBvTtw+2pWETV0fFVXaMNfGO6Itfeo4YsS5vL0cO1kOqrm/3kD0VmTdBNGBOs9AJQkQFT6df8ksHFWSRgWBDiD77xBNPvOvuu+9+fsrXk2neMPQL5Dr3DHqdbEjRbvCSl7zkzvQHmj889dRTt6cn+/RFK+JILEFfqOiKp3RHYixU3LHRhaXDy9BGRPXHj2T2bOmI8kjAJauB13kThCFoYCKKI4MV+hGDyKQ5SQi+fN1rmvTjAd9Ii+PfJ7snk94wZDfwC+TcMxC9BmegaDc499xzf/v617/+7uXdgNgpTtJB1/E5So+H4iqfo/TS4URRHsiCHsvRHn3OYapmdjLvi3SNlB1EyOEX6tI5XRKK1H74BTs3D/2inYv3A9MNw79LZftk2A3DeIE8i3sGfR3MGHrePl0T3L18SnR/ypJb7JP4fKGiOzFcZ5HjwwYhScnGT3mhH6VxQB5FSLoEXLIaeF2UHSQ3lBgAbKEHkMBCKgKuientIEmHiH1tccPQf3R5nvcM6BynROnHuH/5tre97bfLP2XE2B1dVyxku8/1UnouDzEmDVvxRRdiOzIHOR+EoSx5vE61mTuSe7ayCDuIRszO4ciCB+Mu4ruJdg6RnR0kYndHOfTQQz/12GOPPUsNLoqEUyLtBlooLEoWybi+Uvnojzbt4McWVh2+yNEdpUdb9eEr1a1+0Bd0MCX1SCRdorRGZZF2EB+ciEIgcqiAKg+BVaBFJKHeoZQmG+zqb3nLW/5H+pW/dyX/TEWnROmbrPfrAjn9s5I+JdKY1HfGhg56es7n6aPqMV/Odh/tOkrnIK/s3ELHB3o+91Gfo+r2I5kDovSpyyLtIBqsFjRHXOCcLrGTiNy+i8jWod0jHtpBur50HfKFpE9F0m6wUadE6frgAbtA1sQz2eig/Dk95yvljXWX7FiefDl/rn358KPnbE/LESHnow9en/cv6po/+SQRl7wNvS4yQXj3ByNBIEoVSSBMjyApbqsSSfS161pywQUX/GP6f4sd6UeYN1500UVcIKsuJpFJjrb7J9FVr5fP2SUffRqWXqofv7BKJ70K6YPXg8/76brHGV0oUb7GZREJokFCClC7iR9ODggC+k4CQUDtIl09/Qz/n33+85//d2osSrpWeeRFL3rRpnRK9J30A8w7TjjhBH0tW32RgEvW0qtPoutMvnyj6DHfKDbtef34Io6Sx8vE/NhV6GlRl+0+tRVtb991RRpbukQ24jq+iXFRCKKBsPCEHPE0q4okThB0CAFBhPFY+aUvfWlDuj7Rf+apfpWlHfWDPtCn5BoQJi6HLACluT6KnctDG7Eu/E1hrv7owwa9v/iErufyDOuzAq48koju62Zo8mXRCcKiZMFG1GLOHZAAomBH9LKqW7a3QfuOufgzwUqTzoLAn/ONksfL5+qI6XVt+l0qn+trrj+ebxQ91pHrB74cyidRPVMRLZhFFB+wFqdsDgVeIr90YUm8HsoLVU4Xi5EgTg7pTgzaAVNyV2jD64+6LxZPK/k9D/qoedUpygzDcfIOq0vppT6W/Lk6vU/oOZRPojqmJotKEB8wASCYSpOuoEtYsOCSd+k1lqWcEyPuGpBE9cVDtcZ2cm3IVzrGWSylOkbxq6+lfLm0nI/yVWnkmQS9fvQqVNpMZJEIogBr8YExAEyA/OhCiBLzu01+5fWDXQRSsGuAThDVF8lBG9QvG92xKVKU6ve2cnlG8cU80aaNcf1V5bwu9By6Tzqiuqcqi0SQONDc4PEJxyGG8nNAEMghhCAiQI4cEANM2XrifaINJaI3hVV15tKiz23XY/89zfWYb1zb68rp+IQS6o96NzGk42scF5UgCs6wxahgKF+OKATXkbw6pVIZEcHJATFAtU8fIqaknsQ2lCDfqMew/Ln0UXyeZxy9yby5uvDl0H1Rl40Qc+yp4aIShAGXAsECd6SMI4tUpJCuxU8Z+bTw5YMUYCQHBElZs0I/aS9nexq6KkN3zPmjz+26OuVA9QG9hKPkKZV1f5Ue02QjtI89VVw0gmjwpcUYA4PNghciSosHRAApB0kgRUTVWeqTtyfd24w2aTl/9FXZnjZMz6Xjmwbm6nRflR7TZLsofjOXRSOIB0AB0cIkMHGR4lcZFjskIa/yxIO87BagysRDdVOX9JLQF9pSPvSYNq7tdaGDXleVj7QqHDfN89fRVUbCGJaswddh6YMlGvQsMkHiMIcFSgufxSxUfi1+IQfkACMh3E7F+uqTnRP65VilV6WpfqV7niofaWAsh78Kc2nuG1WP+XJ2ySe/C+Nw31z0RSSIgsNCRwcVpGHBgyjUIVQZ6gA9nxPDy6k9Cb4la++r9wXdcVxdNauMl8NXB3NlhvmULqEPUc/ZJV+VX2mIt4VvIXARCVIKDEFkwXs+pcVFTj5OociT2z1UF+XRHaWXhH4pHd2xpMf8ni+m5eycjzo8bVQ95svZJV+VX2ku3kf3L6S+qARRELVgJa67PSzQlAMhCsRRXZCCtkqovDnxPkQdu2lUP2Kd7qvSY1rOLvmq/EpzoX/u2yf1RSVIDKYCzsKOWMrLYo9l5edQ2ahTH+WxcxgXAnZdVBuxrPvq6Cojod4la9DGn8vraa7HOj1tv9AXmSAKvi9S7KpJIY8mB111uE6djugq57rsUcT7hA6qPHrEXJr7qvSYlrNLviq/0lzos/ueMfoifd09F/TcYnUfOqg60IWux7Sc7T7po0hcQNig6sjpOR/tjZqWy49P6PW4P+qj5ovl9nt70QmiCWCR+2REHzbo5fCBuTT3eTuj6nGBuT2KrnY83yi29y2W9TTXR83nZZ7R+r5AEE2QL26fsOh3e1y9qh1v0/XcgnOf6yo3zM7lob1YFn/EUfPFcq2dicC+QhB13Rd8HEpMG9ceVn9sT3ZpIUZ/tMcpm2sXX65e0lpsKAL7EkEYclz8+MFces6n/CU/dY2CpYVa8qvOqjRvc9R8XqbVG4zAvkgQhj/q4h4l3yh5aHfURdt0PtpvcYYRWOSPeYeFIS7A0iKP+YbVW0qftJ5Jy5f61fqnGIF9mSAxLKUFWCKOly+V9TxV+qTlq+pu0+YYgf2JIKUwtou3FJnWPzQC+n5SK20E2ggUItASpBCY1t1GQBFoCdKugzYCFRFoCVIRnDapjUBLkHYNtBGoiEBLkIrgtEltBFqCtGugjUBFBP4/aifMJg6ky3wAAAAASUVORK5CYII="));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = __this->get_icon_7();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = Convert_FromBase64String_mB2E4E2CD03B34DB7C2665694D5B2E967BC81E9A8(_stringLiteral60D7303A8BF0AE95E631B05826EE533A93F3D62E, /*hidden argument*/NULL);
		bool L_5;
		L_5 = ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// return icon;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = __this->get_icon_7();
		return L_6;
	}
}
// System.String CW.Common.CwGuide::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CwGuide_get_Version_m716E03764B89672657DB7425CDF92D584A9F8DC4 (CwGuide_t51C32B2C30A0D720E8721FD8931FBADB48DA7507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18CB9DCCBE4C6D07F0E9FEB150B09A9AE69921E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E911FAC2FACF1A59F259BF1BA9A057B95AFE630);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (version == null && Documentation != null)
		String_t* L_0 = __this->get_version_8();
		if (L_0)
		{
			goto IL_0058;
		}
	}
	{
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_1 = __this->get_Documentation_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		// var text = Documentation.text;
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_3 = __this->get_Documentation_6();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var a    = text.IndexOf("Documentation - ");
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_5, _stringLiteral18CB9DCCBE4C6D07F0E9FEB150B09A9AE69921E7, /*hidden argument*/NULL);
		V_1 = L_6;
		// var b    = text.IndexOf("</title>");
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_7, _stringLiteral4E911FAC2FACF1A59F259BF1BA9A057B95AFE630, /*hidden argument*/NULL);
		V_2 = L_8;
		// if (a > 0 && b > 0)
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// version = text.Substring(a + 16, b - a - 16);
		String_t* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)((int32_t)16))), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14)), (int32_t)((int32_t)16))), /*hidden argument*/NULL);
		__this->set_version_8(L_15);
	}

IL_0058:
	{
		// return version;
		String_t* L_16 = __this->get_version_8();
		return L_16;
	}
}
// System.Void CW.Common.CwGuide::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwGuide__ctor_mD8A1CB05AEE57D820B9A739F986795BA091BA21C (CwGuide_t51C32B2C30A0D720E8721FD8931FBADB48DA7507 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwHelper::add_OnCameraPreRender(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_add_OnCameraPreRender_m239DA4364057BCE5FA4B17D27F2C89534B821B6E (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_1 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPreRender_3();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_2 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_5 = V_2;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_6 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *>((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B **)(((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_address_of_OnCameraPreRender_3()), L_5, L_6);
		V_0 = L_7;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_8 = V_0;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_8) == ((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CW.Common.CwHelper::remove_OnCameraPreRender(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_remove_OnCameraPreRender_m3DE0DE568E5D9DDA4040C8CE78533FAC215E1FD5 (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_1 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPreRender_3();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_2 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_5 = V_2;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_6 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *>((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B **)(((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_address_of_OnCameraPreRender_3()), L_5, L_6);
		V_0 = L_7;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_8 = V_0;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_8) == ((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CW.Common.CwHelper::add_OnCameraPostRender(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_add_OnCameraPostRender_m47FFBBB4E3B9DE682A0CCEBC5757D3400DE2A24C (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_1 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPostRender_4();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_2 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_5 = V_2;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_6 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *>((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B **)(((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_address_of_OnCameraPostRender_4()), L_5, L_6);
		V_0 = L_7;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_8 = V_0;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_8) == ((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CW.Common.CwHelper::remove_OnCameraPostRender(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_remove_OnCameraPostRender_m3C415339705FBC2814B777C8C8ABBF853D6D0720 (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_1 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPostRender_4();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_2 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_5 = V_2;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_6 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *>((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B **)(((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_address_of_OnCameraPostRender_4()), L_5, L_6);
		V_0 = L_7;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_8 = V_0;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_8) == ((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CW.Common.CwHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper__cctor_m599C12545443BAA8094869E12234645AA5038A60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDB158E18477D8590513E5FDFF2124447EF0088_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m4894E96536A05123AB38699CDB34E96D04D7288F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m69162031460D8A5A90C92036736B044145EC54C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t469243EEB74368B7691A7AA38163A13188939070_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__11_0_mCB0B677DFFB2E4CDBCDEED62074E09DF57D20356_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__11_1_m0E6B50D0ACA6FB54EBFB1C0C1AA8C081925D8228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__11_2_mFEC634CA8AB11A28ED1E888C197B38AE180DFCCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__11_3_mBEEA09295429CE5332EC18217BA2E481981C8867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Stack<Random.State> seedStates = new Stack<Random.State>();
		Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * L_0 = (Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 *)il2cpp_codegen_object_new(Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7_il2cpp_TypeInfo_var);
		Stack_1__ctor_m69162031460D8A5A90C92036736B044145EC54C6(L_0, /*hidden argument*/Stack_1__ctor_m69162031460D8A5A90C92036736B044145EC54C6_RuntimeMethod_var);
		((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->set_seedStates_0(L_0);
		// public static List<Material> tempMaterials = new List<Material>();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_1 = (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *)il2cpp_codegen_object_new(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86(L_1, /*hidden argument*/List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->set_tempMaterials_1(L_1);
		// public static List<MaterialPropertyBlock> tempProperties = new List<MaterialPropertyBlock>();
		List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * L_2 = (List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 *)il2cpp_codegen_object_new(List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09_il2cpp_TypeInfo_var);
		List_1__ctor_m7DDB158E18477D8590513E5FDFF2124447EF0088(L_2, /*hidden argument*/List_1__ctor_m7DDB158E18477D8590513E5FDFF2124447EF0088_RuntimeMethod_var);
		((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->set_tempProperties_2(L_2);
		// private static Stack<RenderTexture> actives = new Stack<RenderTexture>();
		Stack_1_t469243EEB74368B7691A7AA38163A13188939070 * L_3 = (Stack_1_t469243EEB74368B7691A7AA38163A13188939070 *)il2cpp_codegen_object_new(Stack_1_t469243EEB74368B7691A7AA38163A13188939070_il2cpp_TypeInfo_var);
		Stack_1__ctor_m4894E96536A05123AB38699CDB34E96D04D7288F(L_3, /*hidden argument*/Stack_1__ctor_m4894E96536A05123AB38699CDB34E96D04D7288F_RuntimeMethod_var);
		((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->set_actives_5(L_3);
		// private static List<Material> materials = new List<Material>();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_4 = (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *)il2cpp_codegen_object_new(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86(L_4, /*hidden argument*/List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->set_materials_7(L_4);
		// Camera.onPreRender += (camera) =>
		//     {
		//         if (OnCameraPreRender != null) OnCameraPreRender(camera);
		//     };
		CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * L_5 = ((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var))->get_onPreRender_5();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_il2cpp_TypeInfo_var);
		U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * L_6 = ((U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * L_7 = (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D *)il2cpp_codegen_object_new(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D_il2cpp_TypeInfo_var);
		CameraCallback__ctor_m6E26A220911F56F3E8936DDD217ED76A15B1915E(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__11_0_mCB0B677DFFB2E4CDBCDEED62074E09DF57D20356_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_8;
		L_8 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_5, L_7, /*hidden argument*/NULL);
		((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var))->set_onPreRender_5(((CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D *)CastclassSealed((RuntimeObject*)L_8, CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D_il2cpp_TypeInfo_var)));
		// Camera.onPostRender += (camera) =>
		//     {
		//         if (OnCameraPostRender != null) OnCameraPostRender(camera);
		//     };
		CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * L_9 = ((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var))->get_onPostRender_6();
		U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * L_10 = ((U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * L_11 = (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D *)il2cpp_codegen_object_new(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D_il2cpp_TypeInfo_var);
		CameraCallback__ctor_m6E26A220911F56F3E8936DDD217ED76A15B1915E(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__11_1_m0E6B50D0ACA6FB54EBFB1C0C1AA8C081925D8228_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_12;
		L_12 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_9, L_11, /*hidden argument*/NULL);
		((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var))->set_onPostRender_6(((CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D *)CastclassSealed((RuntimeObject*)L_12, CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D_il2cpp_TypeInfo_var)));
		// UnityEngine.Rendering.RenderPipelineManager.beginCameraRendering += (context, camera) =>
		//     {
		//         if (OnCameraPreRender != null) OnCameraPreRender(camera);
		//     };
		U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * L_13 = ((U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_14 = (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)il2cpp_codegen_object_new(Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__11_2_mFEC634CA8AB11A28ED1E888C197B38AE180DFCCC_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var);
		RenderPipelineManager_add_beginCameraRendering_mFD39085AC9718190F30434932156BCE641DC1454(L_14, /*hidden argument*/NULL);
		// UnityEngine.Rendering.RenderPipelineManager.endCameraRendering += (context, camera) =>
		//     {
		//         if (OnCameraPostRender != null) OnCameraPostRender(camera);
		//     };
		U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * L_15 = ((U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_16 = (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)il2cpp_codegen_object_new(Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__11_3_mBEEA09295429CE5332EC18217BA2E481981C8867_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var);
		RenderPipelineManager_add_endCameraRendering_mFE12E577DA1BB3EC202B1C1F82546713BB8B4F04(L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean CW.Common.CwHelper::IndexInMask(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwHelper_IndexInMask_m5FC065A2AA8259A87AFDE84E8184FC96822F829C (int32_t ___index0, int32_t ___mask1, const RuntimeMethod* method)
{
	{
		// return ((1 << index) & mask) != 0;
		int32_t L_0 = ___index0;
		int32_t L_1 = ___mask1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31)))))&(int32_t)L_1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// UnityEngine.Camera CW.Common.CwHelper::GetCamera(UnityEngine.Camera,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CwHelper_GetCamera_mA62B9C4D296AC40FC241CAAE2615E6CE4B4A098E (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___currentCamera0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentCamera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___currentCamera0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (gameObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___gameObject1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// currentCamera = gameObject.GetComponent<Camera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ___gameObject1;
		NullCheck(L_4);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49(L_4, /*hidden argument*/GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		___currentCamera0 = L_5;
	}

IL_001a:
	{
		// if (currentCamera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = ___currentCamera0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// currentCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
		L_8 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		___currentCamera0 = L_8;
	}

IL_002a:
	{
		// return currentCamera;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = ___currentCamera0;
		return L_9;
	}
}
// UnityEngine.Vector3 CW.Common.CwHelper::GetObserverPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CwHelper_GetObserverPosition_m36F17AF70D6A4DD832220B71A183E48343870D77 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___observer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	{
		// if (observer != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___observer0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return observer.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___observer0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0010:
	{
		// var mainCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		V_0 = L_4;
		// if (mainCamera != null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return mainCamera.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = V_0;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002b:
	{
		// return Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_10;
	}
}
// System.Boolean CW.Common.CwHelper::Enabled(UnityEngine.Behaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwHelper_Enabled_m085CBC62EFD4AD4DB136AEA35EBB38AB37D0791D (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return b != null && b.isActiveAndEnabled == true;
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_0 = ___b0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_2 = ___b0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Void CW.Common.CwHelper::BeginSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_BeginSeed_mB804FF4E953DF1F209FA2EABCE6B789B56736427 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uniqueSeed += Random.Range(int.MinValue, int.MaxValue);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_uniqueSeed_6();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-2147483648LL), ((int32_t)2147483647LL), /*hidden argument*/NULL);
		((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->set_uniqueSeed_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// BeginSeed(uniqueSeed);
		int32_t L_2 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_uniqueSeed_6();
		CwHelper_BeginSeed_mEEA628D06359775E7E799C099E8523086ED5FDC0(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwHelper::BeginSeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_BeginSeed_mEEA628D06359775E7E799C099E8523086ED5FDC0 (int32_t ___newSeed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mEAD1FC02E5EE989C3C1A1EE85F107B7CCC3D3932_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// seedStates.Push(Random.state);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_seedStates_0();
		State_t8E62E640CAE29BF61164F51619D1C04936074C15  L_1;
		L_1 = Random_get_state_mB5BB303DE4D0FD30AB8C8060EC0925C38A4A9020(/*hidden argument*/NULL);
		NullCheck(L_0);
		Stack_1_Push_mEAD1FC02E5EE989C3C1A1EE85F107B7CCC3D3932(L_0, L_1, /*hidden argument*/Stack_1_Push_mEAD1FC02E5EE989C3C1A1EE85F107B7CCC3D3932_RuntimeMethod_var);
		// Random.InitState(newSeed);
		int32_t L_2 = ___newSeed0;
		Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwHelper::EndSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_EndSeed_mE42DD08CD4D64A94D581E706EC31D1CB6F0A52E2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m6CF5DFD72EDCAD3E4A16E32BA17F20D2336689CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Random.state = seedStates.Pop();
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Stack_1_tC572A904BAC93657F07BD5C866073BAA79D4A9C7 * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_seedStates_0();
		NullCheck(L_0);
		State_t8E62E640CAE29BF61164F51619D1C04936074C15  L_1;
		L_1 = Stack_1_Pop_m6CF5DFD72EDCAD3E4A16E32BA17F20D2336689CD(L_0, /*hidden argument*/Stack_1_Pop_m6CF5DFD72EDCAD3E4A16E32BA17F20D2336689CD_RuntimeMethod_var);
		Random_set_state_m10870B08C03C9B4058B410F1ABD056946D392E3A(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Color CW.Common.CwHelper::Brighten(UnityEngine.Color,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  CwHelper_Brighten_m5BE5D3C09A6A0B6BCD8E67E13E8653383E182BC9 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, float ___brightness1, bool ___convertToGamma2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (convertToGamma == true)
		bool L_0 = ___convertToGamma2;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		// color = ToGamma(color);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___color0;
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = CwHelper_ToGamma_m1C0A4A5E1D992F16674EF36506E2F6348C62F288(L_1, /*hidden argument*/NULL);
		___color0 = L_2;
	}

IL_000b:
	{
		// color.r *= brightness;
		float* L_3 = (&___color0)->get_address_of_r_0();
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		float L_6 = ___brightness1;
		*((float*)L_4) = (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6));
		// color.g *= brightness;
		float* L_7 = (&___color0)->get_address_of_g_1();
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		float L_10 = ___brightness1;
		*((float*)L_8) = (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
		// color.b *= brightness;
		float* L_11 = (&___color0)->get_address_of_b_2();
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		float L_14 = ___brightness1;
		*((float*)L_12) = (float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_14));
		// return color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = ___color0;
		return L_15;
	}
}
// UnityEngine.Color CW.Common.CwHelper::Premultiply(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  CwHelper_Premultiply_mDC3DB6D055567D2EEE8DF1524837208CEA2F9AD2 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method)
{
	{
		// color.r *= color.a;
		float* L_0 = (&___color0)->get_address_of_r_0();
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___color0;
		float L_4 = L_3.get_a_3();
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_4));
		// color.g *= color.a;
		float* L_5 = (&___color0)->get_address_of_g_1();
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = ___color0;
		float L_9 = L_8.get_a_3();
		*((float*)L_6) = (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_9));
		// color.b *= color.a;
		float* L_10 = (&___color0)->get_address_of_b_2();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = ___color0;
		float L_14 = L_13.get_a_3();
		*((float*)L_11) = (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_14));
		// return color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = ___color0;
		return L_15;
	}
}
// System.Single CW.Common.CwHelper::Saturate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_Saturate_m0A1656389CBCE232156CA7CE073330876A2D8EA9 (float ___c0, const RuntimeMethod* method)
{
	{
		// if (c >= 0.0f && c <= 1.0f)
		float L_0 = ___c0;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0012;
		}
	}
	{
		float L_1 = ___c0;
		if ((!(((float)L_1) <= ((float)(1.0f)))))
		{
			goto IL_0012;
		}
	}
	{
		// return c;
		float L_2 = ___c0;
		return L_2;
	}

IL_0012:
	{
		// return c < 0.5f ? 0.0f : 1.0f;
		float L_3 = ___c0;
		if ((((float)L_3) < ((float)(0.5f))))
		{
			goto IL_0020;
		}
	}
	{
		return (1.0f);
	}

IL_0020:
	{
		return (0.0f);
	}
}
// UnityEngine.Color CW.Common.CwHelper::Saturate(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  CwHelper_Saturate_mD90C1AA15D38224F90D43C7515BCCFB3877357E1 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// c.r = Saturate(c.r);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___c0;
		float L_1 = L_0.get_r_0();
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = CwHelper_Saturate_m0A1656389CBCE232156CA7CE073330876A2D8EA9(L_1, /*hidden argument*/NULL);
		(&___c0)->set_r_0(L_2);
		// c.g = Saturate(c.g);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___c0;
		float L_4 = L_3.get_g_1();
		float L_5;
		L_5 = CwHelper_Saturate_m0A1656389CBCE232156CA7CE073330876A2D8EA9(L_4, /*hidden argument*/NULL);
		(&___c0)->set_g_1(L_5);
		// c.b = Saturate(c.b);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = ___c0;
		float L_7 = L_6.get_b_2();
		float L_8;
		L_8 = CwHelper_Saturate_m0A1656389CBCE232156CA7CE073330876A2D8EA9(L_7, /*hidden argument*/NULL);
		(&___c0)->set_b_2(L_8);
		// c.a = Saturate(c.a);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ___c0;
		float L_10 = L_9.get_a_3();
		float L_11;
		L_11 = CwHelper_Saturate_m0A1656389CBCE232156CA7CE073330876A2D8EA9(L_10, /*hidden argument*/NULL);
		(&___c0)->set_a_3(L_11);
		// return c;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = ___c0;
		return L_12;
	}
}
// System.Single CW.Common.CwHelper::Sharpness(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_Sharpness_mF7AAC652443CA1B88A95387449E776D9FBC4257E (float ___a0, float ___p1, const RuntimeMethod* method)
{
	{
		// if (p >= 0.0f)
		float L_0 = ___p1;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		// return Mathf.Pow(a, p);
		float L_1 = ___a0;
		float L_2 = ___p1;
		float L_3;
		L_3 = powf(L_1, L_2);
		return L_3;
	}

IL_0010:
	{
		// return 1.0f - Mathf.Pow(1.0f - a, - p);
		float L_4 = ___a0;
		float L_5 = ___p1;
		float L_6;
		L_6 = powf(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)), ((-L_5)));
		return ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_6));
	}
}
// UnityEngine.Color CW.Common.CwHelper::ToLinear(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  CwHelper_ToLinear_mB31177A84FBC5F7FA5BABA36FFA0546356AD97F7 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___gamma0, const RuntimeMethod* method)
{
	{
		// if (QualitySettings.activeColorSpace == ColorSpace.Linear)
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		// return gamma.linear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_linear_m56FB2709C862D1A8E2B16B646FCD2E5FDF3CA904((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&___gamma0), /*hidden argument*/NULL);
		return L_1;
	}

IL_0010:
	{
		// return gamma;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___gamma0;
		return L_2;
	}
}
// System.Single CW.Common.CwHelper::ToLinear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_ToLinear_m360471BC7FB993E7A2DBE2A01C5578D9BA183BD9 (float ___gamma0, const RuntimeMethod* method)
{
	{
		// if (QualitySettings.activeColorSpace == ColorSpace.Linear)
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		// return Mathf.Pow(gamma, 1.0f / 2.2f);
		float L_1 = ___gamma0;
		float L_2;
		L_2 = powf(L_1, (0.454545438f));
		return L_2;
	}

IL_0014:
	{
		// return gamma;
		float L_3 = ___gamma0;
		return L_3;
	}
}
// UnityEngine.Color CW.Common.CwHelper::ToGamma(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  CwHelper_ToGamma_m1C0A4A5E1D992F16674EF36506E2F6348C62F288 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___linear0, const RuntimeMethod* method)
{
	{
		// if (QualitySettings.activeColorSpace == ColorSpace.Linear)
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		// return linear.gamma;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_gamma_mB6C6DA08F57C698AAB65B93F16B58F7C3F8F7E16((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&___linear0), /*hidden argument*/NULL);
		return L_1;
	}

IL_0010:
	{
		// return linear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___linear0;
		return L_2;
	}
}
// System.Single CW.Common.CwHelper::ToGamma(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_ToGamma_m49A20556EFCF46796A2D806D95BC34765DA3F05B (float ___linear0, const RuntimeMethod* method)
{
	{
		// if (QualitySettings.activeColorSpace == ColorSpace.Linear)
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		// return Mathf.Pow(linear, 2.2f);
		float L_1 = ___linear0;
		float L_2;
		L_2 = powf(L_1, (2.20000005f));
		return L_2;
	}

IL_0014:
	{
		// return linear;
		float L_3 = ___linear0;
		return L_3;
	}
}
// System.Single CW.Common.CwHelper::UniformScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_UniformScale_m36EF900E9F85DABD0199045490EB2A64BA2EB031 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return System.Math.Max(System.Math.Max(scale.x, scale.y), scale.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___scale0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___scale0;
		float L_3 = L_2.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_1, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___scale0;
		float L_6 = L_5.get_z_4();
		float L_7;
		L_7 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void CW.Common.CwHelper::BeginActive(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_BeginActive_m916D2CDB069D2E75FE57C45111C1AF0ED9BC27A3 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___renderTexture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF72377724F3ACCBA748983793EE35172B54007C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// actives.Push(RenderTexture.active);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Stack_1_t469243EEB74368B7691A7AA38163A13188939070 * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_actives_5();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1;
		L_1 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		NullCheck(L_0);
		Stack_1_Push_mF72377724F3ACCBA748983793EE35172B54007C0(L_0, L_1, /*hidden argument*/Stack_1_Push_mF72377724F3ACCBA748983793EE35172B54007C0_RuntimeMethod_var);
		// RenderTexture.active = renderTexture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___renderTexture0;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwHelper::EndActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_EndActive_m3BE05D7EF5E6CC92F148A2FC05BA3754CE898C06 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m463049A3D63030CC79C8E01687070A6E12C16C89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RenderTexture.active = actives.Pop();
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Stack_1_t469243EEB74368B7691A7AA38163A13188939070 * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_actives_5();
		NullCheck(L_0);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1;
		L_1 = Stack_1_Pop_m463049A3D63030CC79C8E01687070A6E12C16C89(L_0, /*hidden argument*/Stack_1_Pop_m463049A3D63030CC79C8E01687070A6E12C16C89_RuntimeMethod_var);
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwHelper::SetTempMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_SetTempMaterial_m375D90018655650922C6EA37B6E8B6AE139B261F (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tempMaterials.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempMaterials_1();
		NullCheck(L_0);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_0, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		// tempProperties.Clear();
		List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * L_1 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempProperties_2();
		NullCheck(L_1);
		List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9(L_1, /*hidden argument*/List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9_RuntimeMethod_var);
		// tempMaterials.Add(material);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_2 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempMaterials_1();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = ___material0;
		NullCheck(L_2);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_2, L_3, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CW.Common.CwHelper::SetTempMaterial(UnityEngine.Material,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_SetTempMaterial_m23D77B0C57A20DA6B5F4FF7BBF092D10A8766DFA (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material10, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tempMaterials.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempMaterials_1();
		NullCheck(L_0);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_0, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		// tempProperties.Clear();
		List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * L_1 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempProperties_2();
		NullCheck(L_1);
		List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9(L_1, /*hidden argument*/List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9_RuntimeMethod_var);
		// tempMaterials.Add(material1);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_2 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempMaterials_1();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = ___material10;
		NullCheck(L_2);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_2, L_3, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		// tempMaterials.Add(material2);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_4 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempMaterials_1();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = ___material21;
		NullCheck(L_4);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_4, L_5, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CW.Common.CwHelper::SetTempMaterial(System.Collections.Generic.List`1<UnityEngine.Material>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_SetTempMaterial_mAFF6F288DFDA68EE0AD3F852787A20C952738C91 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___materials0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tempMaterials.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempMaterials_1();
		NullCheck(L_0);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_0, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		// tempProperties.Clear();
		List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * L_1 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempProperties_2();
		NullCheck(L_1);
		List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9(L_1, /*hidden argument*/List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9_RuntimeMethod_var);
		// if (materials != null)
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_2 = ___materials0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// tempMaterials.AddRange(materials);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_3 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempMaterials_1();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_4 = ___materials0;
		NullCheck(L_3);
		List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF(L_3, L_4, /*hidden argument*/List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF_RuntimeMethod_var);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwHelper::SetTempMaterial(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_SetTempMaterial_m3540D4A1F1A1CBC174C17B2BB8A9428AFD048DAE (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m34A07B5F2BA0E1FC616DB5D30698A80A8162C541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tempMaterials.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempMaterials_1();
		NullCheck(L_0);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_0, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		// tempProperties.Clear();
		List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * L_1 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempProperties_2();
		NullCheck(L_1);
		List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9(L_1, /*hidden argument*/List_1_Clear_m56D834E38EDF17F1FB59E01291207F3E749490F9_RuntimeMethod_var);
		// tempProperties.Add(properties);
		List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * L_2 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_tempProperties_2();
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_3 = ___properties0;
		NullCheck(L_2);
		List_1_Add_m34A07B5F2BA0E1FC616DB5D30698A80A8162C541(L_2, L_3, /*hidden argument*/List_1_Add_m34A07B5F2BA0E1FC616DB5D30698A80A8162C541_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CW.Common.CwHelper::AddMaterial(UnityEngine.Renderer,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_AddMaterial_m17C8682EFC7CCFED86492D2C7C52CA67EEE5EE61 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___r0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_0 = NULL;
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_1 = NULL;
	int32_t V_2 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_3 = NULL;
	{
		// if (r != null && m != null)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = ___r0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = ___m1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_008f;
		}
	}
	{
		// var sms = r.sharedMaterials;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4 = ___r0;
		NullCheck(L_4);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_5;
		L_5 = Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// materials.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_6 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		NullCheck(L_6);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_6, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		// foreach (var sm in sms)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_7 = V_0;
		V_1 = L_7;
		V_2 = 0;
		goto IL_003c;
	}

IL_002c:
	{
		// foreach (var sm in sms)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		// if (sm == m)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = ___m1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0038;
		}
	}
	{
		// return;
		return;
	}

IL_0038:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003c:
	{
		// foreach (var sm in sms)
		int32_t L_15 = V_2;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		// foreach (var sm in sms)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_17 = V_0;
		V_1 = L_17;
		V_2 = 0;
		goto IL_0064;
	}

IL_0048:
	{
		// foreach (var sm in sms)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_3 = L_21;
		// if (sm != null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0060;
		}
	}
	{
		// materials.Add(sm);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_24 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25 = V_3;
		NullCheck(L_24);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_24, L_25, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
	}

IL_0060:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0064:
	{
		// foreach (var sm in sms)
		int32_t L_27 = V_2;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_0048;
		}
	}
	{
		// materials.Add(m);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_29 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = ___m1;
		NullCheck(L_29);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_29, L_30, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		// r.sharedMaterials = materials.ToArray(); materials.Clear();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_31 = ___r0;
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_32 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		NullCheck(L_32);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_33;
		L_33 = List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC(L_32, /*hidden argument*/List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		NullCheck(L_31);
		Renderer_set_sharedMaterials_m9838EC09412E988925C4670E8E355E5EEFE35A25(L_31, L_33, /*hidden argument*/NULL);
		// r.sharedMaterials = materials.ToArray(); materials.Clear();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_34 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		NullCheck(L_34);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_34, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwHelper::ReplaceMaterial(UnityEngine.Renderer,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_ReplaceMaterial_mF4E99D53CEF47A18AE10B13B51737C8595E61889 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___r0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_0 = NULL;
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_1 = NULL;
	int32_t V_2 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_3 = NULL;
	{
		// if (r != null && m != null)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = ___r0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_009b;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = ___m1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_009b;
		}
	}
	{
		// var sms = r.sharedMaterials;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4 = ___r0;
		NullCheck(L_4);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_5;
		L_5 = Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// foreach (var sm in sms)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_6 = V_0;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0035;
	}

IL_0025:
	{
		// foreach (var sm in sms)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// if (sm == m)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = ___m1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		return;
	}

IL_0031:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0035:
	{
		// foreach (var sm in sms)
		int32_t L_14 = V_2;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		// foreach (var sm in sms)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_16 = V_0;
		V_1 = L_16;
		V_2 = 0;
		goto IL_0070;
	}

IL_0041:
	{
		// foreach (var sm in sms)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_3 = L_20;
		// if (sm != null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_006c;
		}
	}
	{
		// if (sm.shader != m.shader)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23 = V_3;
		NullCheck(L_23);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_24;
		L_24 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_23, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25 = ___m1;
		NullCheck(L_25);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_26;
		L_26 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_24, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_006c;
		}
	}
	{
		// materials.Add(sm);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_28 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = V_3;
		NullCheck(L_28);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_28, L_29, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
	}

IL_006c:
	{
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0070:
	{
		// foreach (var sm in sms)
		int32_t L_31 = V_2;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0041;
		}
	}
	{
		// materials.Add(m);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_33 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = ___m1;
		NullCheck(L_33);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_33, L_34, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		// r.sharedMaterials = materials.ToArray(); materials.Clear();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_35 = ___r0;
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_36 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		NullCheck(L_36);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_37;
		L_37 = List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC(L_36, /*hidden argument*/List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		NullCheck(L_35);
		Renderer_set_sharedMaterials_m9838EC09412E988925C4670E8E355E5EEFE35A25(L_35, L_37, /*hidden argument*/NULL);
		// r.sharedMaterials = materials.ToArray(); materials.Clear();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_38 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		NullCheck(L_38);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_38, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwHelper::RemoveMaterial(UnityEngine.Renderer,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_RemoveMaterial_mF09415701ED8F0EEC623AF98E0E36A0C52379367 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___r0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_0 = NULL;
	int32_t V_1 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_2 = NULL;
	{
		// if (r != null)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = ___r0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		// var sms = r.sharedMaterials;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2 = ___r0;
		NullCheck(L_2);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_3;
		L_3 = Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD(L_2, /*hidden argument*/NULL);
		// materials.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_4 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		NullCheck(L_4);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_4, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		// foreach (var sm in sms)
		V_0 = L_3;
		V_1 = 0;
		goto IL_0043;
	}

IL_001e:
	{
		// foreach (var sm in sms)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// if (sm != null && sm != m)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = V_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = ___m1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		// materials.Add(sm);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_14 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = V_2;
		NullCheck(L_14);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_14, L_15, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
	}

IL_003f:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0043:
	{
		// foreach (var sm in sms)
		int32_t L_17 = V_1;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		// r.sharedMaterials = materials.ToArray(); materials.Clear();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_19 = ___r0;
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_20 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		NullCheck(L_20);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_21;
		L_21 = List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC(L_20, /*hidden argument*/List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		NullCheck(L_19);
		Renderer_set_sharedMaterials_m9838EC09412E988925C4670E8E355E5EEFE35A25(L_19, L_21, /*hidden argument*/NULL);
		// r.sharedMaterials = materials.ToArray(); materials.Clear();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_22 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_materials_7();
		NullCheck(L_22);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_22, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
	}

IL_0063:
	{
		// }
		return;
	}
}
// UnityEngine.Texture2D CW.Common.CwHelper::CreateTempTexture2D(System.String,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CwHelper_CreateTempTexture2D_m3CA40E17FC9DF74268CA7432EAAA7DAEE0A7D682 (String_t* ___name0, int32_t ___width1, int32_t ___height2, int32_t ___format3, bool ___mips4, bool ___linear5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var texture2D = new Texture2D(width, height, format, mips, linear);
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		int32_t L_2 = ___format3;
		bool L_3 = ___mips4;
		bool L_4 = ___linear5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// texture2D.name = name;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = L_5;
		String_t* L_7 = ___name0;
		NullCheck(L_6);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_6, L_7, /*hidden argument*/NULL);
		// texture2D.hideFlags = HideFlags.DontSave;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = L_6;
		NullCheck(L_8);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_8, ((int32_t)52), /*hidden argument*/NULL);
		// return texture2D;
		return L_8;
	}
}
// UnityEngine.Material CW.Common.CwHelper::CreateTempMaterial(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * CwHelper_CreateTempMaterial_mD5969062F8E04C5432607D8EBE0F4057FC3023C2 (String_t* ___materialName0, String_t* ___shaderName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DFD766D995E2CBB4A75B2EC72629FE2B24A238);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * V_0 = NULL;
	{
		// var shader = Shader.Find(shaderName);
		String_t* L_0 = ___shaderName1;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1;
		L_1 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (shader == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogError("Failed to find shader: " + shaderName);
		String_t* L_4 = ___shaderName1;
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral75DFD766D995E2CBB4A75B2EC72629FE2B24A238, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// return CreateTempMaterial(materialName, shader);
		String_t* L_6 = ___materialName0;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8;
		L_8 = CwHelper_CreateTempMaterial_mBE6B2217F25BEDB74197529D017196DB1D54D8E6(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Material CW.Common.CwHelper::CreateTempMaterial(System.String,UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * CwHelper_CreateTempMaterial_mBE6B2217F25BEDB74197529D017196DB1D54D8E6 (String_t* ___materialName0, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var material = new Material(shader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___shader1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_1, L_0, /*hidden argument*/NULL);
		// material.name      = materialName;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = L_1;
		String_t* L_3 = ___materialName0;
		NullCheck(L_2);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_2, L_3, /*hidden argument*/NULL);
		// material.hideFlags = HideFlags.HideAndDontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = L_2;
		NullCheck(L_4);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_4, ((int32_t)61), /*hidden argument*/NULL);
		// return material;
		return L_4;
	}
}
// UnityEngine.Material CW.Common.CwHelper::CreateTempMaterial(System.String,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * CwHelper_CreateTempMaterial_m7B0581218EA6A54F68B8809C846592E8E9FBEF2F (String_t* ___materialName0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var material = new Material(source);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___source1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_1, L_0, /*hidden argument*/NULL);
		// material.name      = materialName;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = L_1;
		String_t* L_3 = ___materialName0;
		NullCheck(L_2);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_2, L_3, /*hidden argument*/NULL);
		// material.hideFlags = HideFlags.HideAndDontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = L_2;
		NullCheck(L_4);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_4, ((int32_t)61), /*hidden argument*/NULL);
		// return material;
		return L_4;
	}
}
// UnityEngine.GameObject CW.Common.CwHelper::CreateGameObject(System.String,System.Int32,UnityEngine.Transform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * CwHelper_CreateGameObject_m12CED114A074BBCE2C4A6358646F54C293ACEBEA (String_t* ___name0, int32_t ___layer1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent2, String_t* ___recordUndo3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateGameObject(name, layer, parent, Vector3.zero, Quaternion.identity, Vector3.one, recordUndo);
		String_t* L_0 = ___name0;
		int32_t L_1 = ___layer1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___parent2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		String_t* L_6 = ___recordUndo3;
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = CwHelper_CreateGameObject_mF686F3A1091C13F70AE98083523BF437234F55D7(L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.GameObject CW.Common.CwHelper::CreateGameObject(System.String,System.Int32,UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * CwHelper_CreateGameObject_mF686F3A1091C13F70AE98083523BF437234F55D7 (String_t* ___name0, int32_t ___layer1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition3, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___localRotation4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale5, String_t* ___recordUndo6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var gameObject = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, L_0, /*hidden argument*/NULL);
		// gameObject.layer = layer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1;
		int32_t L_3 = ___layer1;
		NullCheck(L_2);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_2, L_3, /*hidden argument*/NULL);
		// gameObject.transform.SetParent(parent, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_2;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___parent2;
		NullCheck(L_5);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_5, L_6, (bool)0, /*hidden argument*/NULL);
		// gameObject.transform.localPosition = localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_4;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___localPosition3;
		NullCheck(L_8);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_8, L_9, /*hidden argument*/NULL);
		// gameObject.transform.localRotation = localRotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_7;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = ___localRotation4;
		NullCheck(L_11);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_11, L_12, /*hidden argument*/NULL);
		// gameObject.transform.localScale    = localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_10;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___localScale5;
		NullCheck(L_14);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_14, L_15, /*hidden argument*/NULL);
		// return gameObject;
		return L_13;
	}
}
// System.Single CW.Common.CwHelper::Reciprocal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_Reciprocal_mB323A94B03DCD5AA562D4A68A5B76BCCCA5BD6A6 (float ___v0, const RuntimeMethod* method)
{
	{
		// return v != 0.0f ? 1.0f / v : 0.0f;
		float L_0 = ___v0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		return (0.0f);
	}

IL_000e:
	{
		float L_1 = ___v0;
		return ((float)((float)(1.0f)/(float)L_1));
	}
}
// System.Double CW.Common.CwHelper::Reciprocal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CwHelper_Reciprocal_mB0B40AA5A57C3BC25C05F7E10FBC4CA06C1DB539 (double ___v0, const RuntimeMethod* method)
{
	{
		// return v != 0.0 ? 1.0 / v : 0.0;
		double L_0 = ___v0;
		if ((!(((double)L_0) == ((double)(0.0)))))
		{
			goto IL_0016;
		}
	}
	{
		return (0.0);
	}

IL_0016:
	{
		double L_1 = ___v0;
		return ((double)((double)(1.0)/(double)L_1));
	}
}
// System.Single CW.Common.CwHelper::Divide(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_Divide_m42DB07696C82F74C9D676311E22C088E697C0B89 (float ___a0, float ___b1, const RuntimeMethod* method)
{
	{
		// return b != 0.0f ? a / b : 0.0f;
		float L_0 = ___b1;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		return (0.0f);
	}

IL_000e:
	{
		float L_1 = ___a0;
		float L_2 = ___b1;
		return ((float)((float)L_1/(float)L_2));
	}
}
// System.Double CW.Common.CwHelper::Divide(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CwHelper_Divide_mA22BD53283C9FAC21CC2628726DC34003FB6F948 (double ___a0, double ___b1, const RuntimeMethod* method)
{
	{
		// return b != 0.0 ? a / b : 0.0;
		double L_0 = ___b1;
		if ((!(((double)L_0) == ((double)(0.0)))))
		{
			goto IL_0016;
		}
	}
	{
		return (0.0);
	}

IL_0016:
	{
		double L_1 = ___a0;
		double L_2 = ___b1;
		return ((double)((double)L_1/(double)L_2));
	}
}
// System.Single CW.Common.CwHelper::Acos(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_Acos_m1A76A4546269B38909E432F6520810F74CF0785E (float ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (v >= -1.0f && v <= 1.0f)
		float L_0 = ___v0;
		if ((!(((float)L_0) >= ((float)(-1.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		float L_1 = ___v0;
		if ((!(((float)L_1) <= ((float)(1.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// return (float)System.Math.Acos(v);
		float L_2 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = acos(((double)((double)L_2)));
		return ((float)((float)L_3));
	}

IL_0019:
	{
		// return 0.0f;
		return (0.0f);
	}
}
// System.Double CW.Common.CwHelper::Acos(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CwHelper_Acos_m6545E6FCD7DBB9FD7DF4A4D1A4C5D7AEE367D386 (double ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (v >= -1.0 && v <= 1.0)
		double L_0 = ___v0;
		if ((!(((double)L_0) >= ((double)(-1.0)))))
		{
			goto IL_001f;
		}
	}
	{
		double L_1 = ___v0;
		if ((!(((double)L_1) <= ((double)(1.0)))))
		{
			goto IL_001f;
		}
	}
	{
		// return System.Math.Acos(v);
		double L_2 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = acos(L_2);
		return L_3;
	}

IL_001f:
	{
		// return 0.0f;
		return (0.0);
	}
}
// System.Single CW.Common.CwHelper::DampenFactor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_DampenFactor_mAC5C9507C2B790590B77EB007310BFFE2B2A63EA (float ___speed0, float ___elapsed1, const RuntimeMethod* method)
{
	{
		// if (speed < 0.0f)
		float L_0 = ___speed0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// return 1.0f;
		return (1.0f);
	}

IL_000e:
	{
		// return 1.0f - Mathf.Pow((float)System.Math.E, -speed * elapsed);
		float L_1 = ___speed0;
		float L_2 = ___elapsed1;
		float L_3;
		L_3 = powf((2.71828175f), ((float)il2cpp_codegen_multiply((float)((-L_1)), (float)L_2)));
		return ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_3));
	}
}
// System.Single CW.Common.CwHelper::DampenFactor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_DampenFactor_mE4FFD9DD62925D92337439524E506CAC5D32F3C2 (float ___damping0, float ___deltaTime1, float ___linear2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var factor = DampenFactor(damping, deltaTime);
		float L_0 = ___damping0;
		float L_1 = ___deltaTime1;
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = CwHelper_DampenFactor_mAC5C9507C2B790590B77EB007310BFFE2B2A63EA(L_0, L_1, /*hidden argument*/NULL);
		// return Mathf.Clamp01(factor + linear * deltaTime);
		float L_3 = ___linear2;
		float L_4 = ___deltaTime1;
		float L_5;
		L_5 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single CW.Common.CwHelper::Atan2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_Atan2_m53695E786037AF989E9705FC4E6D925C043AD14C (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___xy0, const RuntimeMethod* method)
{
	{
		// return Mathf.Atan2(xy.x, xy.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___xy0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___xy0;
		float L_3 = L_2.get_y_1();
		float L_4;
		L_4 = atan2f(L_1, L_3);
		return L_4;
	}
}
// System.Int32 CW.Common.CwHelper::Mod(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwHelper_Mod_m53493E0EF796034729F8C92A5888E630F189D740 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var m = a % b;
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)L_1));
		// if (m < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		// return m + b;
		int32_t L_3 = V_0;
		int32_t L_4 = ___b1;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
	}

IL_000c:
	{
		// return m;
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Single CW.Common.CwHelper::Mod(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwHelper_Mod_m2B0B3211EEFEB0899B462475B45811905FDC64AF (float ___a0, float ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var m = a % b;
		float L_0 = ___a0;
		float L_1 = ___b1;
		V_0 = (fmodf(L_0, L_1));
		// if (m < 0.0f)
		float L_2 = V_0;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		// return m + b;
		float L_3 = V_0;
		float L_4 = ___b1;
		return ((float)il2cpp_codegen_add((float)L_3, (float)L_4));
	}

IL_0010:
	{
		// return m;
		float L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Texture2D CW.Common.CwHelper::GetReadableCopy(UnityEngine.Texture,UnityEngine.TextureFormat,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CwHelper_GetReadableCopy_m2C70DB10BA89ADBD6B1AF0E0A36B6225FD9AB26F (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture0, int32_t ___format1, bool ___mipMaps2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_1 = NULL;
	{
		// var newTexture = default(Texture2D);
		V_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
		// if (texture != null)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___texture0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		// if (width <= 0)
		int32_t L_2 = ___width3;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		// width = texture.width;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3 = ___texture0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		___width3 = L_4;
	}

IL_0017:
	{
		// if (height <= 0)
		int32_t L_5 = ___height4;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// height = texture.height;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_6 = ___texture0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		___height4 = L_7;
	}

IL_0024:
	{
		// var desc          = new RenderTextureDescriptor(width, height, RenderTextureFormat.ARGB32, 0);
		int32_t L_8 = ___width3;
		int32_t L_9 = ___height4;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_10;
		memset((&L_10), 0, sizeof(L_10));
		RenderTextureDescriptor__ctor_mB0D252CE93C0E10D01FD10C5C454B0645A16BEE3((&L_10), L_8, L_9, 0, 0, /*hidden argument*/NULL);
		// var renderTexture = RenderTexture.GetTemporary(desc);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11;
		L_11 = RenderTexture_GetTemporary_m7997BAA9A1DFE4D9D1B9F5047ECEE8464835B8DF(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// newTexture = new Texture2D(width, height, format, mipMaps, false);
		int32_t L_12 = ___width3;
		int32_t L_13 = ___height4;
		int32_t L_14 = ___format1;
		bool L_15 = ___mipMaps2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3(L_16, L_12, L_13, L_14, L_15, (bool)0, /*hidden argument*/NULL);
		V_0 = L_16;
		// BeginActive(renderTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		CwHelper_BeginActive_m916D2CDB069D2E75FE57C45111C1AF0ED9BC27A3(L_17, /*hidden argument*/NULL);
		// Graphics.Blit(texture, renderTexture);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_18 = ___texture0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_18, L_19, /*hidden argument*/NULL);
		// newTexture.ReadPixels(new Rect(0, 0, width, height), 0, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = V_0;
		int32_t L_21 = ___width3;
		int32_t L_22 = ___height4;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_23), (0.0f), (0.0f), ((float)((float)L_21)), ((float)((float)L_22)), /*hidden argument*/NULL);
		NullCheck(L_20);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_20, L_23, 0, 0, /*hidden argument*/NULL);
		// EndActive();
		CwHelper_EndActive_m3BE05D7EF5E6CC92F148A2FC05BA3754CE898C06(/*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary(renderTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_24 = V_1;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_24, /*hidden argument*/NULL);
		// newTexture.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_25 = V_0;
		NullCheck(L_25);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_25, /*hidden argument*/NULL);
	}

IL_007a:
	{
		// return newTexture;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = V_0;
		return L_26;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 CW.Common.CwInput::GetTouchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwInput_GetTouchCount_m7132F160260D0D8E08D63AAE763842D44039459A (const RuntimeMethod* method)
{
	{
		// return UnityEngine.Input.touchCount;
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CW.Common.CwInput::GetTouch(System.Int32,System.Int32&,UnityEngine.Vector2&,System.Single&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInput_GetTouch_mF112E0705B5C608003D99002F7BD621FC09B1C1E (int32_t ___index0, int32_t* ___id1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___position2, float* ___pressure3, bool* ___set4, const RuntimeMethod* method)
{
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool* G_B3_0 = NULL;
	bool* G_B1_0 = NULL;
	bool* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	bool* G_B4_1 = NULL;
	{
		// var touch = UnityEngine.Input.GetTouch(index);
		int32_t L_0 = ___index0;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_1;
		L_1 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// id       = touch.fingerId;
		int32_t* L_2 = ___id1;
		int32_t L_3;
		L_3 = Touch_get_fingerId_mCED0E66949120E69BFE9294DC0A11A6F9FDBD129((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		*((int32_t*)L_2) = (int32_t)L_3;
		// position = touch.position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = ___position2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_4 = L_5;
		// pressure = touch.pressure;
		float* L_6 = ___pressure3;
		float L_7;
		L_7 = Touch_get_pressure_mD9B5B0AE17E051F0273CF1155998BC2342035CD4((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		*((float*)L_6) = (float)L_7;
		// set      =
		//     touch.phase == UnityEngine.TouchPhase.Began ||
		//     touch.phase == UnityEngine.TouchPhase.Stationary ||
		//     touch.phase == UnityEngine.TouchPhase.Moved;
		bool* L_8 = ___set4;
		int32_t L_9;
		L_9 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		G_B1_0 = L_8;
		if (!L_9)
		{
			G_B3_0 = L_8;
			goto IL_0047;
		}
	}
	{
		int32_t L_10;
		L_10 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			G_B3_0 = G_B1_0;
			goto IL_0047;
		}
	}
	{
		int32_t L_11;
		L_11 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_11) == ((int32_t)1))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0048:
	{
		*((int8_t*)G_B4_1) = (int8_t)G_B4_0;
		// }
		return;
	}
}
// UnityEngine.Vector2 CW.Common.CwInput::GetMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInput_GetMousePosition_m8BFEDF8A65C7AFF8C4CE871A5DAD24E38BE1EE54 (const RuntimeMethod* method)
{
	{
		// return UnityEngine.Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean CW.Common.CwInput::GetKeyWentDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetKeyWentDown_mC2ACF3F2A6A961A3EA35FCD029D8667632B4C1C8 (int32_t ___oldKey0, const RuntimeMethod* method)
{
	{
		// return UnityEngine.Input.GetKeyDown(oldKey);
		int32_t L_0 = ___oldKey0;
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean CW.Common.CwInput::GetKeyIsHeld(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetKeyIsHeld_m3F730B19A5A12381D7C1438FA71CBBF10B9ABA40 (int32_t ___oldKey0, const RuntimeMethod* method)
{
	{
		// return UnityEngine.Input.GetKey(oldKey);
		int32_t L_0 = ___oldKey0;
		bool L_1;
		L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean CW.Common.CwInput::GetKeyWentUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetKeyWentUp_mD9BC04BDFFBFE213221F83728187992D83F7F7FF (int32_t ___oldKey0, const RuntimeMethod* method)
{
	{
		// return UnityEngine.Input.GetKeyUp(oldKey);
		int32_t L_0 = ___oldKey0;
		bool L_1;
		L_1 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean CW.Common.CwInput::GetMouseWentDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetMouseWentDown_m928EFD84F35093AC67A81E3E3D9DBCF97BDCC1A2 (int32_t ___index0, const RuntimeMethod* method)
{
	{
		// return UnityEngine.Input.GetMouseButtonDown(index);
		int32_t L_0 = ___index0;
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean CW.Common.CwInput::GetMouseIsHeld(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetMouseIsHeld_m52F193B06A3A5B0A5280498CCEA63D33F2B62B5F (int32_t ___index0, const RuntimeMethod* method)
{
	{
		// return UnityEngine.Input.GetMouseButton(index);
		int32_t L_0 = ___index0;
		bool L_1;
		L_1 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean CW.Common.CwInput::GetMouseWentUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetMouseWentUp_mE892979578B4B9997E02D4A7D4F631E4B512882D (int32_t ___index0, const RuntimeMethod* method)
{
	{
		// return UnityEngine.Input.GetMouseButtonUp(index);
		int32_t L_0 = ___index0;
		bool L_1;
		L_1 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CW.Common.CwInput::GetMouseWheelDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInput_GetMouseWheelDelta_m8B846545A74471B62153352CDF68B24126D76C8A (const RuntimeMethod* method)
{
	{
		// return UnityEngine.Input.mouseScrollDelta.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7(/*hidden argument*/NULL);
		float L_1 = L_0.get_y_1();
		return L_1;
	}
}
// System.Boolean CW.Common.CwInput::GetMouseExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetMouseExists_m435BEDA18E482B3D01587CA3E1DD3437DAB34626 (const RuntimeMethod* method)
{
	{
		// return UnityEngine.Input.mousePresent;
		bool L_0;
		L_0 = Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean CW.Common.CwInput::GetKeyboardExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetKeyboardExists_m1E88DABEC488BFEB7E3AB55D45A9551B392E0597 (const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwInputManager::set_GuiLayers(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_set_GuiLayers_m18CA37E7112115F6DEFC8526635332E1B09A6E65 (CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * __this, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___value0, const RuntimeMethod* method)
{
	{
		// public LayerMask GuiLayers { set { guiLayers = value; } get { return guiLayers; } } [SerializeField] private LayerMask guiLayers = 1 << 5;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = ___value0;
		__this->set_guiLayers_4(L_0);
		// public LayerMask GuiLayers { set { guiLayers = value; } get { return guiLayers; } } [SerializeField] private LayerMask guiLayers = 1 << 5;
		return;
	}
}
// UnityEngine.LayerMask CW.Common.CwInputManager::get_GuiLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  CwInputManager_get_GuiLayers_m40E1429DA0DC7275A26CB14688A4C0CBF3DFBA66 (CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask GuiLayers { set { guiLayers = value; } get { return guiLayers; } } [SerializeField] private LayerMask guiLayers = 1 << 5;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = __this->get_guiLayers_4();
		return L_0;
	}
}
// System.Void CW.Common.CwInputManager::add_OnFingerDown(System.Action`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_add_OnFingerDown_m4AF81AFB9651B22CA06691040FC175CF20686D36 (Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_0 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_1 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_0 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerDown_5();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_2 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_5 = V_2;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_6 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *>((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 **)(((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_address_of_OnFingerDown_5()), L_5, L_6);
		V_0 = L_7;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_8 = V_0;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_8) == ((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CW.Common.CwInputManager::remove_OnFingerDown(System.Action`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_remove_OnFingerDown_mA987B4F0E094B0D9D9F45A5E25FA0E31B3622698 (Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_0 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_1 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_0 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerDown_5();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_2 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_5 = V_2;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_6 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *>((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 **)(((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_address_of_OnFingerDown_5()), L_5, L_6);
		V_0 = L_7;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_8 = V_0;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_8) == ((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CW.Common.CwInputManager::add_OnFingerUpdate(System.Action`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_add_OnFingerUpdate_mA4EB899191BD5E84D96E99D8615E0AADB85C962A (Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_0 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_1 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_0 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerUpdate_6();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_2 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_5 = V_2;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_6 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *>((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 **)(((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_address_of_OnFingerUpdate_6()), L_5, L_6);
		V_0 = L_7;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_8 = V_0;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_8) == ((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CW.Common.CwInputManager::remove_OnFingerUpdate(System.Action`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_remove_OnFingerUpdate_m299C556FE5069EAE15A8C9CDE14003BE37426082 (Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_0 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_1 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_0 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerUpdate_6();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_2 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_5 = V_2;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_6 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *>((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 **)(((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_address_of_OnFingerUpdate_6()), L_5, L_6);
		V_0 = L_7;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_8 = V_0;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_8) == ((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CW.Common.CwInputManager::add_OnFingerUp(System.Action`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_add_OnFingerUp_m3D3560FF63FF7E119DF584A3851BAF532855F837 (Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_0 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_1 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_0 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerUp_7();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_2 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_5 = V_2;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_6 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *>((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 **)(((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_address_of_OnFingerUp_7()), L_5, L_6);
		V_0 = L_7;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_8 = V_0;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_8) == ((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CW.Common.CwInputManager::remove_OnFingerUp(System.Action`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_remove_OnFingerUp_m47C111CF4823D5CE0B399046C33E7A2CEA94A218 (Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_0 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_1 = NULL;
	Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_0 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerUp_7();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_2 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_5 = V_2;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_6 = V_1;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *>((Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 **)(((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_address_of_OnFingerUp_7()), L_5, L_6);
		V_0 = L_7;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_8 = V_0;
		Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_8) == ((RuntimeObject*)(Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger> CW.Common.CwInputManager::get_Fingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * CwInputManager_get_Fingers_m9D915E08CA84B2135F5A5302D106CDDBE411FAEF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return fingers;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_0 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_fingers_13();
		return L_0;
	}
}
// System.Single CW.Common.CwInputManager::get_ScaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInputManager_get_ScaleFactor_m63BB3525D25E6CD46D2F376E283895E824B7EE47 (const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var dpi = Screen.dpi;
		float L_0;
		L_0 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (dpi <= 0)
		float L_1 = V_0;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0014;
		}
	}
	{
		// dpi = 200.0f;
		V_0 = (200.0f);
	}

IL_0014:
	{
		// return 200.0f / dpi;
		float L_2 = V_0;
		return ((float)((float)(200.0f)/(float)L_2));
	}
}
// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger> CW.Common.CwInputManager::GetFingers(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * CwInputManager_GetFingers_mB6B736369E6D946BA7B187338E96CE3FEE56A5CF (bool ___ignoreStartedOverGui0, bool ___ignoreHover1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFFA36DD93284ADED6769B0CEAB6312034A34E30C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8866013E95EF79D191587164D59BB8F7D6979AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// filteredFingers.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_0 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_filteredFingers_14();
		NullCheck(L_0);
		List_1_Clear_m8866013E95EF79D191587164D59BB8F7D6979AF0(L_0, /*hidden argument*/List_1_Clear_m8866013E95EF79D191587164D59BB8F7D6979AF0_RuntimeMethod_var);
		// foreach (var finger in fingers)
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_1 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_fingers_13();
		NullCheck(L_1);
		Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  L_2;
		L_2 = List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E(L_1, /*hidden argument*/List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_0017:
		{
			// foreach (var finger in fingers)
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_3;
			L_3 = Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_inline((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
			V_1 = L_3;
			// if (ignoreStartedOverGui == true && finger.StartedOverGui == true)
			bool L_4 = ___ignoreStartedOverGui0;
			if (!L_4)
			{
				goto IL_002a;
			}
		}

IL_0022:
		{
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = L_5->get_StartedOverGui_5();
			if (L_6)
			{
				goto IL_0045;
			}
		}

IL_002a:
		{
			// if (ignoreHover == true && finger.Index == HOVER_FINGER_INDEX)
			bool L_7 = ___ignoreHover1;
			if (!L_7)
			{
				goto IL_003a;
			}
		}

IL_002d:
		{
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9 = L_8->get_Index_0();
			if ((((int32_t)L_9) == ((int32_t)((int32_t)-1337))))
			{
				goto IL_0045;
			}
		}

IL_003a:
		{
			// filteredFingers.Add(finger);
			IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
			List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_10 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_filteredFingers_14();
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_11 = V_1;
			NullCheck(L_10);
			List_1_Add_mFFA36DD93284ADED6769B0CEAB6312034A34E30C(L_10, L_11, /*hidden argument*/List_1_Add_mFFA36DD93284ADED6769B0CEAB6312034A34E30C_RuntimeMethod_var);
		}

IL_0045:
		{
			// foreach (var finger in fingers)
			bool L_12;
			L_12 = Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_0), /*hidden argument*/Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
	}

IL_005e:
	{
		// return filteredFingers;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_13 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_filteredFingers_14();
		return L_13;
	}
}
// System.Boolean CW.Common.CwInputManager::PointOverGui(UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInputManager_PointOverGui_m0D056023B9BA1A3A7208B1848CDDDFC682C0D159 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, int32_t ___guiLayers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return RaycastGui(screenPosition, guiLayers).Count > 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___screenPosition0;
		int32_t L_1 = ___guiLayers1;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_2;
		L_2 = CwInputManager_RaycastGui_mF2389B0DEF27B9EBBB00B095DDF55E438C205A08(L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline(L_2, /*hidden argument*/List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> CW.Common.CwInputManager::RaycastGui(UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * CwInputManager_RaycastGui_mF2389B0DEF27B9EBBB00B095DDF55E438C205A08 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, int32_t ___guiLayers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5D88EA8AA491CFF029747A32EF3F1793EE7B135B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * V_0 = NULL;
	int32_t V_1 = 0;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// tempRaycastResults.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_0 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempRaycastResults_10();
		NullCheck(L_0);
		List_1_Clear_m5D88EA8AA491CFF029747A32EF3F1793EE7B135B(L_0, /*hidden argument*/List_1_Clear_m5D88EA8AA491CFF029747A32EF3F1793EE7B135B_RuntimeMethod_var);
		// var currentEventSystem = EventSystem.current;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_1;
		L_1 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		V_0 = L_1;
		// if (currentEventSystem != null)
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00bc;
		}
	}
	{
		// if (currentEventSystem != tempEventSystem)
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_5 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempEventSystem_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		// tempEventSystem = currentEventSystem;
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->set_tempEventSystem_12(L_7);
		// if (tempPointerEventData == null)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_8 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempPointerEventData_11();
		if (L_8)
		{
			goto IL_0047;
		}
	}
	{
		// tempPointerEventData = new PointerEventData(tempEventSystem);
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_9 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempEventSystem_12();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_10 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_10, L_9, /*hidden argument*/NULL);
		((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->set_tempPointerEventData_11(L_10);
		// }
		goto IL_0051;
	}

IL_0047:
	{
		// tempPointerEventData.Reset();
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_11 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempPointerEventData_11();
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.EventSystems.AbstractEventData::Reset() */, L_11);
	}

IL_0051:
	{
		// tempPointerEventData.position = screenPosition;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_12 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempPointerEventData_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___screenPosition0;
		NullCheck(L_12);
		PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline(L_12, L_13, /*hidden argument*/NULL);
		// currentEventSystem.RaycastAll(tempPointerEventData, tempRaycastResults);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_14 = V_0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_15 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempPointerEventData_11();
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_16 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempRaycastResults_10();
		NullCheck(L_14);
		EventSystem_RaycastAll_m45A359AEC0BED3D47B50A862A2F69911373DE934(L_14, L_15, L_16, /*hidden argument*/NULL);
		// if (tempRaycastResults.Count > 0)
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_17 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempRaycastResults_10();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline(L_17, /*hidden argument*/List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		// for (var i = tempRaycastResults.Count - 1; i >= 0; i--)
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_19 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempRaycastResults_10();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline(L_19, /*hidden argument*/List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		goto IL_00b8;
	}

IL_0088:
	{
		// var raycastResult = tempRaycastResults[i];
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_21 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempRaycastResults_10();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_23;
		L_23 = List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_RuntimeMethod_var);
		V_2 = L_23;
		// var raycastLayer  = 1 << raycastResult.gameObject.layer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_24, /*hidden argument*/NULL);
		// if ((raycastLayer & guiLayers) == 0)
		int32_t L_26 = ___guiLayers1;
		if (((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)31)))))&(int32_t)L_26)))
		{
			goto IL_00b4;
		}
	}
	{
		// tempRaycastResults.RemoveAt(i);
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_27 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempRaycastResults_10();
		int32_t L_28 = V_1;
		NullCheck(L_27);
		List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9(L_27, L_28, /*hidden argument*/List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9_RuntimeMethod_var);
	}

IL_00b4:
	{
		// for (var i = tempRaycastResults.Count - 1; i >= 0; i--)
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1));
	}

IL_00b8:
	{
		// for (var i = tempRaycastResults.Count - 1; i >= 0; i--)
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}

IL_00bc:
	{
		// return tempRaycastResults;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_31 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_tempRaycastResults_10();
		return L_31;
	}
}
// UnityEngine.Vector2 CW.Common.CwInputManager::GetAveragePosition(System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInputManager_GetAveragePosition_mF75F8B3F6398662A234BC0189415484E7FD6B8AB (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___fingers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var total = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_0;
		// foreach (var finger in fingers)
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_1 = ___fingers0;
		NullCheck(L_1);
		Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  L_2;
		L_2 = List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E(L_1, /*hidden argument*/List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_000f:
		{
			// foreach (var finger in fingers)
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_3;
			L_3 = Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_inline((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
			V_2 = L_3;
			// total += finger.ScreenPosition;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_5 = V_2;
			NullCheck(L_5);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = L_5->get_ScreenPosition_7();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
			L_7 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_4, L_6, /*hidden argument*/NULL);
			V_0 = L_7;
		}

IL_0024:
		{
			// foreach (var finger in fingers)
			bool L_8;
			L_8 = Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_000f;
			}
		}

IL_002d:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// return fingers.Count == 0 ? total : total / fingers.Count;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_9 = ___fingers0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_9, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_12 = ___fingers0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_12, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_11, ((float)((float)L_13)), /*hidden argument*/NULL);
		return L_14;
	}

IL_0053:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector2 CW.Common.CwInputManager::GetAverageOldPosition(System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInputManager_GetAverageOldPosition_mCB88199092F23B284BA24E3A0DF2B2B909FC5C5A (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___fingers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var total = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_0;
		// foreach (var finger in fingers)
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_1 = ___fingers0;
		NullCheck(L_1);
		Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  L_2;
		L_2 = List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E(L_1, /*hidden argument*/List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_000f:
		{
			// foreach (var finger in fingers)
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_3;
			L_3 = Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_inline((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
			V_2 = L_3;
			// total += finger.ScreenPositionOld;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_5 = V_2;
			NullCheck(L_5);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = L_5->get_ScreenPositionOld_8();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
			L_7 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_4, L_6, /*hidden argument*/NULL);
			V_0 = L_7;
		}

IL_0024:
		{
			// foreach (var finger in fingers)
			bool L_8;
			L_8 = Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_000f;
			}
		}

IL_002d:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// return fingers.Count == 0 ? total : total / fingers.Count;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_9 = ___fingers0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_9, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_12 = ___fingers0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_12, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_11, ((float)((float)L_13)), /*hidden argument*/NULL);
		return L_14;
	}

IL_0053:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector2 CW.Common.CwInputManager::GetAveragePullScaled(System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInputManager_GetAveragePullScaled_m96B901B599304E891E73BB66F106D69CFD80DA3E (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___fingers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var total = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_0;
		// foreach (var finger in fingers)
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_1 = ___fingers0;
		NullCheck(L_1);
		Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  L_2;
		L_2 = List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E(L_1, /*hidden argument*/List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_000f:
		{
			// foreach (var finger in fingers)
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_3;
			L_3 = Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_inline((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
			V_2 = L_3;
			// total += finger.ScreenPosition - finger.StartScreenPosition;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_5 = V_2;
			NullCheck(L_5);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = L_5->get_ScreenPosition_7();
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_7 = V_2;
			NullCheck(L_7);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = L_7->get_StartScreenPosition_6();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
			L_9 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_6, L_8, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
			L_10 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_4, L_9, /*hidden argument*/NULL);
			V_0 = L_10;
		}

IL_002f:
		{
			// foreach (var finger in fingers)
			bool L_11;
			L_11 = Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_000f;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x48, IL_0048)
	}

IL_0048:
	{
		// return fingers.Count == 0 ? total : total * ScaleFactor / fingers.Count;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_12 = ___fingers0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_12, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0068;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = CwInputManager_get_ScaleFactor_m63BB3525D25E6CD46D2F376E283895E824B7EE47(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_14, L_15, /*hidden argument*/NULL);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_17 = ___fingers0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_17, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_16, ((float)((float)L_18)), /*hidden argument*/NULL);
		return L_19;
	}

IL_0068:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_0;
		return L_20;
	}
}
// UnityEngine.Vector2 CW.Common.CwInputManager::GetAverageDeltaScaled(System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInputManager_GetAverageDeltaScaled_m15C33507725EB67A0BC38D1C2478DFD8801F8E17 (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___fingers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var total = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_0;
		// foreach (var finger in fingers)
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_1 = ___fingers0;
		NullCheck(L_1);
		Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  L_2;
		L_2 = List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E(L_1, /*hidden argument*/List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_000f:
		{
			// foreach (var finger in fingers)
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_3;
			L_3 = Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_inline((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
			V_2 = L_3;
			// total += finger.ScreenPosition - finger.ScreenPositionOld;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_5 = V_2;
			NullCheck(L_5);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = L_5->get_ScreenPosition_7();
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_7 = V_2;
			NullCheck(L_7);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = L_7->get_ScreenPositionOld_8();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
			L_9 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_6, L_8, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
			L_10 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_4, L_9, /*hidden argument*/NULL);
			V_0 = L_10;
		}

IL_002f:
		{
			// foreach (var finger in fingers)
			bool L_11;
			L_11 = Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_000f;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_1), /*hidden argument*/Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x48, IL_0048)
	}

IL_0048:
	{
		// return fingers.Count == 0 ? total : total * ScaleFactor / fingers.Count;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_12 = ___fingers0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_12, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0068;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = CwInputManager_get_ScaleFactor_m63BB3525D25E6CD46D2F376E283895E824B7EE47(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_14, L_15, /*hidden argument*/NULL);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_17 = ___fingers0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_17, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_16, ((float)((float)L_18)), /*hidden argument*/NULL);
		return L_19;
	}

IL_0068:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_0;
		return L_20;
	}
}
// System.Single CW.Common.CwInputManager::GetAverageTwistRadians(System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInputManager_GetAverageTwistRadians_m05DEDF9443F2E701CBF1CBB68378F65E635D99D5 (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * ___fingers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var total     = 0.0f;
		V_0 = (0.0f);
		// var center    = GetAveragePosition(fingers);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_0 = ___fingers0;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = CwInputManager_GetAveragePosition_mF75F8B3F6398662A234BC0189415484E7FD6B8AB(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// var oldCenter = GetAverageOldPosition(fingers);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_2 = ___fingers0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = CwInputManager_GetAverageOldPosition_mCB88199092F23B284BA24E3A0DF2B2B909FC5C5A(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// foreach (var finger in fingers)
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_4 = ___fingers0;
		NullCheck(L_4);
		Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  L_5;
		L_5 = List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E(L_4, /*hidden argument*/List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		V_3 = L_5;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001d:
		{
			// foreach (var finger in fingers)
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_6;
			L_6 = Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_inline((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_3), /*hidden argument*/Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
			V_4 = L_6;
			// total += GetDeltaRadians(finger, center, oldCenter);
			float L_7 = V_0;
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_8 = V_4;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_1;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
			float L_11;
			L_11 = CwInputManager_GetDeltaRadians_mE931AFAE51CA19921890A54EE5844458B3428D11(L_8, L_9, L_10, /*hidden argument*/NULL);
			V_0 = ((float)il2cpp_codegen_add((float)L_7, (float)L_11));
		}

IL_0032:
		{
			// foreach (var finger in fingers)
			bool L_12;
			L_12 = Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_001d;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_3), /*hidden argument*/Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
	}

IL_004b:
	{
		// return fingers.Count == 0 ? total : total / fingers.Count;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_13 = ___fingers0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_13, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		float L_15 = V_0;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_16 = ___fingers0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_16, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		return ((float)((float)L_15/(float)((float)((float)L_17))));
	}

IL_005d:
	{
		float L_18 = V_0;
		return L_18;
	}
}
// System.Void CW.Common.CwInputManager::EnsureThisComponentExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_EnsureThisComponentExists_m9E2FBB171985D87EAA3E203069C20A820D21692A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_m9100DAE1F99BB2ACAF476AE8CA0D52412DA165C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_m47AD7512D17094FEFA2816091989A48438F41B10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying == true && FindObjectOfType<CwInputManager>() == null)
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * L_1;
		L_1 = Object_FindObjectOfType_TisCwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_m47AD7512D17094FEFA2816091989A48438F41B10(/*hidden argument*/Object_FindObjectOfType_TisCwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_m47AD7512D17094FEFA2816091989A48438F41B10_RuntimeMethod_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// new GameObject(typeof(CwInputManager).Name).AddComponent<CwInputManager>();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_6, L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * L_7;
		L_7 = GameObject_AddComponent_TisCwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_m9100DAE1F99BB2ACAF476AE8CA0D52412DA165C7(L_6, /*hidden argument*/GameObject_AddComponent_TisCwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_m9100DAE1F99BB2ACAF476AE8CA0D52412DA165C7_RuntimeMethod_var);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwInputManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_Update_m42544D954C1D175459090E3F9895575167FEEFF5 (CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF11819FFC8E11495D515B2F62E0220A9519F4064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mF7D7BDEE46F308F1D8BC6CEF07343CDD841FFE4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B6D3CA49A5B2FBFCD9190085DA9D19105AD3940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m53F9BF01850D237B074FE4EE875746BB35A7D751_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// for (var i = fingers.Count - 1; i >= 0; i--)
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_0 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_fingers_13();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_0, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0046;
	}

IL_000f:
	{
		// var finger = fingers[i];
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_2 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_fingers_13();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_4;
		L_4 = List_1_get_Item_m8B6D3CA49A5B2FBFCD9190085DA9D19105AD3940_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m8B6D3CA49A5B2FBFCD9190085DA9D19105AD3940_RuntimeMethod_var);
		V_1 = L_4;
		// if (finger.Up == true)
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->get_Up_3();
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// fingers.RemoveAt(i); pool.Push(finger);
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_7 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_fingers_13();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		List_1_RemoveAt_mF7D7BDEE46F308F1D8BC6CEF07343CDD841FFE4F(L_7, L_8, /*hidden argument*/List_1_RemoveAt_mF7D7BDEE46F308F1D8BC6CEF07343CDD841FFE4F_RuntimeMethod_var);
		// fingers.RemoveAt(i); pool.Push(finger);
		Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E * L_9 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_pool_15();
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_10 = V_1;
		NullCheck(L_9);
		Stack_1_Push_m53F9BF01850D237B074FE4EE875746BB35A7D751(L_9, L_10, /*hidden argument*/Stack_1_Push_m53F9BF01850D237B074FE4EE875746BB35A7D751_RuntimeMethod_var);
		// }
		goto IL_0042;
	}

IL_003b:
	{
		// finger.Up = true;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_Up_3((bool)1);
	}

IL_0042:
	{
		// for (var i = fingers.Count - 1; i >= 0; i--)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
	}

IL_0046:
	{
		// for (var i = fingers.Count - 1; i >= 0; i--)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// if (CwInput.GetTouchCount() > 0)
		int32_t L_14;
		L_14 = CwInput_GetTouchCount_m7132F160260D0D8E08D63AAE763842D44039459A(/*hidden argument*/NULL);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		// for (var i = 0; i < CwInput.GetTouchCount(); i++)
		V_2 = 0;
		goto IL_0075;
	}

IL_0056:
	{
		// CwInput.GetTouch(i, out id, out position, out pressure, out up);
		int32_t L_15 = V_2;
		CwInput_GetTouch_mF112E0705B5C608003D99002F7BD621FC09B1C1E(L_15, (int32_t*)(&V_3), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), (float*)(&V_5), (bool*)(&V_6), /*hidden argument*/NULL);
		// AddFinger(id, position, pressure, up);
		int32_t L_16 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_4;
		float L_18 = V_5;
		bool L_19 = V_6;
		CwInputManager_AddFinger_m32CDEF2F29BE854008316FBEB79C27A7345440DF(__this, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		// for (var i = 0; i < CwInput.GetTouchCount(); i++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0075:
	{
		// for (var i = 0; i < CwInput.GetTouchCount(); i++)
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = CwInput_GetTouchCount_m7132F160260D0D8E08D63AAE763842D44039459A(/*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0056;
		}
	}
	{
		// }
		goto IL_00de;
	}

IL_007f:
	{
		// var mouseSet = false;
		V_7 = (bool)0;
		// var mouseUp  = false;
		V_8 = (bool)0;
		// for (var i = 0; i < 5; i++)
		V_9 = 0;
		goto IL_00a8;
	}

IL_008a:
	{
		// mouseSet |= CwInput.GetMouseIsHeld(i);
		bool L_23 = V_7;
		int32_t L_24 = V_9;
		bool L_25;
		L_25 = CwInput_GetMouseIsHeld_m52F193B06A3A5B0A5280498CCEA63D33F2B62B5F(L_24, /*hidden argument*/NULL);
		V_7 = (bool)((int32_t)((int32_t)L_23|(int32_t)L_25));
		// mouseUp  |= CwInput.GetMouseWentUp(i);
		bool L_26 = V_8;
		int32_t L_27 = V_9;
		bool L_28;
		L_28 = CwInput_GetMouseWentUp_mE892979578B4B9997E02D4A7D4F631E4B512882D(L_27, /*hidden argument*/NULL);
		V_8 = (bool)((int32_t)((int32_t)L_26|(int32_t)L_28));
		// for (var i = 0; i < 5; i++)
		int32_t L_29 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00a8:
	{
		// for (var i = 0; i < 5; i++)
		int32_t L_30 = V_9;
		if ((((int32_t)L_30) < ((int32_t)5)))
		{
			goto IL_008a;
		}
	}
	{
		// AddFinger(HOVER_FINGER_INDEX, CwInput.GetMousePosition(), 0.0f, false);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = CwInput_GetMousePosition_m8BFEDF8A65C7AFF8C4CE871A5DAD24E38BE1EE54(/*hidden argument*/NULL);
		CwInputManager_AddFinger_m32CDEF2F29BE854008316FBEB79C27A7345440DF(__this, ((int32_t)-1337), L_31, (0.0f), (bool)0, /*hidden argument*/NULL);
		// if (mouseSet == true || mouseUp == true)
		bool L_32 = V_7;
		if (L_32)
		{
			goto IL_00cb;
		}
	}
	{
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00de;
		}
	}

IL_00cb:
	{
		// AddFinger(MOUSE_FINGER_INDEX, CwInput.GetMousePosition(), 1.0f, mouseUp);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = CwInput_GetMousePosition_m8BFEDF8A65C7AFF8C4CE871A5DAD24E38BE1EE54(/*hidden argument*/NULL);
		bool L_35 = V_8;
		CwInputManager_AddFinger_m32CDEF2F29BE854008316FBEB79C27A7345440DF(__this, (-1), L_34, (1.0f), L_35, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// foreach (var finger in fingers)
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_36 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_fingers_13();
		NullCheck(L_36);
		Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  L_37;
		L_37 = List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E(L_36, /*hidden argument*/List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		V_10 = L_37;
	}

IL_00ea:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0140;
		}

IL_00ec:
		{
			// foreach (var finger in fingers)
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_38;
			L_38 = Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_inline((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_10), /*hidden argument*/Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
			V_11 = L_38;
			// if (finger.Down == true && OnFingerDown   != null) OnFingerDown  .Invoke(finger);
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_39 = V_11;
			NullCheck(L_39);
			bool L_40 = L_39->get_Down_2();
			if (!L_40)
			{
				goto IL_0111;
			}
		}

IL_00fe:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
			Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_41 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerDown_5();
			if (!L_41)
			{
				goto IL_0111;
			}
		}

IL_0105:
		{
			// if (finger.Down == true && OnFingerDown   != null) OnFingerDown  .Invoke(finger);
			IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
			Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_42 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerDown_5();
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_43 = V_11;
			NullCheck(L_42);
			Action_1_Invoke_mF11819FFC8E11495D515B2F62E0220A9519F4064(L_42, L_43, /*hidden argument*/Action_1_Invoke_mF11819FFC8E11495D515B2F62E0220A9519F4064_RuntimeMethod_var);
		}

IL_0111:
		{
			// if (                       OnFingerUpdate != null) OnFingerUpdate.Invoke(finger);
			IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
			Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_44 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerUpdate_6();
			if (!L_44)
			{
				goto IL_0124;
			}
		}

IL_0118:
		{
			// if (                       OnFingerUpdate != null) OnFingerUpdate.Invoke(finger);
			IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
			Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_45 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerUpdate_6();
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_46 = V_11;
			NullCheck(L_45);
			Action_1_Invoke_mF11819FFC8E11495D515B2F62E0220A9519F4064(L_45, L_46, /*hidden argument*/Action_1_Invoke_mF11819FFC8E11495D515B2F62E0220A9519F4064_RuntimeMethod_var);
		}

IL_0124:
		{
			// if (finger.Up   == true && OnFingerUp     != null) OnFingerUp    .Invoke(finger);
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_47 = V_11;
			NullCheck(L_47);
			bool L_48 = L_47->get_Up_3();
			if (!L_48)
			{
				goto IL_0140;
			}
		}

IL_012d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
			Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_49 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerUp_7();
			if (!L_49)
			{
				goto IL_0140;
			}
		}

IL_0134:
		{
			// if (finger.Up   == true && OnFingerUp     != null) OnFingerUp    .Invoke(finger);
			IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
			Action_1_t7F0F5E9B83295625FFEDCB2A1684451FB2935660 * L_50 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_OnFingerUp_7();
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_51 = V_11;
			NullCheck(L_50);
			Action_1_Invoke_mF11819FFC8E11495D515B2F62E0220A9519F4064(L_50, L_51, /*hidden argument*/Action_1_Invoke_mF11819FFC8E11495D515B2F62E0220A9519F4064_RuntimeMethod_var);
		}

IL_0140:
		{
			// foreach (var finger in fingers)
			bool L_52;
			L_52 = Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_10), /*hidden argument*/Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
			if (L_52)
			{
				goto IL_00ec;
			}
		}

IL_0149:
		{
			IL2CPP_LEAVE(0x159, FINALLY_014b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014b;
	}

FINALLY_014b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_10), /*hidden argument*/Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		IL2CPP_END_FINALLY(331)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(331)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x159, IL_0159)
	}

IL_0159:
	{
		// }
		return;
	}
}
// CW.Common.CwInputManager/Finger CW.Common.CwInputManager::FindFinger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * CwInputManager_FindFinger_m1242A02074881DA86B426437FA143050BB6642A8 (CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * V_1 = NULL;
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var finger in fingers)
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_0 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_fingers_13();
		NullCheck(L_0);
		Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE  L_1;
		L_1 = List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E(L_0, /*hidden argument*/List_1_GetEnumerator_mD82FCAEE94B1214B1CB4C7AEEF777F49AD914A7E_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_000d:
		{
			// foreach (var finger in fingers)
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_2;
			L_2 = Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_inline((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2116E39AD469A5F58DC81E7C26744610BB5F7FB4_RuntimeMethod_var);
			V_1 = L_2;
			// if (finger.Index == index)
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4 = L_3->get_Index_0();
			int32_t L_5 = ___index0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0022;
			}
		}

IL_001e:
		{
			// return finger;
			Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_6 = V_1;
			V_2 = L_6;
			IL2CPP_LEAVE(0x3D, FINALLY_002d);
		}

IL_0022:
		{
			// foreach (var finger in fingers)
			bool L_7;
			L_7 = Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m52B1422D9337BA835C0AF8B3B4BA823F80C9AF03_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_000d;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54((Enumerator_t6C08F69E956D618FC6EE0BA91BD7D0A22D44D5AE *)(&V_0), /*hidden argument*/Enumerator_Dispose_m58ED92A57AB09CB166448825A9158DD437EAEC54_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// return null;
		return (Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE *)NULL;
	}

IL_003d:
	{
		// }
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_8 = V_2;
		return L_8;
	}
}
// System.Void CW.Common.CwInputManager::AddFinger(System.Int32,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager_AddFinger_m32CDEF2F29BE854008316FBEB79C27A7345440DF (CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * __this, int32_t ___index0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition1, float ___pressure2, bool ___up3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFFA36DD93284ADED6769B0CEAB6312034A34E30C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mB76E5CDBB96C682804DB8CAF62019C27F3117881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m90D559C4940F65AB3C9FA6342058A5BF979EE4E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * V_0 = NULL;
	Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * G_B4_0 = NULL;
	{
		// var finger = FindFinger(index);
		int32_t L_0 = ___index0;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_1;
		L_1 = CwInputManager_FindFinger_m1242A02074881DA86B426437FA143050BB6642A8(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (finger == null)
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_2 = V_0;
		if (L_2)
		{
			goto IL_0083;
		}
	}
	{
		// finger = pool.Count > 0 ? pool.Pop() : new Finger();
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E * L_3 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_pool_15();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Stack_1_get_Count_m90D559C4940F65AB3C9FA6342058A5BF979EE4E6_inline(L_3, /*hidden argument*/Stack_1_get_Count_m90D559C4940F65AB3C9FA6342058A5BF979EE4E6_RuntimeMethod_var);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_5 = (Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE *)il2cpp_codegen_object_new(Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE_il2cpp_TypeInfo_var);
		Finger__ctor_mA5D2A6FF22CECB566F45C4AD2054BA9EFE121DD7(L_5, /*hidden argument*/NULL);
		G_B4_0 = L_5;
		goto IL_0029;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E * L_6 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_pool_15();
		NullCheck(L_6);
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_7;
		L_7 = Stack_1_Pop_mB76E5CDBB96C682804DB8CAF62019C27F3117881(L_6, /*hidden argument*/Stack_1_Pop_mB76E5CDBB96C682804DB8CAF62019C27F3117881_RuntimeMethod_var);
		G_B4_0 = L_7;
	}

IL_0029:
	{
		V_0 = G_B4_0;
		// finger.Index = index;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_8 = V_0;
		int32_t L_9 = ___index0;
		NullCheck(L_8);
		L_8->set_Index_0(L_9);
		// finger.Down  = true;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_10 = V_0;
		NullCheck(L_10);
		L_10->set_Down_2((bool)1);
		// finger.Age   = 0.0f;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_11 = V_0;
		NullCheck(L_11);
		L_11->set_Age_4((0.0f));
		// finger.StartedOverGui          = PointOverGui(screenPosition, guiLayers);
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_12 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___screenPosition1;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_14 = __this->get_guiLayers_4();
		int32_t L_15;
		L_15 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = CwInputManager_PointOverGui_m0D056023B9BA1A3A7208B1848CDDDFC682C0D159(L_13, L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_StartedOverGui_5(L_16);
		// finger.StartScreenPosition     = screenPosition;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_17 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = ___screenPosition1;
		NullCheck(L_17);
		L_17->set_StartScreenPosition_6(L_18);
		// finger.ScreenPositionOld       = screenPosition;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_19 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = ___screenPosition1;
		NullCheck(L_19);
		L_19->set_ScreenPositionOld_8(L_20);
		// finger.ScreenPositionOldOld    = screenPosition;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_21 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = ___screenPosition1;
		NullCheck(L_21);
		L_21->set_ScreenPositionOldOld_9(L_22);
		// finger.ScreenPositionOldOldOld = screenPosition;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_23 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = ___screenPosition1;
		NullCheck(L_23);
		L_23->set_ScreenPositionOldOldOld_10(L_24);
		// fingers.Add(finger);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_25 = ((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->get_fingers_13();
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_26 = V_0;
		NullCheck(L_25);
		List_1_Add_mFFA36DD93284ADED6769B0CEAB6312034A34E30C(L_25, L_26, /*hidden argument*/List_1_Add_mFFA36DD93284ADED6769B0CEAB6312034A34E30C_RuntimeMethod_var);
		// }
		goto IL_00c0;
	}

IL_0083:
	{
		// finger.Down = false;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_27 = V_0;
		NullCheck(L_27);
		L_27->set_Down_2((bool)0);
		// finger.Age += Time.deltaTime;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_28 = V_0;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_29 = L_28;
		NullCheck(L_29);
		float L_30 = L_29->get_Age_4();
		float L_31;
		L_31 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_29);
		L_29->set_Age_4(((float)il2cpp_codegen_add((float)L_30, (float)L_31)));
		// finger.ScreenPositionOldOldOld = finger.ScreenPositionOldOld;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_32 = V_0;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_33 = V_0;
		NullCheck(L_33);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = L_33->get_ScreenPositionOldOld_9();
		NullCheck(L_32);
		L_32->set_ScreenPositionOldOldOld_10(L_34);
		// finger.ScreenPositionOldOld    = finger.ScreenPositionOld;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_35 = V_0;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_36 = V_0;
		NullCheck(L_36);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = L_36->get_ScreenPositionOld_8();
		NullCheck(L_35);
		L_35->set_ScreenPositionOldOld_9(L_37);
		// finger.ScreenPositionOld       = finger.ScreenPosition;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_38 = V_0;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_39 = V_0;
		NullCheck(L_39);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40 = L_39->get_ScreenPosition_7();
		NullCheck(L_38);
		L_38->set_ScreenPositionOld_8(L_40);
	}

IL_00c0:
	{
		// finger.Pressure       = pressure;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_41 = V_0;
		float L_42 = ___pressure2;
		NullCheck(L_41);
		L_41->set_Pressure_1(L_42);
		// finger.ScreenPosition = screenPosition;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_43 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44 = ___screenPosition1;
		NullCheck(L_43);
		L_43->set_ScreenPosition_7(L_44);
		// finger.Up             = up;
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_45 = V_0;
		bool L_46 = ___up3;
		NullCheck(L_45);
		L_45->set_Up_3(L_46);
		// }
		return;
	}
}
// UnityEngine.Vector2 CW.Common.CwInputManager::Hermite(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CwInputManager_Hermite_m0507F7DED4EB496EDE807D0DA6D3FFEEA9D8A361 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___c2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___d3, float ___t4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// var mu2 = t * t;
		float L_0 = ___t4;
		float L_1 = ___t4;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// var mu3 = mu2 * t;
		float L_2 = V_0;
		float L_3 = ___t4;
		V_1 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// var x   = HermiteInterpolate(a.x, b.x, c.x, d.x, t, mu2, mu3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___c2;
		float L_9 = L_8.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = ___d3;
		float L_11 = L_10.get_x_0();
		float L_12 = ___t4;
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = CwInputManager_HermiteInterpolate_m5CF4967A19AC3950938FA7B21B6E316C5B4C5322(L_5, L_7, L_9, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		// var y   = HermiteInterpolate(a.y, b.y, c.y, d.y, t, mu2, mu3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ___a0;
		float L_17 = L_16.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = ___b1;
		float L_19 = L_18.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = ___c2;
		float L_21 = L_20.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = ___d3;
		float L_23 = L_22.get_y_1();
		float L_24 = ___t4;
		float L_25 = V_0;
		float L_26 = V_1;
		float L_27;
		L_27 = CwInputManager_HermiteInterpolate_m5CF4967A19AC3950938FA7B21B6E316C5B4C5322(L_17, L_19, L_21, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// return new Vector2(x, y);
		float L_28 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_29), L_15, L_28, /*hidden argument*/NULL);
		return L_29;
	}
}
// System.Single CW.Common.CwInputManager::HermiteInterpolate(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInputManager_HermiteInterpolate_m5CF4967A19AC3950938FA7B21B6E316C5B4C5322 (float ___y00, float ___y11, float ___y22, float ___y33, float ___mu4, float ___mu25, float ___mu36, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// var m0 = (y1 - y0) * 0.5f + (y2 - y1) * 0.5f;
		float L_0 = ___y11;
		float L_1 = ___y00;
		float L_2 = ___y22;
		float L_3 = ___y11;
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), (float)(0.5f))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), (float)(0.5f)))));
		// var m1 = (y2 - y1) * 0.5f + (y3 - y2) * 0.5f;
		float L_4 = ___y22;
		float L_5 = ___y11;
		float L_6 = ___y33;
		float L_7 = ___y22;
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), (float)(0.5f))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)), (float)(0.5f)))));
		// var a0 =  2.0f * mu3 - 3.0f * mu2 + 1.0f;
		float L_8 = ___mu36;
		float L_9 = ___mu25;
		// var a1 =         mu3 - 2.0f * mu2 + mu;
		float L_10 = ___mu36;
		float L_11 = ___mu25;
		float L_12 = ___mu4;
		V_2 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_10, (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_11)))), (float)L_12));
		// var a2 =         mu3 -        mu2;
		float L_13 = ___mu36;
		float L_14 = ___mu25;
		V_3 = ((float)il2cpp_codegen_subtract((float)L_13, (float)L_14));
		// var a3 = -2.0f * mu3 + 3.0f * mu2;
		float L_15 = ___mu36;
		float L_16 = ___mu25;
		V_4 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_15)), (float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_16))));
		// return(a0*y1+a1*m0+a2*m1+a3*y2);
		float L_17 = ___y11;
		float L_18 = V_2;
		float L_19 = V_0;
		float L_20 = V_3;
		float L_21 = V_1;
		float L_22 = V_4;
		float L_23 = ___y22;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_8)), (float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_9)))), (float)(1.0f))), (float)L_17)), (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))), (float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)))), (float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23))));
	}
}
// System.Single CW.Common.CwInputManager::GetRadians(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInputManager_GetRadians_mF2DB9C38D8F578278E19EF0D9398AE3E096A7C9D (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___referencePoint1, const RuntimeMethod* method)
{
	{
		// return Mathf.Atan2(screenPosition.x - referencePoint.x, screenPosition.y - referencePoint.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___screenPosition0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___referencePoint1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___screenPosition0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___referencePoint1;
		float L_7 = L_6.get_y_1();
		float L_8;
		L_8 = atan2f(((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)));
		return L_8;
	}
}
// System.Single CW.Common.CwInputManager::GetDeltaRadians(CW.Common.CwInputManager/Finger,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInputManager_GetDeltaRadians_mE931AFAE51CA19921890A54EE5844458B3428D11 (Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___finger0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___referencePoint1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lastReferencePoint2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var a = GetRadians(finger.ScreenPositionOld, lastReferencePoint);
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_0 = ___finger0;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = L_0->get_ScreenPositionOld_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___lastReferencePoint2;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = CwInputManager_GetRadians_mF2DB9C38D8F578278E19EF0D9398AE3E096A7C9D(L_1, L_2, /*hidden argument*/NULL);
		// var b = GetRadians(finger.ScreenPosition, referencePoint);
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_4 = ___finger0;
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = L_4->get_ScreenPosition_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___referencePoint1;
		float L_7;
		L_7 = CwInputManager_GetRadians_mF2DB9C38D8F578278E19EF0D9398AE3E096A7C9D(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// var d = Mathf.Repeat(a - b, Mathf.PI * 2.0f);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(((float)il2cpp_codegen_subtract((float)L_3, (float)L_8)), (6.28318548f), /*hidden argument*/NULL);
		V_1 = L_9;
		// if (d > Mathf.PI)
		float L_10 = V_1;
		if ((!(((float)L_10) > ((float)(3.14159274f)))))
		{
			goto IL_0036;
		}
	}
	{
		// d -= Mathf.PI * 2.0f;
		float L_11 = V_1;
		V_1 = ((float)il2cpp_codegen_subtract((float)L_11, (float)(6.28318548f)));
	}

IL_0036:
	{
		// return d;
		float L_12 = V_1;
		return L_12;
	}
}
// System.Void CW.Common.CwInputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager__ctor_m6FBBC40E00413D9C47DD9424A05D2BCA6FB95D22 (CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200 * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask GuiLayers { set { guiLayers = value; } get { return guiLayers; } } [SerializeField] private LayerMask guiLayers = 1 << 5;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0;
		L_0 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C(((int32_t)32), /*hidden argument*/NULL);
		__this->set_guiLayers_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CW.Common.CwInputManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInputManager__cctor_mAEDEC06914A7125F10FBE0CCC3438A2536AC4606 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC21FF125DF7502D850E75E21D9C3A2C8F183041F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD1F29CADB45CDC47AE42C4E6A2EF86681F37F9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m1DD36665492168AB97F9AF4CC6B7161CD41CB4BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<RaycastResult> tempRaycastResults = new List<RaycastResult>(10);
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_0 = (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *)il2cpp_codegen_object_new(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		List_1__ctor_mD1F29CADB45CDC47AE42C4E6A2EF86681F37F9E4(L_0, ((int32_t)10), /*hidden argument*/List_1__ctor_mD1F29CADB45CDC47AE42C4E6A2EF86681F37F9E4_RuntimeMethod_var);
		((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->set_tempRaycastResults_10(L_0);
		// private static List<Finger> fingers = new List<Finger>();
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_1 = (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 *)il2cpp_codegen_object_new(List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86_il2cpp_TypeInfo_var);
		List_1__ctor_mC21FF125DF7502D850E75E21D9C3A2C8F183041F(L_1, /*hidden argument*/List_1__ctor_mC21FF125DF7502D850E75E21D9C3A2C8F183041F_RuntimeMethod_var);
		((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->set_fingers_13(L_1);
		// private static List<Finger> filteredFingers = new List<Finger>();
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_2 = (List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 *)il2cpp_codegen_object_new(List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86_il2cpp_TypeInfo_var);
		List_1__ctor_mC21FF125DF7502D850E75E21D9C3A2C8F183041F(L_2, /*hidden argument*/List_1__ctor_mC21FF125DF7502D850E75E21D9C3A2C8F183041F_RuntimeMethod_var);
		((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->set_filteredFingers_14(L_2);
		// private static Stack<Finger> pool = new Stack<Finger>();
		Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E * L_3 = (Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E *)il2cpp_codegen_object_new(Stack_1_t8C96A92D92DE20E535877DD4A04D07431ABABB5E_il2cpp_TypeInfo_var);
		Stack_1__ctor_m1DD36665492168AB97F9AF4CC6B7161CD41CB4BA(L_3, /*hidden argument*/Stack_1__ctor_m1DD36665492168AB97F9AF4CC6B7161CD41CB4BA_RuntimeMethod_var);
		((CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_StaticFields*)il2cpp_codegen_static_fields_for(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var))->set_pool_15(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwLightIntensity::set_Multiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwLightIntensity_set_Multiplier_mB9209A68E4028B41085D288C606427AA501E0F4B (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [SerializeField] private float multiplier = 1.0f;
		float L_0 = ___value0;
		__this->set_multiplier_4(L_0);
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [SerializeField] private float multiplier = 1.0f;
		return;
	}
}
// System.Single CW.Common.CwLightIntensity::get_Multiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwLightIntensity_get_Multiplier_mC0E986A47980A88071D6E012A8E1D87BDFC730E8 (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, const RuntimeMethod* method)
{
	{
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [SerializeField] private float multiplier = 1.0f;
		float L_0 = __this->get_multiplier_4();
		return L_0;
	}
}
// System.Void CW.Common.CwLightIntensity::set_IntensityInStandard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwLightIntensity_set_IntensityInStandard_m89071651BCC88467DA380F4E67E913E85C281373 (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float IntensityInStandard { set  { intensityInStandard = value; } get { return intensityInStandard; } } [SerializeField] private float intensityInStandard = 1.0f;
		float L_0 = ___value0;
		__this->set_intensityInStandard_5(L_0);
		// public float IntensityInStandard { set  { intensityInStandard = value; } get { return intensityInStandard; } } [SerializeField] private float intensityInStandard = 1.0f;
		return;
	}
}
// System.Single CW.Common.CwLightIntensity::get_IntensityInStandard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwLightIntensity_get_IntensityInStandard_m7A1EC64D93C62582D0BA1EBA44C371110F93430E (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, const RuntimeMethod* method)
{
	{
		// public float IntensityInStandard { set  { intensityInStandard = value; } get { return intensityInStandard; } } [SerializeField] private float intensityInStandard = 1.0f;
		float L_0 = __this->get_intensityInStandard_5();
		return L_0;
	}
}
// System.Void CW.Common.CwLightIntensity::set_IntensityInURP(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwLightIntensity_set_IntensityInURP_mFB1EC95FD35930333EFBC106C41508F7B50A01A5 (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float IntensityInURP { set  { intensityInURP = value; } get { return intensityInURP; } } [SerializeField] private float intensityInURP = 1.0f;
		float L_0 = ___value0;
		__this->set_intensityInURP_6(L_0);
		// public float IntensityInURP { set  { intensityInURP = value; } get { return intensityInURP; } } [SerializeField] private float intensityInURP = 1.0f;
		return;
	}
}
// System.Single CW.Common.CwLightIntensity::get_IntensityInURP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwLightIntensity_get_IntensityInURP_m344340015EB9E4724DE70FA6F57DB4DB6E436125 (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, const RuntimeMethod* method)
{
	{
		// public float IntensityInURP { set  { intensityInURP = value; } get { return intensityInURP; } } [SerializeField] private float intensityInURP = 1.0f;
		float L_0 = __this->get_intensityInURP_6();
		return L_0;
	}
}
// System.Void CW.Common.CwLightIntensity::set_IntensityInHDRP(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwLightIntensity_set_IntensityInHDRP_mACBDB7475D2C11BC70DAFEB20332A89E1BD30CCE (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float IntensityInHDRP { set  { intensityInHDRP = value; } get { return intensityInHDRP; } } [SerializeField] private float intensityInHDRP = 120000.0f;
		float L_0 = ___value0;
		__this->set_intensityInHDRP_7(L_0);
		// public float IntensityInHDRP { set  { intensityInHDRP = value; } get { return intensityInHDRP; } } [SerializeField] private float intensityInHDRP = 120000.0f;
		return;
	}
}
// System.Single CW.Common.CwLightIntensity::get_IntensityInHDRP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwLightIntensity_get_IntensityInHDRP_m1DAAB236C05C0F1C4215C0D727A2DFB444260BAA (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, const RuntimeMethod* method)
{
	{
		// public float IntensityInHDRP { set  { intensityInHDRP = value; } get { return intensityInHDRP; } } [SerializeField] private float intensityInHDRP = 120000.0f;
		float L_0 = __this->get_intensityInHDRP_7();
		return L_0;
	}
}
// UnityEngine.Light CW.Common.CwLightIntensity::get_CachedLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Light_tA2F349FE839781469A0344CF6039B51512394275 * CwLightIntensity_get_CachedLight_mEDC00237B1734519294C3BD1189B8AEF457A5359 (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cachedLightSet == false)
		bool L_0 = __this->get_cachedLightSet_9();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// cachedLight    = GetComponent<Light>();
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_1;
		L_1 = Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA(__this, /*hidden argument*/Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA_RuntimeMethod_var);
		__this->set_cachedLight_8(L_1);
		// cachedLightSet = true;
		__this->set_cachedLightSet_9((bool)1);
	}

IL_001b:
	{
		// return cachedLight;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_2 = __this->get_cachedLight_8();
		return L_2;
	}
}
// System.Void CW.Common.CwLightIntensity::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwLightIntensity_Update_m90A15CB3E5AF3B8C9A670B1F1C88489D83ACD027 (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var pipe = CwShaderBundle.DetectProjectPipeline();
		int32_t L_0;
		L_0 = CwShaderBundle_DetectProjectPipeline_m4499C17B2B448CE2587FC0C321A7DC0089456BCE(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (CwShaderBundle.IsStandard(pipe) == true)
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = CwShaderBundle_IsStandard_mBBB6EF827FA60A9455D57B1023161D04CD6858A2(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// ApplyIntensity(intensityInStandard);
		float L_3 = __this->get_intensityInStandard_5();
		CwLightIntensity_ApplyIntensity_m1B50241C83C8E300BD4048371CD09D9F1D6328CE(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001b:
	{
		// else if (CwShaderBundle.IsURP(pipe) == true)
		int32_t L_4 = V_0;
		bool L_5;
		L_5 = CwShaderBundle_IsURP_mB55695B59F7E8B4224FA4F47208463152F028A72(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// ApplyIntensity(intensityInURP);
		float L_6 = __this->get_intensityInURP_6();
		CwLightIntensity_ApplyIntensity_m1B50241C83C8E300BD4048371CD09D9F1D6328CE(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0030:
	{
		// else if (CwShaderBundle.IsHDRP(pipe) == true)
		int32_t L_7 = V_0;
		bool L_8;
		L_8 = CwShaderBundle_IsHDRP_m8EC8D4BB8BE1948B43288FAAF3A44260CCF16CF6(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		// ApplyIntensity(intensityInHDRP);
		float L_9 = __this->get_intensityInHDRP_7();
		CwLightIntensity_ApplyIntensity_m1B50241C83C8E300BD4048371CD09D9F1D6328CE(__this, L_9, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwLightIntensity::ApplyIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwLightIntensity_ApplyIntensity_m1B50241C83C8E300BD4048371CD09D9F1D6328CE (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, float ___intensity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (intensity >= 0.0f)
		float L_0 = ___intensity0;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// if (cachedLightSet == false)
		bool L_1 = __this->get_cachedLightSet_9();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// cachedLight    = GetComponent<Light>();
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_2;
		L_2 = Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA(__this, /*hidden argument*/Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA_RuntimeMethod_var);
		__this->set_cachedLight_8(L_2);
		// cachedLightSet = true;
		__this->set_cachedLightSet_9((bool)1);
	}

IL_0023:
	{
		// cachedLight.intensity = intensity * multiplier;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_3 = __this->get_cachedLight_8();
		float L_4 = ___intensity0;
		float L_5 = __this->get_multiplier_4();
		NullCheck(L_3);
		Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_3, ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwLightIntensity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwLightIntensity__ctor_m3FC89BAA90030EC19EBAF328516644653DEF2633 (CwLightIntensity_tC77A069DEBE70816954AF1584B773D4B8983AB2C * __this, const RuntimeMethod* method)
{
	{
		// public float Multiplier { set { multiplier = value; } get { return multiplier; } } [SerializeField] private float multiplier = 1.0f;
		__this->set_multiplier_4((1.0f));
		// public float IntensityInStandard { set  { intensityInStandard = value; } get { return intensityInStandard; } } [SerializeField] private float intensityInStandard = 1.0f;
		__this->set_intensityInStandard_5((1.0f));
		// public float IntensityInURP { set  { intensityInURP = value; } get { return intensityInURP; } } [SerializeField] private float intensityInURP = 1.0f;
		__this->set_intensityInURP_6((1.0f));
		// public float IntensityInHDRP { set  { intensityInHDRP = value; } get { return intensityInHDRP; } } [SerializeField] private float intensityInHDRP = 120000.0f;
		__this->set_intensityInHDRP_7((120000.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean CW.Common.CwRoot::get_Exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwRoot_get_Exists_m75D079EA47ED3AF0934FC3FE20A28060ACA3C09E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instances.Count > 0;
		IL2CPP_RUNTIME_CLASS_INIT(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * L_0 = ((CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields*)il2cpp_codegen_static_fields_for(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var))->get_instances_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_inline(L_0, /*hidden argument*/List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Transform CW.Common.CwRoot::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * CwRoot_get_Root_mF4FDE1F0F075C02B0C0396F2D83647B20739750C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m65685DB34513A8BD0BCEC7BF3618C468764D6DD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instances.Count > 0)
		IL2CPP_RUNTIME_CLASS_INIT(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * L_0 = ((CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields*)il2cpp_codegen_static_fields_for(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var))->get_instances_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_inline(L_0, /*hidden argument*/List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// return instances[0].transform;
		IL2CPP_RUNTIME_CLASS_INIT(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * L_2 = ((CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields*)il2cpp_codegen_static_fields_for(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var))->get_instances_4();
		NullCheck(L_2);
		CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * L_3;
		L_3 = List_1_get_Item_m65685DB34513A8BD0BCEC7BF3618C468764D6DD5_inline(L_2, 0, /*hidden argument*/List_1_get_Item_m65685DB34513A8BD0BCEC7BF3618C468764D6DD5_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001e:
	{
		// return null;
		return (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL;
	}
}
// UnityEngine.Transform CW.Common.CwRoot::GetRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * CwRoot_GetRoot_mB9E5386CC1E1A898FD9777AE3FAA4E4CE1DB15F1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_mCAC6CC94A7CFA5CF3BFA775F6E000DEDCD46DF1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m65685DB34513A8BD0BCEC7BF3618C468764D6DD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE8F6847C314C91BB3146DCB16C31E2EF0920BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instances.Count == 0)
		IL2CPP_RUNTIME_CLASS_INIT(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * L_0 = ((CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields*)il2cpp_codegen_static_fields_for(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var))->get_instances_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_inline(L_0, /*hidden argument*/List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// new GameObject("CwRoot").AddComponent<CwRoot>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteralEBE8F6847C314C91BB3146DCB16C31E2EF0920BA, /*hidden argument*/NULL);
		NullCheck(L_2);
		CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * L_3;
		L_3 = GameObject_AddComponent_TisCwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_mCAC6CC94A7CFA5CF3BFA775F6E000DEDCD46DF1C(L_2, /*hidden argument*/GameObject_AddComponent_TisCwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_mCAC6CC94A7CFA5CF3BFA775F6E000DEDCD46DF1C_RuntimeMethod_var);
	}

IL_001c:
	{
		// return instances[0].transform;
		IL2CPP_RUNTIME_CLASS_INIT(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * L_4 = ((CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields*)il2cpp_codegen_static_fields_for(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var))->get_instances_4();
		NullCheck(L_4);
		CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * L_5;
		L_5 = List_1_get_Item_m65685DB34513A8BD0BCEC7BF3618C468764D6DD5_inline(L_4, 0, /*hidden argument*/List_1_get_Item_m65685DB34513A8BD0BCEC7BF3618C468764D6DD5_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void CW.Common.CwRoot::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwRoot_OnEnable_m266162DFD61E01C4F26B677EF435D9E448947941 (CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m35730E7FE7953C0E294C503E0020D8A6227072DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m65685DB34513A8BD0BCEC7BF3618C468764D6DD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64056F676276236BDF448145DA92C1E5FD112B5E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instances.Count > 0)
		IL2CPP_RUNTIME_CLASS_INIT(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * L_0 = ((CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields*)il2cpp_codegen_static_fields_for(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var))->get_instances_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_inline(L_0, /*hidden argument*/List_1_get_Count_m9A57F41F8BE7619B7CE1D310A24E6458F66EDF30_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// Debug.LogWarning("Your scene already contains an instance of CwRoot!", instances[0]);
		IL2CPP_RUNTIME_CLASS_INIT(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * L_2 = ((CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields*)il2cpp_codegen_static_fields_for(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var))->get_instances_4();
		NullCheck(L_2);
		CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * L_3;
		L_3 = List_1_get_Item_m65685DB34513A8BD0BCEC7BF3618C468764D6DD5_inline(L_2, 0, /*hidden argument*/List_1_get_Item_m65685DB34513A8BD0BCEC7BF3618C468764D6DD5_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(_stringLiteral64056F676276236BDF448145DA92C1E5FD112B5E, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// instances.Add(this);
		IL2CPP_RUNTIME_CLASS_INIT(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * L_4 = ((CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields*)il2cpp_codegen_static_fields_for(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var))->get_instances_4();
		NullCheck(L_4);
		List_1_Add_m35730E7FE7953C0E294C503E0020D8A6227072DA(L_4, __this, /*hidden argument*/List_1_Add_m35730E7FE7953C0E294C503E0020D8A6227072DA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CW.Common.CwRoot::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwRoot_OnDisable_m98F10EB4B5365D81A740DD4F6706523EBE6FD7F8 (CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mBC15F699CED7C1BB5F3B3EF4A154E280EB081DD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances.Remove(this);
		IL2CPP_RUNTIME_CLASS_INIT(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * L_0 = ((CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields*)il2cpp_codegen_static_fields_for(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var))->get_instances_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = List_1_Remove_mBC15F699CED7C1BB5F3B3EF4A154E280EB081DD9(L_0, __this, /*hidden argument*/List_1_Remove_mBC15F699CED7C1BB5F3B3EF4A154E280EB081DD9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CW.Common.CwRoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwRoot__ctor_mBEDCEC7B6EA06629F9B600D40DFDC853D053D5BA (CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CW.Common.CwRoot::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwRoot__cctor_m4ADD1BCD065302BD35A69FE02172C27095FEE9A2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8C5A32893A8BADD7A904C56CE8B10DAAAE34C3F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<CwRoot> instances = new List<CwRoot>();
		List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 * L_0 = (List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3 *)il2cpp_codegen_object_new(List_1_tD1C40419B187935D85265B8EC19E8905F35F66E3_il2cpp_TypeInfo_var);
		List_1__ctor_m8C5A32893A8BADD7A904C56CE8B10DAAAE34C3F2(L_0, /*hidden argument*/List_1__ctor_m8C5A32893A8BADD7A904C56CE8B10DAAAE34C3F2_RuntimeMethod_var);
		((CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_StaticFields*)il2cpp_codegen_static_fields_for(CwRoot_t35BB69FF427E224FA306B83BC4639C09EEE8885D_il2cpp_TypeInfo_var))->set_instances_4(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwRotate::set_AngularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwRotate_set_AngularVelocity_mC8F1471A9F482F4E853BA3310AA61428E60714C8 (CwRotate_t34CF440B91575AACCDFD750683F5847253538181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 AngularVelocity { set { angularVelocity = value; } get { return angularVelocity; } } [SerializeField] private Vector3 angularVelocity = Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_angularVelocity_4(L_0);
		// public Vector3 AngularVelocity { set { angularVelocity = value; } get { return angularVelocity; } } [SerializeField] private Vector3 angularVelocity = Vector3.up;
		return;
	}
}
// UnityEngine.Vector3 CW.Common.CwRotate::get_AngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CwRotate_get_AngularVelocity_m8FD3AC30BE5A86D795FE8F76B94267EBC72AA2B6 (CwRotate_t34CF440B91575AACCDFD750683F5847253538181 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 AngularVelocity { set { angularVelocity = value; } get { return angularVelocity; } } [SerializeField] private Vector3 angularVelocity = Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_angularVelocity_4();
		return L_0;
	}
}
// System.Void CW.Common.CwRotate::set_RelativeTo(UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwRotate_set_RelativeTo_mC3BD71EA6EA67113B64408B4137A2B659231A376 (CwRotate_t34CF440B91575AACCDFD750683F5847253538181 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Space RelativeTo { set { relativeTo = value; } get { return relativeTo; } } [SerializeField] private Space relativeTo;
		int32_t L_0 = ___value0;
		__this->set_relativeTo_5(L_0);
		// public Space RelativeTo { set { relativeTo = value; } get { return relativeTo; } } [SerializeField] private Space relativeTo;
		return;
	}
}
// UnityEngine.Space CW.Common.CwRotate::get_RelativeTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwRotate_get_RelativeTo_m353E553EC1A4419EEF8C419E0E4D5C70D2B6CBCA (CwRotate_t34CF440B91575AACCDFD750683F5847253538181 * __this, const RuntimeMethod* method)
{
	{
		// public Space RelativeTo { set { relativeTo = value; } get { return relativeTo; } } [SerializeField] private Space relativeTo;
		int32_t L_0 = __this->get_relativeTo_5();
		return L_0;
	}
}
// System.Void CW.Common.CwRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwRotate_Update_mD5BB621FA514E78007DC18E18825BF13C054187B (CwRotate_t34CF440B91575AACCDFD750683F5847253538181 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(angularVelocity * Time.deltaTime, relativeTo);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_angularVelocity_4();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_relativeTo_5();
		NullCheck(L_0);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(L_0, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CW.Common.CwRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwRotate__ctor_m7A5F5E966A1B41A3EBE6654153AB609E487DD668 (CwRotate_t34CF440B91575AACCDFD750683F5847253538181 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 AngularVelocity { set { angularVelocity = value; } get { return angularVelocity; } } [SerializeField] private Vector3 angularVelocity = Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		__this->set_angularVelocity_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwSeedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwSeedAttribute__ctor_m3F455EF881050AC02FF8789D8727651C2B5617FD (CwSeedAttribute_t9F800A51472978B4BF286BE5131410B193522713 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwShaderBundle::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwShaderBundle_set_Title_m165C1E5AAB9194DFBA74602A8413129F92B40B60 (CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Title { set  { title = value; } get { return title; } } [SerializeField] private string title;
		String_t* L_0 = ___value0;
		__this->set_title_4(L_0);
		// public string Title { set  { title = value; } get { return title; } } [SerializeField] private string title;
		return;
	}
}
// System.String CW.Common.CwShaderBundle::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CwShaderBundle_get_Title_m7F86422EA6B7B3B08408EF0BFD9E061420274D3C (CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9 * __this, const RuntimeMethod* method)
{
	{
		// public string Title { set  { title = value; } get { return title; } } [SerializeField] private string title;
		String_t* L_0 = __this->get_title_4();
		return L_0;
	}
}
// System.Void CW.Common.CwShaderBundle::set_Target(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwShaderBundle_set_Target_m85407B1212189191C41C4767E4C488AA7FA6E2D3 (CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9 * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method)
{
	{
		// public Shader Target { set  { target = value; } get { return target; } } [SerializeField] private Shader target;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___value0;
		__this->set_target_5(L_0);
		// public Shader Target { set  { target = value; } get { return target; } } [SerializeField] private Shader target;
		return;
	}
}
// UnityEngine.Shader CW.Common.CwShaderBundle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * CwShaderBundle_get_Target_mDCAE52A5CC5321744B9DD96DB24C2E831E8A1500 (CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9 * __this, const RuntimeMethod* method)
{
	{
		// public Shader Target { set  { target = value; } get { return target; } } [SerializeField] private Shader target;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_target_5();
		return L_0;
	}
}
// System.Void CW.Common.CwShaderBundle::set_VariantHash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwShaderBundle_set_VariantHash_m3D85E10447054367B026F722D225AB0958929133 (CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int VariantHash { set  { variantHash = value; } get { return variantHash; } } [SerializeField] private int variantHash;
		int32_t L_0 = ___value0;
		__this->set_variantHash_6(L_0);
		// public int VariantHash { set  { variantHash = value; } get { return variantHash; } } [SerializeField] private int variantHash;
		return;
	}
}
// System.Int32 CW.Common.CwShaderBundle::get_VariantHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwShaderBundle_get_VariantHash_m4BD4444F664F35586B8FDD740525D85C4E9FF618 (CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9 * __this, const RuntimeMethod* method)
{
	{
		// public int VariantHash { set  { variantHash = value; } get { return variantHash; } } [SerializeField] private int variantHash;
		int32_t L_0 = __this->get_variantHash_6();
		return L_0;
	}
}
// System.Void CW.Common.CwShaderBundle::set_ProjectHash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwShaderBundle_set_ProjectHash_m62A7692D80869600A50430C489857AEF45F27958 (CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ProjectHash { set  { projectHash = value; } get { return projectHash; } } [SerializeField] private int projectHash;
		int32_t L_0 = ___value0;
		__this->set_projectHash_7(L_0);
		// public int ProjectHash { set  { projectHash = value; } get { return projectHash; } } [SerializeField] private int projectHash;
		return;
	}
}
// System.Int32 CW.Common.CwShaderBundle::get_ProjectHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwShaderBundle_get_ProjectHash_m7B0C66E8651A8173C4A959A397FBFF85D6ECF08F (CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9 * __this, const RuntimeMethod* method)
{
	{
		// public int ProjectHash { set  { projectHash = value; } get { return projectHash; } } [SerializeField] private int projectHash;
		int32_t L_0 = __this->get_projectHash_7();
		return L_0;
	}
}
// System.Collections.Generic.List`1<CW.Common.CwShaderBundle/ShaderVariant> CW.Common.CwShaderBundle::get_Variants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * CwShaderBundle_get_Variants_m88CDAB5B33067DCE40FB7F36597CD7CB0F407E02 (CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m066F767F4F8D483FA602C86BB904F1DB1E429868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ShaderVariant> Variants { get { if (variants == null) variants = new List<ShaderVariant>(); return variants; } } [SerializeField] private List<ShaderVariant> variants;
		List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * L_0 = __this->get_variants_8();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public List<ShaderVariant> Variants { get { if (variants == null) variants = new List<ShaderVariant>(); return variants; } } [SerializeField] private List<ShaderVariant> variants;
		List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * L_1 = (List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 *)il2cpp_codegen_object_new(List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248_il2cpp_TypeInfo_var);
		List_1__ctor_m066F767F4F8D483FA602C86BB904F1DB1E429868(L_1, /*hidden argument*/List_1__ctor_m066F767F4F8D483FA602C86BB904F1DB1E429868_RuntimeMethod_var);
		__this->set_variants_8(L_1);
	}

IL_0013:
	{
		// public List<ShaderVariant> Variants { get { if (variants == null) variants = new List<ShaderVariant>(); return variants; } } [SerializeField] private List<ShaderVariant> variants;
		List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * L_2 = __this->get_variants_8();
		return L_2;
	}
}
// System.Boolean CW.Common.CwShaderBundle::get_Dirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwShaderBundle_get_Dirty_m05B63BEC742E46C4B3C55BDBA8A315F3B1F52D5E (CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m84A5DAB222193F19C8E620E93C06AC279D9FA17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6AF512E04EA0E019FE56D468FEAF4CABBBB397A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4FD523554758BD1E360641A9A48C7EE5641A7B29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFAA1DC20EE261247AEEF3B77E2BE2672DFE87290_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (variants != null)
		List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * L_0 = __this->get_variants_8();
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// foreach (var variant in variants)
		List_1_tED6060A5BD5699178EB1412AE9EAC8163123E248 * L_1 = __this->get_variants_8();
		NullCheck(L_1);
		Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA  L_2;
		L_2 = List_1_GetEnumerator_mFAA1DC20EE261247AEEF3B77E2BE2672DFE87290(L_1, /*hidden argument*/List_1_GetEnumerator_mFAA1DC20EE261247AEEF3B77E2BE2672DFE87290_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0016:
		{
			// foreach (var variant in variants)
			ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB * L_3;
			L_3 = Enumerator_get_Current_m4FD523554758BD1E360641A9A48C7EE5641A7B29_inline((Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA *)(&V_0), /*hidden argument*/Enumerator_get_Current_m4FD523554758BD1E360641A9A48C7EE5641A7B29_RuntimeMethod_var);
			// if (variant.Dirty == true)
			NullCheck(L_3);
			bool L_4 = L_3->get_Dirty_3();
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0024:
		{
			// return true;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_0033);
		}

IL_0028:
		{
			// foreach (var variant in variants)
			bool L_5;
			L_5 = Enumerator_MoveNext_m6AF512E04EA0E019FE56D468FEAF4CABBBB397A2((Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m6AF512E04EA0E019FE56D468FEAF4CABBBB397A2_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0016;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m84A5DAB222193F19C8E620E93C06AC279D9FA17B((Enumerator_t6617D0F3D661CAE589366107D87403706CFC4BBA *)(&V_0), /*hidden argument*/Enumerator_Dispose_m84A5DAB222193F19C8E620E93C06AC279D9FA17B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// return false;
		return (bool)0;
	}

IL_0043:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Int32 CW.Common.CwShaderBundle::GetProjectHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwShaderBundle_GetProjectHash_mE0FDA65DA351301B09E6D313C337DC34F1F26E2D (const RuntimeMethod* method)
{
	{
		// return SystemInfo.deviceUniqueIdentifier.GetHashCode() ^ Application.dataPath.GetHashCode();
		String_t* L_0;
		L_0 = SystemInfo_get_deviceUniqueIdentifier_m12CA3C3D8C75E44FBFA73E2E34D9E743AF732B1E(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		String_t* L_2;
		L_2 = Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
// CW.Common.CwShaderBundle/Pipeline CW.Common.CwShaderBundle::DetectProjectPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwShaderBundle_DetectProjectPipeline_m4499C17B2B448CE2587FC0C321A7DC0089456BCE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51CBDF1AF6B79F813F7DD92FE05A6534E5F9A75F);
		s_Il2CppMethodInitialized = true;
	}
	RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF * V_0 = NULL;
	{
		// var crp = UnityEngine.Rendering.GraphicsSettings.currentRenderPipeline;
		RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF * L_0;
		L_0 = GraphicsSettings_get_currentRenderPipeline_mDEBD1CD71B0917F918D9860C9351943A9677ADCA(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (crp != null)
		RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// var title = crp.GetType().ToString();
		RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		// if (title.Contains("HighDefinition") == true)
		NullCheck(L_5);
		bool L_6;
		L_6 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_5, _stringLiteral51CBDF1AF6B79F813F7DD92FE05A6534E5F9A75F, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return Pipeline.HDRP2020;
		return (int32_t)(5);
	}

IL_0028:
	{
		// return Pipeline.URP2020;
		return (int32_t)(2);
	}

IL_002a:
	{
		// return Pipeline.Standard;
		return (int32_t)(0);
	}
}
// System.Boolean CW.Common.CwShaderBundle::IsStandard(CW.Common.CwShaderBundle/Pipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwShaderBundle_IsStandard_mBBB6EF827FA60A9455D57B1023161D04CD6858A2 (int32_t ___pipe0, const RuntimeMethod* method)
{
	{
		// return pipe == Pipeline.Standard;
		int32_t L_0 = ___pipe0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CW.Common.CwShaderBundle::IsScriptable(CW.Common.CwShaderBundle/Pipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwShaderBundle_IsScriptable_m00DCFD8D5378C0E2093EA039CB19C0C402A595C9 (int32_t ___pipe0, const RuntimeMethod* method)
{
	{
		// return IsURP(pipe) || IsHDRP(pipe);
		int32_t L_0 = ___pipe0;
		bool L_1;
		L_1 = CwShaderBundle_IsURP_mB55695B59F7E8B4224FA4F47208463152F028A72(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___pipe0;
		bool L_3;
		L_3 = CwShaderBundle_IsHDRP_m8EC8D4BB8BE1948B43288FAAF3A44260CCF16CF6(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Boolean CW.Common.CwShaderBundle::IsURP(CW.Common.CwShaderBundle/Pipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwShaderBundle_IsURP_mB55695B59F7E8B4224FA4F47208463152F028A72 (int32_t ___pipe0, const RuntimeMethod* method)
{
	{
		// return pipe == Pipeline.URP2019 || pipe == Pipeline.URP2020 || pipe == Pipeline.URP2021;
		int32_t L_0 = ___pipe0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___pipe0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___pipe0;
		return (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
	}

IL_000d:
	{
		return (bool)1;
	}
}
// System.Boolean CW.Common.CwShaderBundle::IsHDRP(CW.Common.CwShaderBundle/Pipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwShaderBundle_IsHDRP_m8EC8D4BB8BE1948B43288FAAF3A44260CCF16CF6 (int32_t ___pipe0, const RuntimeMethod* method)
{
	{
		// return pipe == Pipeline.HDRP2019 || pipe == Pipeline.HDRP2020 || pipe == Pipeline.HDRP2021;
		int32_t L_0 = ___pipe0;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___pipe0;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___pipe0;
		return (bool)((((int32_t)L_2) == ((int32_t)6))? 1 : 0);
	}

IL_000d:
	{
		return (bool)1;
	}
}
// System.Void CW.Common.CwShaderBundle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwShaderBundle__ctor_m218E842C947373A02D735A5D6F5C7915BB4B7F08 (CwShaderBundle_t88CBC2D3C811A646542228B3C180B56EE2D791D9 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwHelper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA924486D2F735AF1BE76959A57BCF5B3A63A4707 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * L_0 = (U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 *)il2cpp_codegen_object_new(U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3D833034BB724B5CDDB6C3EC41C8687BD9E2E27A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void CW.Common.CwHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3D833034BB724B5CDDB6C3EC41C8687BD9E2E27A (U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CW.Common.CwHelper/<>c::<.cctor>b__11_0(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__11_0_mCB0B677DFFB2E4CDBCDEED62074E09DF57D20356 (U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnCameraPreRender != null) OnCameraPreRender(camera);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPreRender_3();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// if (OnCameraPreRender != null) OnCameraPreRender(camera);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPreRender_3();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera0;
		NullCheck(L_1);
		Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136(L_1, L_2, /*hidden argument*/Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
	}

IL_0012:
	{
		// };
		return;
	}
}
// System.Void CW.Common.CwHelper/<>c::<.cctor>b__11_1(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__11_1_m0E6B50D0ACA6FB54EBFB1C0C1AA8C081925D8228 (U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnCameraPostRender != null) OnCameraPostRender(camera);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPostRender_4();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// if (OnCameraPostRender != null) OnCameraPostRender(camera);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPostRender_4();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera0;
		NullCheck(L_1);
		Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136(L_1, L_2, /*hidden argument*/Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
	}

IL_0012:
	{
		// };
		return;
	}
}
// System.Void CW.Common.CwHelper/<>c::<.cctor>b__11_2(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__11_2_mFEC634CA8AB11A28ED1E888C197B38AE180DFCCC (U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * __this, ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___context0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnCameraPreRender != null) OnCameraPreRender(camera);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPreRender_3();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// if (OnCameraPreRender != null) OnCameraPreRender(camera);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPreRender_3();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera1;
		NullCheck(L_1);
		Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136(L_1, L_2, /*hidden argument*/Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
	}

IL_0012:
	{
		// };
		return;
	}
}
// System.Void CW.Common.CwHelper/<>c::<.cctor>b__11_3(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__11_3_mBEEA09295429CE5332EC18217BA2E481981C8867 (U3CU3Ec_t78E37AE2DF572F942328B1500449E2AC478E7902 * __this, ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___context0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnCameraPostRender != null) OnCameraPostRender(camera);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPostRender_4();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// if (OnCameraPostRender != null) OnCameraPostRender(camera);
		IL2CPP_RUNTIME_CLASS_INIT(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = ((CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_StaticFields*)il2cpp_codegen_static_fields_for(CwHelper_t2A5032E9E112EFAD162835CE479EE3DE7234956C_il2cpp_TypeInfo_var))->get_OnCameraPostRender_4();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera1;
		NullCheck(L_1);
		Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136(L_1, L_2, /*hidden argument*/Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
	}

IL_0012:
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: CW.Common.CwInputManager/Axis
IL2CPP_EXTERN_C void Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshal_pinvoke(const Axis_t79A91070CF459AC48E341B14B92B90DE11419A91& unmarshaled, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshaled_pinvoke& marshaled)
{
	marshaled.___FingerCount_0 = unmarshaled.get_FingerCount_0();
	marshaled.___FingerInvert_1 = static_cast<int32_t>(unmarshaled.get_FingerInvert_1());
	marshaled.___FingerGesture_2 = unmarshaled.get_FingerGesture_2();
	marshaled.___FingerSensitivity_3 = unmarshaled.get_FingerSensitivity_3();
	marshaled.___KeyNegative_4 = unmarshaled.get_KeyNegative_4();
	marshaled.___KeyPositive_5 = unmarshaled.get_KeyPositive_5();
	marshaled.___KeyNegativeAlt_6 = unmarshaled.get_KeyNegativeAlt_6();
	marshaled.___KeyPositiveAlt_7 = unmarshaled.get_KeyPositiveAlt_7();
	marshaled.___KeySensitivity_8 = unmarshaled.get_KeySensitivity_8();
}
IL2CPP_EXTERN_C void Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshal_pinvoke_back(const Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshaled_pinvoke& marshaled, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91& unmarshaled)
{
	int32_t unmarshaled_FingerCount_temp_0 = 0;
	unmarshaled_FingerCount_temp_0 = marshaled.___FingerCount_0;
	unmarshaled.set_FingerCount_0(unmarshaled_FingerCount_temp_0);
	bool unmarshaled_FingerInvert_temp_1 = false;
	unmarshaled_FingerInvert_temp_1 = static_cast<bool>(marshaled.___FingerInvert_1);
	unmarshaled.set_FingerInvert_1(unmarshaled_FingerInvert_temp_1);
	int32_t unmarshaled_FingerGesture_temp_2 = 0;
	unmarshaled_FingerGesture_temp_2 = marshaled.___FingerGesture_2;
	unmarshaled.set_FingerGesture_2(unmarshaled_FingerGesture_temp_2);
	float unmarshaled_FingerSensitivity_temp_3 = 0.0f;
	unmarshaled_FingerSensitivity_temp_3 = marshaled.___FingerSensitivity_3;
	unmarshaled.set_FingerSensitivity_3(unmarshaled_FingerSensitivity_temp_3);
	int32_t unmarshaled_KeyNegative_temp_4 = 0;
	unmarshaled_KeyNegative_temp_4 = marshaled.___KeyNegative_4;
	unmarshaled.set_KeyNegative_4(unmarshaled_KeyNegative_temp_4);
	int32_t unmarshaled_KeyPositive_temp_5 = 0;
	unmarshaled_KeyPositive_temp_5 = marshaled.___KeyPositive_5;
	unmarshaled.set_KeyPositive_5(unmarshaled_KeyPositive_temp_5);
	int32_t unmarshaled_KeyNegativeAlt_temp_6 = 0;
	unmarshaled_KeyNegativeAlt_temp_6 = marshaled.___KeyNegativeAlt_6;
	unmarshaled.set_KeyNegativeAlt_6(unmarshaled_KeyNegativeAlt_temp_6);
	int32_t unmarshaled_KeyPositiveAlt_temp_7 = 0;
	unmarshaled_KeyPositiveAlt_temp_7 = marshaled.___KeyPositiveAlt_7;
	unmarshaled.set_KeyPositiveAlt_7(unmarshaled_KeyPositiveAlt_temp_7);
	float unmarshaled_KeySensitivity_temp_8 = 0.0f;
	unmarshaled_KeySensitivity_temp_8 = marshaled.___KeySensitivity_8;
	unmarshaled.set_KeySensitivity_8(unmarshaled_KeySensitivity_temp_8);
}
// Conversion method for clean up from marshalling of: CW.Common.CwInputManager/Axis
IL2CPP_EXTERN_C void Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshal_pinvoke_cleanup(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CW.Common.CwInputManager/Axis
IL2CPP_EXTERN_C void Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshal_com(const Axis_t79A91070CF459AC48E341B14B92B90DE11419A91& unmarshaled, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshaled_com& marshaled)
{
	marshaled.___FingerCount_0 = unmarshaled.get_FingerCount_0();
	marshaled.___FingerInvert_1 = static_cast<int32_t>(unmarshaled.get_FingerInvert_1());
	marshaled.___FingerGesture_2 = unmarshaled.get_FingerGesture_2();
	marshaled.___FingerSensitivity_3 = unmarshaled.get_FingerSensitivity_3();
	marshaled.___KeyNegative_4 = unmarshaled.get_KeyNegative_4();
	marshaled.___KeyPositive_5 = unmarshaled.get_KeyPositive_5();
	marshaled.___KeyNegativeAlt_6 = unmarshaled.get_KeyNegativeAlt_6();
	marshaled.___KeyPositiveAlt_7 = unmarshaled.get_KeyPositiveAlt_7();
	marshaled.___KeySensitivity_8 = unmarshaled.get_KeySensitivity_8();
}
IL2CPP_EXTERN_C void Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshal_com_back(const Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshaled_com& marshaled, Axis_t79A91070CF459AC48E341B14B92B90DE11419A91& unmarshaled)
{
	int32_t unmarshaled_FingerCount_temp_0 = 0;
	unmarshaled_FingerCount_temp_0 = marshaled.___FingerCount_0;
	unmarshaled.set_FingerCount_0(unmarshaled_FingerCount_temp_0);
	bool unmarshaled_FingerInvert_temp_1 = false;
	unmarshaled_FingerInvert_temp_1 = static_cast<bool>(marshaled.___FingerInvert_1);
	unmarshaled.set_FingerInvert_1(unmarshaled_FingerInvert_temp_1);
	int32_t unmarshaled_FingerGesture_temp_2 = 0;
	unmarshaled_FingerGesture_temp_2 = marshaled.___FingerGesture_2;
	unmarshaled.set_FingerGesture_2(unmarshaled_FingerGesture_temp_2);
	float unmarshaled_FingerSensitivity_temp_3 = 0.0f;
	unmarshaled_FingerSensitivity_temp_3 = marshaled.___FingerSensitivity_3;
	unmarshaled.set_FingerSensitivity_3(unmarshaled_FingerSensitivity_temp_3);
	int32_t unmarshaled_KeyNegative_temp_4 = 0;
	unmarshaled_KeyNegative_temp_4 = marshaled.___KeyNegative_4;
	unmarshaled.set_KeyNegative_4(unmarshaled_KeyNegative_temp_4);
	int32_t unmarshaled_KeyPositive_temp_5 = 0;
	unmarshaled_KeyPositive_temp_5 = marshaled.___KeyPositive_5;
	unmarshaled.set_KeyPositive_5(unmarshaled_KeyPositive_temp_5);
	int32_t unmarshaled_KeyNegativeAlt_temp_6 = 0;
	unmarshaled_KeyNegativeAlt_temp_6 = marshaled.___KeyNegativeAlt_6;
	unmarshaled.set_KeyNegativeAlt_6(unmarshaled_KeyNegativeAlt_temp_6);
	int32_t unmarshaled_KeyPositiveAlt_temp_7 = 0;
	unmarshaled_KeyPositiveAlt_temp_7 = marshaled.___KeyPositiveAlt_7;
	unmarshaled.set_KeyPositiveAlt_7(unmarshaled_KeyPositiveAlt_temp_7);
	float unmarshaled_KeySensitivity_temp_8 = 0.0f;
	unmarshaled_KeySensitivity_temp_8 = marshaled.___KeySensitivity_8;
	unmarshaled.set_KeySensitivity_8(unmarshaled_KeySensitivity_temp_8);
}
// Conversion method for clean up from marshalling of: CW.Common.CwInputManager/Axis
IL2CPP_EXTERN_C void Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshal_com_cleanup(Axis_t79A91070CF459AC48E341B14B92B90DE11419A91_marshaled_com& marshaled)
{
}
// System.Void CW.Common.CwInputManager/Axis::.ctor(System.Int32,System.Boolean,CW.Common.CwInputManager/AxisGesture,System.Single,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB (Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * __this, int32_t ___fCount0, bool ___fInvert1, int32_t ___fGesture2, float ___fSensitivty3, int32_t ___kNegative4, int32_t ___kPositive5, int32_t ___kNegativeAlt6, int32_t ___kPositiveAlt7, float ___kSensitivity8, const RuntimeMethod* method)
{
	{
		// FingerCount       = fCount;
		int32_t L_0 = ___fCount0;
		__this->set_FingerCount_0(L_0);
		// FingerInvert      = fInvert;
		bool L_1 = ___fInvert1;
		__this->set_FingerInvert_1(L_1);
		// FingerGesture     = fGesture;
		int32_t L_2 = ___fGesture2;
		__this->set_FingerGesture_2(L_2);
		// FingerSensitivity = fSensitivty;
		float L_3 = ___fSensitivty3;
		__this->set_FingerSensitivity_3(L_3);
		// KeyNegative       = kNegative;
		int32_t L_4 = ___kNegative4;
		__this->set_KeyNegative_4(L_4);
		// KeyPositive       = kPositive;
		int32_t L_5 = ___kPositive5;
		__this->set_KeyPositive_5(L_5);
		// KeyNegativeAlt    = kNegativeAlt;
		int32_t L_6 = ___kNegativeAlt6;
		__this->set_KeyNegativeAlt_6(L_6);
		// KeyPositiveAlt    = kPositiveAlt;
		int32_t L_7 = ___kPositiveAlt7;
		__this->set_KeyPositiveAlt_7(L_7);
		// KeySensitivity    = kSensitivity;
		float L_8 = ___kSensitivity8;
		__this->set_KeySensitivity_8(L_8);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB_AdjustorThunk (RuntimeObject * __this, int32_t ___fCount0, bool ___fInvert1, int32_t ___fGesture2, float ___fSensitivty3, int32_t ___kNegative4, int32_t ___kPositive5, int32_t ___kNegativeAlt6, int32_t ___kPositiveAlt7, float ___kSensitivity8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * _thisAdjusted = reinterpret_cast<Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 *>(__this + _offset);
	Axis__ctor_m5185D9242A1B90071DF78C7BDF5C9D11067D59EB(_thisAdjusted, ___fCount0, ___fInvert1, ___fGesture2, ___fSensitivty3, ___kNegative4, ___kPositive5, ___kNegativeAlt6, ___kPositiveAlt7, ___kSensitivity8, method);
}
// System.Single CW.Common.CwInputManager/Axis::GetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C (Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * __this, float ___delta0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B6D3CA49A5B2FBFCD9190085DA9D19105AD3940_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	{
		// var value   = 0.0f;
		V_0 = (0.0f);
		// var fingers = GetFingers(true, true);
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_0;
		L_0 = CwInputManager_GetFingers_mB6B736369E6D946BA7B187338E96CE3FEE56A5CF((bool)1, (bool)1, /*hidden argument*/NULL);
		V_1 = L_0;
		// var scale   = 1.0f;
		V_2 = (1.0f);
		// value -= CwInput.GetKeyIsHeld(KeyNegative) == true ? KeySensitivity * delta : 0.0f;
		float L_1 = V_0;
		int32_t L_2 = __this->get_KeyNegative_4();
		bool L_3;
		L_3 = CwInput_GetKeyIsHeld_m3F730B19A5A12381D7C1438FA71CBBF10B9ABA40(L_2, /*hidden argument*/NULL);
		G_B1_0 = L_1;
		if (L_3)
		{
			G_B2_0 = L_1;
			goto IL_0029;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0029:
	{
		float L_4 = __this->get_KeySensitivity_8();
		float L_5 = ___delta0;
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5));
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		V_0 = ((float)il2cpp_codegen_subtract((float)G_B3_1, (float)G_B3_0));
		// value += CwInput.GetKeyIsHeld(KeyPositive) == true ? KeySensitivity * delta : 0.0f;
		float L_6 = V_0;
		int32_t L_7 = __this->get_KeyPositive_5();
		bool L_8;
		L_8 = CwInput_GetKeyIsHeld_m3F730B19A5A12381D7C1438FA71CBBF10B9ABA40(L_7, /*hidden argument*/NULL);
		G_B4_0 = L_6;
		if (L_8)
		{
			G_B5_0 = L_6;
			goto IL_0048;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0050;
	}

IL_0048:
	{
		float L_9 = __this->get_KeySensitivity_8();
		float L_10 = ___delta0;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
		G_B6_1 = G_B5_0;
	}

IL_0050:
	{
		V_0 = ((float)il2cpp_codegen_add((float)G_B6_1, (float)G_B6_0));
		// value -= CwInput.GetKeyIsHeld(KeyNegativeAlt) == true ? KeySensitivity * delta : 0.0f;
		float L_11 = V_0;
		int32_t L_12 = __this->get_KeyNegativeAlt_6();
		bool L_13;
		L_13 = CwInput_GetKeyIsHeld_m3F730B19A5A12381D7C1438FA71CBBF10B9ABA40(L_12, /*hidden argument*/NULL);
		G_B7_0 = L_11;
		if (L_13)
		{
			G_B8_0 = L_11;
			goto IL_0067;
		}
	}
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B7_0;
		goto IL_006f;
	}

IL_0067:
	{
		float L_14 = __this->get_KeySensitivity_8();
		float L_15 = ___delta0;
		G_B9_0 = ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15));
		G_B9_1 = G_B8_0;
	}

IL_006f:
	{
		V_0 = ((float)il2cpp_codegen_subtract((float)G_B9_1, (float)G_B9_0));
		// value += CwInput.GetKeyIsHeld(KeyPositiveAlt) == true ? KeySensitivity * delta : 0.0f;
		float L_16 = V_0;
		int32_t L_17 = __this->get_KeyPositiveAlt_7();
		bool L_18;
		L_18 = CwInput_GetKeyIsHeld_m3F730B19A5A12381D7C1438FA71CBBF10B9ABA40(L_17, /*hidden argument*/NULL);
		G_B10_0 = L_16;
		if (L_18)
		{
			G_B11_0 = L_16;
			goto IL_0086;
		}
	}
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B10_0;
		goto IL_008e;
	}

IL_0086:
	{
		float L_19 = __this->get_KeySensitivity_8();
		float L_20 = ___delta0;
		G_B12_0 = ((float)il2cpp_codegen_multiply((float)L_19, (float)L_20));
		G_B12_1 = G_B11_0;
	}

IL_008e:
	{
		V_0 = ((float)il2cpp_codegen_add((float)G_B12_1, (float)G_B12_0));
		// if (FingerCount > 0 && fingers.Count == FingerCount)
		int32_t L_21 = __this->get_FingerCount_0();
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0165;
		}
	}
	{
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_inline(L_22, /*hidden argument*/List_1_get_Count_m3C05112958D4E78AC1EF82691BDA49DD2030212D_RuntimeMethod_var);
		int32_t L_24 = __this->get_FingerCount_0();
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0165;
		}
	}
	{
		// if (FingerInvert == true && fingers[0].Index >= 0)
		bool L_25 = __this->get_FingerInvert_1();
		if (!L_25)
		{
			goto IL_00ca;
		}
	}
	{
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_26 = V_1;
		NullCheck(L_26);
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_27;
		L_27 = List_1_get_Item_m8B6D3CA49A5B2FBFCD9190085DA9D19105AD3940_inline(L_26, 0, /*hidden argument*/List_1_get_Item_m8B6D3CA49A5B2FBFCD9190085DA9D19105AD3940_RuntimeMethod_var);
		NullCheck(L_27);
		int32_t L_28 = L_27->get_Index_0();
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		// scale = -1.0f;
		V_2 = (-1.0f);
	}

IL_00ca:
	{
		// switch (FingerGesture)
		int32_t L_29 = __this->get_FingerGesture_2();
		V_3 = L_29;
		int32_t L_30 = V_3;
		switch (L_30)
		{
			case 0:
			{
				goto IL_00ed;
			}
			case 1:
			{
				goto IL_0106;
			}
			case 2:
			{
				goto IL_011f;
			}
			case 3:
			{
				goto IL_0131;
			}
			case 4:
			{
				goto IL_014c;
			}
		}
	}
	{
		goto IL_0165;
	}

IL_00ed:
	{
		// case AxisGesture.HorizontalDrag: value += GetAverageDeltaScaled(fingers).x * FingerSensitivity * scale; break;
		float L_31 = V_0;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = CwInputManager_GetAverageDeltaScaled_m15C33507725EB67A0BC38D1C2478DFD8801F8E17(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_0();
		float L_35 = __this->get_FingerSensitivity_3();
		float L_36 = V_2;
		V_0 = ((float)il2cpp_codegen_add((float)L_31, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)), (float)L_36))));
		// case AxisGesture.HorizontalDrag: value += GetAverageDeltaScaled(fingers).x * FingerSensitivity * scale; break;
		goto IL_0165;
	}

IL_0106:
	{
		// case AxisGesture.VerticalDrag: value += GetAverageDeltaScaled(fingers).y * FingerSensitivity * scale; break;
		float L_37 = V_0;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_38 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = CwInputManager_GetAverageDeltaScaled_m15C33507725EB67A0BC38D1C2478DFD8801F8E17(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_y_1();
		float L_41 = __this->get_FingerSensitivity_3();
		float L_42 = V_2;
		V_0 = ((float)il2cpp_codegen_add((float)L_37, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_40, (float)L_41)), (float)L_42))));
		// case AxisGesture.VerticalDrag: value += GetAverageDeltaScaled(fingers).y * FingerSensitivity * scale; break;
		goto IL_0165;
	}

IL_011f:
	{
		// case AxisGesture.Twist: value += GetAverageTwistRadians(fingers) * FingerSensitivity; break;
		float L_43 = V_0;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_44 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		float L_45;
		L_45 = CwInputManager_GetAverageTwistRadians_m05DEDF9443F2E701CBF1CBB68378F65E635D99D5(L_44, /*hidden argument*/NULL);
		float L_46 = __this->get_FingerSensitivity_3();
		V_0 = ((float)il2cpp_codegen_add((float)L_43, (float)((float)il2cpp_codegen_multiply((float)L_45, (float)L_46))));
		// case AxisGesture.Twist: value += GetAverageTwistRadians(fingers) * FingerSensitivity; break;
		goto IL_0165;
	}

IL_0131:
	{
		// case AxisGesture.HorizontalPull: value += GetAveragePullScaled(fingers).x * FingerSensitivity * delta * scale; break;
		float L_47 = V_0;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_48 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		L_49 = CwInputManager_GetAveragePullScaled_m96B901B599304E891E73BB66F106D69CFD80DA3E(L_48, /*hidden argument*/NULL);
		float L_50 = L_49.get_x_0();
		float L_51 = __this->get_FingerSensitivity_3();
		float L_52 = ___delta0;
		float L_53 = V_2;
		V_0 = ((float)il2cpp_codegen_add((float)L_47, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_50, (float)L_51)), (float)L_52)), (float)L_53))));
		// case AxisGesture.HorizontalPull: value += GetAveragePullScaled(fingers).x * FingerSensitivity * delta * scale; break;
		goto IL_0165;
	}

IL_014c:
	{
		// case AxisGesture.VerticalPull: value += GetAveragePullScaled(fingers).y * FingerSensitivity * delta * scale; break;
		float L_54 = V_0;
		List_1_t63E1B1B732B3F69527CCC7986E54E5F9224D9B86 * L_55 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_56;
		L_56 = CwInputManager_GetAveragePullScaled_m96B901B599304E891E73BB66F106D69CFD80DA3E(L_55, /*hidden argument*/NULL);
		float L_57 = L_56.get_y_1();
		float L_58 = __this->get_FingerSensitivity_3();
		float L_59 = ___delta0;
		float L_60 = V_2;
		V_0 = ((float)il2cpp_codegen_add((float)L_54, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_57, (float)L_58)), (float)L_59)), (float)L_60))));
	}

IL_0165:
	{
		// return value;
		float L_61 = V_0;
		return L_61;
	}
}
IL2CPP_EXTERN_C  float Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C_AdjustorThunk (RuntimeObject * __this, float ___delta0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 * _thisAdjusted = reinterpret_cast<Axis_t79A91070CF459AC48E341B14B92B90DE11419A91 *>(__this + _offset);
	float _returnValue;
	_returnValue = Axis_GetValue_mF00E5C6ED44B031EA73326AC3C8F1E8A51EA288C(_thisAdjusted, ___delta0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single CW.Common.CwInputManager/Finger::get_SmoothScreenPositionDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Finger_get_SmoothScreenPositionDelta_m347F32EDD9C0EF30834B991285820276707AE50F (Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * __this, const RuntimeMethod* method)
{
	{
		// if (Up == false)
		bool L_0 = __this->get_Up_3();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// return Vector2.Distance(ScreenPositionOldOld, ScreenPositionOld);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = __this->get_ScreenPositionOldOld_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = __this->get_ScreenPositionOld_8();
		float L_3;
		L_3 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		// return Vector2.Distance(ScreenPositionOldOld, ScreenPosition);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = __this->get_ScreenPositionOldOld_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = __this->get_ScreenPosition_7();
		float L_6;
		L_6 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 CW.Common.CwInputManager/Finger::GetSmoothScreenPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Finger_GetSmoothScreenPosition_m0498B07102E33B4B34360544E188BF7C1E2C460A (Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * __this, float ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Up == false)
		bool L_0 = __this->get_Up_3();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		// return Hermite(ScreenPositionOldOldOld, ScreenPositionOldOld, ScreenPositionOld, ScreenPosition, t);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = __this->get_ScreenPositionOldOldOld_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = __this->get_ScreenPositionOldOld_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_ScreenPositionOld_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = __this->get_ScreenPosition_7();
		float L_5 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(CwInputManager_t2F04E1DE387980412E29B95E83EBF0D93D21C200_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = CwInputManager_Hermite_m0507F7DED4EB496EDE807D0DA6D3FFEEA9D8A361(L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0027:
	{
		// return Vector2.LerpUnclamped(ScreenPositionOldOld, ScreenPosition, t);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = __this->get_ScreenPositionOldOld_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = __this->get_ScreenPosition_7();
		float L_9 = ___t0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_LerpUnclamped_m144E59E67DEF95116D4736771F862202FF602097_inline(L_7, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void CW.Common.CwInputManager/Finger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Finger__ctor_mA5D2A6FF22CECB566F45C4AD2054BA9EFE121DD7 (Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CW.Common.CwInputManager/Link::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Link_Clear_m8A8B17D0AFB38C2718625F8D8B28C4A7AF01DE5C (Link_tC07AC9804DFBD1138DD4915F223C14F7403F8EE3 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CW.Common.CwInputManager/Link::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Link__ctor_mD4B9B46598C75DAFB64160D443BAD77F90F5765E (Link_tC07AC9804DFBD1138DD4915F223C14F7403F8EE3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: CW.Common.CwInputManager/Trigger
IL2CPP_EXTERN_C void Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshal_pinvoke(const Trigger_t110F4322CEA9CB42A685848CBD224D4294605398& unmarshaled, Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshaled_pinvoke& marshaled)
{
	marshaled.___UseFinger_0 = static_cast<int32_t>(unmarshaled.get_UseFinger_0());
	marshaled.___UseMouse_1 = static_cast<int32_t>(unmarshaled.get_UseMouse_1());
	marshaled.___UseKey_2 = unmarshaled.get_UseKey_2();
}
IL2CPP_EXTERN_C void Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshal_pinvoke_back(const Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshaled_pinvoke& marshaled, Trigger_t110F4322CEA9CB42A685848CBD224D4294605398& unmarshaled)
{
	bool unmarshaled_UseFinger_temp_0 = false;
	unmarshaled_UseFinger_temp_0 = static_cast<bool>(marshaled.___UseFinger_0);
	unmarshaled.set_UseFinger_0(unmarshaled_UseFinger_temp_0);
	bool unmarshaled_UseMouse_temp_1 = false;
	unmarshaled_UseMouse_temp_1 = static_cast<bool>(marshaled.___UseMouse_1);
	unmarshaled.set_UseMouse_1(unmarshaled_UseMouse_temp_1);
	int32_t unmarshaled_UseKey_temp_2 = 0;
	unmarshaled_UseKey_temp_2 = marshaled.___UseKey_2;
	unmarshaled.set_UseKey_2(unmarshaled_UseKey_temp_2);
}
// Conversion method for clean up from marshalling of: CW.Common.CwInputManager/Trigger
IL2CPP_EXTERN_C void Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshal_pinvoke_cleanup(Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CW.Common.CwInputManager/Trigger
IL2CPP_EXTERN_C void Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshal_com(const Trigger_t110F4322CEA9CB42A685848CBD224D4294605398& unmarshaled, Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshaled_com& marshaled)
{
	marshaled.___UseFinger_0 = static_cast<int32_t>(unmarshaled.get_UseFinger_0());
	marshaled.___UseMouse_1 = static_cast<int32_t>(unmarshaled.get_UseMouse_1());
	marshaled.___UseKey_2 = unmarshaled.get_UseKey_2();
}
IL2CPP_EXTERN_C void Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshal_com_back(const Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshaled_com& marshaled, Trigger_t110F4322CEA9CB42A685848CBD224D4294605398& unmarshaled)
{
	bool unmarshaled_UseFinger_temp_0 = false;
	unmarshaled_UseFinger_temp_0 = static_cast<bool>(marshaled.___UseFinger_0);
	unmarshaled.set_UseFinger_0(unmarshaled_UseFinger_temp_0);
	bool unmarshaled_UseMouse_temp_1 = false;
	unmarshaled_UseMouse_temp_1 = static_cast<bool>(marshaled.___UseMouse_1);
	unmarshaled.set_UseMouse_1(unmarshaled_UseMouse_temp_1);
	int32_t unmarshaled_UseKey_temp_2 = 0;
	unmarshaled_UseKey_temp_2 = marshaled.___UseKey_2;
	unmarshaled.set_UseKey_2(unmarshaled_UseKey_temp_2);
}
// Conversion method for clean up from marshalling of: CW.Common.CwInputManager/Trigger
IL2CPP_EXTERN_C void Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshal_com_cleanup(Trigger_t110F4322CEA9CB42A685848CBD224D4294605398_marshaled_com& marshaled)
{
}
// System.Void CW.Common.CwInputManager/Trigger::.ctor(System.Boolean,System.Boolean,UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger__ctor_m29FBFE58CAA2197661060AAF75E5E720E3478C94 (Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * __this, bool ___uFinger0, bool ___uMouse1, int32_t ___uKey2, const RuntimeMethod* method)
{
	{
		// UseFinger = uFinger;
		bool L_0 = ___uFinger0;
		__this->set_UseFinger_0(L_0);
		// UseMouse  = uMouse;
		bool L_1 = ___uMouse1;
		__this->set_UseMouse_1(L_1);
		// UseKey    = uKey;
		int32_t L_2 = ___uKey2;
		__this->set_UseKey_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Trigger__ctor_m29FBFE58CAA2197661060AAF75E5E720E3478C94_AdjustorThunk (RuntimeObject * __this, bool ___uFinger0, bool ___uMouse1, int32_t ___uKey2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * _thisAdjusted = reinterpret_cast<Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 *>(__this + _offset);
	Trigger__ctor_m29FBFE58CAA2197661060AAF75E5E720E3478C94(_thisAdjusted, ___uFinger0, ___uMouse1, ___uKey2, method);
}
// System.Boolean CW.Common.CwInputManager/Trigger::WentDown(CW.Common.CwInputManager/Finger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Trigger_WentDown_mA2543329904D0039627FBCEA76F2C9D9E0B8D5D0 (Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___finger0, const RuntimeMethod* method)
{
	{
		// if (UseFinger == true && finger.Index >= 0 && finger.Down == true)
		bool L_0 = __this->get_UseFinger_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_1 = ___finger0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_Index_0();
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_3 = ___finger0;
		NullCheck(L_3);
		bool L_4 = L_3->get_Down_2();
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// if (UseMouse == true && finger.Index == MOUSE_FINGER_INDEX && finger.Down == true)
		bool L_5 = __this->get_UseMouse_1();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_6 = ___finger0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_Index_0();
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0036;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_8 = ___finger0;
		NullCheck(L_8);
		bool L_9 = L_8->get_Down_2();
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (UseKey != KeyCode.None && finger.Index == HOVER_FINGER_INDEX && CwInput.GetKeyWentDown(UseKey) == true)
		int32_t L_10 = __this->get_UseKey_2();
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_11 = ___finger0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_Index_0();
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-1337)))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_13 = __this->get_UseKey_2();
		bool L_14;
		L_14 = CwInput_GetKeyWentDown_mC2ACF3F2A6A961A3EA35FCD029D8667632B4C1C8(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_005a:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Trigger_WentDown_mA2543329904D0039627FBCEA76F2C9D9E0B8D5D0_AdjustorThunk (RuntimeObject * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___finger0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * _thisAdjusted = reinterpret_cast<Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Trigger_WentDown_mA2543329904D0039627FBCEA76F2C9D9E0B8D5D0(_thisAdjusted, ___finger0, method);
	return _returnValue;
}
// System.Boolean CW.Common.CwInputManager/Trigger::IsDown(CW.Common.CwInputManager/Finger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Trigger_IsDown_m64FF40DF49EC1322FF2F35BDC333C3B344A3B299 (Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___finger0, const RuntimeMethod* method)
{
	{
		// if (UseFinger == true && finger.Index >= 0 && finger.Up == false)
		bool L_0 = __this->get_UseFinger_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_1 = ___finger0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_Index_0();
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_3 = ___finger0;
		NullCheck(L_3);
		bool L_4 = L_3->get_Up_3();
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// if (UseMouse == true && finger.Index == MOUSE_FINGER_INDEX && finger.Up == false)
		bool L_5 = __this->get_UseMouse_1();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_6 = ___finger0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_Index_0();
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0036;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_8 = ___finger0;
		NullCheck(L_8);
		bool L_9 = L_8->get_Up_3();
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (UseKey != KeyCode.None && finger.Index == HOVER_FINGER_INDEX && CwInput.GetKeyWentDown(UseKey) == true)
		int32_t L_10 = __this->get_UseKey_2();
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_11 = ___finger0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_Index_0();
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-1337)))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_13 = __this->get_UseKey_2();
		bool L_14;
		L_14 = CwInput_GetKeyWentDown_mC2ACF3F2A6A961A3EA35FCD029D8667632B4C1C8(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_005a:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Trigger_IsDown_m64FF40DF49EC1322FF2F35BDC333C3B344A3B299_AdjustorThunk (RuntimeObject * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___finger0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * _thisAdjusted = reinterpret_cast<Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Trigger_IsDown_m64FF40DF49EC1322FF2F35BDC333C3B344A3B299(_thisAdjusted, ___finger0, method);
	return _returnValue;
}
// System.Boolean CW.Common.CwInputManager/Trigger::WentUp(CW.Common.CwInputManager/Finger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Trigger_WentUp_m3E7A7EE30E3630D55D4ED91521EA67180EB7F6CE (Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___finger0, bool ___useAnyFinger1, const RuntimeMethod* method)
{
	{
		// if (useAnyFinger == true && finger.Up == true)
		bool L_0 = ___useAnyFinger1;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_1 = ___finger0;
		NullCheck(L_1);
		bool L_2 = L_1->get_Up_3();
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000d:
	{
		// if (UseFinger == true && finger.Index >= 0 && finger.Up == true)
		bool L_3 = __this->get_UseFinger_0();
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_4 = ___finger0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Index_0();
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_6 = ___finger0;
		NullCheck(L_6);
		bool L_7 = L_6->get_Up_3();
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// if (UseMouse == true && finger.Index == MOUSE_FINGER_INDEX && finger.Up == true)
		bool L_8 = __this->get_UseMouse_1();
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_9 = ___finger0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Index_0();
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0043;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_11 = ___finger0;
		NullCheck(L_11);
		bool L_12 = L_11->get_Up_3();
		if (!L_12)
		{
			goto IL_0043;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0043:
	{
		// if (UseKey != KeyCode.None && finger.Index == HOVER_FINGER_INDEX && CwInput.GetKeyWentUp(UseKey) == true)
		int32_t L_13 = __this->get_UseKey_2();
		if (!L_13)
		{
			goto IL_0067;
		}
	}
	{
		Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * L_14 = ___finger0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_Index_0();
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)-1337)))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_16 = __this->get_UseKey_2();
		bool L_17;
		L_17 = CwInput_GetKeyWentUp_mD9BC04BDFFBFE213221F83728187992D83F7F7FF(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0067;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0067:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Trigger_WentUp_m3E7A7EE30E3630D55D4ED91521EA67180EB7F6CE_AdjustorThunk (RuntimeObject * __this, Finger_t34CEF64C0E0E4056604F063B47F76D2F1563F0CE * ___finger0, bool ___useAnyFinger1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 * _thisAdjusted = reinterpret_cast<Trigger_t110F4322CEA9CB42A685848CBD224D4294605398 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Trigger_WentUp_m3E7A7EE30E3630D55D4ED91521EA67180EB7F6CE(_thisAdjusted, ___finger0, ___useAnyFinger1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CW.Common.CwShaderBundle/ShaderVariant::get_HashString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShaderVariant_get_HashString_mEC3ED6C31E26270622421BA7C88382323F3BF8B2 (ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D4198942C13D7ECBA4C8E0C0BFB5C51204A710D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2C868D2A91533BB109F1C341D64973B6E35E98A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "//<HASH>" + Hash + "</HASH>";
		int32_t* L_0 = __this->get_address_of_Hash_2();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral2D4198942C13D7ECBA4C8E0C0BFB5C51204A710D, L_1, _stringLiteralC2C868D2A91533BB109F1C341D64973B6E35E98A, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void CW.Common.CwShaderBundle/ShaderVariant::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderVariant__ctor_m7AC315F915874FA4497056F4A5D22ECDE8BA48C9 (ShaderVariant_tB0B61117D23E9579278B863848CDEE908C8DE2AB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CwDemoButton_set_IsolateTarget_m56237BF26DDDC298C8751D2B45B8D739C6086B01_inline (CwDemoButton_tBB4BA0BAE20F03E39E44F1DD818FE537325972C9 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform IsolateTarget { set { isolateTarget = value; } get { return isolateTarget; } } [SerializeField] private Transform isolateTarget;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_isolateTarget_6(L_0);
		// public Transform IsolateTarget { set { isolateTarget = value; } get { return isolateTarget; } } [SerializeField] private Transform isolateTarget;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_GameObject; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_GameObject_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_LerpUnclamped_m144E59E67DEF95116D4736771F862202FF602097_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_x_0();
		float L_6 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___a0;
		float L_8 = L_7.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___b1;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___a0;
		float L_12 = L_11.get_y_1();
		float L_13 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_14), ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), (float)L_6)))), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)), (float)L_13)))), /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_0035;
	}

IL_0035:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_0;
		return L_15;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* L_2 = (RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D*)L_2, (int32_t)L_3);
		return (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
