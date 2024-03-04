#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// MoreMountains.Tools.MMApplicationQuit
struct MMApplicationQuit_t1562C3681CE995925A461B53FB292C58D56A1636;
// MoreMountains.Tools.MMConeOfVision
struct MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A;
// MoreMountains.Tools.MMConeOfVision2D
struct MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5;
// MoreMountains.Tools.MMDebugController
struct MMDebugController_t18472FDFBCD5C93BE6277E8AA5EDA62D3E83EB41;
// MoreMountains.Tools.MMLayer
struct MMLayer_t2485AF97F3D290558F9AA4C65DB7634FC30B346D;
// MoreMountains.Tools.MMOpenURL
struct MMOpenURL_tC3DDA02DAFB503CAB0BE3FEF5D600523031C5438;
// MoreMountains.Tools.MMPanningTexture
struct MMPanningTexture_t5D8D3857894363337711619730EDC1DA6A9C3E59;
// MoreMountains.Tools.MMSceneRestarter
struct MMSceneRestarter_t9D9387DB86B7243AD7E6C4209FB75F72671AF87D;
// MoreMountains.Tools.MMSceneViewIcon
struct MMSceneViewIcon_t14A3ABD955956259289B23C44018CCFAB0494428;
// MoreMountains.Tools.MMScreenshot
struct MMScreenshot_t7D08F93DCDA47FD2D83BA0FD1E6F3965240CD0F3;
// MoreMountains.Tools.MMTransformRandomizer
struct MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6;
// MoreMountains.Tools.MMTweenDefinitions
struct MMTweenDefinitions_t636AFEECD2CA5B484504EF45CFC6889D4B20CC2D;
// MoreMountains.Tools.MMTweenType
struct MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55
struct U3CMoveRectTransformCoU3Ed__55_tCB76D6CA8AA3A915A913608A20579458B534BC80;
// MoreMountains.Tools.MMTween/<MoveTransformCo>d__56
struct U3CMoveTransformCoU3Ed__56_tA8B03DA1D2BA4315DE052BE8CD27DE37E96D8890;
// MoreMountains.Tools.MMTween/<MoveTransformCo>d__57
struct U3CMoveTransformCoU3Ed__57_t3A3685C472CE855D9E448994B13383E8F5C121C5;
// MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58
struct U3CRotateTransformAroundCoU3Ed__58_tA213CC5ED8CFB4E0C443C34330660D188AC0CDD9;
// MoreMountains.Tools.MMTween/TweenDelegate
struct TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMDebug_t16D053E01A9357DF96396934D8376280E228258C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02CD7E2E61B996F9027F40038E4C23574D2FD091;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral09FBD8AE36A6C03DA4A748EE49F1A75AFF36E79F;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral5900ADDC98B62E67E8FB516C9897FFF6221500FE;
IL2CPP_EXTERN_C String_t* _stringLiteral69C1AD84F726C82B6C16775835016A0974CC767D;
IL2CPP_EXTERN_C String_t* _stringLiteral95B63459BD6B3935B45FBED00C5C8BB2808B9245;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA5874ECA88CAC577A30E613154995AFC2099C20F;
IL2CPP_EXTERN_C String_t* _stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveRectTransformCoU3Ed__55_System_Collections_IEnumerator_Reset_m4AA35FA4DB7EA1B9B68AAE0072EA6DF1F365A3C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveTransformCoU3Ed__56_System_Collections_IEnumerator_Reset_m6CD0737E829804BE216886D9C47BA5009799A979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveTransformCoU3Ed__57_System_Collections_IEnumerator_Reset_m5D2224AC0975945CB136C4C0D9D08538C3557399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRotateTransformAroundCoU3Ed__58_System_Collections_IEnumerator_Reset_m47AD79EA3B292B9718CAB4C19A5D0BB4E31D3654_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// MoreMountains.Tools.MMLayer
struct MMLayer_t2485AF97F3D290558F9AA4C65DB7634FC30B346D  : public RuntimeObject
{
	// System.Int32 MoreMountains.Tools.MMLayer::_layerIndex
	int32_t ____layerIndex_0;
};

// MoreMountains.Tools.MMTweenDefinitions
struct MMTweenDefinitions_t636AFEECD2CA5B484504EF45CFC6889D4B20CC2D  : public RuntimeObject
{
};

// MoreMountains.Tools.MMTweenType
struct MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1  : public RuntimeObject
{
	// MoreMountains.Tools.MMTweenDefinitionTypes MoreMountains.Tools.MMTweenType::MMTweenDefinitionType
	int32_t ___MMTweenDefinitionType_1;
	// MoreMountains.Tools.MMTween/MMTweenCurve MoreMountains.Tools.MMTweenType::MMTweenCurve
	int32_t ___MMTweenCurve_2;
	// UnityEngine.AnimationCurve MoreMountains.Tools.MMTweenType::Curve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___Curve_3;
	// System.Boolean MoreMountains.Tools.MMTweenType::Initialized
	bool ___Initialized_4;
};

struct MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_StaticFields
{
	// MoreMountains.Tools.MMTweenType MoreMountains.Tools.MMTweenType::<DefaultEaseInCubic>k__BackingField
	MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1* ___U3CDefaultEaseInCubicU3Ek__BackingField_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// MoreMountains.Tools.MMTween/<MoveTransformCo>d__57
struct U3CMoveTransformCoU3Ed__57_t3A3685C472CE855D9E448994B13383E8F5C121C5  : public RuntimeObject
{
	// System.Int32 MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::delayDuration
	float ___delayDuration_2;
	// UnityEngine.WaitForSeconds MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::delay
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___delay_3;
	// System.Single MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::duration
	float ___duration_4;
	// System.Boolean MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::updatePosition
	bool ___updatePosition_5;
	// UnityEngine.Transform MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::targetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform_6;
	// UnityEngine.Transform MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::origin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___origin_7;
	// UnityEngine.Transform MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::destination
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___destination_8;
	// MoreMountains.Tools.MMTween/MMTweenCurve MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::curve
	int32_t ___curve_9;
	// System.Boolean MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::updateRotation
	bool ___updateRotation_10;
	// System.Boolean MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::ignoreTimescale
	bool ___ignoreTimescale_11;
	// System.Single MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::<timeLeft>5__2
	float ___U3CtimeLeftU3E5__2_12;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_tDCFDCAB2135227E1A06CB58ADED7CEB677C400A3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tDCFDCAB2135227E1A06CB58ADED7CEB677C400A3__padding[1024];
	};
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tEA0C5CBA779B1D017536F2B0E2AE828CA743048A  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tEA0C5CBA779B1D017536F2B0E2AE828CA743048A_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::EA3CF748EF2EED46C8D386654894EFB4A0ACA29E79789C2D3A4A27B57352CECD
	__StaticArrayInitTypeSizeU3D1024_tDCFDCAB2135227E1A06CB58ADED7CEB677C400A3 ___EA3CF748EF2EED46C8D386654894EFB4A0ACA29E79789C2D3A4A27B57352CECD_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// MoreMountains.Tools.MMConeOfVision/MeshEdgePosition
struct MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB 
{
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision/MeshEdgePosition::PointA
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PointA_0;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision/MeshEdgePosition::PointB
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PointB_1;
};

// MoreMountains.Tools.MMConeOfVision/RaycastData
struct RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D 
{
	// System.Boolean MoreMountains.Tools.MMConeOfVision/RaycastData::Hit
	bool ___Hit_0;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision/RaycastData::Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point_1;
	// System.Single MoreMountains.Tools.MMConeOfVision/RaycastData::Distance
	float ___Distance_2;
	// System.Single MoreMountains.Tools.MMConeOfVision/RaycastData::Angle
	float ___Angle_3;
};
// Native definition for P/Invoke marshalling of MoreMountains.Tools.MMConeOfVision/RaycastData
struct RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshaled_pinvoke
{
	int32_t ___Hit_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point_1;
	float ___Distance_2;
	float ___Angle_3;
};
// Native definition for COM marshalling of MoreMountains.Tools.MMConeOfVision/RaycastData
struct RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshaled_com
{
	int32_t ___Hit_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point_1;
	float ___Distance_2;
	float ___Angle_3;
};

// MoreMountains.Tools.MMConeOfVision2D/MeshEdgePosition
struct MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4 
{
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision2D/MeshEdgePosition::PointA
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PointA_0;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision2D/MeshEdgePosition::PointB
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PointB_1;
};

// MoreMountains.Tools.MMConeOfVision2D/RaycastData
struct RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B 
{
	// System.Boolean MoreMountains.Tools.MMConeOfVision2D/RaycastData::Hit
	bool ___Hit_0;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision2D/RaycastData::Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point_1;
	// System.Single MoreMountains.Tools.MMConeOfVision2D/RaycastData::Distance
	float ___Distance_2;
	// System.Single MoreMountains.Tools.MMConeOfVision2D/RaycastData::Angle
	float ___Angle_3;
};
// Native definition for P/Invoke marshalling of MoreMountains.Tools.MMConeOfVision2D/RaycastData
struct RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshaled_pinvoke
{
	int32_t ___Hit_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point_1;
	float ___Distance_2;
	float ___Angle_3;
};
// Native definition for COM marshalling of MoreMountains.Tools.MMConeOfVision2D/RaycastData
struct RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshaled_com
{
	int32_t ___Hit_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point_1;
	float ___Distance_2;
	float ___Angle_3;
};

// MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55
struct U3CMoveRectTransformCoU3Ed__55_tCB76D6CA8AA3A915A913608A20579458B534BC80  : public RuntimeObject
{
	// System.Int32 MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::delayDuration
	float ___delayDuration_2;
	// UnityEngine.WaitForSeconds MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::delay
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___delay_3;
	// System.Single MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::duration
	float ___duration_4;
	// UnityEngine.RectTransform MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::targetTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___targetTransform_5;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin_6;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::destination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination_7;
	// MoreMountains.Tools.MMTween/MMTweenCurve MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::curve
	int32_t ___curve_8;
	// System.Boolean MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::ignoreTimescale
	bool ___ignoreTimescale_9;
	// System.Single MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::<timeLeft>5__2
	float ___U3CtimeLeftU3E5__2_10;
};

// MoreMountains.Tools.MMTween/<MoveTransformCo>d__56
struct U3CMoveTransformCoU3Ed__56_tA8B03DA1D2BA4315DE052BE8CD27DE37E96D8890  : public RuntimeObject
{
	// System.Int32 MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::delayDuration
	float ___delayDuration_2;
	// UnityEngine.WaitForSeconds MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::delay
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___delay_3;
	// System.Single MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::duration
	float ___duration_4;
	// UnityEngine.Transform MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::targetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform_5;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin_6;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::destination
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destination_7;
	// MoreMountains.Tools.MMTween/MMTweenCurve MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::curve
	int32_t ___curve_8;
	// System.Boolean MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::ignoreTimescale
	bool ___ignoreTimescale_9;
	// System.Single MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::<timeLeft>5__2
	float ___U3CtimeLeftU3E5__2_10;
};

// MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58
struct U3CRotateTransformAroundCoU3Ed__58_tA213CC5ED8CFB4E0C443C34330660D188AC0CDD9  : public RuntimeObject
{
	// System.Int32 MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::delayDuration
	float ___delayDuration_2;
	// UnityEngine.WaitForSeconds MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::delay
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___delay_3;
	// UnityEngine.Transform MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::targetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform_4;
	// System.Single MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::duration
	float ___duration_5;
	// System.Single MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::angle
	float ___angle_6;
	// MoreMountains.Tools.MMTween/MMTweenCurve MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::curve
	int32_t ___curve_7;
	// UnityEngine.Transform MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::center
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___center_8;
	// System.Boolean MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::ignoreTimescale
	bool ___ignoreTimescale_9;
	// UnityEngine.Transform MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::destination
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___destination_10;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::<initialRotationPosition>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CinitialRotationPositionU3E5__2_11;
	// System.Single MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::<timeSpent>5__3
	float ___U3CtimeSpentU3E5__3_12;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// MoreMountains.Tools.MMTween/TweenDelegate
struct TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// MoreMountains.Tools.MMApplicationQuit
struct MMApplicationQuit_t1562C3681CE995925A461B53FB292C58D56A1636  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MoreMountains.Tools.MMApplicationQuit::QuitButton
	bool ___QuitButton_4;
};

// MoreMountains.Tools.MMConeOfVision
struct MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask MoreMountains.Tools.MMConeOfVision::ObstacleMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ObstacleMask_4;
	// System.Single MoreMountains.Tools.MMConeOfVision::VisionRadius
	float ___VisionRadius_5;
	// System.Single MoreMountains.Tools.MMConeOfVision::VisionAngle
	float ___VisionAngle_6;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision::Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Direction_7;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision::EulerAngles
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___EulerAngles_8;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision::Offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Offset_9;
	// System.Boolean MoreMountains.Tools.MMConeOfVision::ShouldScanForTargets
	bool ___ShouldScanForTargets_10;
	// UnityEngine.LayerMask MoreMountains.Tools.MMConeOfVision::TargetMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___TargetMask_11;
	// System.Single MoreMountains.Tools.MMConeOfVision::ScanFrequencyInSeconds
	float ___ScanFrequencyInSeconds_12;
	// System.Collections.Generic.List`1<UnityEngine.Transform> MoreMountains.Tools.MMConeOfVision::VisibleTargets
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___VisibleTargets_13;
	// System.Boolean MoreMountains.Tools.MMConeOfVision::ShouldDrawMesh
	bool ___ShouldDrawMesh_14;
	// System.Single MoreMountains.Tools.MMConeOfVision::MeshDensity
	float ___MeshDensity_15;
	// System.Int32 MoreMountains.Tools.MMConeOfVision::EdgePrecision
	int32_t ___EdgePrecision_16;
	// System.Single MoreMountains.Tools.MMConeOfVision::EdgeThreshold
	float ___EdgeThreshold_17;
	// UnityEngine.MeshFilter MoreMountains.Tools.MMConeOfVision::VisionMeshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___VisionMeshFilter_18;
	// UnityEngine.Mesh MoreMountains.Tools.MMConeOfVision::_visionMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ____visionMesh_19;
	// UnityEngine.Collider[] MoreMountains.Tools.MMConeOfVision::_targetsWithinDistance
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____targetsWithinDistance_20;
	// UnityEngine.Transform MoreMountains.Tools.MMConeOfVision::_target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____target_21;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision::_directionToTarget
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____directionToTarget_22;
	// System.Single MoreMountains.Tools.MMConeOfVision::_distanceToTarget
	float ____distanceToTarget_23;
	// System.Single MoreMountains.Tools.MMConeOfVision::_lastScanTimestamp
	float ____lastScanTimestamp_24;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MoreMountains.Tools.MMConeOfVision::_viewPoints
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____viewPoints_25;
	// MoreMountains.Tools.MMConeOfVision/RaycastData MoreMountains.Tools.MMConeOfVision::_oldViewCast
	RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D ____oldViewCast_26;
	// MoreMountains.Tools.MMConeOfVision/RaycastData MoreMountains.Tools.MMConeOfVision::_viewCast
	RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D ____viewCast_27;
	// UnityEngine.Vector3[] MoreMountains.Tools.MMConeOfVision::_vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____vertices_28;
	// System.Int32[] MoreMountains.Tools.MMConeOfVision::_triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____triangles_29;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision::_minPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____minPoint_30;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision::_maxPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____maxPoint_31;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision::_direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____direction_32;
	// MoreMountains.Tools.MMConeOfVision/RaycastData MoreMountains.Tools.MMConeOfVision::_returnRaycastData
	RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D ____returnRaycastData_33;
	// UnityEngine.RaycastHit MoreMountains.Tools.MMConeOfVision::_raycastAtAngleHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ____raycastAtAngleHit_34;
	// System.Int32 MoreMountains.Tools.MMConeOfVision::_numberOfVerticesLastTime
	int32_t ____numberOfVerticesLastTime_35;
};

// MoreMountains.Tools.MMConeOfVision2D
struct MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask MoreMountains.Tools.MMConeOfVision2D::ObstacleMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ObstacleMask_4;
	// System.Single MoreMountains.Tools.MMConeOfVision2D::VisionRadius
	float ___VisionRadius_5;
	// System.Single MoreMountains.Tools.MMConeOfVision2D::VisionAngle
	float ___VisionAngle_6;
	// System.Single MoreMountains.Tools.MMConeOfVision2D::AngleOffset
	float ___AngleOffset_7;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision2D::Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Direction_8;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision2D::EulerAngles
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___EulerAngles_9;
	// System.Boolean MoreMountains.Tools.MMConeOfVision2D::ShouldScanForTargets
	bool ___ShouldScanForTargets_10;
	// UnityEngine.LayerMask MoreMountains.Tools.MMConeOfVision2D::TargetMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___TargetMask_11;
	// System.Single MoreMountains.Tools.MMConeOfVision2D::ScanFrequencyInSeconds
	float ___ScanFrequencyInSeconds_12;
	// System.Collections.Generic.List`1<UnityEngine.Transform> MoreMountains.Tools.MMConeOfVision2D::VisibleTargets
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___VisibleTargets_13;
	// System.Boolean MoreMountains.Tools.MMConeOfVision2D::ShouldDrawMesh
	bool ___ShouldDrawMesh_14;
	// System.Single MoreMountains.Tools.MMConeOfVision2D::MeshDensity
	float ___MeshDensity_15;
	// System.Int32 MoreMountains.Tools.MMConeOfVision2D::EdgePrecision
	int32_t ___EdgePrecision_16;
	// System.Single MoreMountains.Tools.MMConeOfVision2D::EdgeThreshold
	float ___EdgeThreshold_17;
	// UnityEngine.MeshFilter MoreMountains.Tools.MMConeOfVision2D::VisionMeshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___VisionMeshFilter_18;
	// UnityEngine.Mesh MoreMountains.Tools.MMConeOfVision2D::_visionMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ____visionMesh_19;
	// UnityEngine.Collider2D[] MoreMountains.Tools.MMConeOfVision2D::_targetsWithinDistance
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* ____targetsWithinDistance_20;
	// UnityEngine.Transform MoreMountains.Tools.MMConeOfVision2D::_target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____target_21;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision2D::_directionToTarget
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____directionToTarget_22;
	// System.Single MoreMountains.Tools.MMConeOfVision2D::_distanceToTarget
	float ____distanceToTarget_23;
	// System.Single MoreMountains.Tools.MMConeOfVision2D::_lastScanTimestamp
	float ____lastScanTimestamp_24;
	// UnityEngine.RaycastHit2D MoreMountains.Tools.MMConeOfVision2D::_scanForTargetsHit2D
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ____scanForTargetsHit2D_25;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MoreMountains.Tools.MMConeOfVision2D::_viewPoints
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____viewPoints_26;
	// MoreMountains.Tools.MMConeOfVision2D/RaycastData MoreMountains.Tools.MMConeOfVision2D::_oldViewCast
	RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B ____oldViewCast_27;
	// MoreMountains.Tools.MMConeOfVision2D/RaycastData MoreMountains.Tools.MMConeOfVision2D::_viewCast
	RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B ____viewCast_28;
	// UnityEngine.Vector3[] MoreMountains.Tools.MMConeOfVision2D::_vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____vertices_29;
	// System.Int32[] MoreMountains.Tools.MMConeOfVision2D::_triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____triangles_30;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision2D::_minPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____minPoint_31;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision2D::_maxPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____maxPoint_32;
	// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision2D::_direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____direction_33;
	// MoreMountains.Tools.MMConeOfVision2D/RaycastData MoreMountains.Tools.MMConeOfVision2D::_returnRaycastData
	RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B ____returnRaycastData_34;
	// UnityEngine.RaycastHit2D MoreMountains.Tools.MMConeOfVision2D::_raycastAtAngleHit2D
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ____raycastAtAngleHit2D_35;
	// System.Int32 MoreMountains.Tools.MMConeOfVision2D::_numberOfVerticesLastTime
	int32_t ____numberOfVerticesLastTime_36;
};

// MoreMountains.Tools.MMDebugController
struct MMDebugController_t18472FDFBCD5C93BE6277E8AA5EDA62D3E83EB41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MoreMountains.Tools.MMDebugController::DebugLogsEnabled
	bool ___DebugLogsEnabled_4;
	// System.Boolean MoreMountains.Tools.MMDebugController::DebugDrawEnabled
	bool ___DebugDrawEnabled_5;
};

// MoreMountains.Tools.MMOpenURL
struct MMOpenURL_tC3DDA02DAFB503CAB0BE3FEF5D600523031C5438  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MoreMountains.Tools.MMOpenURL::DestinationURL
	String_t* ___DestinationURL_4;
};

// MoreMountains.Tools.MMPanningTexture
struct MMPanningTexture_t5D8D3857894363337711619730EDC1DA6A9C3E59  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MoreMountains.Tools.MMPanningTexture::TextureShouldPan
	bool ___TextureShouldPan_4;
	// UnityEngine.Vector2 MoreMountains.Tools.MMPanningTexture::Speed
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Speed_5;
	// System.String MoreMountains.Tools.MMPanningTexture::SortingLayerName
	String_t* ___SortingLayerName_6;
	// System.String MoreMountains.Tools.MMPanningTexture::MaterialPropertyName
	String_t* ___MaterialPropertyName_7;
	// System.Int32 MoreMountains.Tools.MMPanningTexture::MaterialIndex
	int32_t ___MaterialIndex_8;
	// UnityEngine.UI.RawImage MoreMountains.Tools.MMPanningTexture::_rawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ____rawImage_9;
	// UnityEngine.Renderer MoreMountains.Tools.MMPanningTexture::_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____renderer_10;
	// UnityEngine.Vector4 MoreMountains.Tools.MMPanningTexture::_position
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____position_11;
	// UnityEngine.Vector4 MoreMountains.Tools.MMPanningTexture::_speed
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____speed_12;
	// UnityEngine.MaterialPropertyBlock MoreMountains.Tools.MMPanningTexture::_propertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ____propertyBlock_13;
};

// MoreMountains.Tools.MMSceneRestarter
struct MMSceneRestarter_t9D9387DB86B7243AD7E6C4209FB75F72671AF87D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MoreMountains.Tools.MMSceneRestarter/RestartModes MoreMountains.Tools.MMSceneRestarter::RestartMode
	int32_t ___RestartMode_4;
	// System.String MoreMountains.Tools.MMSceneRestarter::SceneName
	String_t* ___SceneName_5;
	// UnityEngine.SceneManagement.LoadSceneMode MoreMountains.Tools.MMSceneRestarter::LoadMode
	int32_t ___LoadMode_6;
	// UnityEngine.KeyCode MoreMountains.Tools.MMSceneRestarter::RestarterKeyCode
	int32_t ___RestarterKeyCode_7;
	// System.String MoreMountains.Tools.MMSceneRestarter::_newSceneName
	String_t* ____newSceneName_8;
};

// MoreMountains.Tools.MMSceneViewIcon
struct MMSceneViewIcon_t14A3ABD955956259289B23C44018CCFAB0494428  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MoreMountains.Tools.MMScreenshot
struct MMScreenshot_t7D08F93DCDA47FD2D83BA0FD1E6F3965240CD0F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MoreMountains.Tools.MMScreenshot::FolderName
	String_t* ___FolderName_4;
	// MoreMountains.Tools.MMScreenshot/Methods MoreMountains.Tools.MMScreenshot::Method
	int32_t ___Method_5;
	// UnityEngine.KeyCode MoreMountains.Tools.MMScreenshot::ScreenshotShortcut
	int32_t ___ScreenshotShortcut_6;
	// System.Int32 MoreMountains.Tools.MMScreenshot::GameViewSizeMultiplier
	int32_t ___GameViewSizeMultiplier_7;
	// UnityEngine.Camera MoreMountains.Tools.MMScreenshot::TargetCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___TargetCamera_8;
	// System.Int32 MoreMountains.Tools.MMScreenshot::ResolutionWidth
	int32_t ___ResolutionWidth_9;
	// System.Int32 MoreMountains.Tools.MMScreenshot::ResolutionHeight
	int32_t ___ResolutionHeight_10;
	// System.Boolean MoreMountains.Tools.MMScreenshot::TakeScreenshotButton
	bool ___TakeScreenshotButton_11;
};

// MoreMountains.Tools.MMTransformRandomizer
struct MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MoreMountains.Tools.MMTransformRandomizer::RandomizePosition
	bool ___RandomizePosition_4;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTransformRandomizer::MinRandomPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MinRandomPosition_5;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTransformRandomizer::MaxRandomPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MaxRandomPosition_6;
	// System.Boolean MoreMountains.Tools.MMTransformRandomizer::RandomizeRotation
	bool ___RandomizeRotation_7;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTransformRandomizer::MinRandomRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MinRandomRotation_8;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTransformRandomizer::MaxRandomRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MaxRandomRotation_9;
	// System.Boolean MoreMountains.Tools.MMTransformRandomizer::RandomizeScale
	bool ___RandomizeScale_10;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTransformRandomizer::MinRandomScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MinRandomScale_11;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTransformRandomizer::MaxRandomScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MaxRandomScale_12;
	// System.Boolean MoreMountains.Tools.MMTransformRandomizer::AutoRemoveAfterRandomize
	bool ___AutoRemoveAfterRandomize_13;
	// System.Boolean MoreMountains.Tools.MMTransformRandomizer::RemoveAllColliders
	bool ___RemoveAllColliders_14;
	// MoreMountains.Tools.MMTransformRandomizer/AutoExecutionModes MoreMountains.Tools.MMTransformRandomizer::AutoExecutionMode
	int32_t ___AutoExecutionMode_15;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* m_Items[1];

	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.Vector3>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_gshared (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MoreMountains.Tools.MMTween::Tween(System.Single,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Vector3,MoreMountains.Tools.MMTween/MMTweenCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MMTween_Tween_m9A82F8EF249CE7DD6DCD407F181E8A7C216C3940 (float ___currentTime0, float ___initialTime1, float ___endTime2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue4, int32_t ___curve5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion MoreMountains.Tools.MMTween::Tween(System.Single,System.Single,System.Single,UnityEngine.Quaternion,UnityEngine.Quaternion,MoreMountains.Tools.MMTween/MMTweenCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MMTween_Tween_m4903288DB8C285F496717451A95914C00B4BE2C5 (float ___currentTime0, float ___initialTime1, float ___endTime2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startValue3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___endValue4, int32_t ___curve5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTween::Tween(System.Single,System.Single,System.Single,System.Single,System.Single,MoreMountains.Tools.MMTween/MMTweenCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTween_Tween_mB0075F79061A3843CE3D8E4FA0CBEBA9E154263B (float ___currentTime0, float ___initialTime1, float ___endTime2, float ___startValue3, float ___endValue4, int32_t ___curve5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Quadratic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Quadratic_mAE042F9ED8D50D514F2B6DC327AAD3FFD02C1E49 (float ___t0, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Cubic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Cubic_m3DFE533FFCD6E18194737BCBEDCDD720485C3952 (float ___t0, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Quartic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Quartic_mA4480DE41B4651BA2B22551FEB557E2538D60021 (float ___t0, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Quintic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Quintic_m8F93AA968D9DCE8525552F456E13634001C9681B (float ___t0, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Bounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Bounce_m944B87E433C88C545B995C672072710FABC900E6 (float ___t0, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Sinusoidal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Sinusoidal_m0AA40CF7EA4F92FCFD63D405E3B3CE87867ED4AF (float ___t0, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Overhead(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Overhead_m6CA38C730F628F973FF31FC3512523254EF71513 (float ___t0, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Exponential(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Exponential_m314979F5EDE316AE613B512C827E1B87E273B4E7 (float ___t0, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Elastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Elastic_mC824421A2E700E9B886206C933A99ACF0D58A332 (float ___t0, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Circular(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Circular_m344DDC801B4468D60E6805C33B1E7B1145C7CFC2 (float ___t0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Single MoreMountains.Tools.MMTween::Evaluate(System.Single,MoreMountains.Tools.MMTweenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTween_Evaluate_m585A8FF3CC557C74533738E6E9D8757E70B3D327 (float ___t0, MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1* ___tweenType1, const RuntimeMethod* method) ;
// System.Void MoreMountains.Tools.MMTweenType::.ctor(MoreMountains.Tools.MMTween/MMTweenCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTweenType__ctor_m3BA14E89564159E673924039EB09C3C8469106BF (MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1* __this, int32_t ___newCurve0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void MoreMountains.Tools.MMDebug::SetDebugLogsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMDebug_SetDebugLogsEnabled_mEA0C9B0C0894BBB28AD3FAA96FAA6CE1E9B58A1E (bool ___status0, const RuntimeMethod* method) ;
// System.Void MoreMountains.Tools.MMDebug::SetDebugDrawEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMDebug_SetDebugDrawEnabled_mD0C5BE6C2AD002FB5668B1D0681C969DF897D9B7 (bool ___status0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_m6E774804276C74577E82CD2200A4FC9972CA0505 (String_t* ___filename0, int32_t ___superSize1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0FFFD0F0DC0EC22073BC937A5294067C57008391 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 MoreMountains.Tools.MMMaths::RandomVector3(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MMMaths_RandomVector3_m8BF2BC215C0BA80178C7612D400A109CB7616695 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___minimum0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___maximum1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m5E7015CDA7DD1FCB4E488DE23C5DB959D7406843_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVector_mB3D0FFCCDFF9D78447719F25DB8C1AFCB12B8BD5 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_mCE0B215ACED38420979148A6B00496F07345162B (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, int32_t ___materialIndex1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector4_op_Implicit_m2D6D6CC60982A88F7B77B5D0452F1E1652C412A2_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m141F5123C4052CC703B41E5892A4AC26C59D36EE_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Clear()
inline void List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MMConeOfVision_get_Center_mC05B505BC28C9E82E7FAA04536E32B43052A4AA9 (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_mC2AD00AA16FF7136EFA63E0670C8A24D4BBE0A36 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mD4D68C5B2E8407DBF337DCC834C33C4F521ED5E7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// MoreMountains.Tools.MMConeOfVision/RaycastData MoreMountains.Tools.MMConeOfVision::RaycastAtAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D MMConeOfVision_RaycastAtAngle_m2A52868599FA43E087AED3E5C074F02C6344688A (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, float ___angle0, const RuntimeMethod* method) ;
// MoreMountains.Tools.MMConeOfVision/MeshEdgePosition MoreMountains.Tools.MMConeOfVision::FindMeshEdgePosition(MoreMountains.Tools.MMConeOfVision/RaycastData,MoreMountains.Tools.MMConeOfVision/RaycastData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB MMConeOfVision_FindMeshEdgePosition_m79F5F4A9303575BD6988A27542D1BC18F49A074F (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D ___minimumViewCast0, RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D ___maximumViewCast1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Void System.Array::Resize<UnityEngine.Vector3>(T[]&,System.Int32)
inline void Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**, int32_t, const RuntimeMethod*))Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_gshared)(___array0, ___newSize1, method);
}
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
inline void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_gshared)(___array0, ___newSize1, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void MoreMountains.Tools.MMConeOfVision/MeshEdgePosition::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEdgePosition__ctor_m95FF14C5989F9FBCE45A649999A64712F47EEF4F (MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointA0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointB1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MoreMountains.Tools.MMMaths::DirectionFromAngle(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MMMaths_DirectionFromAngle_mFDF6038399AC184E3C911335BA6F398B2D5E9BEB (float ___angle0, float ___additionalAngle1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE2B4DD419E8995D4086EA47457A6C36435A67F49 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void MoreMountains.Tools.MMConeOfVision/RaycastData::.ctor(System.Boolean,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData__ctor_m0857108C7BAE008A36D9259914DEA7517E28F309 (RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* __this, bool ___hit0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, float ___distance2, float ___angle3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* Physics2D_OverlapCircleAll_m77495421E1C76DE3CE525EC53DE746786BB8AEBD (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m6B89CCCAF549D1917B95F663E007382899E66BA7 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___hit0, const RuntimeMethod* method) ;
// MoreMountains.Tools.MMConeOfVision2D/RaycastData MoreMountains.Tools.MMConeOfVision2D::RaycastAtAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B MMConeOfVision2D_RaycastAtAngle_mBF3D98D3D391A51B5F300E0F5066ED5361A8A052 (MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5* __this, float ___angle0, const RuntimeMethod* method) ;
// MoreMountains.Tools.MMConeOfVision2D/MeshEdgePosition MoreMountains.Tools.MMConeOfVision2D::FindMeshEdgePosition(MoreMountains.Tools.MMConeOfVision2D/RaycastData,MoreMountains.Tools.MMConeOfVision2D/RaycastData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4 MMConeOfVision2D_FindMeshEdgePosition_m6099B81B014D5C3A5AFF125CA7F44B314DAB2680 (MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5* __this, RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B ___minimumViewCast0, RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B ___maximumViewCast1, const RuntimeMethod* method) ;
// System.Void MoreMountains.Tools.MMConeOfVision2D/MeshEdgePosition::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEdgePosition__ctor_m578B2958BBD7AB0D4A16F1F7D96CB6BE382DE131 (MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointA0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointB1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MoreMountains.Tools.MMMaths::DirectionFromAngle2D(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MMMaths_DirectionFromAngle2D_mFC5C70A35A7E1BB443C48FE2A3D0AE9B54526B25 (float ___angle0, float ___additionalAngle1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit2D::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Void MoreMountains.Tools.MMConeOfVision2D/RaycastData::.ctor(System.Boolean,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData__ctor_mBB626A9DC69AF06C186A240F5B28F08E553AC4E7 (RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* __this, bool ___hit0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, float ___distance2, float ___angle3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
float TweenDelegate_Invoke_mAF721FC7A93EF7D041FAE8A99C07E80211A7397C_Multicast(TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F* __this, float ___currentTime0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F* currentDelegate = reinterpret_cast<TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___currentTime0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float TweenDelegate_Invoke_mAF721FC7A93EF7D041FAE8A99C07E80211A7397C_Open(TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F* __this, float ___currentTime0, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___currentTime0, method);
}
float TweenDelegate_Invoke_mAF721FC7A93EF7D041FAE8A99C07E80211A7397C_OpenStaticInvoker(TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F* __this, float ___currentTime0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___currentTime0);
}
float TweenDelegate_Invoke_mAF721FC7A93EF7D041FAE8A99C07E80211A7397C_ClosedStaticInvoker(TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F* __this, float ___currentTime0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< float, RuntimeObject*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___currentTime0);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F (TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F* __this, float ___currentTime0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___currentTime0);

	return returnValue;
}
// System.Void MoreMountains.Tools.MMTween/TweenDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenDelegate__ctor_m09F1934F4FFE8A34691FAF51322569C6AB9A7C3E (TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TweenDelegate_Invoke_mAF721FC7A93EF7D041FAE8A99C07E80211A7397C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TweenDelegate_Invoke_mAF721FC7A93EF7D041FAE8A99C07E80211A7397C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TweenDelegate_Invoke_mAF721FC7A93EF7D041FAE8A99C07E80211A7397C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&TweenDelegate_Invoke_mAF721FC7A93EF7D041FAE8A99C07E80211A7397C_Multicast;
}
// System.Single MoreMountains.Tools.MMTween/TweenDelegate::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDelegate_Invoke_mAF721FC7A93EF7D041FAE8A99C07E80211A7397C (TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F* __this, float ___currentTime0, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___currentTime0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MoreMountains.Tools.MMTween/TweenDelegate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenDelegate_BeginInvoke_mC2B43CD440E1B261D1751BE0EE6DDB25937DC454 (TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F* __this, float ___currentTime0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___currentTime0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Single MoreMountains.Tools.MMTween/TweenDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDelegate_EndInvoke_m781285EA2C26CE790DF5534432AB1ACEBDBA826D (TweenDelegate_t0BACE4C1172E1864DC8FF2D328D7D99A059B967F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveRectTransformCoU3Ed__55__ctor_m8BAFFAC5131FA3275A02501BCF578BC844EA5660 (U3CMoveRectTransformCoU3Ed__55_tCB76D6CA8AA3A915A913608A20579458B534BC80* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveRectTransformCoU3Ed__55_System_IDisposable_Dispose_mABAD7CF5342076D4E2B674E41B7AC708833E3BC7 (U3CMoveRectTransformCoU3Ed__55_tCB76D6CA8AA3A915A913608A20579458B534BC80* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveRectTransformCoU3Ed__55_MoveNext_m8A578C419D0973AA788912447F04F15682555163 (U3CMoveRectTransformCoU3Ed__55_tCB76D6CA8AA3A915A913608A20579458B534BC80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float G_B8_0 = 0.0f;
	U3CMoveRectTransformCoU3Ed__55_tCB76D6CA8AA3A915A913608A20579458B534BC80* G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CMoveRectTransformCoU3Ed__55_tCB76D6CA8AA3A915A913608A20579458B534BC80* G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CMoveRectTransformCoU3Ed__55_tCB76D6CA8AA3A915A913608A20579458B534BC80* G_B9_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_00c4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (delayDuration > 0f)
		float L_2 = __this->___delayDuration_2;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// yield return delay;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = __this->___delay_3;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0044:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004b:
	{
		// float timeLeft = duration;
		float L_4 = __this->___duration_4;
		__this->___U3CtimeLeftU3E5__2_10 = L_4;
		goto IL_00cb;
	}

IL_0059:
	{
		// targetTransform.localPosition = MMTween.Tween(duration - timeLeft, 0f, duration, origin, destination, curve);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___targetTransform_5;
		float L_6 = __this->___duration_4;
		float L_7 = __this->___U3CtimeLeftU3E5__2_10;
		float L_8 = __this->___duration_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___origin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___destination_7;
		int32_t L_11 = __this->___curve_8;
		il2cpp_codegen_runtime_class_init_inline(MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = MMTween_Tween_m9A82F8EF249CE7DD6DCD407F181E8A7C216C3940(((float)il2cpp_codegen_subtract(L_6, L_7)), (0.0f), L_8, L_9, L_10, L_11, NULL);
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_12, NULL);
		// timeLeft -= ignoreTimescale ? Time.unscaledDeltaTime : Time.deltaTime;
		float L_13 = __this->___U3CtimeLeftU3E5__2_10;
		bool L_14 = __this->___ignoreTimescale_9;
		G_B7_0 = L_13;
		G_B7_1 = __this;
		if (L_14)
		{
			G_B8_0 = L_13;
			G_B8_1 = __this;
			goto IL_00a9;
		}
	}
	{
		float L_15;
		L_15 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		G_B9_0 = L_15;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00ae;
	}

IL_00a9:
	{
		float L_16;
		L_16 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		G_B9_0 = L_16;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00ae:
	{
		NullCheck(G_B9_2);
		G_B9_2->___U3CtimeLeftU3E5__2_10 = ((float)il2cpp_codegen_subtract(G_B9_1, G_B9_0));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00c4:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00cb:
	{
		// while (timeLeft > 0f)
		float L_17 = __this->___U3CtimeLeftU3E5__2_10;
		if ((((float)L_17) > ((float)(0.0f))))
		{
			goto IL_0059;
		}
	}
	{
		// targetTransform.localPosition = destination;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___targetTransform_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___destination_7;
		NullCheck(L_18);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_18, L_19, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveRectTransformCoU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB559F6CB412ED05FB2A06DE7519D8D6F368BB29E (U3CMoveRectTransformCoU3Ed__55_tCB76D6CA8AA3A915A913608A20579458B534BC80* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveRectTransformCoU3Ed__55_System_Collections_IEnumerator_Reset_m4AA35FA4DB7EA1B9B68AAE0072EA6DF1F365A3C2 (U3CMoveRectTransformCoU3Ed__55_tCB76D6CA8AA3A915A913608A20579458B534BC80* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveRectTransformCoU3Ed__55_System_Collections_IEnumerator_Reset_m4AA35FA4DB7EA1B9B68AAE0072EA6DF1F365A3C2_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.Tools.MMTween/<MoveRectTransformCo>d__55::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveRectTransformCoU3Ed__55_System_Collections_IEnumerator_get_Current_mD49ABF9D187336D053A22123EDA7B3D7724A3158 (U3CMoveRectTransformCoU3Ed__55_tCB76D6CA8AA3A915A913608A20579458B534BC80* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveTransformCoU3Ed__56__ctor_m054A0A96B09FFD57E4ABDFD0FC14614A4F13AAC7 (U3CMoveTransformCoU3Ed__56_tA8B03DA1D2BA4315DE052BE8CD27DE37E96D8890* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveTransformCoU3Ed__56_System_IDisposable_Dispose_mD38F2AAEB821E6878CB7D7B39E8EC2CCEDE07E6F (U3CMoveTransformCoU3Ed__56_tA8B03DA1D2BA4315DE052BE8CD27DE37E96D8890* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveTransformCoU3Ed__56_MoveNext_m6876542199496CA0BD9F4486AE8B4264DF88BBBB (U3CMoveTransformCoU3Ed__56_tA8B03DA1D2BA4315DE052BE8CD27DE37E96D8890* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float G_B8_0 = 0.0f;
	U3CMoveTransformCoU3Ed__56_tA8B03DA1D2BA4315DE052BE8CD27DE37E96D8890* G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CMoveTransformCoU3Ed__56_tA8B03DA1D2BA4315DE052BE8CD27DE37E96D8890* G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CMoveTransformCoU3Ed__56_tA8B03DA1D2BA4315DE052BE8CD27DE37E96D8890* G_B9_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_00c9;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (delayDuration > 0f)
		float L_2 = __this->___delayDuration_2;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// yield return delay;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = __this->___delay_3;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0044:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004b:
	{
		// float timeLeft = duration;
		float L_4 = __this->___duration_4;
		__this->___U3CtimeLeftU3E5__2_10 = L_4;
		goto IL_00d0;
	}

IL_0059:
	{
		// targetTransform.transform.position = MMTween.Tween(duration - timeLeft, 0f, duration, origin, destination, curve);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___targetTransform_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		float L_7 = __this->___duration_4;
		float L_8 = __this->___U3CtimeLeftU3E5__2_10;
		float L_9 = __this->___duration_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___origin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___destination_7;
		int32_t L_12 = __this->___curve_8;
		il2cpp_codegen_runtime_class_init_inline(MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = MMTween_Tween_m9A82F8EF249CE7DD6DCD407F181E8A7C216C3940(((float)il2cpp_codegen_subtract(L_7, L_8)), (0.0f), L_9, L_10, L_11, L_12, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_13, NULL);
		// timeLeft -= ignoreTimescale ? Time.unscaledDeltaTime : Time.deltaTime;
		float L_14 = __this->___U3CtimeLeftU3E5__2_10;
		bool L_15 = __this->___ignoreTimescale_9;
		G_B7_0 = L_14;
		G_B7_1 = __this;
		if (L_15)
		{
			G_B8_0 = L_14;
			G_B8_1 = __this;
			goto IL_00ae;
		}
	}
	{
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		G_B9_0 = L_16;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00b3;
	}

IL_00ae:
	{
		float L_17;
		L_17 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00b3:
	{
		NullCheck(G_B9_2);
		G_B9_2->___U3CtimeLeftU3E5__2_10 = ((float)il2cpp_codegen_subtract(G_B9_1, G_B9_0));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00c9:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00d0:
	{
		// while (timeLeft > 0f)
		float L_18 = __this->___U3CtimeLeftU3E5__2_10;
		if ((((float)L_18) > ((float)(0.0f))))
		{
			goto IL_0059;
		}
	}
	{
		// targetTransform.transform.position = destination;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___targetTransform_5;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___destination_7;
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_21, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveTransformCoU3Ed__56_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFEE61ED217CEB6BBFFE92EFFF8B0134A75A0DE62 (U3CMoveTransformCoU3Ed__56_tA8B03DA1D2BA4315DE052BE8CD27DE37E96D8890* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveTransformCoU3Ed__56_System_Collections_IEnumerator_Reset_m6CD0737E829804BE216886D9C47BA5009799A979 (U3CMoveTransformCoU3Ed__56_tA8B03DA1D2BA4315DE052BE8CD27DE37E96D8890* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveTransformCoU3Ed__56_System_Collections_IEnumerator_Reset_m6CD0737E829804BE216886D9C47BA5009799A979_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.Tools.MMTween/<MoveTransformCo>d__56::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveTransformCoU3Ed__56_System_Collections_IEnumerator_get_Current_mB60F1AE7C4E1C08C9C7EAC9273694165F9D720D1 (U3CMoveTransformCoU3Ed__56_tA8B03DA1D2BA4315DE052BE8CD27DE37E96D8890* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveTransformCoU3Ed__57__ctor_m90B0045C169532B17912FB05DAEC4CACAF339333 (U3CMoveTransformCoU3Ed__57_t3A3685C472CE855D9E448994B13383E8F5C121C5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveTransformCoU3Ed__57_System_IDisposable_Dispose_mE96851CA2FB782B66AC58997178216D708306479 (U3CMoveTransformCoU3Ed__57_t3A3685C472CE855D9E448994B13383E8F5C121C5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveTransformCoU3Ed__57_MoveNext_m4EAA8979AB65B7399A231D82316422F749FCF0E7 (U3CMoveTransformCoU3Ed__57_t3A3685C472CE855D9E448994B13383E8F5C121C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float G_B12_0 = 0.0f;
	U3CMoveTransformCoU3Ed__57_t3A3685C472CE855D9E448994B13383E8F5C121C5* G_B12_1 = NULL;
	float G_B11_0 = 0.0f;
	U3CMoveTransformCoU3Ed__57_t3A3685C472CE855D9E448994B13383E8F5C121C5* G_B11_1 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	U3CMoveTransformCoU3Ed__57_t3A3685C472CE855D9E448994B13383E8F5C121C5* G_B13_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_012f;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (delayDuration > 0f)
		float L_2 = __this->___delayDuration_2;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// yield return delay;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = __this->___delay_3;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0044:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004b:
	{
		// float timeLeft = duration;
		float L_4 = __this->___duration_4;
		__this->___U3CtimeLeftU3E5__2_12 = L_4;
		goto IL_0136;
	}

IL_005c:
	{
		// if (updatePosition)
		bool L_5 = __this->___updatePosition_5;
		if (!L_5)
		{
			goto IL_00ad;
		}
	}
	{
		// targetTransform.transform.position = MMTween.Tween(duration - timeLeft, 0f, duration, origin.position, destination.position, curve);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___targetTransform_6;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		float L_8 = __this->___duration_4;
		float L_9 = __this->___U3CtimeLeftU3E5__2_12;
		float L_10 = __this->___duration_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___origin_7;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___destination_8;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		int32_t L_15 = __this->___curve_9;
		il2cpp_codegen_runtime_class_init_inline(MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = MMTween_Tween_m9A82F8EF249CE7DD6DCD407F181E8A7C216C3940(((float)il2cpp_codegen_subtract(L_8, L_9)), (0.0f), L_10, L_12, L_14, L_15, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_16, NULL);
	}

IL_00ad:
	{
		// if (updateRotation)
		bool L_17 = __this->___updateRotation_10;
		if (!L_17)
		{
			goto IL_00fe;
		}
	}
	{
		// targetTransform.transform.rotation = MMTween.Tween(duration - timeLeft, 0f, duration, origin.rotation, destination.rotation, curve);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___targetTransform_6;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		float L_20 = __this->___duration_4;
		float L_21 = __this->___U3CtimeLeftU3E5__2_12;
		float L_22 = __this->___duration_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___origin_7;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___destination_8;
		NullCheck(L_25);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_25, NULL);
		int32_t L_27 = __this->___curve_9;
		il2cpp_codegen_runtime_class_init_inline(MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = MMTween_Tween_m4903288DB8C285F496717451A95914C00B4BE2C5(((float)il2cpp_codegen_subtract(L_20, L_21)), (0.0f), L_22, L_24, L_26, L_27, NULL);
		NullCheck(L_19);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_19, L_28, NULL);
	}

IL_00fe:
	{
		// timeLeft -= ignoreTimescale ? Time.unscaledDeltaTime : Time.deltaTime;
		float L_29 = __this->___U3CtimeLeftU3E5__2_12;
		bool L_30 = __this->___ignoreTimescale_11;
		G_B11_0 = L_29;
		G_B11_1 = __this;
		if (L_30)
		{
			G_B12_0 = L_29;
			G_B12_1 = __this;
			goto IL_0114;
		}
	}
	{
		float L_31;
		L_31 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		G_B13_0 = L_31;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_0119;
	}

IL_0114:
	{
		float L_32;
		L_32 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		G_B13_0 = L_32;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_0119:
	{
		NullCheck(G_B13_2);
		G_B13_2->___U3CtimeLeftU3E5__2_12 = ((float)il2cpp_codegen_subtract(G_B13_1, G_B13_0));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_012f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0136:
	{
		// while (timeLeft > 0f)
		float L_33 = __this->___U3CtimeLeftU3E5__2_12;
		if ((((float)L_33) > ((float)(0.0f))))
		{
			goto IL_005c;
		}
	}
	{
		// if (updatePosition) { targetTransform.transform.position = destination.position; }
		bool L_34 = __this->___updatePosition_5;
		if (!L_34)
		{
			goto IL_0169;
		}
	}
	{
		// if (updatePosition) { targetTransform.transform.position = destination.position; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___targetTransform_6;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___destination_8;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		NullCheck(L_36);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_36, L_38, NULL);
	}

IL_0169:
	{
		// if (updateRotation) { targetTransform.transform.localEulerAngles = destination.localEulerAngles; }
		bool L_39 = __this->___updateRotation_10;
		if (!L_39)
		{
			goto IL_018c;
		}
	}
	{
		// if (updateRotation) { targetTransform.transform.localEulerAngles = destination.localEulerAngles; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___targetTransform_6;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___destination_8;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_42, NULL);
		NullCheck(L_41);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_41, L_43, NULL);
	}

IL_018c:
	{
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveTransformCoU3Ed__57_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCEA6CEB426A9BBEF7DC75A0B28F06D2404AAB5B7 (U3CMoveTransformCoU3Ed__57_t3A3685C472CE855D9E448994B13383E8F5C121C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveTransformCoU3Ed__57_System_Collections_IEnumerator_Reset_m5D2224AC0975945CB136C4C0D9D08538C3557399 (U3CMoveTransformCoU3Ed__57_t3A3685C472CE855D9E448994B13383E8F5C121C5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveTransformCoU3Ed__57_System_Collections_IEnumerator_Reset_m5D2224AC0975945CB136C4C0D9D08538C3557399_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.Tools.MMTween/<MoveTransformCo>d__57::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveTransformCoU3Ed__57_System_Collections_IEnumerator_get_Current_mD68AC45F567911F08918AB41FA6FA7FA97FA6F16 (U3CMoveTransformCoU3Ed__57_t3A3685C472CE855D9E448994B13383E8F5C121C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateTransformAroundCoU3Ed__58__ctor_mA8CDBA65B5EC0640BFD167918E07F30616336AE3 (U3CRotateTransformAroundCoU3Ed__58_tA213CC5ED8CFB4E0C443C34330660D188AC0CDD9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateTransformAroundCoU3Ed__58_System_IDisposable_Dispose_mC4850A2DCCBA1A8F8F3F83B822903F38FF9C9727 (U3CRotateTransformAroundCoU3Ed__58_tA213CC5ED8CFB4E0C443C34330660D188AC0CDD9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRotateTransformAroundCoU3Ed__58_MoveNext_m9978B80A25601CE218C016E5350C1D156B3F6A82 (U3CRotateTransformAroundCoU3Ed__58_tA213CC5ED8CFB4E0C443C34330660D188AC0CDD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float G_B8_0 = 0.0f;
	U3CRotateTransformAroundCoU3Ed__58_tA213CC5ED8CFB4E0C443C34330660D188AC0CDD9* G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CRotateTransformAroundCoU3Ed__58_tA213CC5ED8CFB4E0C443C34330660D188AC0CDD9* G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CRotateTransformAroundCoU3Ed__58_tA213CC5ED8CFB4E0C443C34330660D188AC0CDD9* G_B9_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_014c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (delayDuration > 0f)
		float L_2 = __this->___delayDuration_2;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// yield return delay;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = __this->___delay_3;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0044:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004b:
	{
		// Vector3 initialRotationPosition = targetTransform.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___targetTransform_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___U3CinitialRotationPositionU3E5__2_11 = L_6;
		// Quaternion initialRotationRotation = targetTransform.transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___targetTransform_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		V_1 = L_9;
		// float rate = 1f / duration;
		float L_10 = __this->___duration_5;
		// float timeSpent = 0f;
		__this->___U3CtimeSpentU3E5__3_12 = (0.0f);
		goto IL_0153;
	}

IL_008f:
	{
		// float newAngle = MMTween.Tween(timeSpent, 0f, duration, 0f, angle, curve);
		float L_11 = __this->___U3CtimeSpentU3E5__3_12;
		float L_12 = __this->___duration_5;
		float L_13 = __this->___angle_6;
		int32_t L_14 = __this->___curve_7;
		il2cpp_codegen_runtime_class_init_inline(MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = MMTween_Tween_mB0075F79061A3843CE3D8E4FA0CBEBA9E154263B(L_11, (0.0f), L_12, (0.0f), L_13, L_14, NULL);
		V_2 = L_15;
		// targetTransform.transform.position = initialRotationPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___targetTransform_4;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___U3CinitialRotationPositionU3E5__2_11;
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_18, NULL);
		// initialRotationRotation = targetTransform.transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___targetTransform_4;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_20, NULL);
		V_1 = L_21;
		// targetTransform.RotateAround(center.transform.position, center.transform.up, newAngle);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___targetTransform_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___center_8;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___center_8;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_27, NULL);
		float L_29 = V_2;
		NullCheck(L_22);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_22, L_25, L_28, L_29, NULL);
		// targetTransform.transform.rotation = initialRotationRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___targetTransform_4;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = V_1;
		NullCheck(L_31);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_31, L_32, NULL);
		// timeSpent += ignoreTimescale ? Time.unscaledDeltaTime : Time.deltaTime;
		float L_33 = __this->___U3CtimeSpentU3E5__3_12;
		bool L_34 = __this->___ignoreTimescale_9;
		G_B7_0 = L_33;
		G_B7_1 = __this;
		if (L_34)
		{
			G_B8_0 = L_33;
			G_B8_1 = __this;
			goto IL_0131;
		}
	}
	{
		float L_35;
		L_35 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		G_B9_0 = L_35;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0136;
	}

IL_0131:
	{
		float L_36;
		L_36 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		G_B9_0 = L_36;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0136:
	{
		NullCheck(G_B9_2);
		G_B9_2->___U3CtimeSpentU3E5__3_12 = ((float)il2cpp_codegen_add(G_B9_1, G_B9_0));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_014c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0153:
	{
		// while (timeSpent < duration)
		float L_37 = __this->___U3CtimeSpentU3E5__3_12;
		float L_38 = __this->___duration_5;
		if ((((float)L_37) < ((float)L_38)))
		{
			goto IL_008f;
		}
	}
	{
		// targetTransform.transform.position = destination.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___targetTransform_4;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___destination_10;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		NullCheck(L_40);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_40, L_42, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRotateTransformAroundCoU3Ed__58_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3A19E11F70653E9779F6A2F52CA89C573C1A21B6 (U3CRotateTransformAroundCoU3Ed__58_tA213CC5ED8CFB4E0C443C34330660D188AC0CDD9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateTransformAroundCoU3Ed__58_System_Collections_IEnumerator_Reset_m47AD79EA3B292B9718CAB4C19A5D0BB4E31D3654 (U3CRotateTransformAroundCoU3Ed__58_tA213CC5ED8CFB4E0C443C34330660D188AC0CDD9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRotateTransformAroundCoU3Ed__58_System_Collections_IEnumerator_Reset_m47AD79EA3B292B9718CAB4C19A5D0BB4E31D3654_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.Tools.MMTween/<RotateTransformAroundCo>d__58::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRotateTransformAroundCoU3Ed__58_System_Collections_IEnumerator_get_Current_mD9EE674415D3B193E64B2C2DE51D70252D9D8088 (U3CRotateTransformAroundCoU3Ed__58_tA213CC5ED8CFB4E0C443C34330660D188AC0CDD9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Single MoreMountains.Tools.MMTweenDefinitions::Linear_Tween(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_Linear_Tween_mA069FFA488C784D3B7875463C681D2981D919706 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return t;
		float L_0 = ___t0;
		return L_0;
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::LinearAnti_Tween(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_LinearAnti_Tween_mF62953FF5A63F51337C5BE97B61982E952F84B64 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - t;
		float L_0 = ___t0;
		return ((float)il2cpp_codegen_subtract((1.0f), L_0));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::AlmostIdentity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_AlmostIdentity_m1AB684AE995B7B933DEB3057710C58D690A73EDD (float ___t0, const RuntimeMethod* method) 
{
	{
		// return t * t * (2.0f - t);
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___t0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_subtract((2.0f), L_2))));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Quadratic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Quadratic_mAE042F9ED8D50D514F2B6DC327AAD3FFD02C1E49 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return t * t;
		float L_0 = ___t0;
		float L_1 = ___t0;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseOut_Quadratic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseOut_Quadratic_m0368DDBD14C8BD02D843F40E0ED64F3982C16D93 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - EaseIn_Quadratic(1 - t);
		float L_0 = ___t0;
		float L_1;
		L_1 = MMTweenDefinitions_EaseIn_Quadratic_mAE042F9ED8D50D514F2B6DC327AAD3FFD02C1E49(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseInOut_Quadratic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseInOut_Quadratic_mC2A6A26C05B1B566D50B31526F482FD1EC764084 (float ___t0, const RuntimeMethod* method) 
{
	{
		// if (t < 0.5f)
		float L_0 = ___t0;
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_001b;
		}
	}
	{
		// return EaseIn_Quadratic(t * 2f) / 2f;
		float L_1 = ___t0;
		float L_2;
		L_2 = MMTweenDefinitions_EaseIn_Quadratic_mAE042F9ED8D50D514F2B6DC327AAD3FFD02C1E49(((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		return ((float)(L_2/(2.0f)));
	}

IL_001b:
	{
		// return 1 - EaseIn_Quadratic((1f - t) * 2f) / 2;
		float L_3 = ___t0;
		float L_4;
		L_4 = MMTweenDefinitions_EaseIn_Quadratic_mAE042F9ED8D50D514F2B6DC327AAD3FFD02C1E49(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_3)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_4/(2.0f)))));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Cubic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Cubic_m3DFE533FFCD6E18194737BCBEDCDD720485C3952 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return t * t * t;
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___t0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseOut_Cubic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseOut_Cubic_mAA373C45CED7BC2CB5FAD8541F3D47027BF5AF24 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - EaseIn_Cubic(1 - t);
		float L_0 = ___t0;
		float L_1;
		L_1 = MMTweenDefinitions_EaseIn_Cubic_m3DFE533FFCD6E18194737BCBEDCDD720485C3952(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseInOut_Cubic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseInOut_Cubic_mD58F00FF653404BE4030E37DAC053223FA1F5E9B (float ___t0, const RuntimeMethod* method) 
{
	{
		// if (t < 0.5f)
		float L_0 = ___t0;
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_001b;
		}
	}
	{
		// return EaseIn_Cubic(t * 2f) / 2f;
		float L_1 = ___t0;
		float L_2;
		L_2 = MMTweenDefinitions_EaseIn_Cubic_m3DFE533FFCD6E18194737BCBEDCDD720485C3952(((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		return ((float)(L_2/(2.0f)));
	}

IL_001b:
	{
		// return 1 - EaseIn_Cubic((1f - t) * 2f) / 2;
		float L_3 = ___t0;
		float L_4;
		L_4 = MMTweenDefinitions_EaseIn_Cubic_m3DFE533FFCD6E18194737BCBEDCDD720485C3952(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_3)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_4/(2.0f)))));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Quartic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Quartic_mA4480DE41B4651BA2B22551FEB557E2538D60021 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return Mathf.Pow(t, 4f);
		float L_0 = ___t0;
		float L_1;
		L_1 = powf(L_0, (4.0f));
		return L_1;
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseOut_Quartic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseOut_Quartic_m620DF2D27961DB9E46116324DB0D4FFE17CAC921 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - EaseIn_Quartic(1 - t);
		float L_0 = ___t0;
		float L_1;
		L_1 = MMTweenDefinitions_EaseIn_Quartic_mA4480DE41B4651BA2B22551FEB557E2538D60021(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseInOut_Quartic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseInOut_Quartic_m1BB9FD797C6CF2481B52BDAB1C6C63CECD5C4DCA (float ___t0, const RuntimeMethod* method) 
{
	{
		// if (t < 0.5f)
		float L_0 = ___t0;
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_001b;
		}
	}
	{
		// return EaseIn_Quartic(t * 2f) / 2f;
		float L_1 = ___t0;
		float L_2;
		L_2 = MMTweenDefinitions_EaseIn_Quartic_mA4480DE41B4651BA2B22551FEB557E2538D60021(((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		return ((float)(L_2/(2.0f)));
	}

IL_001b:
	{
		// return 1 - EaseIn_Quartic((1f - t) * 2f) / 2;
		float L_3 = ___t0;
		float L_4;
		L_4 = MMTweenDefinitions_EaseIn_Quartic_mA4480DE41B4651BA2B22551FEB557E2538D60021(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_3)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_4/(2.0f)))));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Quintic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Quintic_m8F93AA968D9DCE8525552F456E13634001C9681B (float ___t0, const RuntimeMethod* method) 
{
	{
		// return Mathf.Pow(t, 5f);
		float L_0 = ___t0;
		float L_1;
		L_1 = powf(L_0, (5.0f));
		return L_1;
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseOut_Quintic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseOut_Quintic_mDDC70E7FB074E69D131D7EAE8214D9F62D2F3E6E (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - EaseIn_Quintic(1 - t);
		float L_0 = ___t0;
		float L_1;
		L_1 = MMTweenDefinitions_EaseIn_Quintic_m8F93AA968D9DCE8525552F456E13634001C9681B(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseInOut_Quintic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseInOut_Quintic_m5312A77F53EFE70C5B01D3100F0273593A73FD81 (float ___t0, const RuntimeMethod* method) 
{
	{
		// if (t < 0.5f)
		float L_0 = ___t0;
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_001b;
		}
	}
	{
		// return EaseIn_Quintic(t * 2f) / 2f;
		float L_1 = ___t0;
		float L_2;
		L_2 = MMTweenDefinitions_EaseIn_Quintic_m8F93AA968D9DCE8525552F456E13634001C9681B(((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		return ((float)(L_2/(2.0f)));
	}

IL_001b:
	{
		// return 1 - EaseIn_Quintic((1f - t) * 2f) / 2;
		float L_3 = ___t0;
		float L_4;
		L_4 = MMTweenDefinitions_EaseIn_Quintic_m8F93AA968D9DCE8525552F456E13634001C9681B(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_3)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_4/(2.0f)))));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Bounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Bounce_m944B87E433C88C545B995C672072710FABC900E6 (float ___t0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float p = 0.3f;
		V_0 = (0.300000012f);
		// return Mathf.Pow(2, -10 * t) * Mathf.Sin((t - p / 4) * (2 * Mathf.PI) / p) + 1;
		float L_0 = ___t0;
		float L_1;
		L_1 = powf((2.0f), ((float)il2cpp_codegen_multiply((-10.0f), L_0)));
		float L_2 = ___t0;
		float L_3 = V_0;
		float L_4 = V_0;
		float L_5;
		L_5 = sinf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_2, ((float)(L_3/(4.0f))))), (6.28318548f)))/L_4)));
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_5)), (1.0f)));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseOut_Bounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseOut_Bounce_m5A68D206A52EA8D6773A4DDCBCC02E0EBFFB7FA4 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - EaseIn_Bounce(1 - t);
		float L_0 = ___t0;
		float L_1;
		L_1 = MMTweenDefinitions_EaseIn_Bounce_m944B87E433C88C545B995C672072710FABC900E6(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseInOut_Bounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseInOut_Bounce_m15B95FC943D8517971880FB0B1F606C3CA231654 (float ___t0, const RuntimeMethod* method) 
{
	{
		// if (t < 0.5f)
		float L_0 = ___t0;
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_001b;
		}
	}
	{
		// return EaseIn_Bounce(t * 2f) / 2f;
		float L_1 = ___t0;
		float L_2;
		L_2 = MMTweenDefinitions_EaseIn_Bounce_m944B87E433C88C545B995C672072710FABC900E6(((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		return ((float)(L_2/(2.0f)));
	}

IL_001b:
	{
		// return 1 - EaseIn_Bounce((1f - t) * 2f) / 2;
		float L_3 = ___t0;
		float L_4;
		L_4 = MMTweenDefinitions_EaseIn_Bounce_m944B87E433C88C545B995C672072710FABC900E6(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_3)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_4/(2.0f)))));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Sinusoidal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Sinusoidal_m0AA40CF7EA4F92FCFD63D405E3B3CE87867ED4AF (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 + Mathf.Sin(Mathf.PI / 2f * t - Mathf.PI / 2f);
		float L_0 = ___t0;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((1.57079637f), L_0)), (1.57079637f))));
		return ((float)il2cpp_codegen_add((1.0f), L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseOut_Sinusoidal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseOut_Sinusoidal_mC465A2D0B0C98D8B7F6C72752926C9DEF4068DB7 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - EaseIn_Sinusoidal(1 - t);
		float L_0 = ___t0;
		float L_1;
		L_1 = MMTweenDefinitions_EaseIn_Sinusoidal_m0AA40CF7EA4F92FCFD63D405E3B3CE87867ED4AF(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseInOut_Sinusoidal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseInOut_Sinusoidal_m445E3A4923EF0C5EA6A9225B3D042C7E03C8B373 (float ___t0, const RuntimeMethod* method) 
{
	{
		// if (t < 0.5f)
		float L_0 = ___t0;
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_001b;
		}
	}
	{
		// return EaseIn_Sinusoidal(t * 2f) / 2f;
		float L_1 = ___t0;
		float L_2;
		L_2 = MMTweenDefinitions_EaseIn_Sinusoidal_m0AA40CF7EA4F92FCFD63D405E3B3CE87867ED4AF(((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		return ((float)(L_2/(2.0f)));
	}

IL_001b:
	{
		// return 1 - EaseIn_Sinusoidal((1f - t) * 2f) / 2;
		float L_3 = ___t0;
		float L_4;
		L_4 = MMTweenDefinitions_EaseIn_Sinusoidal_m0AA40CF7EA4F92FCFD63D405E3B3CE87867ED4AF(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_3)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_4/(2.0f)))));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Overhead(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Overhead_m6CA38C730F628F973FF31FC3512523254EF71513 (float ___t0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float back = 1.6f;
		V_0 = (1.60000002f);
		// return t * t * ((back + 1f) * t - back);
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = V_0;
		float L_3 = ___t0;
		float L_4 = V_0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_2, (1.0f))), L_3)), L_4))));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseOut_Overhead(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseOut_Overhead_mC1ACC21B01CE63FD8F2A4F584A285AF6B8DE53AF (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - EaseIn_Overhead(1 - t);
		float L_0 = ___t0;
		float L_1;
		L_1 = MMTweenDefinitions_EaseIn_Overhead_m6CA38C730F628F973FF31FC3512523254EF71513(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseInOut_Overhead(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseInOut_Overhead_mC9B566D659229991F3603262C47101DDA208763C (float ___t0, const RuntimeMethod* method) 
{
	{
		// if (t < 0.5f)
		float L_0 = ___t0;
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_001b;
		}
	}
	{
		// return EaseIn_Overhead(t * 2f) / 2f;
		float L_1 = ___t0;
		float L_2;
		L_2 = MMTweenDefinitions_EaseIn_Overhead_m6CA38C730F628F973FF31FC3512523254EF71513(((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		return ((float)(L_2/(2.0f)));
	}

IL_001b:
	{
		// return 1 - EaseIn_Overhead((1f - t) * 2f) / 2;
		float L_3 = ___t0;
		float L_4;
		L_4 = MMTweenDefinitions_EaseIn_Overhead_m6CA38C730F628F973FF31FC3512523254EF71513(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_3)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_4/(2.0f)))));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Exponential(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Exponential_m314979F5EDE316AE613B512C827E1B87E273B4E7 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return t == 0f ? 0f : Mathf.Pow(1024f, t - 1f);
		float L_0 = ___t0;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_001a;
		}
	}
	{
		float L_1 = ___t0;
		float L_2;
		L_2 = powf((1024.0f), ((float)il2cpp_codegen_subtract(L_1, (1.0f))));
		return L_2;
	}

IL_001a:
	{
		return (0.0f);
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseOut_Exponential(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseOut_Exponential_mDB8B032BAA19B5FED27345341F4EFCA1B0F5AE50 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - EaseIn_Exponential(1 - t);
		float L_0 = ___t0;
		float L_1;
		L_1 = MMTweenDefinitions_EaseIn_Exponential_m314979F5EDE316AE613B512C827E1B87E273B4E7(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseInOut_Exponential(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseInOut_Exponential_mAA908EC741D33DBFC03F8F76743EF9DCE363934E (float ___t0, const RuntimeMethod* method) 
{
	{
		// if (t < 0.5f)
		float L_0 = ___t0;
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_001b;
		}
	}
	{
		// return EaseIn_Exponential(t * 2f) / 2f;
		float L_1 = ___t0;
		float L_2;
		L_2 = MMTweenDefinitions_EaseIn_Exponential_m314979F5EDE316AE613B512C827E1B87E273B4E7(((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		return ((float)(L_2/(2.0f)));
	}

IL_001b:
	{
		// return 1 - EaseIn_Exponential((1f - t) * 2f) / 2;
		float L_3 = ___t0;
		float L_4;
		L_4 = MMTweenDefinitions_EaseIn_Exponential_m314979F5EDE316AE613B512C827E1B87E273B4E7(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_3)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_4/(2.0f)))));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Elastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Elastic_mC824421A2E700E9B886206C933A99ACF0D58A332 (float ___t0, const RuntimeMethod* method) 
{
	{
		// if (t == 0f) { return 0f; }
		float L_0 = ___t0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// if (t == 0f) { return 0f; }
		return (0.0f);
	}

IL_000e:
	{
		// if (t == 1f) { return 1f; }
		float L_1 = ___t0;
		if ((!(((float)L_1) == ((float)(1.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		// if (t == 1f) { return 1f; }
		return (1.0f);
	}

IL_001c:
	{
		// return -Mathf.Pow(2f, 10f * (t -= 1f)) * Mathf.Sin((t - 0.1f) * (2f * Mathf.PI) / 0.4f);
		float L_2 = ___t0;
		float L_3 = ((float)il2cpp_codegen_subtract(L_2, (1.0f)));
		___t0 = L_3;
		float L_4;
		L_4 = powf((2.0f), ((float)il2cpp_codegen_multiply((10.0f), L_3)));
		float L_5 = ___t0;
		float L_6;
		L_6 = sinf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, (0.100000001f))), (6.28318548f)))/(0.400000006f))));
		return ((float)il2cpp_codegen_multiply(((-L_4)), L_6));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseOut_Elastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseOut_Elastic_m0E4321E85484EBCE736B6F13F538E9FEE03050FE (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - EaseIn_Elastic(1 - t);
		float L_0 = ___t0;
		float L_1;
		L_1 = MMTweenDefinitions_EaseIn_Elastic_mC824421A2E700E9B886206C933A99ACF0D58A332(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseInOut_Elastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseInOut_Elastic_m808CD8E8FEE91E33D7ADB8E501B872B085C72EA6 (float ___t0, const RuntimeMethod* method) 
{
	{
		// if (t < 0.5f)
		float L_0 = ___t0;
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_001b;
		}
	}
	{
		// return EaseIn_Elastic(t * 2f) / 2f;
		float L_1 = ___t0;
		float L_2;
		L_2 = MMTweenDefinitions_EaseIn_Elastic_mC824421A2E700E9B886206C933A99ACF0D58A332(((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		return ((float)(L_2/(2.0f)));
	}

IL_001b:
	{
		// return 1 - EaseIn_Elastic((1f - t) * 2f) / 2;
		float L_3 = ___t0;
		float L_4;
		L_4 = MMTweenDefinitions_EaseIn_Elastic_mC824421A2E700E9B886206C933A99ACF0D58A332(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_3)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_4/(2.0f)))));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseIn_Circular(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseIn_Circular_m344DDC801B4468D60E6805C33B1E7B1145C7CFC2 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1f - Mathf.Sqrt(1f - t * t);
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2;
		L_2 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_0, L_1)))));
		return ((float)il2cpp_codegen_subtract((1.0f), L_2));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseOut_Circular(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseOut_Circular_mDF2A92A85B8B08885A83DE8CDEF4BBDAAE5C9EC3 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - EaseIn_Circular(1 - t);
		float L_0 = ___t0;
		float L_1;
		L_1 = MMTweenDefinitions_EaseIn_Circular_m344DDC801B4468D60E6805C33B1E7B1145C7CFC2(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single MoreMountains.Tools.MMTweenDefinitions::EaseInOut_Circular(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenDefinitions_EaseInOut_Circular_m1BD371677C93B37EFDC88180E23D514FF6CB2281 (float ___t0, const RuntimeMethod* method) 
{
	{
		// if (t < 0.5f)
		float L_0 = ___t0;
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_001b;
		}
	}
	{
		// return EaseIn_Circular(t * 2f) / 2f;
		float L_1 = ___t0;
		float L_2;
		L_2 = MMTweenDefinitions_EaseIn_Circular_m344DDC801B4468D60E6805C33B1E7B1145C7CFC2(((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		return ((float)(L_2/(2.0f)));
	}

IL_001b:
	{
		// return 1 - EaseIn_Circular((1f - t) * 2f) / 2;
		float L_3 = ___t0;
		float L_4;
		L_4 = MMTweenDefinitions_EaseIn_Circular_m344DDC801B4468D60E6805C33B1E7B1145C7CFC2(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_3)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_4/(2.0f)))));
	}
}
// System.Void MoreMountains.Tools.MMTweenDefinitions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTweenDefinitions__ctor_m461B77291E61555F6CA153E61E7B97A7EBA10C9F (MMTweenDefinitions_t636AFEECD2CA5B484504EF45CFC6889D4B20CC2D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// MoreMountains.Tools.MMTweenType MoreMountains.Tools.MMTweenType::get_DefaultEaseInCubic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1* MMTweenType_get_DefaultEaseInCubic_m541EE6CCDA739984DA52502374D9EB1447B250A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MMTweenType DefaultEaseInCubic { get; } = new MMTweenType(MMTween.MMTweenCurve.EaseInCubic);
		il2cpp_codegen_runtime_class_init_inline(MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_il2cpp_TypeInfo_var);
		MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1* L_0 = ((MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_StaticFields*)il2cpp_codegen_static_fields_for(MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_il2cpp_TypeInfo_var))->___U3CDefaultEaseInCubicU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void MoreMountains.Tools.MMTweenType::.ctor(MoreMountains.Tools.MMTween/MMTweenCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTweenType__ctor_m3BA14E89564159E673924039EB09C3C8469106BF (MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1* __this, int32_t ___newCurve0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MMTween.MMTweenCurve MMTweenCurve = MMTween.MMTweenCurve.EaseInCubic;
		__this->___MMTweenCurve_2 = 4;
		// public AnimationCurve Curve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(1, 1f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_5, L_3, NULL);
		__this->___Curve_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Curve_3), (void*)L_5);
		// public MMTweenType(MMTween.MMTweenCurve newCurve)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// MMTweenCurve = newCurve;
		int32_t L_6 = ___newCurve0;
		__this->___MMTweenCurve_2 = L_6;
		// MMTweenDefinitionType = MMTweenDefinitionTypes.MMTween;
		__this->___MMTweenDefinitionType_1 = 0;
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMTweenType::.ctor(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTweenType__ctor_mE45CDCF9596117B7079CBBB76F20C81450A9F777 (MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___newCurve0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MMTween.MMTweenCurve MMTweenCurve = MMTween.MMTweenCurve.EaseInCubic;
		__this->___MMTweenCurve_2 = 4;
		// public AnimationCurve Curve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(1, 1f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_5, L_3, NULL);
		__this->___Curve_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Curve_3), (void*)L_5);
		// public MMTweenType(AnimationCurve newCurve)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Curve = newCurve;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = ___newCurve0;
		__this->___Curve_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Curve_3), (void*)L_6);
		// MMTweenDefinitionType = MMTweenDefinitionTypes.AnimationCurve;
		__this->___MMTweenDefinitionType_1 = 1;
		// }
		return;
	}
}
// System.Single MoreMountains.Tools.MMTweenType::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMTweenType_Evaluate_mCB7CD0B2EDACA6E0DE72F670B94965CE54B50222 (MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1* __this, float ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MMTween.Evaluate(t, this);
		float L_0 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(MMTween_t22A57AAB5733C05153BE7373147C40B8BF1E5827_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = MMTween_Evaluate_m585A8FF3CC557C74533738E6E9D8757E70B3D327(L_0, __this, NULL);
		return L_1;
	}
}
// System.Void MoreMountains.Tools.MMTweenType::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTweenType__cctor_m32323491B2B266025D24CBAE43EC899F619549F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MMTweenType DefaultEaseInCubic { get; } = new MMTweenType(MMTween.MMTweenCurve.EaseInCubic);
		MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1* L_0 = (MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1*)il2cpp_codegen_object_new(MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MMTweenType__ctor_m3BA14E89564159E673924039EB09C3C8469106BF(L_0, 4, NULL);
		((MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_StaticFields*)il2cpp_codegen_static_fields_for(MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_il2cpp_TypeInfo_var))->___U3CDefaultEaseInCubicU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_StaticFields*)il2cpp_codegen_static_fields_for(MMTweenType_t8EBF2D1FE664D8B0F1572EE0C63EE31B77C777F1_il2cpp_TypeInfo_var))->___U3CDefaultEaseInCubicU3Ek__BackingField_0), (void*)L_0);
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
// System.Void MoreMountains.Tools.MMApplicationQuit::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMApplicationQuit_Quit_m6B3D3C99E9190538E29179136BFC4FE6906EA945 (MMApplicationQuit_t1562C3681CE995925A461B53FB292C58D56A1636* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMApplicationQuit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMApplicationQuit__ctor_m1BEA3DC9397658C4F5153F998C9C61D21FDC2AE7 (MMApplicationQuit_t1562C3681CE995925A461B53FB292C58D56A1636* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MoreMountains.Tools.MMDebugController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMDebugController_Awake_mDFC1D1D73404BF502AE4E21227AF1AEFE1CC033A (MMDebugController_t18472FDFBCD5C93BE6277E8AA5EDA62D3E83EB41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMDebug_t16D053E01A9357DF96396934D8376280E228258C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MMDebug.SetDebugLogsEnabled(DebugLogsEnabled);
		bool L_0 = __this->___DebugLogsEnabled_4;
		il2cpp_codegen_runtime_class_init_inline(MMDebug_t16D053E01A9357DF96396934D8376280E228258C_il2cpp_TypeInfo_var);
		MMDebug_SetDebugLogsEnabled_mEA0C9B0C0894BBB28AD3FAA96FAA6CE1E9B58A1E(L_0, NULL);
		// MMDebug.SetDebugDrawEnabled(DebugDrawEnabled);
		bool L_1 = __this->___DebugDrawEnabled_5;
		MMDebug_SetDebugDrawEnabled_mD0C5BE6C2AD002FB5668B1D0681C969DF897D9B7(L_1, NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMDebugController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMDebugController__ctor_mD4AFA3B78CEF088628463E02E27D515DBC80EFA9 (MMDebugController_t18472FDFBCD5C93BE6277E8AA5EDA62D3E83EB41* __this, const RuntimeMethod* method) 
{
	{
		// public bool DebugLogsEnabled = true;
		__this->___DebugLogsEnabled_4 = (bool)1;
		// public bool DebugDrawEnabled = true;
		__this->___DebugDrawEnabled_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 MoreMountains.Tools.MMLayer::get_LayerIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MMLayer_get_LayerIndex_m9FBC0DDEC406219F2E86435944C9D7570A2B928D (MMLayer_t2485AF97F3D290558F9AA4C65DB7634FC30B346D* __this, const RuntimeMethod* method) 
{
	{
		// get { return _layerIndex; }
		int32_t L_0 = __this->____layerIndex_0;
		return L_0;
	}
}
// System.Void MoreMountains.Tools.MMLayer::Set(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMLayer_Set_m94F088175203CFFF5E1F49D6A3A8B3383373F30B (MMLayer_t2485AF97F3D290558F9AA4C65DB7634FC30B346D* __this, int32_t ____layerIndex0, const RuntimeMethod* method) 
{
	{
		// if (_layerIndex > 0 && _layerIndex < 32)
		int32_t L_0 = ____layerIndex0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ____layerIndex0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0010;
		}
	}
	{
		// this._layerIndex = _layerIndex;
		int32_t L_2 = ____layerIndex0;
		__this->____layerIndex_0 = L_2;
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Int32 MoreMountains.Tools.MMLayer::get_Mask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MMLayer_get_Mask_mB74C478B334B5701F52DF2DCCF79CAA2C5D52AC5 (MMLayer_t2485AF97F3D290558F9AA4C65DB7634FC30B346D* __this, const RuntimeMethod* method) 
{
	{
		// get { return 1 << _layerIndex; }
		int32_t L_0 = __this->____layerIndex_0;
		return ((int32_t)(1<<((int32_t)(L_0&((int32_t)31)))));
	}
}
// System.Void MoreMountains.Tools.MMLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMLayer__ctor_m1B834FF7EA7FBFCC212E225CD166B691A0B38C70 (MMLayer_t2485AF97F3D290558F9AA4C65DB7634FC30B346D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MoreMountains.Tools.MMOpenURL::OpenURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMOpenURL_OpenURL_mA1264455AF60E8F463DAAA5BD07FED47C1DFE4FC (MMOpenURL_tC3DDA02DAFB503CAB0BE3FEF5D600523031C5438* __this, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(DestinationURL);
		String_t* L_0 = __this->___DestinationURL_4;
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(L_0, NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMOpenURL::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMOpenURL__ctor_m757F203A1B24595BEDB5F082F3ACA34B87178441 (MMOpenURL_tC3DDA02DAFB503CAB0BE3FEF5D600523031C5438* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MoreMountains.Tools.MMSceneRestarter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMSceneRestarter_Update_m14B421067396C24903BCB66AE002B9D88E038E36 (MMSceneRestarter_t9D9387DB86B7243AD7E6C4209FB75F72671AF87D* __this, const RuntimeMethod* method) 
{
	{
		// HandleInput();
		VirtualActionInvoker0::Invoke(5 /* System.Void MoreMountains.Tools.MMSceneRestarter::HandleInput() */, __this);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMSceneRestarter::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMSceneRestarter_HandleInput_m8C62E6E838B7AD53A88AE4B3DAD786C3F4CAA414 (MMSceneRestarter_t9D9387DB86B7243AD7E6C4209FB75F72671AF87D* __this, const RuntimeMethod* method) 
{
	{
		// keyPressed = Input.GetKeyDown(RestarterKeyCode);
		int32_t L_0 = __this->___RestarterKeyCode_7;
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_0, NULL);
		// if (keyPressed)
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// RestartScene();
		VirtualActionInvoker0::Invoke(6 /* System.Void MoreMountains.Tools.MMSceneRestarter::RestartScene() */, __this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMSceneRestarter::RestartScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMSceneRestarter_RestartScene_m081B8DCD1C1FB0A2E786B5372901FF695DC42D6E (MMSceneRestarter_t9D9387DB86B7243AD7E6C4209FB75F72671AF87D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95B63459BD6B3935B45FBED00C5C8BB2808B9245);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Debug.Log("Scene restarted by MMSceneRestarter");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral95B63459BD6B3935B45FBED00C5C8BB2808B9245, NULL);
		// switch (RestartMode)
		int32_t L_0 = __this->___RestartMode_4;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_003b;
	}

IL_001a:
	{
		// Scene scene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_3;
		// _newSceneName = scene.name;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		__this->____newSceneName_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____newSceneName_8), (void*)L_4);
		// break;
		goto IL_003b;
	}

IL_002f:
	{
		// _newSceneName = SceneName;
		String_t* L_5 = __this->___SceneName_5;
		__this->____newSceneName_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____newSceneName_8), (void*)L_5);
	}

IL_003b:
	{
		// SceneManager.LoadScene(_newSceneName, LoadMode);
		String_t* L_6 = __this->____newSceneName_8;
		int32_t L_7 = __this->___LoadMode_6;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMSceneRestarter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMSceneRestarter__ctor_m58303A3E63295D526929712107D425DE192F485C (MMSceneRestarter_t9D9387DB86B7243AD7E6C4209FB75F72671AF87D* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode RestarterKeyCode = KeyCode.Backspace;
		__this->___RestarterKeyCode_7 = 8;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MoreMountains.Tools.MMSceneViewIcon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMSceneViewIcon__ctor_m81DD17BAFCC3903964F28156862F28369B45F3F5 (MMSceneViewIcon_t14A3ABD955956259289B23C44018CCFAB0494428* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MoreMountains.Tools.MMScreenshot::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMScreenshot_LateUpdate_m90DD0C749ED05C1DF3BEF29101246D166C3F5E32 (MMScreenshot_t7D08F93DCDA47FD2D83BA0FD1E6F3965240CD0F3* __this, const RuntimeMethod* method) 
{
	{
		// DetectInput();
		VirtualActionInvoker0::Invoke(5 /* System.Void MoreMountains.Tools.MMScreenshot::DetectInput() */, __this);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMScreenshot::DetectInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMScreenshot_DetectInput_m0417B63A66E05BD9218B4D6A62CEE3659000A31E (MMScreenshot_t7D08F93DCDA47FD2D83BA0FD1E6F3965240CD0F3* __this, const RuntimeMethod* method) 
{
	{
		// keyPressed = Input.GetKeyDown(ScreenshotShortcut);
		int32_t L_0 = __this->___ScreenshotShortcut_6;
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_0, NULL);
		// if (keyPressed)
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// TakeScreenshot();
		VirtualActionInvoker0::Invoke(6 /* System.Void MoreMountains.Tools.MMScreenshot::TakeScreenshot() */, __this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMScreenshot::TakeScreenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMScreenshot_TakeScreenshot_mF217D9830127E402E49648C813511E41CD8DF28C (MMScreenshot_t7D08F93DCDA47FD2D83BA0FD1E6F3965240CD0F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5900ADDC98B62E67E8FB516C9897FFF6221500FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!Directory.Exists(FolderName))
		String_t* L_0 = __this->___FolderName_4;
		bool L_1;
		L_1 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Directory.CreateDirectory(FolderName);
		String_t* L_2 = __this->___FolderName_4;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3;
		L_3 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_2, NULL);
	}

IL_0019:
	{
		// string savePath = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// switch (Method)
		int32_t L_4 = __this->___Method_5;
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_003f;
	}

IL_002f:
	{
		// savePath = TakeScreenCaptureScreenshot();
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String MoreMountains.Tools.MMScreenshot::TakeScreenCaptureScreenshot() */, __this);
		V_0 = L_7;
		// break;
		goto IL_003f;
	}

IL_0038:
	{
		// savePath = TakeRenderTextureScreenshot();
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String MoreMountains.Tools.MMScreenshot::TakeRenderTextureScreenshot() */, __this);
		V_0 = L_8;
	}

IL_003f:
	{
		// Debug.Log("[MMScreenshot] Screenshot taken and saved at " + savePath);
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral5900ADDC98B62E67E8FB516C9897FFF6221500FE, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_10, NULL);
		// }
		return;
	}
}
// System.String MoreMountains.Tools.MMScreenshot::TakeScreenCaptureScreenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MMScreenshot_TakeScreenCaptureScreenshot_m743B17A94D556DED1593F55BC3BE600B9E601E03 (MMScreenshot_t7D08F93DCDA47FD2D83BA0FD1E6F3965240CD0F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09FBD8AE36A6C03DA4A748EE49F1A75AFF36E79F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5874ECA88CAC577A30E613154995AFC2099C20F);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float width = Screen.width * GameViewSizeMultiplier;
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_1 = __this->___GameViewSizeMultiplier_7;
		V_0 = ((float)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		// float height = Screen.height * GameViewSizeMultiplier;
		int32_t L_2;
		L_2 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_3 = __this->___GameViewSizeMultiplier_7;
		V_1 = ((float)((int32_t)il2cpp_codegen_multiply(L_2, L_3)));
		// string savePath = FolderName+"/screenshot_" + width + "x" + height + "_" + System.DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss") + ".png";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = __this->___FolderName_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral09FBD8AE36A6C03DA4A748EE49F1A75AFF36E79F);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral09FBD8AE36A6C03DA4A748EE49F1A75AFF36E79F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12;
		L_12 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15;
		L_15 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_2 = L_15;
		String_t* L_16;
		L_16 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_2), _stringLiteralA5874ECA88CAC577A30E613154995AFC2099C20F, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		String_t* L_18;
		L_18 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_17, NULL);
		// ScreenCapture.CaptureScreenshot(savePath, GameViewSizeMultiplier);
		String_t* L_19 = L_18;
		int32_t L_20 = __this->___GameViewSizeMultiplier_7;
		ScreenCapture_CaptureScreenshot_m6E774804276C74577E82CD2200A4FC9972CA0505(L_19, L_20, NULL);
		// return savePath;
		return L_19;
	}
}
// System.String MoreMountains.Tools.MMScreenshot::TakeRenderTextureScreenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MMScreenshot_TakeRenderTextureScreenshot_m8C896C2CF71082702A07850758A05CABD021E3B9 (MMScreenshot_t7D08F93DCDA47FD2D83BA0FD1E6F3965240CD0F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09FBD8AE36A6C03DA4A748EE49F1A75AFF36E79F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5874ECA88CAC577A30E613154995AFC2099C20F);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// string savePath = FolderName + "/screenshot_" + ResolutionWidth + "x" + ResolutionHeight + "_" + System.DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss") + ".png";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2 = __this->___FolderName_4;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral09FBD8AE36A6C03DA4A748EE49F1A75AFF36E79F);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral09FBD8AE36A6C03DA4A748EE49F1A75AFF36E79F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		int32_t* L_5 = (&__this->___ResolutionWidth_9);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		int32_t* L_9 = (&__this->___ResolutionHeight_10);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_13;
		L_13 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_2 = L_13;
		String_t* L_14;
		L_14 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_2), _stringLiteralA5874ECA88CAC577A30E613154995AFC2099C20F, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		String_t* L_16;
		L_16 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_15, NULL);
		// RenderTexture renderTexture = new RenderTexture(ResolutionWidth, ResolutionHeight, 24);
		int32_t L_17 = __this->___ResolutionWidth_9;
		int32_t L_18 = __this->___ResolutionHeight_10;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_19, L_17, L_18, ((int32_t)24), NULL);
		V_0 = L_19;
		// TargetCamera.targetTexture = renderTexture;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = __this->___TargetCamera_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = V_0;
		NullCheck(L_20);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_20, L_21, NULL);
		// Texture2D screenShot = new Texture2D(ResolutionWidth, ResolutionHeight, TextureFormat.RGB24, false);
		int32_t L_22 = __this->___ResolutionWidth_9;
		int32_t L_23 = __this->___ResolutionHeight_10;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_24, L_22, L_23, 3, (bool)0, NULL);
		// TargetCamera.Render();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___TargetCamera_8;
		NullCheck(L_25);
		Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509(L_25, NULL);
		// RenderTexture.active = renderTexture;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = V_0;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_26, NULL);
		// screenShot.ReadPixels(new Rect(0, 0, ResolutionWidth, ResolutionHeight), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = L_24;
		int32_t L_28 = __this->___ResolutionWidth_9;
		int32_t L_29 = __this->___ResolutionHeight_10;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_30;
		memset((&L_30), 0, sizeof(L_30));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_30), (0.0f), (0.0f), ((float)L_28), ((float)L_29), /*hidden argument*/NULL);
		NullCheck(L_27);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_27, L_30, 0, 0, NULL);
		// TargetCamera.targetTexture = null;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = __this->___TargetCamera_8;
		NullCheck(L_31);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_31, (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// RenderTexture.active = null;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// Destroy(renderTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_32, NULL);
		// byte[] bytes = screenShot.EncodeToPNG();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = ImageConversion_EncodeToPNG_m0FFFD0F0DC0EC22073BC937A5294067C57008391(L_27, NULL);
		V_1 = L_33;
		// System.IO.File.WriteAllBytes(savePath, bytes);
		String_t* L_34 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_1;
		File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668(L_34, L_35, NULL);
		// return savePath;
		return L_34;
	}
}
// System.Void MoreMountains.Tools.MMScreenshot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMScreenshot__ctor_mE3FF5956B830A7CB2907FB7D280BD241F66AC598 (MMScreenshot_t7D08F93DCDA47FD2D83BA0FD1E6F3965240CD0F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string FolderName = "Screenshots";
		__this->___FolderName_4 = _stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FolderName_4), (void*)_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093);
		// public KeyCode ScreenshotShortcut = KeyCode.K;
		__this->___ScreenshotShortcut_6 = ((int32_t)107);
		// public int GameViewSizeMultiplier = 3;
		__this->___GameViewSizeMultiplier_7 = 3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MoreMountains.Tools.MMTransformRandomizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTransformRandomizer_Awake_mA0412B3093D2CE09B459031A8338A91099C07183 (MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying && (AutoExecutionMode == AutoExecutionModes.OnAwake))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->___AutoExecutionMode_15;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		// Randomize();
		VirtualActionInvoker0::Invoke(7 /* System.Void MoreMountains.Tools.MMTransformRandomizer::Randomize() */, __this);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMTransformRandomizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTransformRandomizer_Start_m6C26005AD856130D86417F0D049700E526634B38 (MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying && (AutoExecutionMode == AutoExecutionModes.OnStart))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->___AutoExecutionMode_15;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		// Randomize();
		VirtualActionInvoker0::Invoke(7 /* System.Void MoreMountains.Tools.MMTransformRandomizer::Randomize() */, __this);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMTransformRandomizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTransformRandomizer_OnEnable_mB62FEEDDE5401FD2CA3FC0729F3117D78FB64A93 (MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying && (AutoExecutionMode == AutoExecutionModes.OnEnable))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->___AutoExecutionMode_15;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0016;
		}
	}
	{
		// Randomize();
		VirtualActionInvoker0::Invoke(7 /* System.Void MoreMountains.Tools.MMTransformRandomizer::Randomize() */, __this);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMTransformRandomizer::Randomize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTransformRandomizer_Randomize_m7F6B843D73FC8CADD1CFC725BAD0FE73DE7F70AE (MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6* __this, const RuntimeMethod* method) 
{
	{
		// ProcessRandomizePosition();
		VirtualActionInvoker0::Invoke(8 /* System.Void MoreMountains.Tools.MMTransformRandomizer::ProcessRandomizePosition() */, __this);
		// ProcessRandomizeRotation();
		VirtualActionInvoker0::Invoke(9 /* System.Void MoreMountains.Tools.MMTransformRandomizer::ProcessRandomizeRotation() */, __this);
		// ProcessRandomizeScale();
		VirtualActionInvoker0::Invoke(10 /* System.Void MoreMountains.Tools.MMTransformRandomizer::ProcessRandomizeScale() */, __this);
		// RemoveColliders();
		VirtualActionInvoker0::Invoke(11 /* System.Void MoreMountains.Tools.MMTransformRandomizer::RemoveColliders() */, __this);
		// Cleanup();
		VirtualActionInvoker0::Invoke(12 /* System.Void MoreMountains.Tools.MMTransformRandomizer::Cleanup() */, __this);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMTransformRandomizer::ProcessRandomizePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTransformRandomizer_ProcessRandomizePosition_mBECB3EFAB3447DEE70540842309E5DDFAD87FA62 (MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!RandomizePosition)
		bool L_0 = __this->___RandomizePosition_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Vector3 randomPosition = MMMaths.RandomVector3(MinRandomPosition, MaxRandomPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___MinRandomPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___MaxRandomPosition_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = MMMaths_RandomVector3_m8BF2BC215C0BA80178C7612D400A109CB7616695(L_1, L_2, NULL);
		V_0 = L_3;
		// this.transform.localPosition += randomPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_8, NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMTransformRandomizer::ProcessRandomizeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTransformRandomizer_ProcessRandomizeRotation_mB798F8C1DE486301C1B18CE9900DEB8E542AC510 (MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!RandomizeRotation)
		bool L_0 = __this->___RandomizeRotation_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Vector3 randomRotation = MMMaths.RandomVector3(MinRandomRotation, MaxRandomRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___MinRandomRotation_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___MaxRandomRotation_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = MMMaths_RandomVector3_m8BF2BC215C0BA80178C7612D400A109CB7616695(L_1, L_2, NULL);
		V_0 = L_3;
		// this.transform.localRotation = Quaternion.Euler(randomRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_5, NULL);
		NullCheck(L_4);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMTransformRandomizer::ProcessRandomizeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTransformRandomizer_ProcessRandomizeScale_mFF625E099D5B3A58CCB2B1CD598969BE5223E2FB (MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!RandomizeScale)
		bool L_0 = __this->___RandomizeScale_10;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Vector3 randomScale = MMMaths.RandomVector3(MinRandomScale, MaxRandomScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___MinRandomScale_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___MaxRandomScale_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = MMMaths_RandomVector3_m8BF2BC215C0BA80178C7612D400A109CB7616695(L_1, L_2, NULL);
		V_0 = L_3;
		// this.transform.localScale = randomScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMTransformRandomizer::RemoveColliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTransformRandomizer_RemoveColliders_mEE03C98F085631F554254B100CC14491451FAA9A (MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6* __this, const RuntimeMethod* method) 
{
	{
		// if (RemoveAllColliders)
		bool L_0 = __this->___RemoveAllColliders_14;
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMTransformRandomizer::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTransformRandomizer_Cleanup_m9971FFE075AA9F4CE3D3B899248D74EB29C976CC (MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6* __this, const RuntimeMethod* method) 
{
	{
		// if (AutoRemoveAfterRandomize)
		bool L_0 = __this->___AutoRemoveAfterRandomize_13;
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMTransformRandomizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTransformRandomizer__ctor_mAADE990DE96DA25C2EE68B705E431A47BE1CDED3 (MMTransformRandomizer_t5E06B4DA434FF49FAD0DAB2DCC1D5700EE12E9A6* __this, const RuntimeMethod* method) 
{
	{
		// public bool RandomizePosition = true;
		__this->___RandomizePosition_4 = (bool)1;
		// public bool RandomizeRotation = true;
		__this->___RandomizeRotation_7 = (bool)1;
		// public bool RandomizeScale = true;
		__this->___RandomizeScale_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MoreMountains.Tools.MMPanningTexture::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMPanningTexture_Start_m7CD1B83DFCA59E386757382D17D055471943332D (MMPanningTexture_t5D8D3857894363337711619730EDC1DA6A9C3E59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _renderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____renderer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_10), (void*)L_0);
		// if ((_renderer != null) && (!string.IsNullOrEmpty(SortingLayerName)))
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->____renderer_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_3 = __this->___SortingLayerName_6;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_0054;
		}
	}
	{
		// _renderer.sortingLayerName = SortingLayerName;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = __this->____renderer_10;
		String_t* L_6 = __this->___SortingLayerName_6;
		NullCheck(L_5);
		Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A(L_5, L_6, NULL);
		// _propertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_7 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_7, NULL);
		__this->____propertyBlock_13 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyBlock_13), (void*)L_7);
		// _renderer.GetPropertyBlock(_propertyBlock);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = __this->____renderer_10;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_9 = __this->____propertyBlock_13;
		NullCheck(L_8);
		Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA(L_8, L_9, NULL);
	}

IL_0054:
	{
		// _position.x = _renderer.sharedMaterials[MaterialIndex].GetVector(MaterialPropertyName).x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_10 = (&__this->____position_11);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11 = __this->____renderer_10;
		NullCheck(L_11);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_12;
		L_12 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_11, NULL);
		int32_t L_13 = __this->___MaterialIndex_8;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		String_t* L_16 = __this->___MaterialPropertyName_7;
		NullCheck(L_15);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17;
		L_17 = Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D(L_15, L_16, NULL);
		float L_18 = L_17.___x_1;
		L_10->___x_1 = L_18;
		// _position.y = _renderer.sharedMaterials[MaterialIndex].GetVector(MaterialPropertyName).y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_19 = (&__this->____position_11);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_20 = __this->____renderer_10;
		NullCheck(L_20);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_21;
		L_21 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_20, NULL);
		int32_t L_22 = __this->___MaterialIndex_8;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		String_t* L_25 = __this->___MaterialPropertyName_7;
		NullCheck(L_24);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
		L_26 = Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D(L_24, L_25, NULL);
		float L_27 = L_26.___y_2;
		L_19->___y_2 = L_27;
		// _rawImage = GetComponent<RawImage>();
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_28;
		L_28 = Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D(__this, Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		__this->____rawImage_9 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rawImage_9), (void*)L_28);
		// _speed = new Vector4(0f, 0f, Speed.x, Speed.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&__this->___Speed_5);
		float L_30 = L_29->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&__this->___Speed_5);
		float L_32 = L_31->___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_33), (0.0f), (0.0f), L_30, L_32, /*hidden argument*/NULL);
		__this->____speed_12 = L_33;
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMPanningTexture::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMPanningTexture_Update_m11011F4EA17EC7BA34967B05A8D902F6ACF0536C (MMPanningTexture_t5D8D3857894363337711619730EDC1DA6A9C3E59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!TextureShouldPan)
		bool L_0 = __this->___TextureShouldPan_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if ((_rawImage == null) && (_renderer == null))
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_1 = __this->____rawImage_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->____renderer_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		return;
	}

IL_0026:
	{
		// _speed.z = Speed.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5 = (&__this->____speed_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___Speed_5);
		float L_7 = L_6->___x_0;
		L_5->___z_3 = L_7;
		// _speed.w = Speed.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_8 = (&__this->____speed_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___Speed_5);
		float L_10 = L_9->___y_1;
		L_8->___w_4 = L_10;
		// _position += (_speed / 300) * Time.deltaTime;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = __this->____position_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = __this->____speed_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline(L_12, (300.0f), NULL);
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline(L_13, L_14, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		L_16 = Vector4_op_Addition_m5E7015CDA7DD1FCB4E488DE23C5DB959D7406843_inline(L_11, L_15, NULL);
		__this->____position_11 = L_16;
		// if (_position.z > 1.0f)
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_17 = (&__this->____position_11);
		float L_18 = L_17->___z_3;
		if ((!(((float)L_18) > ((float)(1.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		// _position.z -= 1.0f;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_19 = (&__this->____position_11);
		float* L_20 = (&L_19->___z_3);
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		*((float*)L_21) = (float)((float)il2cpp_codegen_subtract(L_22, (1.0f)));
	}

IL_00a3:
	{
		// if (_position.w > 1.0f)
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_23 = (&__this->____position_11);
		float L_24 = L_23->___w_4;
		if ((!(((float)L_24) > ((float)(1.0f)))))
		{
			goto IL_00c9;
		}
	}
	{
		// _position.w -= 1.0f;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_25 = (&__this->____position_11);
		float* L_26 = (&L_25->___w_4);
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		*((float*)L_27) = (float)((float)il2cpp_codegen_subtract(L_28, (1.0f)));
	}

IL_00c9:
	{
		// if (_renderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_29 = __this->____renderer_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		// _renderer.GetPropertyBlock(_propertyBlock);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_31 = __this->____renderer_10;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_32 = __this->____propertyBlock_13;
		NullCheck(L_31);
		Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA(L_31, L_32, NULL);
		// _propertyBlock.SetVector(MaterialPropertyName, _position);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_33 = __this->____propertyBlock_13;
		String_t* L_34 = __this->___MaterialPropertyName_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = __this->____position_11;
		NullCheck(L_33);
		MaterialPropertyBlock_SetVector_mB3D0FFCCDFF9D78447719F25DB8C1AFCB12B8BD5(L_33, L_34, L_35, NULL);
		// _renderer.SetPropertyBlock(_propertyBlock, MaterialIndex);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_36 = __this->____renderer_10;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_37 = __this->____propertyBlock_13;
		int32_t L_38 = __this->___MaterialIndex_8;
		NullCheck(L_36);
		Renderer_SetPropertyBlock_mCE0B215ACED38420979148A6B00496F07345162B(L_36, L_37, L_38, NULL);
	}

IL_0116:
	{
		// if (_rawImage != null)
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_39 = __this->____rawImage_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_39, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_40)
		{
			goto IL_013f;
		}
	}
	{
		// _rawImage.material.mainTextureOffset = _position;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_41 = __this->____rawImage_9;
		NullCheck(L_41);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42;
		L_42 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_41);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43 = __this->____position_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Vector4_op_Implicit_m2D6D6CC60982A88F7B77B5D0452F1E1652C412A2_inline(L_43, NULL);
		NullCheck(L_42);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_42, L_44, NULL);
	}

IL_013f:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMPanningTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMPanningTexture__ctor_mCC19AE7B742A0CCEA24AA5B61841173A1A0EA799 (MMPanningTexture_t5D8D3857894363337711619730EDC1DA6A9C3E59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02CD7E2E61B996F9027F40038E4C23574D2FD091);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69C1AD84F726C82B6C16775835016A0974CC767D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TextureShouldPan = true;
		__this->___TextureShouldPan_4 = (bool)1;
		// public Vector2 Speed = new Vector2(10,10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (10.0f), (10.0f), /*hidden argument*/NULL);
		__this->___Speed_5 = L_0;
		// public string SortingLayerName = "Above";
		__this->___SortingLayerName_6 = _stringLiteral69C1AD84F726C82B6C16775835016A0974CC767D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SortingLayerName_6), (void*)_stringLiteral69C1AD84F726C82B6C16775835016A0974CC767D);
		// public string MaterialPropertyName = "_MainTex_ST";
		__this->___MaterialPropertyName_7 = _stringLiteral02CD7E2E61B996F9027F40038E4C23574D2FD091;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MaterialPropertyName_7), (void*)_stringLiteral02CD7E2E61B996F9027F40038E4C23574D2FD091);
		// protected Vector4 _position = Vector4.one;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_get_one_m141F5123C4052CC703B41E5892A4AC26C59D36EE_inline(NULL);
		__this->____position_11 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Vector3 MoreMountains.Tools.MMConeOfVision::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MMConeOfVision_get_Center_mC05B505BC28C9E82E7FAA04536E32B43052A4AA9 (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Center { get { return this.transform.position + Offset;  } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___Offset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void MoreMountains.Tools.MMConeOfVision::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision_Awake_mAF6B1D670B40CEFA314A3B312ED29C2B7AEA8CC9 (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _visionMesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		__this->____visionMesh_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____visionMesh_19), (void*)L_0);
		// if (ShouldDrawMesh)
		bool L_1 = __this->___ShouldDrawMesh_14;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// VisionMeshFilter.mesh = _visionMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2 = __this->___VisionMeshFilter_18;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = __this->____visionMesh_19;
		NullCheck(L_2);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMConeOfVision::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision_LateUpdate_m56D15C5B8910632D5AFD998430AD6B73DF5CBEEC (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, const RuntimeMethod* method) 
{
	{
		// if ((Time.time - _lastScanTimestamp > ScanFrequencyInSeconds) && ShouldScanForTargets)
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_1 = __this->____lastScanTimestamp_24;
		float L_2 = __this->___ScanFrequencyInSeconds_12;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) > ((float)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		bool L_3 = __this->___ShouldScanForTargets_10;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// ScanForTargets();
		VirtualActionInvoker0::Invoke(7 /* System.Void MoreMountains.Tools.MMConeOfVision::ScanForTargets() */, __this);
	}

IL_0022:
	{
		// DrawMesh();
		VirtualActionInvoker0::Invoke(8 /* System.Void MoreMountains.Tools.MMConeOfVision::DrawMesh() */, __this);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMConeOfVision::SetDirectionAndAngles(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision_SetDirectionAndAngles_m02E7DE1372F1FFA5863AC03F5878B558ED1B01FA (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulerAngles1, const RuntimeMethod* method) 
{
	{
		// Direction = direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___direction0;
		__this->___Direction_7 = L_0;
		// EulerAngles = eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___eulerAngles1;
		__this->___EulerAngles_8 = L_1;
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMConeOfVision::ScanForTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision_ScanForTargets_m41F0E38F976498878B1CACDE9273A1F6D973F8A1 (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	int32_t V_1 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// _lastScanTimestamp = Time.time;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->____lastScanTimestamp_24 = L_0;
		// VisibleTargets.Clear();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___VisibleTargets_13;
		NullCheck(L_1);
		List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline(L_1, List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		// _targetsWithinDistance = Physics.OverlapSphere(Center, VisionRadius, TargetMask);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = MMConeOfVision_get_Center_mC05B505BC28C9E82E7FAA04536E32B43052A4AA9(__this, NULL);
		float L_3 = __this->___VisionRadius_5;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___TargetMask_11;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_4, NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6;
		L_6 = Physics_OverlapSphere_mC2AD00AA16FF7136EFA63E0670C8A24D4BBE0A36(L_2, L_3, L_5, NULL);
		__this->____targetsWithinDistance_20 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetsWithinDistance_20), (void*)L_6);
		// foreach (Collider collider in _targetsWithinDistance)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_7 = __this->____targetsWithinDistance_20;
		V_0 = L_7;
		V_1 = 0;
		goto IL_0137;
	}

IL_0046:
	{
		// foreach (Collider collider in _targetsWithinDistance)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		// _target = collider.transform;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = V_2;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		__this->____target_21 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_21), (void*)L_13);
		// _directionToTarget = (_target.position - Center).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->____target_21;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = MMConeOfVision_get_Center_mC05B505BC28C9E82E7FAA04536E32B43052A4AA9(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_15, L_16, NULL);
		V_3 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		__this->____directionToTarget_22 = L_18;
		// if (Vector3.Angle(Direction, _directionToTarget) < VisionAngle / 2f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___Direction_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->____directionToTarget_22;
		float L_21;
		L_21 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_19, L_20, NULL);
		float L_22 = __this->___VisionAngle_6;
		if ((!(((float)L_21) < ((float)((float)(L_22/(2.0f)))))))
		{
			goto IL_0133;
		}
	}
	{
		// _distanceToTarget = Vector3.Distance(Center, _target.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = MMConeOfVision_get_Center_mC05B505BC28C9E82E7FAA04536E32B43052A4AA9(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->____target_21;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26;
		L_26 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_23, L_25, NULL);
		__this->____distanceToTarget_23 = L_26;
		// bool duplicate = false;
		V_4 = (bool)0;
		// foreach(Transform visibleTarget in VisibleTargets)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_27 = __this->___VisibleTargets_13;
		NullCheck(L_27);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_28;
		L_28 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_27, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_5 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ec:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_5), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e1_1;
			}

IL_00ca_1:
			{
				// foreach(Transform visibleTarget in VisibleTargets)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
				L_29 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_5), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				// if (visibleTarget == _target)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->____target_21;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_31;
				L_31 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_29, L_30, NULL);
				if (!L_31)
				{
					goto IL_00e1_1;
				}
			}
			{
				// duplicate = true;
				V_4 = (bool)1;
			}

IL_00e1_1:
			{
				// foreach(Transform visibleTarget in VisibleTargets)
				bool L_32;
				L_32 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_5), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_00ca_1;
				}
			}
			{
				goto IL_00fa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fa:
	{
		// if ((!Physics.Raycast(Center, _directionToTarget, _distanceToTarget, ObstacleMask)) && !duplicate)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = MMConeOfVision_get_Center_mC05B505BC28C9E82E7FAA04536E32B43052A4AA9(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = __this->____directionToTarget_22;
		float L_35 = __this->____distanceToTarget_23;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_36 = __this->___ObstacleMask_4;
		int32_t L_37;
		L_37 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_36, NULL);
		bool L_38;
		L_38 = Physics_Raycast_mD4D68C5B2E8407DBF337DCC834C33C4F521ED5E7(L_33, L_34, L_35, L_37, NULL);
		if (L_38)
		{
			goto IL_0133;
		}
	}
	{
		bool L_39 = V_4;
		if (L_39)
		{
			goto IL_0133;
		}
	}
	{
		// VisibleTargets.Add(_target);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_40 = __this->___VisibleTargets_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->____target_21;
		NullCheck(L_40);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_40, L_41, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
	}

IL_0133:
	{
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0137:
	{
		// foreach (Collider collider in _targetsWithinDistance)
		int32_t L_43 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_44 = V_0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0046;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMConeOfVision::DrawMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision_DrawMesh_m784A733F88F3FA5E6FC02433BE1CB39F8823E2E0 (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	bool V_5 = false;
	MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (!ShouldDrawMesh)
		bool L_0 = __this->___ShouldDrawMesh_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// int steps = Mathf.RoundToInt(MeshDensity * VisionAngle);
		float L_1 = __this->___MeshDensity_15;
		float L_2 = __this->___VisionAngle_6;
		int32_t L_3;
		L_3 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		V_0 = L_3;
		// float stepsAngle = VisionAngle / steps;
		float L_4 = __this->___VisionAngle_6;
		int32_t L_5 = V_0;
		V_1 = ((float)(L_4/((float)L_5)));
		// _viewPoints.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = __this->____viewPoints_25;
		NullCheck(L_6);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_6, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// for (int i = 0; i <= steps; i++)
		V_3 = 0;
		goto IL_014e;
	}

IL_0038:
	{
		// float angle = stepsAngle * i + EulerAngles.y - VisionAngle / 2f;
		float L_7 = V_1;
		int32_t L_8 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___EulerAngles_8);
		float L_10 = L_9->___y_3;
		float L_11 = __this->___VisionAngle_6;
		V_4 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, ((float)L_8))), L_10)), ((float)(L_11/(2.0f)))));
		// _viewCast = RaycastAtAngle(angle);
		float L_12 = V_4;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_13;
		L_13 = MMConeOfVision_RaycastAtAngle_m2A52868599FA43E087AED3E5C074F02C6344688A(__this, L_12, NULL);
		__this->____viewCast_27 = L_13;
		// if (i > 0)
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0128;
		}
	}
	{
		// bool thresholdExceeded = Mathf.Abs(_oldViewCast.Distance - _viewCast.Distance) > EdgeThreshold;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_15 = (&__this->____oldViewCast_26);
		float L_16 = L_15->___Distance_2;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_17 = (&__this->____viewCast_27);
		float L_18 = L_17->___Distance_2;
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_subtract(L_16, L_18)));
		float L_20 = __this->___EdgeThreshold_17;
		V_5 = (bool)((((float)L_19) > ((float)L_20))? 1 : 0);
		// if ((_oldViewCast.Hit != _viewCast.Hit) || (_oldViewCast.Hit && _viewCast.Hit && thresholdExceeded))
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_21 = (&__this->____oldViewCast_26);
		bool L_22 = L_21->___Hit_0;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_23 = (&__this->____viewCast_27);
		bool L_24 = L_23->___Hit_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_24))))
		{
			goto IL_00ca;
		}
	}
	{
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_25 = (&__this->____oldViewCast_26);
		bool L_26 = L_25->___Hit_0;
		if (!L_26)
		{
			goto IL_00c4;
		}
	}
	{
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_27 = (&__this->____viewCast_27);
		bool L_28 = L_27->___Hit_0;
		G_B8_0 = ((int32_t)(L_28));
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B8_0 = 0;
	}

IL_00c5:
	{
		bool L_29 = V_5;
		if (!((int32_t)(G_B8_0&(int32_t)L_29)))
		{
			goto IL_0128;
		}
	}

IL_00ca:
	{
		// MeshEdgePosition edge = FindMeshEdgePosition(_oldViewCast, _viewCast);
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_30 = __this->____oldViewCast_26;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_31 = __this->____viewCast_27;
		MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB L_32;
		L_32 = MMConeOfVision_FindMeshEdgePosition_m79F5F4A9303575BD6988A27542D1BC18F49A074F(__this, L_30, L_31, NULL);
		V_6 = L_32;
		// if (edge.PointA != Vector3.zero)
		MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB L_33 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___PointA_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_36;
		L_36 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_34, L_35, NULL);
		if (!L_36)
		{
			goto IL_0103;
		}
	}
	{
		// _viewPoints.Add(edge.PointA);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_37 = __this->____viewPoints_25;
		MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB L_38 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = L_38.___PointA_0;
		NullCheck(L_37);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_37, L_39, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0103:
	{
		// if (edge.PointB != Vector3.zero)
		MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB L_40 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = L_40.___PointB_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_43;
		L_43 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_0128;
		}
	}
	{
		// _viewPoints.Add(edge.PointB);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_44 = __this->____viewPoints_25;
		MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB L_45 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = L_45.___PointB_1;
		NullCheck(L_44);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_44, L_46, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0128:
	{
		// _viewPoints.Add(_viewCast.Point);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_47 = __this->____viewPoints_25;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_48 = (&__this->____viewCast_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = L_48->___Point_1;
		NullCheck(L_47);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_47, L_49, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// _oldViewCast = _viewCast;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_50 = __this->____viewCast_27;
		__this->____oldViewCast_26 = L_50;
		// for (int i = 0; i <= steps; i++)
		int32_t L_51 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_014e:
	{
		// for (int i = 0; i <= steps; i++)
		int32_t L_52 = V_3;
		int32_t L_53 = V_0;
		if ((((int32_t)L_52) <= ((int32_t)L_53)))
		{
			goto IL_0038;
		}
	}
	{
		// int numberOfVertices = _viewPoints.Count + 1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_54 = __this->____viewPoints_25;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_54, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		// if (numberOfVertices != _numberOfVerticesLastTime)
		int32_t L_56 = V_2;
		int32_t L_57 = __this->____numberOfVerticesLastTime_35;
		if ((((int32_t)L_56) == ((int32_t)L_57)))
		{
			goto IL_0188;
		}
	}
	{
		// Array.Resize(ref _vertices, numberOfVertices);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_58 = (&__this->____vertices_28);
		int32_t L_59 = V_2;
		Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B(L_58, L_59, Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_RuntimeMethod_var);
		// Array.Resize(ref _triangles, (numberOfVertices - 2) * 3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_60 = (&__this->____triangles_29);
		int32_t L_61 = V_2;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98(L_60, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_61, 2)), 3)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var);
	}

IL_0188:
	{
		// _vertices[0] = Offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = __this->____vertices_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = __this->___Offset_9;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_63);
		// for (int i = 0; i < numberOfVertices - 1; i++)
		V_7 = 0;
		goto IL_0201;
	}

IL_019f:
	{
		// _vertices[i + 1] = this.transform.InverseTransformPoint(_viewPoints[i]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64 = __this->____vertices_28;
		int32_t L_65 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_67 = __this->____viewPoints_25;
		int32_t L_68 = V_7;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_67, L_68, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_66, L_69, NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_65, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_70);
		// if (i < numberOfVertices - 2)
		int32_t L_71 = V_7;
		int32_t L_72 = V_2;
		if ((((int32_t)L_71) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_72, 2)))))
		{
			goto IL_01fb;
		}
	}
	{
		// _triangles[i * 3] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->____triangles_29;
		int32_t L_74 = V_7;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_74, 3))), (int32_t)0);
		// _triangles[i * 3 + 1] = i + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = __this->____triangles_29;
		int32_t L_76 = V_7;
		int32_t L_77 = V_7;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_76, 3)), 1))), (int32_t)((int32_t)il2cpp_codegen_add(L_77, 1)));
		// _triangles[i * 3 + 2] = i + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = __this->____triangles_29;
		int32_t L_79 = V_7;
		int32_t L_80 = V_7;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_79, 3)), 2))), (int32_t)((int32_t)il2cpp_codegen_add(L_80, 2)));
	}

IL_01fb:
	{
		// for (int i = 0; i < numberOfVertices - 1; i++)
		int32_t L_81 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_0201:
	{
		// for (int i = 0; i < numberOfVertices - 1; i++)
		int32_t L_82 = V_7;
		int32_t L_83 = V_2;
		if ((((int32_t)L_82) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_83, 1)))))
		{
			goto IL_019f;
		}
	}
	{
		// _visionMesh.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_84 = __this->____visionMesh_19;
		NullCheck(L_84);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_84, NULL);
		// _visionMesh.vertices = _vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_85 = __this->____visionMesh_19;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86 = __this->____vertices_28;
		NullCheck(L_85);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_85, L_86, NULL);
		// _visionMesh.triangles = _triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_87 = __this->____visionMesh_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = __this->____triangles_29;
		NullCheck(L_87);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_87, L_88, NULL);
		// _visionMesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_89 = __this->____visionMesh_19;
		NullCheck(L_89);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_89, NULL);
		// _numberOfVerticesLastTime = numberOfVertices;
		int32_t L_90 = V_2;
		__this->____numberOfVerticesLastTime_35 = L_90;
		// }
		return;
	}
}
// MoreMountains.Tools.MMConeOfVision/MeshEdgePosition MoreMountains.Tools.MMConeOfVision::FindMeshEdgePosition(MoreMountains.Tools.MMConeOfVision/RaycastData,MoreMountains.Tools.MMConeOfVision/RaycastData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB MMConeOfVision_FindMeshEdgePosition_m79F5F4A9303575BD6988A27542D1BC18F49A074F (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D ___minimumViewCast0, RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D ___maximumViewCast1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// float minAngle = minimumViewCast.Angle;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_0 = ___minimumViewCast0;
		float L_1 = L_0.___Angle_3;
		V_0 = L_1;
		// float maxAngle = maximumViewCast.Angle;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_2 = ___maximumViewCast1;
		float L_3 = L_2.___Angle_3;
		V_1 = L_3;
		// _minPoint = minimumViewCast.Point;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_4 = ___minimumViewCast0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___Point_1;
		__this->____minPoint_30 = L_5;
		// _maxPoint = maximumViewCast.Point;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_6 = ___maximumViewCast1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___Point_1;
		__this->____maxPoint_31 = L_7;
		// for (int i = 0; i < EdgePrecision; i++)
		V_2 = 0;
		goto IL_0091;
	}

IL_002a:
	{
		// float angle = (minAngle + maxAngle) / 2;
		float L_8 = V_0;
		float L_9 = V_1;
		V_3 = ((float)(((float)il2cpp_codegen_add(L_8, L_9))/(2.0f)));
		// RaycastData newViewCast = RaycastAtAngle(angle);
		float L_10 = V_3;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_11;
		L_11 = MMConeOfVision_RaycastAtAngle_m2A52868599FA43E087AED3E5C074F02C6344688A(__this, L_10, NULL);
		V_4 = L_11;
		// bool thresholdExceeded = Mathf.Abs(minimumViewCast.Distance - newViewCast.Distance) > EdgeThreshold;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_12 = ___minimumViewCast0;
		float L_13 = L_12.___Distance_2;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_14 = V_4;
		float L_15 = L_14.___Distance_2;
		float L_16;
		L_16 = fabsf(((float)il2cpp_codegen_subtract(L_13, L_15)));
		float L_17 = __this->___EdgeThreshold_17;
		V_5 = (bool)((((float)L_16) > ((float)L_17))? 1 : 0);
		// if (newViewCast.Hit == minimumViewCast.Hit && !thresholdExceeded)
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_18 = V_4;
		bool L_19 = L_18.___Hit_0;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_20 = ___minimumViewCast0;
		bool L_21 = L_20.___Hit_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_21))))
		{
			goto IL_007e;
		}
	}
	{
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_007e;
		}
	}
	{
		// minAngle = angle;
		float L_23 = V_3;
		V_0 = L_23;
		// _minPoint = newViewCast.Point;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_24 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24.___Point_1;
		__this->____minPoint_30 = L_25;
		goto IL_008d;
	}

IL_007e:
	{
		// maxAngle = angle;
		float L_26 = V_3;
		V_1 = L_26;
		// _maxPoint = newViewCast.Point;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_27 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27.___Point_1;
		__this->____maxPoint_31 = L_28;
	}

IL_008d:
	{
		// for (int i = 0; i < EdgePrecision; i++)
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0091:
	{
		// for (int i = 0; i < EdgePrecision; i++)
		int32_t L_30 = V_2;
		int32_t L_31 = __this->___EdgePrecision_16;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_002a;
		}
	}
	{
		// return new MeshEdgePosition(_minPoint, _maxPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->____minPoint_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->____maxPoint_31;
		MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB L_34;
		memset((&L_34), 0, sizeof(L_34));
		MeshEdgePosition__ctor_m95FF14C5989F9FBCE45A649999A64712F47EEF4F((&L_34), L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}
}
// MoreMountains.Tools.MMConeOfVision/RaycastData MoreMountains.Tools.MMConeOfVision::RaycastAtAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D MMConeOfVision_RaycastAtAngle_m2A52868599FA43E087AED3E5C074F02C6344688A (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, float ___angle0, const RuntimeMethod* method) 
{
	{
		// _direction = MMMaths.DirectionFromAngle(angle, 0f);
		float L_0 = ___angle0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = MMMaths_DirectionFromAngle_mFDF6038399AC184E3C911335BA6F398B2D5E9BEB(L_0, (0.0f), NULL);
		__this->____direction_32 = L_1;
		// if (Physics.Raycast(Center, _direction, out _raycastAtAngleHit, VisionRadius, ObstacleMask))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = MMConeOfVision_get_Center_mC05B505BC28C9E82E7FAA04536E32B43052A4AA9(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____direction_32;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->____raycastAtAngleHit_34);
		float L_5 = __this->___VisionRadius_5;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = __this->___ObstacleMask_4;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_6, NULL);
		bool L_8;
		L_8 = Physics_Raycast_mE2B4DD419E8995D4086EA47457A6C36435A67F49(L_2, L_3, L_4, L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		// _returnRaycastData.Hit = true;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_9 = (&__this->____returnRaycastData_33);
		L_9->___Hit_0 = (bool)1;
		// _returnRaycastData.Point = _raycastAtAngleHit.point;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_10 = (&__this->____returnRaycastData_33);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_11 = (&__this->____raycastAtAngleHit_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_11, NULL);
		L_10->___Point_1 = L_12;
		// _returnRaycastData.Distance = _raycastAtAngleHit.distance;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_13 = (&__this->____returnRaycastData_33);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_14 = (&__this->____raycastAtAngleHit_34);
		float L_15;
		L_15 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78(L_14, NULL);
		L_13->___Distance_2 = L_15;
		// _returnRaycastData.Angle = angle;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_16 = (&__this->____returnRaycastData_33);
		float L_17 = ___angle0;
		L_16->___Angle_3 = L_17;
		goto IL_00d1;
	}

IL_0081:
	{
		// _returnRaycastData.Hit = false;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_18 = (&__this->____returnRaycastData_33);
		L_18->___Hit_0 = (bool)0;
		// _returnRaycastData.Point = Center + _direction * VisionRadius;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_19 = (&__this->____returnRaycastData_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = MMConeOfVision_get_Center_mC05B505BC28C9E82E7FAA04536E32B43052A4AA9(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->____direction_32;
		float L_22 = __this->___VisionRadius_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_23, NULL);
		L_19->___Point_1 = L_24;
		// _returnRaycastData.Distance = VisionRadius;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_25 = (&__this->____returnRaycastData_33);
		float L_26 = __this->___VisionRadius_5;
		L_25->___Distance_2 = L_26;
		// _returnRaycastData.Angle = angle;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* L_27 = (&__this->____returnRaycastData_33);
		float L_28 = ___angle0;
		L_27->___Angle_3 = L_28;
	}

IL_00d1:
	{
		// return _returnRaycastData;
		RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D L_29 = __this->____returnRaycastData_33;
		return L_29;
	}
}
// System.Void MoreMountains.Tools.MMConeOfVision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision__ctor_m1225A0687E1E651B769CED1F46DA40692025D332 (MMConeOfVision_t2418C5AD8CC1D53B2C3576229C77A3497856609A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float VisionRadius = 5f;
		__this->___VisionRadius_5 = (5.0f);
		// public float VisionAngle = 20f;
		__this->___VisionAngle_6 = (20.0f);
		// public bool ShouldScanForTargets = true;
		__this->___ShouldScanForTargets_10 = (bool)1;
		// public float ScanFrequencyInSeconds = 1f;
		__this->___ScanFrequencyInSeconds_12 = (1.0f);
		// public List<Transform> VisibleTargets = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___VisibleTargets_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VisibleTargets_13), (void*)L_0);
		// public bool ShouldDrawMesh = true;
		__this->___ShouldDrawMesh_14 = (bool)1;
		// public float MeshDensity = 0.2f;
		__this->___MeshDensity_15 = (0.200000003f);
		// public int EdgePrecision = 3;
		__this->___EdgePrecision_16 = 3;
		// public float EdgeThreshold = 0.5f;
		__this->___EdgeThreshold_17 = (0.5f);
		// protected List<Vector3> _viewPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->____viewPoints_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____viewPoints_25), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Conversion methods for marshalling of: MoreMountains.Tools.MMConeOfVision/RaycastData
IL2CPP_EXTERN_C void RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshal_pinvoke(const RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D& unmarshaled, RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshaled_pinvoke& marshaled)
{
	marshaled.___Hit_0 = static_cast<int32_t>(unmarshaled.___Hit_0);
	marshaled.___Point_1 = unmarshaled.___Point_1;
	marshaled.___Distance_2 = unmarshaled.___Distance_2;
	marshaled.___Angle_3 = unmarshaled.___Angle_3;
}
IL2CPP_EXTERN_C void RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshal_pinvoke_back(const RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshaled_pinvoke& marshaled, RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D& unmarshaled)
{
	bool unmarshaledHit_temp_0 = false;
	unmarshaledHit_temp_0 = static_cast<bool>(marshaled.___Hit_0);
	unmarshaled.___Hit_0 = unmarshaledHit_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledPoint_temp_1;
	memset((&unmarshaledPoint_temp_1), 0, sizeof(unmarshaledPoint_temp_1));
	unmarshaledPoint_temp_1 = marshaled.___Point_1;
	unmarshaled.___Point_1 = unmarshaledPoint_temp_1;
	float unmarshaledDistance_temp_2 = 0.0f;
	unmarshaledDistance_temp_2 = marshaled.___Distance_2;
	unmarshaled.___Distance_2 = unmarshaledDistance_temp_2;
	float unmarshaledAngle_temp_3 = 0.0f;
	unmarshaledAngle_temp_3 = marshaled.___Angle_3;
	unmarshaled.___Angle_3 = unmarshaledAngle_temp_3;
}
// Conversion method for clean up from marshalling of: MoreMountains.Tools.MMConeOfVision/RaycastData
IL2CPP_EXTERN_C void RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshal_pinvoke_cleanup(RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: MoreMountains.Tools.MMConeOfVision/RaycastData
IL2CPP_EXTERN_C void RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshal_com(const RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D& unmarshaled, RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshaled_com& marshaled)
{
	marshaled.___Hit_0 = static_cast<int32_t>(unmarshaled.___Hit_0);
	marshaled.___Point_1 = unmarshaled.___Point_1;
	marshaled.___Distance_2 = unmarshaled.___Distance_2;
	marshaled.___Angle_3 = unmarshaled.___Angle_3;
}
IL2CPP_EXTERN_C void RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshal_com_back(const RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshaled_com& marshaled, RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D& unmarshaled)
{
	bool unmarshaledHit_temp_0 = false;
	unmarshaledHit_temp_0 = static_cast<bool>(marshaled.___Hit_0);
	unmarshaled.___Hit_0 = unmarshaledHit_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledPoint_temp_1;
	memset((&unmarshaledPoint_temp_1), 0, sizeof(unmarshaledPoint_temp_1));
	unmarshaledPoint_temp_1 = marshaled.___Point_1;
	unmarshaled.___Point_1 = unmarshaledPoint_temp_1;
	float unmarshaledDistance_temp_2 = 0.0f;
	unmarshaledDistance_temp_2 = marshaled.___Distance_2;
	unmarshaled.___Distance_2 = unmarshaledDistance_temp_2;
	float unmarshaledAngle_temp_3 = 0.0f;
	unmarshaledAngle_temp_3 = marshaled.___Angle_3;
	unmarshaled.___Angle_3 = unmarshaledAngle_temp_3;
}
// Conversion method for clean up from marshalling of: MoreMountains.Tools.MMConeOfVision/RaycastData
IL2CPP_EXTERN_C void RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshal_com_cleanup(RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D_marshaled_com& marshaled)
{
}
// System.Void MoreMountains.Tools.MMConeOfVision/RaycastData::.ctor(System.Boolean,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData__ctor_m0857108C7BAE008A36D9259914DEA7517E28F309 (RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* __this, bool ___hit0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, float ___distance2, float ___angle3, const RuntimeMethod* method) 
{
	{
		// Hit = hit;
		bool L_0 = ___hit0;
		__this->___Hit_0 = L_0;
		// Point = point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___point1;
		__this->___Point_1 = L_1;
		// Distance = distance;
		float L_2 = ___distance2;
		__this->___Distance_2 = L_2;
		// Angle = angle;
		float L_3 = ___angle3;
		__this->___Angle_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastData__ctor_m0857108C7BAE008A36D9259914DEA7517E28F309_AdjustorThunk (RuntimeObject* __this, bool ___hit0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, float ___distance2, float ___angle3, const RuntimeMethod* method)
{
	RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3908FA2B8AB341FE1C4C310F31B13D079F11A29D*>(__this + _offset);
	RaycastData__ctor_m0857108C7BAE008A36D9259914DEA7517E28F309(_thisAdjusted, ___hit0, ___point1, ___distance2, ___angle3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoreMountains.Tools.MMConeOfVision/MeshEdgePosition::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEdgePosition__ctor_m95FF14C5989F9FBCE45A649999A64712F47EEF4F (MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointA0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointB1, const RuntimeMethod* method) 
{
	{
		// PointA = pointA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pointA0;
		__this->___PointA_0 = L_0;
		// PointB = pointB;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pointB1;
		__this->___PointB_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MeshEdgePosition__ctor_m95FF14C5989F9FBCE45A649999A64712F47EEF4F_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointA0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointB1, const RuntimeMethod* method)
{
	MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshEdgePosition_tE5EFCBBEEC5FA8628F1743DEB0ED299650C274BB*>(__this + _offset);
	MeshEdgePosition__ctor_m95FF14C5989F9FBCE45A649999A64712F47EEF4F(_thisAdjusted, ___pointA0, ___pointB1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoreMountains.Tools.MMConeOfVision2D::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision2D_Awake_m9DF593B59277210628518D4A59C991A386062CA6 (MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _visionMesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		__this->____visionMesh_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____visionMesh_19), (void*)L_0);
		// Direction = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		__this->___Direction_8 = L_1;
		// if (ShouldDrawMesh)
		bool L_2 = __this->___ShouldDrawMesh_14;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// VisionMeshFilter.mesh = _visionMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3 = __this->___VisionMeshFilter_18;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = __this->____visionMesh_19;
		NullCheck(L_3);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_3, L_4, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMConeOfVision2D::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision2D_LateUpdate_mF05BE35620700BCC0BB394A0BD7376B933CE16AF (MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5* __this, const RuntimeMethod* method) 
{
	{
		// if ((Time.time - _lastScanTimestamp > ScanFrequencyInSeconds) && ShouldScanForTargets)
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_1 = __this->____lastScanTimestamp_24;
		float L_2 = __this->___ScanFrequencyInSeconds_12;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) > ((float)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		bool L_3 = __this->___ShouldScanForTargets_10;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// ScanForTargets();
		VirtualActionInvoker0::Invoke(7 /* System.Void MoreMountains.Tools.MMConeOfVision2D::ScanForTargets() */, __this);
	}

IL_0022:
	{
		// DrawMesh();
		VirtualActionInvoker0::Invoke(8 /* System.Void MoreMountains.Tools.MMConeOfVision2D::DrawMesh() */, __this);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMConeOfVision2D::SetDirectionAndAngles(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision2D_SetDirectionAndAngles_mCCD31045AEFC221F6B0C57384BF3F88180900C21 (MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulerAngles1, const RuntimeMethod* method) 
{
	{
		// Direction = direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___direction0;
		__this->___Direction_8 = L_0;
		// EulerAngles = eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___eulerAngles1;
		__this->___EulerAngles_9 = L_1;
		// EulerAngles.y += AngleOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___EulerAngles_9);
		float* L_3 = (&L_2->___y_3);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		float L_6 = __this->___AngleOffset_7;
		*((float*)L_4) = (float)((float)il2cpp_codegen_add(L_5, L_6));
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMConeOfVision2D::ScanForTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision2D_ScanForTargets_m7B670C7A44334CF43522F6C4D7CFBEA2B1E3F790 (MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_0 = NULL;
	int32_t V_1 = 0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// _lastScanTimestamp = Time.time;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->____lastScanTimestamp_24 = L_0;
		// VisibleTargets.Clear();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___VisibleTargets_13;
		NullCheck(L_1);
		List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline(L_1, List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		// _targetsWithinDistance = Physics2D.OverlapCircleAll(this.transform.position, VisionRadius, TargetMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		float L_5 = __this->___VisionRadius_5;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = __this->___TargetMask_11;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_8;
		L_8 = Physics2D_OverlapCircleAll_m77495421E1C76DE3CE525EC53DE746786BB8AEBD(L_4, L_5, L_7, NULL);
		__this->____targetsWithinDistance_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetsWithinDistance_20), (void*)L_8);
		// foreach (Collider2D collider in _targetsWithinDistance)
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_9 = __this->____targetsWithinDistance_20;
		V_0 = L_9;
		V_1 = 0;
		goto IL_0122;
	}

IL_0050:
	{
		// foreach (Collider2D collider in _targetsWithinDistance)
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		// _target = collider.transform;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_14 = V_2;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		__this->____target_21 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_21), (void*)L_15);
		// _directionToTarget = (_target.position - this.transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->____target_21;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_17, L_19, NULL);
		V_3 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		__this->____directionToTarget_22 = L_21;
		// if (Vector3.Angle(Direction, _directionToTarget) < VisionAngle / 2f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___Direction_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->____directionToTarget_22;
		float L_24;
		L_24 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_22, L_23, NULL);
		float L_25 = __this->___VisionAngle_6;
		if ((!(((float)L_24) < ((float)((float)(L_25/(2.0f)))))))
		{
			goto IL_011e;
		}
	}
	{
		// _distanceToTarget = Vector3.Distance(this.transform.position, _target.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->____target_21;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30;
		L_30 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_27, L_29, NULL);
		__this->____distanceToTarget_23 = L_30;
		// _scanForTargetsHit2D = Physics2D.Raycast(this.transform.position, _directionToTarget, _distanceToTarget, ObstacleMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = __this->____directionToTarget_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_34, NULL);
		float L_36 = __this->____distanceToTarget_23;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_37 = __this->___ObstacleMask_4;
		int32_t L_38;
		L_38 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_39;
		L_39 = Physics2D_Raycast_m6B89CCCAF549D1917B95F663E007382899E66BA7(L_33, L_35, L_36, L_38, NULL);
		__this->____scanForTargetsHit2D_25 = L_39;
		// if (!_scanForTargetsHit2D)
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_40 = __this->____scanForTargetsHit2D_25;
		bool L_41;
		L_41 = RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5(L_40, NULL);
		if (L_41)
		{
			goto IL_011e;
		}
	}
	{
		// VisibleTargets.Add(_target);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_42 = __this->___VisibleTargets_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = __this->____target_21;
		NullCheck(L_42);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_42, L_43, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
	}

IL_011e:
	{
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0122:
	{
		// foreach (Collider2D collider in _targetsWithinDistance)
		int32_t L_45 = V_1;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_46 = V_0;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMConeOfVision2D::DrawMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision2D_DrawMesh_m35795600B60F2B6785060C50E76F5555DBFAAA36 (MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	bool V_5 = false;
	MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (!ShouldDrawMesh)
		bool L_0 = __this->___ShouldDrawMesh_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// int steps = Mathf.RoundToInt(MeshDensity * VisionAngle);
		float L_1 = __this->___MeshDensity_15;
		float L_2 = __this->___VisionAngle_6;
		int32_t L_3;
		L_3 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		V_0 = L_3;
		// float stepsAngle = VisionAngle / steps;
		float L_4 = __this->___VisionAngle_6;
		int32_t L_5 = V_0;
		V_1 = ((float)(L_4/((float)L_5)));
		// _viewPoints.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = __this->____viewPoints_26;
		NullCheck(L_6);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_6, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// for (int i = 0; i <= steps; i++)
		V_3 = 0;
		goto IL_014e;
	}

IL_0038:
	{
		// float angle = stepsAngle * i + EulerAngles.y - VisionAngle / 2f;
		float L_7 = V_1;
		int32_t L_8 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___EulerAngles_9);
		float L_10 = L_9->___y_3;
		float L_11 = __this->___VisionAngle_6;
		V_4 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, ((float)L_8))), L_10)), ((float)(L_11/(2.0f)))));
		// _viewCast = RaycastAtAngle(angle);
		float L_12 = V_4;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_13;
		L_13 = MMConeOfVision2D_RaycastAtAngle_mBF3D98D3D391A51B5F300E0F5066ED5361A8A052(__this, L_12, NULL);
		__this->____viewCast_28 = L_13;
		// if (i > 0)
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0128;
		}
	}
	{
		// bool thresholdExceeded = Mathf.Abs(_oldViewCast.Distance - _viewCast.Distance) > EdgeThreshold;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_15 = (&__this->____oldViewCast_27);
		float L_16 = L_15->___Distance_2;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_17 = (&__this->____viewCast_28);
		float L_18 = L_17->___Distance_2;
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_subtract(L_16, L_18)));
		float L_20 = __this->___EdgeThreshold_17;
		V_5 = (bool)((((float)L_19) > ((float)L_20))? 1 : 0);
		// if ((_oldViewCast.Hit != _viewCast.Hit) || (_oldViewCast.Hit && _viewCast.Hit && thresholdExceeded))
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_21 = (&__this->____oldViewCast_27);
		bool L_22 = L_21->___Hit_0;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_23 = (&__this->____viewCast_28);
		bool L_24 = L_23->___Hit_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_24))))
		{
			goto IL_00ca;
		}
	}
	{
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_25 = (&__this->____oldViewCast_27);
		bool L_26 = L_25->___Hit_0;
		if (!L_26)
		{
			goto IL_00c4;
		}
	}
	{
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_27 = (&__this->____viewCast_28);
		bool L_28 = L_27->___Hit_0;
		G_B8_0 = ((int32_t)(L_28));
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B8_0 = 0;
	}

IL_00c5:
	{
		bool L_29 = V_5;
		if (!((int32_t)(G_B8_0&(int32_t)L_29)))
		{
			goto IL_0128;
		}
	}

IL_00ca:
	{
		// MeshEdgePosition edge = FindMeshEdgePosition(_oldViewCast, _viewCast);
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_30 = __this->____oldViewCast_27;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_31 = __this->____viewCast_28;
		MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4 L_32;
		L_32 = MMConeOfVision2D_FindMeshEdgePosition_m6099B81B014D5C3A5AFF125CA7F44B314DAB2680(__this, L_30, L_31, NULL);
		V_6 = L_32;
		// if (edge.PointA != Vector3.zero)
		MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4 L_33 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___PointA_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_36;
		L_36 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_34, L_35, NULL);
		if (!L_36)
		{
			goto IL_0103;
		}
	}
	{
		// _viewPoints.Add(edge.PointA);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_37 = __this->____viewPoints_26;
		MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4 L_38 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = L_38.___PointA_0;
		NullCheck(L_37);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_37, L_39, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0103:
	{
		// if (edge.PointB != Vector3.zero)
		MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4 L_40 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = L_40.___PointB_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_43;
		L_43 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_0128;
		}
	}
	{
		// _viewPoints.Add(edge.PointB);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_44 = __this->____viewPoints_26;
		MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4 L_45 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = L_45.___PointB_1;
		NullCheck(L_44);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_44, L_46, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0128:
	{
		// _viewPoints.Add(_viewCast.Point);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_47 = __this->____viewPoints_26;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_48 = (&__this->____viewCast_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = L_48->___Point_1;
		NullCheck(L_47);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_47, L_49, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// _oldViewCast = _viewCast;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_50 = __this->____viewCast_28;
		__this->____oldViewCast_27 = L_50;
		// for (int i = 0; i <= steps; i++)
		int32_t L_51 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_014e:
	{
		// for (int i = 0; i <= steps; i++)
		int32_t L_52 = V_3;
		int32_t L_53 = V_0;
		if ((((int32_t)L_52) <= ((int32_t)L_53)))
		{
			goto IL_0038;
		}
	}
	{
		// int numberOfVertices = _viewPoints.Count + 1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_54 = __this->____viewPoints_26;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_54, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		// if (numberOfVertices != _numberOfVerticesLastTime)
		int32_t L_56 = V_2;
		int32_t L_57 = __this->____numberOfVerticesLastTime_36;
		if ((((int32_t)L_56) == ((int32_t)L_57)))
		{
			goto IL_0188;
		}
	}
	{
		// Array.Resize(ref _vertices, numberOfVertices);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_58 = (&__this->____vertices_29);
		int32_t L_59 = V_2;
		Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B(L_58, L_59, Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_RuntimeMethod_var);
		// Array.Resize(ref _triangles, (numberOfVertices - 2) * 3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_60 = (&__this->____triangles_30);
		int32_t L_61 = V_2;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98(L_60, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_61, 2)), 3)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var);
	}

IL_0188:
	{
		// _vertices[0].x = 0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = __this->____vertices_29;
		NullCheck(L_62);
		((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_2 = (0.0f);
		// _vertices[0].y = 0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_63 = __this->____vertices_29;
		NullCheck(L_63);
		((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_3 = (0.0f);
		// _vertices[0].z = 0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64 = __this->____vertices_29;
		NullCheck(L_64);
		((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___z_4 = (0.0f);
		// for (int i = 0; i < numberOfVertices - 1; i++)
		V_7 = 0;
		goto IL_0231;
	}

IL_01cf:
	{
		// _vertices[i + 1] = this.transform.InverseTransformPoint(_viewPoints[i]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_65 = __this->____vertices_29;
		int32_t L_66 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_68 = __this->____viewPoints_26;
		int32_t L_69 = V_7;
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_68, L_69, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_67, L_70, NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_66, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_71);
		// if (i < numberOfVertices - 2)
		int32_t L_72 = V_7;
		int32_t L_73 = V_2;
		if ((((int32_t)L_72) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_73, 2)))))
		{
			goto IL_022b;
		}
	}
	{
		// _triangles[i * 3] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = __this->____triangles_30;
		int32_t L_75 = V_7;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_75, 3))), (int32_t)0);
		// _triangles[i * 3 + 1] = i + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = __this->____triangles_30;
		int32_t L_77 = V_7;
		int32_t L_78 = V_7;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_77, 3)), 1))), (int32_t)((int32_t)il2cpp_codegen_add(L_78, 1)));
		// _triangles[i * 3 + 2] = i + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = __this->____triangles_30;
		int32_t L_80 = V_7;
		int32_t L_81 = V_7;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_80, 3)), 2))), (int32_t)((int32_t)il2cpp_codegen_add(L_81, 2)));
	}

IL_022b:
	{
		// for (int i = 0; i < numberOfVertices - 1; i++)
		int32_t L_82 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_0231:
	{
		// for (int i = 0; i < numberOfVertices - 1; i++)
		int32_t L_83 = V_7;
		int32_t L_84 = V_2;
		if ((((int32_t)L_83) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_84, 1)))))
		{
			goto IL_01cf;
		}
	}
	{
		// _visionMesh.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_85 = __this->____visionMesh_19;
		NullCheck(L_85);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_85, NULL);
		// _visionMesh.vertices = _vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_86 = __this->____visionMesh_19;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_87 = __this->____vertices_29;
		NullCheck(L_86);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_86, L_87, NULL);
		// _visionMesh.triangles = _triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_88 = __this->____visionMesh_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____triangles_30;
		NullCheck(L_88);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_88, L_89, NULL);
		// _visionMesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_90 = __this->____visionMesh_19;
		NullCheck(L_90);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_90, NULL);
		// _numberOfVerticesLastTime = numberOfVertices;
		int32_t L_91 = V_2;
		__this->____numberOfVerticesLastTime_36 = L_91;
		// }
		return;
	}
}
// MoreMountains.Tools.MMConeOfVision2D/MeshEdgePosition MoreMountains.Tools.MMConeOfVision2D::FindMeshEdgePosition(MoreMountains.Tools.MMConeOfVision2D/RaycastData,MoreMountains.Tools.MMConeOfVision2D/RaycastData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4 MMConeOfVision2D_FindMeshEdgePosition_m6099B81B014D5C3A5AFF125CA7F44B314DAB2680 (MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5* __this, RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B ___minimumViewCast0, RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B ___maximumViewCast1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// float minAngle = minimumViewCast.Angle;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_0 = ___minimumViewCast0;
		float L_1 = L_0.___Angle_3;
		V_0 = L_1;
		// float maxAngle = maximumViewCast.Angle;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_2 = ___maximumViewCast1;
		float L_3 = L_2.___Angle_3;
		V_1 = L_3;
		// _minPoint = minimumViewCast.Point;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_4 = ___minimumViewCast0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___Point_1;
		__this->____minPoint_31 = L_5;
		// _maxPoint = maximumViewCast.Point;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_6 = ___maximumViewCast1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___Point_1;
		__this->____maxPoint_32 = L_7;
		// for (int i = 0; i < EdgePrecision; i++)
		V_2 = 0;
		goto IL_0091;
	}

IL_002a:
	{
		// float angle = (minAngle + maxAngle) / 2;
		float L_8 = V_0;
		float L_9 = V_1;
		V_3 = ((float)(((float)il2cpp_codegen_add(L_8, L_9))/(2.0f)));
		// RaycastData newViewCast = RaycastAtAngle(angle);
		float L_10 = V_3;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_11;
		L_11 = MMConeOfVision2D_RaycastAtAngle_mBF3D98D3D391A51B5F300E0F5066ED5361A8A052(__this, L_10, NULL);
		V_4 = L_11;
		// bool thresholdExceeded = Mathf.Abs(minimumViewCast.Distance - newViewCast.Distance) > EdgeThreshold;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_12 = ___minimumViewCast0;
		float L_13 = L_12.___Distance_2;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_14 = V_4;
		float L_15 = L_14.___Distance_2;
		float L_16;
		L_16 = fabsf(((float)il2cpp_codegen_subtract(L_13, L_15)));
		float L_17 = __this->___EdgeThreshold_17;
		V_5 = (bool)((((float)L_16) > ((float)L_17))? 1 : 0);
		// if (newViewCast.Hit == minimumViewCast.Hit && !thresholdExceeded)
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_18 = V_4;
		bool L_19 = L_18.___Hit_0;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_20 = ___minimumViewCast0;
		bool L_21 = L_20.___Hit_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_21))))
		{
			goto IL_007e;
		}
	}
	{
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_007e;
		}
	}
	{
		// minAngle = angle;
		float L_23 = V_3;
		V_0 = L_23;
		// _minPoint = newViewCast.Point;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_24 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24.___Point_1;
		__this->____minPoint_31 = L_25;
		goto IL_008d;
	}

IL_007e:
	{
		// maxAngle = angle;
		float L_26 = V_3;
		V_1 = L_26;
		// _maxPoint = newViewCast.Point;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_27 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27.___Point_1;
		__this->____maxPoint_32 = L_28;
	}

IL_008d:
	{
		// for (int i = 0; i < EdgePrecision; i++)
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0091:
	{
		// for (int i = 0; i < EdgePrecision; i++)
		int32_t L_30 = V_2;
		int32_t L_31 = __this->___EdgePrecision_16;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_002a;
		}
	}
	{
		// return new MeshEdgePosition(_minPoint, _maxPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->____minPoint_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->____maxPoint_32;
		MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4 L_34;
		memset((&L_34), 0, sizeof(L_34));
		MeshEdgePosition__ctor_m578B2958BBD7AB0D4A16F1F7D96CB6BE382DE131((&L_34), L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}
}
// MoreMountains.Tools.MMConeOfVision2D/RaycastData MoreMountains.Tools.MMConeOfVision2D::RaycastAtAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B MMConeOfVision2D_RaycastAtAngle_mBF3D98D3D391A51B5F300E0F5066ED5361A8A052 (MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5* __this, float ___angle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _direction = MMMaths.DirectionFromAngle2D(angle, 0f);
		float L_0 = ___angle0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = MMMaths_DirectionFromAngle2D_mFC5C70A35A7E1BB443C48FE2A3D0AE9B54526B25(L_0, (0.0f), NULL);
		__this->____direction_33 = L_1;
		// _raycastAtAngleHit2D = Physics2D.Raycast(this.transform.position, _direction, VisionRadius, ObstacleMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->____direction_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		float L_7 = __this->___VisionRadius_5;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8 = __this->___ObstacleMask_4;
		int32_t L_9;
		L_9 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_10;
		L_10 = Physics2D_Raycast_m6B89CCCAF549D1917B95F663E007382899E66BA7(L_4, L_6, L_7, L_9, NULL);
		__this->____raycastAtAngleHit2D_35 = L_10;
		// if (_raycastAtAngleHit2D)
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_11 = __this->____raycastAtAngleHit2D_35;
		bool L_12;
		L_12 = RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5(L_11, NULL);
		if (!L_12)
		{
			goto IL_00a0;
		}
	}
	{
		// _returnRaycastData.Hit = true;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_13 = (&__this->____returnRaycastData_34);
		L_13->___Hit_0 = (bool)1;
		// _returnRaycastData.Point = _raycastAtAngleHit2D.point;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_14 = (&__this->____returnRaycastData_34);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_15 = (&__this->____raycastAtAngleHit2D_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_16, NULL);
		L_14->___Point_1 = L_17;
		// _returnRaycastData.Distance = _raycastAtAngleHit2D.distance;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_18 = (&__this->____returnRaycastData_34);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_19 = (&__this->____raycastAtAngleHit2D_35);
		float L_20;
		L_20 = RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613(L_19, NULL);
		L_18->___Distance_2 = L_20;
		// _returnRaycastData.Angle = angle;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_21 = (&__this->____returnRaycastData_34);
		float L_22 = ___angle0;
		L_21->___Angle_3 = L_22;
		goto IL_00f5;
	}

IL_00a0:
	{
		// _returnRaycastData.Hit = false;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_23 = (&__this->____returnRaycastData_34);
		L_23->___Hit_0 = (bool)0;
		// _returnRaycastData.Point = this.transform.position + _direction * VisionRadius;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_24 = (&__this->____returnRaycastData_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->____direction_33;
		float L_28 = __this->___VisionRadius_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_26, L_29, NULL);
		L_24->___Point_1 = L_30;
		// _returnRaycastData.Distance = VisionRadius;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_31 = (&__this->____returnRaycastData_34);
		float L_32 = __this->___VisionRadius_5;
		L_31->___Distance_2 = L_32;
		// _returnRaycastData.Angle = angle;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* L_33 = (&__this->____returnRaycastData_34);
		float L_34 = ___angle0;
		L_33->___Angle_3 = L_34;
	}

IL_00f5:
	{
		// return _returnRaycastData;
		RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B L_35 = __this->____returnRaycastData_34;
		return L_35;
	}
}
// System.Void MoreMountains.Tools.MMConeOfVision2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMConeOfVision2D__ctor_mD522762A48BB63A8D48C744A9366CD4BFDFDA20B (MMConeOfVision2D_t8B3B0017C82AE45FB8DA5EF4651E845A0F8567E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float VisionRadius = 5f;
		__this->___VisionRadius_5 = (5.0f);
		// public float VisionAngle = 20f;
		__this->___VisionAngle_6 = (20.0f);
		// public bool ShouldScanForTargets = true;
		__this->___ShouldScanForTargets_10 = (bool)1;
		// public float ScanFrequencyInSeconds = 1f;
		__this->___ScanFrequencyInSeconds_12 = (1.0f);
		// public List<Transform> VisibleTargets = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___VisibleTargets_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VisibleTargets_13), (void*)L_0);
		// public bool ShouldDrawMesh = true;
		__this->___ShouldDrawMesh_14 = (bool)1;
		// public float MeshDensity = 0.2f;
		__this->___MeshDensity_15 = (0.200000003f);
		// public int EdgePrecision = 3;
		__this->___EdgePrecision_16 = 3;
		// public float EdgeThreshold = 0.5f;
		__this->___EdgeThreshold_17 = (0.5f);
		// protected List<Vector3> _viewPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->____viewPoints_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____viewPoints_26), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Conversion methods for marshalling of: MoreMountains.Tools.MMConeOfVision2D/RaycastData
IL2CPP_EXTERN_C void RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshal_pinvoke(const RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B& unmarshaled, RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshaled_pinvoke& marshaled)
{
	marshaled.___Hit_0 = static_cast<int32_t>(unmarshaled.___Hit_0);
	marshaled.___Point_1 = unmarshaled.___Point_1;
	marshaled.___Distance_2 = unmarshaled.___Distance_2;
	marshaled.___Angle_3 = unmarshaled.___Angle_3;
}
IL2CPP_EXTERN_C void RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshal_pinvoke_back(const RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshaled_pinvoke& marshaled, RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B& unmarshaled)
{
	bool unmarshaledHit_temp_0 = false;
	unmarshaledHit_temp_0 = static_cast<bool>(marshaled.___Hit_0);
	unmarshaled.___Hit_0 = unmarshaledHit_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledPoint_temp_1;
	memset((&unmarshaledPoint_temp_1), 0, sizeof(unmarshaledPoint_temp_1));
	unmarshaledPoint_temp_1 = marshaled.___Point_1;
	unmarshaled.___Point_1 = unmarshaledPoint_temp_1;
	float unmarshaledDistance_temp_2 = 0.0f;
	unmarshaledDistance_temp_2 = marshaled.___Distance_2;
	unmarshaled.___Distance_2 = unmarshaledDistance_temp_2;
	float unmarshaledAngle_temp_3 = 0.0f;
	unmarshaledAngle_temp_3 = marshaled.___Angle_3;
	unmarshaled.___Angle_3 = unmarshaledAngle_temp_3;
}
// Conversion method for clean up from marshalling of: MoreMountains.Tools.MMConeOfVision2D/RaycastData
IL2CPP_EXTERN_C void RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshal_pinvoke_cleanup(RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: MoreMountains.Tools.MMConeOfVision2D/RaycastData
IL2CPP_EXTERN_C void RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshal_com(const RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B& unmarshaled, RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshaled_com& marshaled)
{
	marshaled.___Hit_0 = static_cast<int32_t>(unmarshaled.___Hit_0);
	marshaled.___Point_1 = unmarshaled.___Point_1;
	marshaled.___Distance_2 = unmarshaled.___Distance_2;
	marshaled.___Angle_3 = unmarshaled.___Angle_3;
}
IL2CPP_EXTERN_C void RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshal_com_back(const RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshaled_com& marshaled, RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B& unmarshaled)
{
	bool unmarshaledHit_temp_0 = false;
	unmarshaledHit_temp_0 = static_cast<bool>(marshaled.___Hit_0);
	unmarshaled.___Hit_0 = unmarshaledHit_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledPoint_temp_1;
	memset((&unmarshaledPoint_temp_1), 0, sizeof(unmarshaledPoint_temp_1));
	unmarshaledPoint_temp_1 = marshaled.___Point_1;
	unmarshaled.___Point_1 = unmarshaledPoint_temp_1;
	float unmarshaledDistance_temp_2 = 0.0f;
	unmarshaledDistance_temp_2 = marshaled.___Distance_2;
	unmarshaled.___Distance_2 = unmarshaledDistance_temp_2;
	float unmarshaledAngle_temp_3 = 0.0f;
	unmarshaledAngle_temp_3 = marshaled.___Angle_3;
	unmarshaled.___Angle_3 = unmarshaledAngle_temp_3;
}
// Conversion method for clean up from marshalling of: MoreMountains.Tools.MMConeOfVision2D/RaycastData
IL2CPP_EXTERN_C void RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshal_com_cleanup(RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B_marshaled_com& marshaled)
{
}
// System.Void MoreMountains.Tools.MMConeOfVision2D/RaycastData::.ctor(System.Boolean,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData__ctor_mBB626A9DC69AF06C186A240F5B28F08E553AC4E7 (RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* __this, bool ___hit0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, float ___distance2, float ___angle3, const RuntimeMethod* method) 
{
	{
		// Hit = hit;
		bool L_0 = ___hit0;
		__this->___Hit_0 = L_0;
		// Point = point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___point1;
		__this->___Point_1 = L_1;
		// Distance = distance;
		float L_2 = ___distance2;
		__this->___Distance_2 = L_2;
		// Angle = angle;
		float L_3 = ___angle3;
		__this->___Angle_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastData__ctor_mBB626A9DC69AF06C186A240F5B28F08E553AC4E7_AdjustorThunk (RuntimeObject* __this, bool ___hit0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, float ___distance2, float ___angle3, const RuntimeMethod* method)
{
	RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_tC1BA1D81AF517D1D6A9C01B22ECB22C71D0A692B*>(__this + _offset);
	RaycastData__ctor_mBB626A9DC69AF06C186A240F5B28F08E553AC4E7(_thisAdjusted, ___hit0, ___point1, ___distance2, ___angle3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoreMountains.Tools.MMConeOfVision2D/MeshEdgePosition::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEdgePosition__ctor_m578B2958BBD7AB0D4A16F1F7D96CB6BE382DE131 (MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointA0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointB1, const RuntimeMethod* method) 
{
	{
		// PointA = pointA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pointA0;
		__this->___PointA_0 = L_0;
		// PointB = pointB;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pointB1;
		__this->___PointB_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MeshEdgePosition__ctor_m578B2958BBD7AB0D4A16F1F7D96CB6BE382DE131_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointA0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointB1, const RuntimeMethod* method)
{
	MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshEdgePosition_t532BBADB54B8D14F580988B5C0F2D4A969625BE4*>(__this + _offset);
	MeshEdgePosition__ctor_m578B2958BBD7AB0D4A16F1F7D96CB6BE382DE131(_thisAdjusted, ___pointA0, ___pointB1, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m5E7015CDA7DD1FCB4E488DE23C5DB959D7406843_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___b1;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___b1;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___a0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___b1;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___a0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___b1;
		float L_15 = L_14.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector4_op_Implicit_m2D6D6CC60982A88F7B77B5D0452F1E1652C412A2_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m141F5123C4052CC703B41E5892A4AC26C59D36EE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
