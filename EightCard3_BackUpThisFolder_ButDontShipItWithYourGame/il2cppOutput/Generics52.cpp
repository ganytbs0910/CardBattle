﻿#include "pch-cpp.hpp"

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
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		R ret;
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A;
// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB;
// System.Func`2<System.Byte,System.Boolean>
struct Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1;
// System.Func`2<System.Byte,System.Byte>
struct Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
// System.Func`2<System.Int32,System.Object>
struct Func_2_tB8444326CD91502B291E0988F04448A82D0F6552;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
// System.Func`3<System.Boolean,System.Int32,System.Boolean>
struct Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1;
// System.Func`3<System.Object,System.Int32,System.Boolean>
struct Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.StyleSelectorPart>
struct IEnumerable_1_tE925592D6CE31E7FA5349FCEE9007F3DF53409FD;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t606011D801075A525E02DDE2533126EA96831FCF;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.StyleSelectorPart>
struct IEnumerator_1_t4CA3732E083480E40018894623B3C184576E5EFD;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.IObservable`1<System.Boolean>
struct IObservable_1_tDC07BB1EE56E7B0A98F2416BAD46AFBD40B9B00E;
// System.IObservable`1<System.Object>
struct IObservable_1_t3B5CA6CF57A9734CD1D166FB2074FE7FB725EDDC;
// System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>
struct IObserver_1_t766C5BB3954487A4943C5AC8CAC6FE4AB6423E03;
// System.IObserver`1<System.Boolean>
struct IObserver_1_t13B7A1F29887551144ADB3A244B44BF20C022DB5;
// System.IObserver`1<System.Object>
struct IObserver_1_t86359CF84DEFEE15EB1DB5AFA5F2E8A27FF22D3B;
// System.Linq.Enumerable/Iterator`1<System.Boolean>
struct Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5;
// System.Linq.Enumerable/Iterator`1<System.Byte>
struct Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>
struct List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UniRx.Operators.WhereObservable`1<System.Boolean>
struct WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37;
// UniRx.Operators.WhereObservable`1<System.Object>
struct WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectListIterator_2_tF9F1F30155397BBE4096345FCAC45E9B4C88F75E;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>
struct WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>
struct WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>
struct WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>
struct WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Boolean>
struct WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB;
// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Object>
struct WhereSelectObservable_2_tBB94694B4FD9CA953445DA4F72C649A76E941FB1;
// UniRx.Operators.WhereObservable`1/Where_<System.Boolean>
struct Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531;
// UniRx.Operators.WhereObservable`1/Where_<System.Object>
struct Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8;
// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>
struct WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB;
// UniRx.Operators.WithLatestFromObservable`3<System.Object,System.Object,System.Object>
struct WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444;
// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730;
// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>
struct Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665;
// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>
struct Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB;
// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53;
// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA;
// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1;
// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t18CEBD71A9520CC4E97175478D72666FE988B182;
// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17;
// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D;
// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B;
// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30;
// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5;
// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>
struct ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8;
// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C;
// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF;
// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t75753AB37E06FE536221761213746766398F841E;
// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5;
// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E;
// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F;
// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19;
// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D;
// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730;
// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17;
// UniRx.Operators.ZipLatestObservable`1<System.Object>
struct ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1;
// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>
struct ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA;
// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436;
// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200;
// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE;
// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE;
// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532;
// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4;
// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2;
// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2;
// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8;
// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141;
// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C;
// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25;
// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B;
// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A;
// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B;
// System.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460;
// System.ValueTuple`2<System.Object,System.Object>[]
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273;
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UniRx.ICancelable
struct ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// UniRx.Operators.IZipLatestObservable
struct IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7;
// UniRx.Operators.IZipObservable
struct IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UniRx.SingleAssignmentDisposable
struct SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF;
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273;
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Iterator`1<System.Boolean>
struct Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	bool ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Byte>
struct Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	uint8_t ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject* ___current_2;
};

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/LeftObserver<System.Object,System.Object,System.Object>
struct LeftObserver_t802753BF981F9ADDE77DF711B83F6CDCE537DDB3  : public RuntimeObject
{
	// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<TLeft,TRight,TResult> UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/LeftObserver::parent
	WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB* ___parent_0;
};

// UniRx.Operators.ZipLatestObservable`3/ZipLatest/LeftObserver<System.Object,System.Object,System.Object>
struct LeftObserver_tA2C063A8ED206878F8B639A781BDC96F29E56834  : public RuntimeObject
{
	// UniRx.Operators.ZipLatestObservable`3/ZipLatest<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest/LeftObserver::parent
	ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8* ___parent_0;
};

// UniRx.Operators.ZipObservable`3/Zip/LeftZipObserver<System.Object,System.Object,System.Object>
struct LeftZipObserver_t48AD8663109BF4A3CAA1C5DC601499421523FABF  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`3/Zip<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip/LeftZipObserver::parent
	Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665* ___parent_0;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>
struct List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

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

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray_5;
};

// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>
struct OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObservableBase`1<System.Boolean>
struct OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObservableBase`1<System.Object>
struct OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>
struct OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Boolean,System.Boolean>
struct OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Boolean>
struct OperatorObserverBase_2_tAD90AC72A9B401D73ED3741005D25687BFCD5844  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>
struct OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/RightObserver<System.Object,System.Object,System.Object>
struct RightObserver_t643A60AE45B35B437BBEE1E57AF9EDE10BA8CE6B  : public RuntimeObject
{
	// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<TLeft,TRight,TResult> UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/RightObserver::parent
	WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB* ___parent_0;
	// System.IDisposable UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/RightObserver::selfSubscription
	RuntimeObject* ___selfSubscription_1;
};

// UniRx.Operators.ZipLatestObservable`3/ZipLatest/RightObserver<System.Object,System.Object,System.Object>
struct RightObserver_tF10C878D68024598026333A28A90794580BC1022  : public RuntimeObject
{
	// UniRx.Operators.ZipLatestObservable`3/ZipLatest<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest/RightObserver::parent
	ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8* ___parent_0;
};

// UniRx.Operators.ZipObservable`3/Zip/RightZipObserver<System.Object,System.Object,System.Object>
struct RightZipObserver_t8D6A35FC4FA5A8B79F3376F7E867CB1E39A2D09C  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`3/Zip<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip/RightZipObserver::parent
	Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665* ___parent_0;
};

// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532  : public RuntimeObject
{
	// UniRx.Operators.ZipLatestObservable`1/ZipLatest<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::parent
	ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* ___parent_0;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::index
	int32_t ___index_1;
};

// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4  : public RuntimeObject
{
	// System.Object UniRx.Operators.ZipLatestObserver`1::gate
	RuntimeObject* ___gate_0;
	// UniRx.Operators.IZipLatestObservable UniRx.Operators.ZipLatestObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipLatestObserver`1::index
	int32_t ___index_2;
	// T UniRx.Operators.ZipLatestObserver`1::value
	RuntimeObject* ___value_3;
};

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`1/Zip<T> UniRx.Operators.ZipObservable`1/Zip/ZipObserver::parent
	Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* ___parent_0;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip/ZipObserver::index
	int32_t ___index_1;
};

// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B  : public RuntimeObject
{
	// System.Object UniRx.Operators.ZipObserver`1::gate
	RuntimeObject* ___gate_0;
	// UniRx.Operators.IZipObservable UniRx.Operators.ZipObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipObserver`1::index
	int32_t ___index_2;
	// System.Collections.Generic.Queue`1<T> UniRx.Operators.ZipObserver`1::queue
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___queue_3;
};
struct Il2CppArrayBounds;

// UniRx.SingleAssignmentDisposable
struct SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE  : public RuntimeObject
{
	// System.Object UniRx.SingleAssignmentDisposable::gate
	RuntimeObject* ___gate_0;
	// System.IDisposable UniRx.SingleAssignmentDisposable::current
	RuntimeObject* ___current_1;
	// System.Boolean UniRx.SingleAssignmentDisposable::disposed
	bool ___disposed_2;
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

// System.Collections.Generic.List`1/Enumerator<System.Byte>
struct Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	uint8_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// UniRx.Operators.NthZipLatestObserverBase`1<System.Object>
struct NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// System.Int32 UniRx.Operators.NthZipLatestObserverBase`1::length
	int32_t ___length_2;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isStarted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted_3;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isCompleted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted_4;
};

// UniRx.Operators.NthZipObserverBase`1<System.Object>
struct NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// System.Collections.ICollection[] UniRx.Operators.NthZipObserverBase`1::queues
	ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* ___queues_2;
	// System.Boolean[] UniRx.Operators.NthZipObserverBase`1::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_3;
	// System.Int32 UniRx.Operators.NthZipObserverBase`1::length
	int32_t ___length_4;
};

// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>
struct WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>
struct WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94  : public Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// UniRx.Operators.WhereObservable`1<System.Boolean>
struct WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37  : public OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765
{
	// System.IObservable`1<T> UniRx.Operators.WhereObservable`1::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereObservable`1::predicate
	Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate_2;
	// System.Func`3<T,System.Int32,System.Boolean> UniRx.Operators.WhereObservable`1::predicateWithIndex
	Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1* ___predicateWithIndex_3;
};

// UniRx.Operators.WhereObservable`1<System.Object>
struct WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T> UniRx.Operators.WhereObservable`1::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereObservable`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_2;
	// System.Func`3<T,System.Int32,System.Boolean> UniRx.Operators.WhereObservable`1::predicateWithIndex
	Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___predicateWithIndex_3;
};

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<System.Object,System.Boolean>
struct WhereSelect_t18A7CFED5917C9C656CF2DEC3F30931F222CB1F7  : public OperatorObserverBase_2_tAD90AC72A9B401D73ED3741005D25687BFCD5844
{
	// UniRx.Operators.WhereSelectObservable`2<T,TR> UniRx.Operators.WhereSelectObservable`2/WhereSelect::parent
	WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB* ___parent_2;
};

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<System.Object,System.Object>
struct WhereSelect_tBB59EE6FC1F1CF053FA8CB075E48D23585DE6F26  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// UniRx.Operators.WhereSelectObservable`2<T,TR> UniRx.Operators.WhereSelectObservable`2/WhereSelect::parent
	WhereSelectObservable_2_tBB94694B4FD9CA953445DA4F72C649A76E941FB1* ___parent_2;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Boolean>
struct WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB  : public OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765
{
	// System.IObservable`1<T> UniRx.Operators.WhereSelectObservable`2::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereSelectObservable`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_2;
	// System.Func`2<T,TR> UniRx.Operators.WhereSelectObservable`2::selector
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___selector_3;
};

// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Object>
struct WhereSelectObservable_2_tBB94694B4FD9CA953445DA4F72C649A76E941FB1  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T> UniRx.Operators.WhereSelectObservable`2::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereSelectObservable`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_2;
	// System.Func`2<T,TR> UniRx.Operators.WhereSelectObservable`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_3;
};

// UniRx.Operators.WhereObservable`1/Where_<System.Boolean>
struct Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531  : public OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A
{
	// UniRx.Operators.WhereObservable`1<T> UniRx.Operators.WhereObservable`1/Where_::parent
	WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37* ___parent_2;
	// System.Int32 UniRx.Operators.WhereObservable`1/Where_::index
	int32_t ___index_3;
};

// UniRx.Operators.WhereObservable`1/Where_<System.Object>
struct Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// UniRx.Operators.WhereObservable`1<T> UniRx.Operators.WhereObservable`1/Where_::parent
	WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293* ___parent_2;
	// System.Int32 UniRx.Operators.WhereObservable`1/Where_::index
	int32_t ___index_3;
};

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>
struct WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// UniRx.Operators.WithLatestFromObservable`3<TLeft,TRight,TResult> UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom::parent
	WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444* ___parent_2;
	// System.Object UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom::gate
	RuntimeObject* ___gate_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom::hasLatest
	bool ___hasLatest_4;
	// TRight UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom::latestValue
	RuntimeObject* ___latestValue_5;
};

// UniRx.Operators.WithLatestFromObservable`3<System.Object,System.Object,System.Object>
struct WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<TLeft> UniRx.Operators.WithLatestFromObservable`3::left
	RuntimeObject* ___left_1;
	// System.IObservable`1<TRight> UniRx.Operators.WithLatestFromObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.WithLatestFromObservable`3::selector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector_3;
};

// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730  : public OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272
{
	// UniRx.Operators.ZipObservable`1<T> UniRx.Operators.ZipObservable`1/Zip::parent
	ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2* ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`1/Zip::gate
	RuntimeObject* ___gate_3;
	// System.Collections.Generic.Queue`1<T>[] UniRx.Operators.ZipObservable`1/Zip::queues
	Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* ___queues_4;
	// System.Boolean[] UniRx.Operators.ZipObservable`1/Zip::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_5;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip::length
	int32_t ___length_6;
};

// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>
struct Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// UniRx.Operators.ZipObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip::parent
	ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`3/Zip::gate
	RuntimeObject* ___gate_3;
	// System.Collections.Generic.Queue`1<TLeft> UniRx.Operators.ZipObservable`3/Zip::leftQ
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___leftQ_4;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::leftCompleted
	bool ___leftCompleted_5;
	// System.Collections.Generic.Queue`1<TRight> UniRx.Operators.ZipObservable`3/Zip::rightQ
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___rightQ_6;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::rightCompleted
	bool ___rightCompleted_7;
};

// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5  : public OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272
{
	// UniRx.Operators.ZipLatestObservable`1<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest::parent
	ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1* ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`1/ZipLatest::gate
	RuntimeObject* ___gate_3;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest::length
	int32_t ___length_4;
	// T[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::values
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values_5;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isStarted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted_6;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isCompleted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted_7;
};

// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>
struct ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// UniRx.Operators.ZipLatestObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest::parent
	ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`3/ZipLatest::gate
	RuntimeObject* ___gate_3;
	// TLeft UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftValue
	RuntimeObject* ___leftValue_4;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftStarted
	bool ___leftStarted_5;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftCompleted
	bool ___leftCompleted_6;
	// TRight UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightValue
	RuntimeObject* ___rightValue_7;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightStarted
	bool ___rightStarted_8;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightCompleted
	bool ___rightCompleted_9;
};

// UniRx.Operators.ZipLatestObservable`1<System.Object>
struct ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1  : public OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB
{
	// System.IObservable`1<T>[] UniRx.Operators.ZipLatestObservable`1::sources
	IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* ___sources_1;
};

// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>
struct ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<TLeft> UniRx.Operators.ZipLatestObservable`3::left
	RuntimeObject* ___left_1;
	// System.IObservable`1<TRight> UniRx.Operators.ZipLatestObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3::selector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector_3;
};

// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`4::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`4::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4::resultSelector
	ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* ___resultSelector_4;
};

// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`5::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`5::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`5::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5::resultSelector
	ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* ___resultSelector_5;
};

// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`6::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`6::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`6::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`6::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6::resultSelector
	ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* ___resultSelector_6;
};

// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`7::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`7::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`7::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`7::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`7::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7::resultSelector
	ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* ___resultSelector_7;
};

// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`8::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`8::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`8::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`8::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`8::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`8::source6
	RuntimeObject* ___source6_6;
	// System.IObservable`1<T7> UniRx.Operators.ZipLatestObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8::resultSelector
	ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* ___resultSelector_8;
};

// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2  : public OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB
{
	// System.IObservable`1<T>[] UniRx.Operators.ZipObservable`1::sources
	IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* ___sources_1;
};

// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<TLeft> UniRx.Operators.ZipObservable`3::left
	RuntimeObject* ___left_1;
	// System.IObservable`1<TRight> UniRx.Operators.ZipObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3::selector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector_3;
};

// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`4::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`4::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4::resultSelector
	ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* ___resultSelector_4;
};

// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`5::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`5::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`5::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5::resultSelector
	ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* ___resultSelector_5;
};

// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`6::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`6::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`6::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`6::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6::resultSelector
	ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* ___resultSelector_6;
};

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`7::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`7::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`7::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`7::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`7::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7::resultSelector
	ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* ___resultSelector_7;
};

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`8::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`8::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`8::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`8::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`8::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipObservable`8::source6
	RuntimeObject* ___source6_6;
	// System.IObservable`1<T7> UniRx.Operators.ZipObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8::resultSelector
	ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* ___resultSelector_8;
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

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
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

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>
struct Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current_3;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>
struct WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936  : public Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>
struct WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>
struct WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>
struct WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>
struct Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4/Zip::parent
	ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`4/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`4/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`4/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`4/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
};

// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5/Zip::parent
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`5/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`5/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`5/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`5/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`5/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
};

// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6/Zip::parent
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`6/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`6/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`6/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`6/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`6/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`6/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
};

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7/Zip::parent
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`7/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`7/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`7/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`7/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`7/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`7/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`7/Zip::q6
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q6_12;
};

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t18CEBD71A9520CC4E97175478D72666FE988B182  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8/Zip::parent
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`8/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`8/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`8/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`8/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`8/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`8/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`8/Zip::q6
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q6_12;
	// System.Collections.Generic.Queue`1<T7> UniRx.Operators.ZipObservable`8/Zip::q7
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q7_13;
};

// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C  : public NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E
{
	// UniRx.Operators.ZipLatestObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4/ZipLatest::parent
	ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`4/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c1
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c2
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c3
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c3_9;
};

// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF  : public NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E
{
	// UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5/ZipLatest::parent
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`5/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c1
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c2
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c3
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c4
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c4_10;
};

// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t75753AB37E06FE536221761213746766398F841E  : public NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E
{
	// UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6/ZipLatest::parent
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`6/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c1
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c2
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c3
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c4
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c5
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c5_11;
};

// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5  : public NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E
{
	// UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7/ZipLatest::parent
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`7/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c1
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c2
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c3
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c4
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c5
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c6
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c6_12;
};

// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E  : public NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E
{
	// UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8/ZipLatest::parent
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`8/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c1
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c2
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c3
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c4
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c5
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c6
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c6_12;
	// UniRx.Operators.ZipLatestObserver`1<T7> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c7
	ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* ___c7_13;
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

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectListIterator_2_tF9F1F30155397BBE4096345FCAC45E9B4C88F75E  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3  : public MulticastDelegate_t
{
};

// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4  : public MulticastDelegate_t
{
};

// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A  : public MulticastDelegate_t
{
};

// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB  : public MulticastDelegate_t
{
};

// System.Func`2<System.Byte,System.Boolean>
struct Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1  : public MulticastDelegate_t
{
};

// System.Func`2<System.Byte,System.Byte>
struct Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Object>
struct Func_2_tB8444326CD91502B291E0988F04448A82D0F6552  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};

// System.Func`3<System.Boolean,System.Int32,System.Boolean>
struct Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Int32,System.Boolean>
struct Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE  : public RuntimeArray
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
// System.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF  : public RuntimeArray
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
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460  : public RuntimeArray
{
	ALIGN_FIELD (8) Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* m_Items[1];

	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
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
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273  : public RuntimeArray
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


// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39_gshared (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_gshared_inline (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE_gshared (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Byte>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7_gshared (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;

// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 (*) (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*, const RuntimeMethod*))Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39 (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*, const RuntimeMethod*))Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::get_Current()
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*, const RuntimeMethod*))Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*, const RuntimeMethod*))Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Byte>::get_Current()
inline uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*, const RuntimeMethod*))Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte>::MoveNext()
inline bool Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7 (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*, const RuntimeMethod*))Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniRx.SingleAssignmentDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable__ctor_mD18F9FC3F63F6FEBBA649E80A3B7DDE205A174C0 (SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* __this, const RuntimeMethod* method) ;
// System.Void UniRx.SingleAssignmentDisposable::set_Disposable(System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable_set_Disposable_mB73E42A9CEE96E39A067CF23EBD4F9DDD8F6F672 (SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m3F55A19E14044B68AF90EE2EBAEA61F3AE6FA8E6 (RuntimeObject* ___disposable10, RuntimeObject* ___disposable21, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IDisposable UniRx.Disposable::Create(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Disposable_Create_mD328EE02472977116C1673CBEC11B7254AF75D35 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___disposeAction0, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::CreateUnsafe(System.IDisposable[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_CreateUnsafe_m0C27358516B1BF967D37897C161A881AA84F8BB4 (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___disposables0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m4CAA66263202E34EA3EA9D0AE75ADCA08A1132D4 (RuntimeObject* ___disposable10, RuntimeObject* ___disposable21, RuntimeObject* ___disposable32, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable,System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m9FB627C9A5E4E070960145FD8924EBA05753922F (RuntimeObject* ___disposable10, RuntimeObject* ___disposable21, RuntimeObject* ___disposable32, RuntimeObject* ___disposable43, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m4307A51237FAAAB08CEC9EE276973D3D2E2490F2 (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___disposables0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_m2ED927CF2549A759AE2454F97E33F05FA19B552E_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* L_3 = (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mD2A476DDFBA6E23D20625E4C1C35AC98DE5F19F2_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC68F6626ADFD57493351521CE15400BBD158BC68_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mA93AACD32DB1D01903967A4CD1F5D74E84AA5F96_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9409087BF300848C4CF451850DAA35BD37D8CB64_gshared (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, RuntimeObject* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectEnumerableIterator_2_Clone_mF73FAC5DDA6706DA4A7648CA411BC5CA9A65B71D_gshared (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* L_3 = (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF*, RuntimeObject*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m5B906ED3507FC458FBB384C68D660BDB968CCEFC_gshared (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m6C6C464F9772E042DFD80F05ABDED4B3094F120B_gshared (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.StyleSelectorPart>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = InterfaceFuncInvoker0< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.StyleSelectorPart>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_11 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mE3661D87CE1634EF830D396740BFE8BDA25CEF0D_gshared (WhereSelectEnumerableIterator_2_tC323ABC8E4D11FCF640BADC23A190A46F98B79FF* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*, RuntimeObject*, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m67E0676B846F7D5D13322DFE2366E000F49CCE01_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, RuntimeObject* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_m79D0125A1A65347F4522C73EA7D684850A856150_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* L_3 = (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586*, RuntimeObject*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m4059A77B770FEFC2E069A60DF9EE649B4D3C4DE5_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mF9058AE915E95BB4D1B6852E177B962E5C72041C_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.StyleSelectorPart>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = InterfaceFuncInvoker0< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.StyleSelectorPart>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m7F40A08064DE17F179D3D40D6F7D38500D7167FE_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6C437BA65C200786FD8CCE8A47BDB305FD646927_gshared (WhereSelectListIterator_2_tF9F1F30155397BBE4096345FCAC45E9B4C88F75E* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_mF4D6CD00DFD1E7917242126FC308BB5931A72196_gshared (WhereSelectListIterator_2_tF9F1F30155397BBE4096345FCAC45E9B4C88F75E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_2 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___selector_5;
		WhereSelectListIterator_2_tF9F1F30155397BBE4096345FCAC45E9B4C88F75E* L_3 = (WhereSelectListIterator_2_tF9F1F30155397BBE4096345FCAC45E9B4C88F75E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tF9F1F30155397BBE4096345FCAC45E9B4C88F75E*, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7826A2AA10D3C4940CA3EF62ED0475590AD6ED80_gshared (WhereSelectListIterator_2_tF9F1F30155397BBE4096345FCAC45E9B4C88F75E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_3 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 L_4;
		L_4 = ((  Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 (*) (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___value_1), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_5 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_6;
		L_6 = Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_7 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_8 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_11 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___selector_5;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_14 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m6DDE13B3B23964A922B3C30DD7EB4E5766AA692E_gshared (WhereSelectListIterator_2_tF9F1F30155397BBE4096345FCAC45E9B4C88F75E* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*, RuntimeObject*, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2A8C85666C5A665630499B7FAAF130D59E60BFD1_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m7549B7E49F1A52E465C4F9B0827E3A9241D0C573_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_0 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_1 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* L_2 = (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*)__this->___selector_5;
		WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* L_3 = (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6*, List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m96C28F46AFA617F5C19FFC661CD4F9E63BE75103_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* L_3 = (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 L_4;
		L_4 = ((  Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 (*) (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___value_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_5 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_6;
		L_6 = Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_7 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_8 = (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*)__this->___predicate_4;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* L_11 = (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*)__this->___selector_5;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* L_14 = (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2F81906E04BD7F8616E72DD5160FE9BB1D207D35_gshared (WhereSelectListIterator_2_tB5F3E1B3B06A8D74CA5DBD8ACEB44A8F1E549AF6* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m55E1305F8F8E872CC7AAB0E7000B942F545A28DB_gshared (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_m80E2C99FDBC9132B917235C297B93888C36494ED_gshared (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_2 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___selector_5;
		WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* L_3 = (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F*, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m77962202E02036D26E2BF18FBD63523979DFD5BF_gshared (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_3 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB L_4;
		L_4 = ((  Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB (*) (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item2_1), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_5 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6;
		L_6 = Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_7 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_8 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_11 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___selector_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_14 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC598E568E124E1B5A2A59DD7DAB95ECC19CF6E14_gshared (WhereSelectListIterator_2_t7A041BFCBA6CA86287CD2C3E0C0F7F37B8AED51F* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*, RuntimeObject*, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0CD1247248CD4BF793D4CA3FBE5520E65503F2AF_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF38CEDEBAF2DC443994FC29CBB9718332C4A2CD1_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* L_2 = (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*)__this->___selector_5;
		WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* L_3 = (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A*, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4606FA87DF1C3AED1BAC8CF343D107345C56E76E_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_3 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB L_4;
		L_4 = ((  Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB (*) (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item2_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_5 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6;
		L_6 = Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_7 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_8 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* L_11 = (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*)__this->___selector_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_14 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m625DE330D740455A061F8867456066ECE2C885F4_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m986E93FBA330636D68F59ABA60BEE2C82D7548EF_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___source0, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate1, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B* WhereSelectListIterator_2_Clone_m82F7E6B50E0300CC5A4E05623ACE0BFFADA71572_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, const RuntimeMethod* method) 
{
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)__this->___source_3;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_1 = (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*)__this->___predicate_4;
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_2 = (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*)__this->___selector_5;
		WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* L_3 = (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936*, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE2F935A0A9843B35F25DA7D8CE6C9548A06E08E6_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA L_4;
		L_4 = ((  Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* L_5 = (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*)(&__this->___enumerator_6);
		uint8_t L_6;
		L_6 = Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_7 = (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_8 = (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*)__this->___predicate_4;
		uint8_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D* L_11 = (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*)__this->___selector_5;
		uint8_t L_12 = V_1;
		NullCheck(L_11);
		uint8_t L_13;
		L_13 = ((  uint8_t (*) (Func_2_tF0F975664A2470F0E2107BC61E90E98E61D9B37D*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* L_14 = (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Byte>::Dispose() */, (Iterator_1_tBF69BA49D406BDEE086FD12E34F5699A21B9992B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3EE5C6996B41DAD65C62B3B2716B00031DF2682C_gshared (WhereSelectListIterator_2_tE6F33A84BF2065966FA66A96A4713AE6BC25E936* __this, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94* L_1 = (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tF33ECA7053C68859AC020CA32B0DA7FC9E838B94*, RuntimeObject*, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB2F5DDD8EAF1DC2EA73A04678C92A587EDA879BE_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_mEC0FD6BA0A8779337053CF3CB98EBC43432DB91C_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_2 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___selector_5;
		WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* L_3 = (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DD045E59F76B9A18DF2C650093B21AAB9AB7285_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_4;
		L_4 = ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_5 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_11 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_14 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAE917FDB31CC9CFAFF8F10B8C092034908387DB3_gshared (WhereSelectListIterator_2_t51295EA3A3EE7FD74F9FB0C2F7699E98D34C8F4E* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*, RuntimeObject*, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD1663409F0F379D2B2D5466DCDE357ED870A8B2E_gshared (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m0974288F9B1FD6ED6DCF4B218DF0980E012356AC_gshared (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* L_2 = (Func_2_tB8444326CD91502B291E0988F04448A82D0F6552*)__this->___selector_5;
		WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* L_3 = (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_tB8444326CD91502B291E0988F04448A82D0F6552*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF978C638936D86819736248A47DE6A7C1E2C44A6_gshared (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_4;
		L_4 = ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_5 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* L_11 = (Func_2_tB8444326CD91502B291E0988F04448A82D0F6552*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tB8444326CD91502B291E0988F04448A82D0F6552*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_14 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC5DC6726E77CC3F54953E2F2844CF80D4244FCC5_gshared (WhereSelectListIterator_2_t8AD05A08B297AD058E5B8C61941B41264E214F8E* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF3340A1A2963330A6390D757E70EB1D50F1B99C6_gshared (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_m2228AE3B2B250F98767CDD5EDD9B76AD4461D72C_gshared (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___selector_5;
		WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* L_3 = (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC5FEA0711CA82161A5D22BC4DEE7549A86BF3245_gshared (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_11 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m70F9F27FC3AD115DA1A3E10D9275657B9548AB8A_gshared (WhereSelectListIterator_2_tA548FF7AFE4241938E16D085908CCD32E829DCF6* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*, RuntimeObject*, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB9CFCF06FAE21664ED822AC8A532346C594E4639_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_m1BD042108A23C683E5C01A3D2B8EFFA6D3516AB5_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_2 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___selector_5;
		WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* L_3 = (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m57DA93BD1760AA63C3AAE74D529A1ABE038705E6_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_11 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF9B99EFA637F1E3276411928BC2FFF4F6DE34D34_gshared (WhereSelectListIterator_2_tB10ACCBBD2C6B3566731990DAA825357F59B99B4* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*, RuntimeObject*, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void UniRx.Operators.WhereSelectObservable`2<System.Object,System.Boolean>::.ctor(System.IObservable`1<T>,System.Func`2<T,System.Boolean>,System.Func`2<T,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectObservable_2__ctor_m5BF834963C6F28B9B27351F9323CA8D7582CACE5_gshared (WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___selector2, const RuntimeMethod* method) 
{
	{
		// : base(source.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___source0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((OperatorObservableBase_1_tA253CF29CC6521DBD696EB82BCCE1D8EA5E1F765*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		// this.source = source;
		RuntimeObject* L_2 = ___source0;
		__this->___source_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_2);
		// this.predicate = predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3 = ___predicate1;
		__this->___predicate_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_3);
		// this.selector = selector;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_4 = ___selector2;
		__this->___selector_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WhereSelectObservable`2<System.Object,System.Boolean>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectObservable_2_SubscribeCore_mF25AA34ECFEE8E3A6F18B233166A98C20002F2D1_gshared (WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return source.Subscribe(new WhereSelect(this, observer, cancel));
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_1;
		RuntimeObject* L_1 = ___observer0;
		RuntimeObject* L_2 = ___cancel1;
		WhereSelect_t18A7CFED5917C9C656CF2DEC3F30931F222CB1F7* L_3 = (WhereSelect_t18A7CFED5917C9C656CF2DEC3F30931F222CB1F7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		((  void (*) (WhereSelect_t18A7CFED5917C9C656CF2DEC3F30931F222CB1F7*, WhereSelectObservable_2_t75EAB78A2543D0BED9110ABAF705F96912421EBB*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_3, __this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0, (RuntimeObject*)L_3);
		return L_4;
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
// System.Void UniRx.Operators.WhereSelectObservable`2<System.Object,System.Object>::.ctor(System.IObservable`1<T>,System.Func`2<T,System.Boolean>,System.Func`2<T,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectObservable_2__ctor_mE725C2D278D3896D8B44EBB9763DB09E63FC7E7B_gshared (WhereSelectObservable_2_tBB94694B4FD9CA953445DA4F72C649A76E941FB1* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method) 
{
	{
		// : base(source.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___source0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		// this.source = source;
		RuntimeObject* L_2 = ___source0;
		__this->___source_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_2);
		// this.predicate = predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3 = ___predicate1;
		__this->___predicate_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_3);
		// this.selector = selector;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_4 = ___selector2;
		__this->___selector_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WhereSelectObservable`2<System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectObservable_2_SubscribeCore_m6FBC848BA64DA16330CD81D3157B7E5D5286BBE2_gshared (WhereSelectObservable_2_tBB94694B4FD9CA953445DA4F72C649A76E941FB1* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return source.Subscribe(new WhereSelect(this, observer, cancel));
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_1;
		RuntimeObject* L_1 = ___observer0;
		RuntimeObject* L_2 = ___cancel1;
		WhereSelect_tBB59EE6FC1F1CF053FA8CB075E48D23585DE6F26* L_3 = (WhereSelect_tBB59EE6FC1F1CF053FA8CB075E48D23585DE6F26*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		((  void (*) (WhereSelect_tBB59EE6FC1F1CF053FA8CB075E48D23585DE6F26*, WhereSelectObservable_2_tBB94694B4FD9CA953445DA4F72C649A76E941FB1*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_3, __this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0, (RuntimeObject*)L_3);
		return L_4;
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
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Boolean>::.ctor(UniRx.Operators.WhereObservable`1<T>,System.IObserver`1<T>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where___ctor_mB794EE4AC741209354CD35EE38263609E43CA3F8_gshared (Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531* __this, WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	{
		// : base(observer, cancel)
		RuntimeObject* L_0 = ___observer1;
		RuntimeObject* L_1 = ___cancel2;
		((  void (*) (OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37* L_2 = ___parent0;
		__this->___parent_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_2);
		// this.index = 0;
		__this->___index_3 = 0;
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Boolean>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnNext_mF8582A67206EF4A5BFDBB11BA03F8A88E653CAE3_gshared (Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531* __this, bool ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var isPassed = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// isPassed = parent.predicateWithIndex(value, index++);
		WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37* L_0 = (WhereObservable_1_tC4C729D2B1C2A4AA787D8556B83782B981E65E37*)__this->___parent_2;
		NullCheck(L_0);
		Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1* L_1 = (Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1*)L_0->___predicateWithIndex_3;
		bool L_2 = ___value0;
		int32_t L_3 = (int32_t)__this->___index_3;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___index_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		NullCheck(L_1);
		bool L_6;
		L_6 = ((  bool (*) (Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1*, bool, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_1, L_2, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_6;
		// }
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038:
				{// begin finally (depth: 2)
					// try { observer.OnError(ex); } finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this);
					((  void (*) (OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
					// try { observer.OnError(ex); } finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); } finally { Dispose(); }
				RuntimeObject* L_7 = (RuntimeObject*)((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_8 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Boolean>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_7, L_8);
				// try { observer.OnError(ex); } finally { Dispose(); }
				goto IL_003f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}// end catch (depth: 1)

IL_0041:
	{
		// if (isPassed)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// observer.OnNext(value);
		RuntimeObject* L_10 = (RuntimeObject*)((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		bool L_11 = ___value0;
		NullCheck(L_10);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void System.IObserver`1<System.Boolean>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_10, L_11);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Boolean>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnError_m298E66542326A3206746DA78B8E5637640B9243E_gshared (Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// try { observer.OnError(error); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this);
				((  void (*) (OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnError(error); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Boolean>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0, L_1);
			// try { observer.OnError(error); } finally { Dispose(); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Boolean>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnCompleted_m4779DA015932E96ADB792F42F3AB59FEBF674C5B_gshared (Where__t72B7ED69DFE787B651A04251FB02C55CC0D2F531* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this);
				((  void (*) (OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnCompleted(); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t2427FAA9B83629AD7F748838DA77F6BFB15FBB4A*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Boolean>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			// try { observer.OnCompleted(); } finally { Dispose(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Object>::.ctor(UniRx.Operators.WhereObservable`1<T>,System.IObserver`1<T>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where___ctor_mA693A68D9AE18C5CFEACEB44E2FA38C36304FA83_gshared (Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8* __this, WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	{
		// : base(observer, cancel)
		RuntimeObject* L_0 = ___observer1;
		RuntimeObject* L_1 = ___cancel2;
		((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293* L_2 = ___parent0;
		__this->___parent_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_2);
		// this.index = 0;
		__this->___index_3 = 0;
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnNext_m981C1D8949EBB063A92AED4F1A7F9075614E8FA2_gshared (Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var isPassed = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// isPassed = parent.predicateWithIndex(value, index++);
		WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293* L_0 = (WhereObservable_1_t3ED825243E1FF00921A3F094DE46F8E1636EF293*)__this->___parent_2;
		NullCheck(L_0);
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_1 = (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*)L_0->___predicateWithIndex_3;
		RuntimeObject* L_2 = ___value0;
		int32_t L_3 = (int32_t)__this->___index_3;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___index_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		NullCheck(L_1);
		bool L_6;
		L_6 = ((  bool (*) (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_1, L_2, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_6;
		// }
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038:
				{// begin finally (depth: 2)
					// try { observer.OnError(ex); } finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
					((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
					// try { observer.OnError(ex); } finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); } finally { Dispose(); }
				RuntimeObject* L_7 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_8 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_7, L_8);
				// try { observer.OnError(ex); } finally { Dispose(); }
				goto IL_003f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}// end catch (depth: 1)

IL_0041:
	{
		// if (isPassed)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// observer.OnNext(value);
		RuntimeObject* L_10 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_11 = ___value0;
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_10, L_11);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnError_m1DEBA46E90305F1F07346D15A8E45C48E99A94D0_gshared (Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// try { observer.OnError(error); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnError(error); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0, L_1);
			// try { observer.OnError(error); } finally { Dispose(); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnCompleted_m36475B4AF6919EF477621BAC4136ACAEBD8B7A0F_gshared (Where__t5104F30F0CF1DB24C11737FBAF6AE85C06330FB8* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnCompleted(); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			// try { observer.OnCompleted(); } finally { Dispose(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.WithLatestFromObservable`3<TLeft,TRight,TResult>,System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom__ctor_mB22948FA2815D4275D679562434D8F00060E5038_gshared (WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB* __this, WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// public WithLatestFrom(WithLatestFromObservable<TLeft, TRight, TResult> parent, IObserver<TResult> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444* L_3 = ___parent0;
		__this->___parent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WithLatestFrom_Run_m1266E4B5C32E5B8C3196B1869A07CF859CC7FAC5_gshared (WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* V_0 = NULL;
	{
		// var l = parent.left.Subscribe(new LeftObserver(this));
		WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444* L_0 = (WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444*)__this->___parent_2;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___left_1;
		LeftObserver_t802753BF981F9ADDE77DF711B83F6CDCE537DDB3* L_2 = (LeftObserver_t802753BF981F9ADDE77DF711B83F6CDCE537DDB3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (LeftObserver_t802753BF981F9ADDE77DF711B83F6CDCE537DDB3*, WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, (RuntimeObject*)L_2);
		// var rSubscription = new SingleAssignmentDisposable();
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_4 = (SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE*)il2cpp_codegen_object_new(SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SingleAssignmentDisposable__ctor_mD18F9FC3F63F6FEBBA649E80A3B7DDE205A174C0(L_4, NULL);
		V_0 = L_4;
		// rSubscription.Disposable  = parent.right.Subscribe(new RightObserver(this, rSubscription));
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_5 = V_0;
		WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444* L_6 = (WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444*)__this->___parent_2;
		NullCheck(L_6);
		RuntimeObject* L_7 = (RuntimeObject*)L_6->___right_2;
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_8 = V_0;
		RightObserver_t643A60AE45B35B437BBEE1E57AF9EDE10BA8CE6B* L_9 = (RightObserver_t643A60AE45B35B437BBEE1E57AF9EDE10BA8CE6B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_9);
		((  void (*) (RightObserver_t643A60AE45B35B437BBEE1E57AF9EDE10BA8CE6B*, WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_9, __this, (RuntimeObject*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_7, (RuntimeObject*)L_9);
		NullCheck(L_5);
		SingleAssignmentDisposable_set_Disposable_mB73E42A9CEE96E39A067CF23EBD4F9DDD8F6F672(L_5, L_10, NULL);
		// return StableCompositeDisposable.Create(l, rSubscription);
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = StableCompositeDisposable_Create_m3F55A19E14044B68AF90EE2EBAEA61F3AE6FA8E6(L_3, (RuntimeObject*)L_11, NULL);
		return (RuntimeObject*)L_12;
	}
}
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>::OnNext(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnNext_m6467F3419CFAC35D564D8EFECEA1A1DD6C07DA26_gshared (WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnError_m4F1772A6296AD0F5B55A587E79094A6A97F293EC_gshared (WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnCompleted_m20118D44D852A6876DF76259110CF07B9CCF39A5_gshared (WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.WithLatestFromObservable`3<System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<TLeft>,System.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFromObservable_3__ctor_m00CEAE365CDC22A0E35B38AAF03887E1E275D8ED_gshared (WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444* __this, RuntimeObject* ___left0, RuntimeObject* ___right1, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector2, const RuntimeMethod* method) 
{
	WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444* G_B2_0 = NULL;
	WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___left0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___right1;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___left0;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___right1;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_6 = ___selector2;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WithLatestFromObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WithLatestFromObservable_3_SubscribeCore_m1D9011E33E10E486FAC7ADFFBAEAE8951321C683_gshared (WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new WithLatestFrom(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB* L_2 = (WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		((  void (*) (WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB*, WithLatestFromObservable_3_t5CD841322AA71E9D7BEFB3F6A57524F290622444*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (WithLatestFrom_tCD877EF7EEFEF97C9A73AB6D737CD1A19A086DFB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::.ctor(UniRx.Operators.ZipObservable`1<T>,System.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_mF85F89CEAAD7D418287E56DB44711BC35186807E_gshared (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* __this, ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// public Zip(ZipObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		((  void (*) (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2* L_3 = ___parent0;
		__this->___parent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`1/Zip<System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m4D66517C55C8BA3A2734D6E11C6B2BE581CDBDB4_gshared (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// length = parent.sources.Length;
		ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2* L_0 = (ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2*)__this->___parent_2;
		NullCheck(L_0);
		IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* L_1 = (IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF*)L_0->___sources_1;
		NullCheck(L_1);
		__this->___length_6 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// queues = new Queue<T>[length];
		int32_t L_2 = (int32_t)__this->___length_6;
		Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_3 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)(Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_2);
		__this->___queues_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queues_4), (void*)L_3);
		// isDone = new bool[length];
		int32_t L_4 = (int32_t)__this->___length_6;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___isDone_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isDone_5), (void*)L_5);
		// for (int i = 0; i < length; i++)
		V_1 = 0;
		goto IL_004a;
	}

IL_0039:
	{
		// queues[i] = new Queue<T>();
		Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_6 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)__this->___queues_4;
		int32_t L_7 = V_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_8);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)L_8);
		// for (int i = 0; i < length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)__this->___length_6;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		// var disposables = new IDisposable[length + 1];
		int32_t L_12 = (int32_t)__this->___length_6;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_13 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_12, 1)));
		V_0 = L_13;
		// for (int i = 0; i < length; i++)
		V_2 = 0;
		goto IL_0087;
	}

IL_0065:
	{
		// var source = parent.sources[i];
		ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2* L_14 = (ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2*)__this->___parent_2;
		NullCheck(L_14);
		IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* L_15 = (IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF*)L_14->___sources_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = L_18;
		// disposables[i] = source.Subscribe(new ZipObserver(this, i));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_19 = V_0;
		int32_t L_20 = V_2;
		RuntimeObject* L_21 = V_3;
		int32_t L_22 = V_2;
		ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* L_23 = (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_23);
		((  void (*) (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A*, Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_23, __this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_21);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_21, (RuntimeObject*)L_23);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_24);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (RuntimeObject*)L_24);
		// for (int i = 0; i < length; i++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0087:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_26 = V_2;
		int32_t L_27 = (int32_t)__this->___length_6;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0065;
		}
	}
	{
		// disposables[length] = Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         for (int i = 0; i < length; i++)
		//         {
		//             var q = queues[i];
		//             q.Clear();
		//         }
		//     }
		// });
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_28 = V_0;
		int32_t L_29 = (int32_t)__this->___length_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_30 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_30, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 9)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_31;
		L_31 = Disposable_Create_mD328EE02472977116C1673CBEC11B7254AF75D35(L_30, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (RuntimeObject*)L_31);
		// return StableCompositeDisposable.CreateUnsafe(disposables);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_32 = V_0;
		RuntimeObject* L_33;
		L_33 = StableCompositeDisposable_CreateUnsafe_m0C27358516B1BF967D37897C161A881AA84F8BB4(L_32, NULL);
		return (RuntimeObject*)L_33;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::Dequeue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_Dequeue_m3836134998A3FA9F7D37402B049796202AB51BC5_gshared (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var allQueueHasValue = true;
		V_0 = (bool)1;
		// for (int i = 0; i < length; i++)
		V_2 = 0;
		goto IL_001d;
	}

IL_0006:
	{
		// if (queues[i].Count == 0)
		Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_0 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)__this->___queues_4;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		// allQueueHasValue = false;
		V_0 = (bool)0;
		// break;
		goto IL_0026;
	}

IL_0019:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_6 = V_2;
		int32_t L_7 = (int32_t)__this->___length_6;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}

IL_0026:
	{
		// if (!allQueueHasValue)
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_006f;
		}
	}
	{
		// var allCompletedWithoutSelf = true;
		V_3 = (bool)1;
		// for (int i = 0; i < length; i++)
		V_4 = 0;
		goto IL_004a;
	}

IL_0030:
	{
		// if (i == index) continue;
		int32_t L_9 = V_4;
		int32_t L_10 = ___index0;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0044;
		}
	}
	{
		// if (!isDone[i])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isDone_5;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (uint8_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0044;
		}
	}
	{
		// allCompletedWithoutSelf = false;
		V_3 = (bool)0;
		// break;
		goto IL_0054;
	}

IL_0044:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_16 = V_4;
		int32_t L_17 = (int32_t)__this->___length_6;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0030;
		}
	}

IL_0054:
	{
		// if (allCompletedWithoutSelf)
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this);
				((  void (*) (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_19 = (RuntimeObject*)((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_19);
			// try { observer.OnCompleted(); }
			goto IL_006d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// return;
		return;
	}

IL_006e:
	{
		// return;
		return;
	}

IL_006f:
	{
		// var array = new T[length];
		int32_t L_20 = (int32_t)__this->___length_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 14), (uint32_t)L_20);
		V_1 = L_21;
		// for (int i = 0; i < length; i++)
		V_5 = 0;
		goto IL_009c;
	}

IL_0080:
	{
		// array[i] = queues[i].Dequeue();
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_1;
		int32_t L_23 = V_5;
		Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_24 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)__this->___queues_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject*)L_28);
		// for (int i = 0; i < length; i++)
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_009c:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_30 = V_5;
		int32_t L_31 = (int32_t)__this->___length_6;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0080;
		}
	}
	{
		// OnNext(array);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = V_1;
		NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnNext(TSource) */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this, (RuntimeObject*)L_32);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::OnNext(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m31E0A0BB004249FE61B2DCC38E7E6AB98A6E8269_gshared (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m11A9D04B7D8DF8C549467BE477822E19EE5DCCA8_gshared (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this);
				((  void (*) (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m9010E4647E11CE990628BE09777C604C30A9837B_gshared (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this);
				((  void (*) (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::<Run>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__6_0_m0A5B495221AADCDCEB79FD2540B5856048A2A9EA_gshared (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// for (int i = 0; i < length; i++)
				V_2 = 0;
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// var q = queues[i];
				Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_4 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)__this->___queues_4;
				int32_t L_5 = V_2;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				// q.Clear();
				NullCheck(L_7);
				((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				// for (int i = 0; i < length; i++)
				int32_t L_8 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
			}

IL_0026_1:
			{
				// for (int i = 0; i < length; i++)
				int32_t L_9 = V_2;
				int32_t L_10 = (int32_t)__this->___length_6;
				if ((((int32_t)L_9) < ((int32_t)L_10)))
				{
					goto IL_0015_1;
				}
			}
			{
				// }
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// });
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
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`3<TLeft,TRight,TResult>,System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m482BEC2EC62912A16DCF8E6139D04F712BB2EB66_gshared (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665* __this, ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// readonly Queue<TLeft> leftQ = new Queue<TLeft>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___leftQ_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftQ_4), (void*)L_1);
		// readonly Queue<TRight> rightQ = new Queue<TRight>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___rightQ_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightQ_6), (void*)L_2);
		// : base(observer, cancel)
		RuntimeObject* L_3 = ___observer1;
		RuntimeObject* L_4 = ___cancel2;
		((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// this.parent = parent;
		ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* L_5 = ___parent0;
		__this->___parent_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_5);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m029498DA5058F325221FAC8D4A7FD94013C5C38B_gshared (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var l = parent.left.Subscribe(new LeftZipObserver(this));
		ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* L_0 = (ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2*)__this->___parent_2;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___left_1;
		LeftZipObserver_t48AD8663109BF4A3CAA1C5DC601499421523FABF* L_2 = (LeftZipObserver_t48AD8663109BF4A3CAA1C5DC601499421523FABF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		((  void (*) (LeftZipObserver_t48AD8663109BF4A3CAA1C5DC601499421523FABF*, Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_1, (RuntimeObject*)L_2);
		// var r = parent.right.Subscribe(new RightZipObserver(this));
		ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* L_4 = (ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2*)__this->___parent_2;
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___right_2;
		RightZipObserver_t8D6A35FC4FA5A8B79F3376F7E867CB1E39A2D09C* L_6 = (RightZipObserver_t8D6A35FC4FA5A8B79F3376F7E867CB1E39A2D09C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_6);
		((  void (*) (RightZipObserver_t8D6A35FC4FA5A8B79F3376F7E867CB1E39A2D09C*, Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_6, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5, (RuntimeObject*)L_6);
		V_0 = L_7;
		// return StableCompositeDisposable.Create(l, r, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         leftQ.Clear();
		//         rightQ.Clear();
		//     }
		// }));
		RuntimeObject* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 14)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = Disposable_Create_mD328EE02472977116C1673CBEC11B7254AF75D35(L_9, NULL);
		RuntimeObject* L_11;
		L_11 = StableCompositeDisposable_Create_m4CAA66263202E34EA3EA9D0AE75ADCA08A1132D4(L_3, L_8, L_10, NULL);
		return (RuntimeObject*)L_11;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_Dequeue_m5E000518B17BDC06897B71D7C06372DFB4E20F66_gshared (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (leftQ.Count != 0 && rightQ.Count != 0)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_0 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___leftQ_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___rightQ_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// lv = leftQ.Dequeue();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___leftQ_4;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_0 = L_5;
		// rv = rightQ.Dequeue();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___rightQ_6;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_1 = L_7;
		goto IL_005d;
	}

IL_0034:
	{
		// else if (leftCompleted || rightCompleted)
		bool L_8 = (bool)__this->___leftCompleted_5;
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		bool L_9 = (bool)__this->___rightCompleted_7;
		if (!L_9)
		{
			goto IL_005c;
		}
	}

IL_0044:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_10 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_10);
			// try { observer.OnCompleted(); }
			goto IL_005b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// return;
		return;
	}

IL_005c:
	{
		// return;
		return;
	}

IL_005d:
	{
	}
	try
	{// begin try (depth: 1)
		// v = parent.selector(lv, rv);
		ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* L_11 = (ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2*)__this->___parent_2;
		NullCheck(L_11);
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_12 = (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*)L_11->___selector_3;
		RuntimeObject* L_13 = V_0;
		RuntimeObject* L_14 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = ((  RuntimeObject* (*) (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_12, L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_2 = L_15;
		// }
		goto IL_008d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0073;
		}
		throw e;
	}

CATCH_0073:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0084:
				{// begin finally (depth: 2)
					// finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
					((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
					// finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); }
				RuntimeObject* L_16 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_17 = V_3;
				NullCheck(L_16);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_16, L_17);
				// try { observer.OnError(ex); }
				goto IL_008b;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_008b:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0094;
		}
	}// end catch (depth: 1)

IL_008d:
	{
		// OnNext(v);
		RuntimeObject* L_18 = V_2;
		NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>::OnNext(TSource) */, (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, L_18);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::OnNext(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m00A69180B294B62F8C17558C2878DFB846FE8C3F_gshared (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m53ECBEC605DAD6615F7C9121A4E6EDA9877107CF_gshared (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m38B460DB58EE139C1B656949C81AF2730E69D0B5_gshared (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::<Run>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__7_0_m8C81AA0E7BDB29B964D0062528024A1148B09A7B_gshared (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0032;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0032:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// leftQ.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___leftQ_4;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			// rightQ.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___rightQ_6;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			// }
			goto IL_0033;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }));
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
// System.Void UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`4<T1,T2,T3,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m98BC9BF9BEC595BF3BADB6E69B8474F7073F774D_gshared (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB* __this, ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_3);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// : base(observer, cancel)
		RuntimeObject* L_4 = ___observer1;
		RuntimeObject* L_5 = ___cancel2;
		((  void (*) (NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// this.parent = parent;
		ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* L_6 = ___parent0;
		__this->___parent_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m1D713E4704882FC7AAD831E5500F1B5801673ED7_gshared (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)3);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		NullCheck((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this);
		((  void (*) (NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* L_7 = (ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8*)__this->___parent_5;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->___source1_1;
		RuntimeObject* L_9 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_11 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_11);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_11, L_9, (RuntimeObject*)__this, 0, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_8);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8, (RuntimeObject*)L_11);
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* L_13 = (ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8*)__this->___parent_5;
		NullCheck(L_13);
		RuntimeObject* L_14 = (RuntimeObject*)L_13->___source2_2;
		RuntimeObject* L_15 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_16 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_17 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_17);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_17, L_15, (RuntimeObject*)__this, 1, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_14);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_14, (RuntimeObject*)L_17);
		V_0 = L_18;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* L_19 = (ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8*)__this->___parent_5;
		NullCheck(L_19);
		RuntimeObject* L_20 = (RuntimeObject*)L_19->___source3_3;
		RuntimeObject* L_21 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_22 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_23 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_23);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_23, L_21, (RuntimeObject*)__this, 2, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_20);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_20, (RuntimeObject*)L_23);
		V_1 = L_24;
		// return StableCompositeDisposable.Create(s1, s2, s3, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear();
		//     }
		// }));
		RuntimeObject* L_25 = V_0;
		RuntimeObject* L_26 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_27, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 22)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_28;
		L_28 = Disposable_Create_mD328EE02472977116C1673CBEC11B7254AF75D35(L_27, NULL);
		RuntimeObject* L_29;
		L_29 = StableCompositeDisposable_Create_m9FB627C9A5E4E070960145FD8924EBA05753922F(L_12, L_25, L_26, L_28, NULL);
		return (RuntimeObject*)L_29;
	}
}
// TR UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_GetResult_m0B712FAED6006DA4E980FBE36DE64F0D092C2079_gshared (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue());
		ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* L_0 = (ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* L_1 = (ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17*)L_0->___resultSelector_4;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck(L_1);
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_1, L_3, L_5, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_8;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_mA6D9903A6B0BACAA15F1A772AB8C59A17ADFDC1A_gshared (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m2693B7F37EFE1A00248D7C6C5DC2FF2FD0656C8E_gshared (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m50C8119AE21E459D532D71A91CF9305237E1B6CE_gshared (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::<Run>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__6_0_m9E8C045B623604779734A3EB03FDD2E830482DC3_gshared (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			// q1.Clear(); q2.Clear(); q3.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			// q1.Clear(); q2.Clear(); q3.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
			NullCheck(L_6);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
			// }
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }));
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
// System.Void UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`5<T1,T2,T3,T4,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_mCF8BDE216C13745AA3EEA59BD7E90DD1C98E1C48_gshared (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53* __this, ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_3);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_4);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// : base(observer, cancel)
		RuntimeObject* L_5 = ___observer1;
		RuntimeObject* L_6 = ___cancel2;
		((  void (*) (NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		// this.parent = parent;
		ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* L_7 = ___parent0;
		__this->___parent_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_7);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mC221DBACFF7D699BF2EFAD0489510328230E0D16_gshared (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		NullCheck((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this);
		((  void (*) (NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* L_9 = (ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141*)__this->___parent_5;
		NullCheck(L_9);
		RuntimeObject* L_10 = (RuntimeObject*)L_9->___source1_1;
		RuntimeObject* L_11 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_13 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		NullCheck(L_13);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_13, L_11, (RuntimeObject*)__this, 0, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_10);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_10, (RuntimeObject*)L_13);
		V_0 = L_14;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* L_15 = (ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141*)__this->___parent_5;
		NullCheck(L_15);
		RuntimeObject* L_16 = (RuntimeObject*)L_15->___source2_2;
		RuntimeObject* L_17 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_18 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_19 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_19);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_19, L_17, (RuntimeObject*)__this, 1, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		NullCheck(L_16);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 18), L_16, (RuntimeObject*)L_19);
		V_1 = L_20;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* L_21 = (ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141*)__this->___parent_5;
		NullCheck(L_21);
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___source3_3;
		RuntimeObject* L_23 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_24 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_25 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 20));
		NullCheck(L_25);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_25, L_23, (RuntimeObject*)__this, 2, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		NullCheck(L_22);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_22, (RuntimeObject*)L_25);
		V_2 = L_26;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* L_27 = (ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141*)__this->___parent_5;
		NullCheck(L_27);
		RuntimeObject* L_28 = (RuntimeObject*)L_27->___source4_4;
		RuntimeObject* L_29 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_30 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_31 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_31);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_31, L_29, (RuntimeObject*)__this, 3, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck(L_28);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_28, (RuntimeObject*)L_31);
		V_3 = L_32;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_33 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_34 = L_33;
		RuntimeObject* L_35 = V_0;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_36 = L_34;
		RuntimeObject* L_37 = V_1;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_37);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_38 = L_36;
		RuntimeObject* L_39 = V_2;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_39);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_40 = L_38;
		RuntimeObject* L_41 = V_3;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_41);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = L_40;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_43 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_43, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 28)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_44;
		L_44 = Disposable_Create_mD328EE02472977116C1673CBEC11B7254AF75D35(L_43, NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_44);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_44);
		RuntimeObject* L_45;
		L_45 = StableCompositeDisposable_Create_m4307A51237FAAAB08CEC9EE276973D3D2E2490F2(L_42, NULL);
		return (RuntimeObject*)L_45;
	}
}
// TR UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_GetResult_m6F8B8FCA8EFB7F7BBBC696BAD3670755A7E240A9_gshared (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue());
		ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* L_0 = (ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* L_1 = (ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D*)L_0->___resultSelector_5;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		NullCheck(L_1);
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_1, L_3, L_5, L_7, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_10;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m105249F29BE371301DA2C9D2D9C0E2664423E276_gshared (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mEE8F7BEC33EC662382F14D963122A860A810983E_gshared (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m4B598FAD40C30723346A7B0F00F39E217F82019B_gshared (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::<Run>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__7_0_mB0AC97798E9B7C88319E4C397BFC9E120397DA05_gshared (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
			NullCheck(L_6);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
			NullCheck(L_7);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			// }
			goto IL_0049;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }));
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
// System.Void UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`6<T1,T2,T3,T4,T5,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m07CC713678C7E57F2611AC3917E6C419693C2CE5_gshared (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA* __this, ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_3);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_4);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// readonly Queue<T5> q5 = new Queue<T5>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_5);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___q5_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5_11), (void*)L_5);
		// : base(observer, cancel)
		RuntimeObject* L_6 = ___observer1;
		RuntimeObject* L_7 = ___cancel2;
		((  void (*) (NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		// this.parent = parent;
		ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* L_8 = ___parent0;
		__this->___parent_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_8);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m6A9A0A4C6BC86ADD6AB8EB32825924F492CB6E73_gshared (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4, q5 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)5);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		NullCheck((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this);
		((  void (*) (NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* L_11 = (ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C*)__this->___parent_5;
		NullCheck(L_11);
		RuntimeObject* L_12 = (RuntimeObject*)L_11->___source1_1;
		RuntimeObject* L_13 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_14 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_15 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_15);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_15, L_13, (RuntimeObject*)__this, 0, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_12);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_12, (RuntimeObject*)L_15);
		V_0 = L_16;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* L_17 = (ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C*)__this->___parent_5;
		NullCheck(L_17);
		RuntimeObject* L_18 = (RuntimeObject*)L_17->___source2_2;
		RuntimeObject* L_19 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_20 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_21 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_21);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_21, L_19, (RuntimeObject*)__this, 1, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_18);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_18, (RuntimeObject*)L_21);
		V_1 = L_22;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* L_23 = (ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C*)__this->___parent_5;
		NullCheck(L_23);
		RuntimeObject* L_24 = (RuntimeObject*)L_23->___source3_3;
		RuntimeObject* L_25 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_26 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_27 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 22));
		NullCheck(L_27);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_27, L_25, (RuntimeObject*)__this, 2, L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_24);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 24), L_24, (RuntimeObject*)L_27);
		V_2 = L_28;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* L_29 = (ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C*)__this->___parent_5;
		NullCheck(L_29);
		RuntimeObject* L_30 = (RuntimeObject*)L_29->___source4_4;
		RuntimeObject* L_31 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_32 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_33 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		NullCheck(L_33);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_33, L_31, (RuntimeObject*)__this, 3, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		NullCheck(L_30);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_30, (RuntimeObject*)L_33);
		V_3 = L_34;
		// var s5 = parent.source5.Subscribe(new ZipObserver<T5>(gate, this, 4, q5));
		ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* L_35 = (ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C*)__this->___parent_5;
		NullCheck(L_35);
		RuntimeObject* L_36 = (RuntimeObject*)L_35->___source5_5;
		RuntimeObject* L_37 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_38 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_39 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 30));
		NullCheck(L_39);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_39, L_37, (RuntimeObject*)__this, 4, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_36);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_36, (RuntimeObject*)L_39);
		V_4 = L_40;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_41 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = L_41;
		RuntimeObject* L_43 = V_0;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_43);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_44 = L_42;
		RuntimeObject* L_45 = V_1;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_45);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_46 = L_44;
		RuntimeObject* L_47 = V_2;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_47);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_48 = L_46;
		RuntimeObject* L_49 = V_3;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_49);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_50 = L_48;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_51);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_52 = L_50;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_53 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_53, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 34)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_54;
		L_54 = Disposable_Create_mD328EE02472977116C1673CBEC11B7254AF75D35(L_53, NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_54);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_54);
		RuntimeObject* L_55;
		L_55 = StableCompositeDisposable_Create_m4307A51237FAAAB08CEC9EE276973D3D2E2490F2(L_52, NULL);
		return (RuntimeObject*)L_55;
	}
}
// TR UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_GetResult_mE5BB862C509A8BC1F83161698059E02354F78CCC_gshared (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue(), q5.Dequeue());
		ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* L_0 = (ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* L_1 = (ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B*)L_0->___resultSelector_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_1);
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(L_1, L_3, L_5, L_7, L_9, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_12;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m7F6DCFF1236EB188394EAC4A1C875CC482F287F5_gshared (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mC0D28A1A1733E5EF49826C32E1DB4604F0C53C27_gshared (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m13B14A199CFFE02553A022C490F53FCC74D4F64A_gshared (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::<Run>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__8_0_m83A9CDB40BD6C90E0EA9AEBF2C461D08A23BEF18_gshared (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
			NullCheck(L_6);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
			NullCheck(L_7);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
			NullCheck(L_8);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			// }
			goto IL_0054;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// }));
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
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m30CABE540CFFA8C565D2ED781B3E7CD15B835F73_gshared (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1* __this, ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_3);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_4);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// readonly Queue<T5> q5 = new Queue<T5>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_5);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___q5_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5_11), (void*)L_5);
		// readonly Queue<T6> q6 = new Queue<T6>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_6);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___q6_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q6_12), (void*)L_6);
		// : base(observer, cancel)
		RuntimeObject* L_7 = ___observer1;
		RuntimeObject* L_8 = ___cancel2;
		((  void (*) (NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		// this.parent = parent;
		ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* L_9 = ___parent0;
		__this->___parent_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mD571BB1DE2987ECC4A271A5D211650C45DE6AF32_gshared (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4, q5, q6 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_11 = L_9;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		NullCheck((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this);
		((  void (*) (NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* L_13 = (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25*)__this->___parent_5;
		NullCheck(L_13);
		RuntimeObject* L_14 = (RuntimeObject*)L_13->___source1_1;
		RuntimeObject* L_15 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_16 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_17 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_17);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_17, L_15, (RuntimeObject*)__this, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		NullCheck(L_14);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 18), L_14, (RuntimeObject*)L_17);
		V_0 = L_18;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* L_19 = (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25*)__this->___parent_5;
		NullCheck(L_19);
		RuntimeObject* L_20 = (RuntimeObject*)L_19->___source2_2;
		RuntimeObject* L_21 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_22 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_23 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 20));
		NullCheck(L_23);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_23, L_21, (RuntimeObject*)__this, 1, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		NullCheck(L_20);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_20, (RuntimeObject*)L_23);
		V_1 = L_24;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* L_25 = (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25*)__this->___parent_5;
		NullCheck(L_25);
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___source3_3;
		RuntimeObject* L_27 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_28 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_29 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_29);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_29, L_27, (RuntimeObject*)__this, 2, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck(L_26);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_26, (RuntimeObject*)L_29);
		V_2 = L_30;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* L_31 = (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25*)__this->___parent_5;
		NullCheck(L_31);
		RuntimeObject* L_32 = (RuntimeObject*)L_31->___source4_4;
		RuntimeObject* L_33 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_34 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_35 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		NullCheck(L_35);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_35, L_33, (RuntimeObject*)__this, 3, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_32);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_32, (RuntimeObject*)L_35);
		V_3 = L_36;
		// var s5 = parent.source5.Subscribe(new ZipObserver<T5>(gate, this, 4, q5));
		ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* L_37 = (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25*)__this->___parent_5;
		NullCheck(L_37);
		RuntimeObject* L_38 = (RuntimeObject*)L_37->___source5_5;
		RuntimeObject* L_39 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_40 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_41 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 32));
		NullCheck(L_41);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_41, L_39, (RuntimeObject*)__this, 4, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		NullCheck(L_38);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 34), L_38, (RuntimeObject*)L_41);
		V_4 = L_42;
		// var s6 = parent.source6.Subscribe(new ZipObserver<T6>(gate, this, 5, q6));
		ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* L_43 = (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25*)__this->___parent_5;
		NullCheck(L_43);
		RuntimeObject* L_44 = (RuntimeObject*)L_43->___source6_6;
		RuntimeObject* L_45 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_46 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_47 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
		NullCheck(L_47);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_47, L_45, (RuntimeObject*)__this, 5, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_44);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 38), L_44, (RuntimeObject*)L_47);
		V_5 = L_48;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_49 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_50 = L_49;
		RuntimeObject* L_51 = V_0;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_52 = L_50;
		RuntimeObject* L_53 = V_1;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_53);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_54 = L_52;
		RuntimeObject* L_55 = V_2;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_55);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_56 = L_54;
		RuntimeObject* L_57 = V_3;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_57);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_58 = L_56;
		RuntimeObject* L_59 = V_4;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_59);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_60 = L_58;
		RuntimeObject* L_61 = V_5;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_61);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_62 = L_60;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_63 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_63, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 40)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_64;
		L_64 = Disposable_Create_mD328EE02472977116C1673CBEC11B7254AF75D35(L_63, NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_64);
		RuntimeObject* L_65;
		L_65 = StableCompositeDisposable_Create_m4307A51237FAAAB08CEC9EE276973D3D2E2490F2(L_62, NULL);
		return (RuntimeObject*)L_65;
	}
}
// TR UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_GetResult_mEE983B85E8A2746694312840E7AAB9B331FD0696_gshared (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue(), q5.Dequeue(), q6.Dequeue());
		ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* L_0 = (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* L_1 = (ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30*)L_0->___resultSelector_7;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		NullCheck(L_1);
		RuntimeObject* L_14;
		L_14 = ((  RuntimeObject* (*) (ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_1, L_3, L_5, L_7, L_9, L_11, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return L_14;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_mCEEAD3A2BE9B47356F99D98E431DA752CEAC1B1D_gshared (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 49), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mE9627FB4A1D155BA28F942386063884973AD142A_gshared (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 49), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m93585AEFC56029C53C254D384A3F592D8108FC2C_gshared (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 49), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::<Run>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__9_0_mABB77174844C13C465BD4EE4FBEEF19BED8EDAE0_gshared (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
			NullCheck(L_6);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
			NullCheck(L_7);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
			NullCheck(L_8);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_9 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
			NullCheck(L_9);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			// }
			goto IL_005f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// }));
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
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m9A6B2EFC036EA45780FF32AF412EE080BF488E1D_gshared (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182* __this, ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_3);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_4);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// readonly Queue<T5> q5 = new Queue<T5>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_5);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___q5_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5_11), (void*)L_5);
		// readonly Queue<T6> q6 = new Queue<T6>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_6);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___q6_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q6_12), (void*)L_6);
		// readonly Queue<T7> q7 = new Queue<T7>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		NullCheck(L_7);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->___q7_13 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q7_13), (void*)L_7);
		// : base(observer, cancel)
		RuntimeObject* L_8 = ___observer1;
		RuntimeObject* L_9 = ___cancel2;
		((  void (*) (NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		// this.parent = parent;
		ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* L_10 = ___parent0;
		__this->___parent_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_10);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mCB0AE97DC08517EA7FA20435771F486635209CAC_gshared (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4, q5, q6, q7 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)7);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_11 = L_9;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_13 = L_11;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_14 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q7_13;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_14);
		NullCheck((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this);
		((  void (*) (NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24*)__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* L_15 = (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B*)__this->___parent_5;
		NullCheck(L_15);
		RuntimeObject* L_16 = (RuntimeObject*)L_15->___source1_1;
		RuntimeObject* L_17 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_18 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_19 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_19);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_19, L_17, (RuntimeObject*)__this, 0, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_16);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_16, (RuntimeObject*)L_19);
		V_0 = L_20;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* L_21 = (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B*)__this->___parent_5;
		NullCheck(L_21);
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___source2_2;
		RuntimeObject* L_23 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_24 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_25 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 22));
		NullCheck(L_25);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_25, L_23, (RuntimeObject*)__this, 1, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_22);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 24), L_22, (RuntimeObject*)L_25);
		V_1 = L_26;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* L_27 = (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B*)__this->___parent_5;
		NullCheck(L_27);
		RuntimeObject* L_28 = (RuntimeObject*)L_27->___source3_3;
		RuntimeObject* L_29 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_30 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_31 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		NullCheck(L_31);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_31, L_29, (RuntimeObject*)__this, 2, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		NullCheck(L_28);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_28, (RuntimeObject*)L_31);
		V_2 = L_32;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* L_33 = (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B*)__this->___parent_5;
		NullCheck(L_33);
		RuntimeObject* L_34 = (RuntimeObject*)L_33->___source4_4;
		RuntimeObject* L_35 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_36 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_37 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 30));
		NullCheck(L_37);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_37, L_35, (RuntimeObject*)__this, 3, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_34);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_34, (RuntimeObject*)L_37);
		V_3 = L_38;
		// var s5 = parent.source5.Subscribe(new ZipObserver<T5>(gate, this, 4, q5));
		ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* L_39 = (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B*)__this->___parent_5;
		NullCheck(L_39);
		RuntimeObject* L_40 = (RuntimeObject*)L_39->___source5_5;
		RuntimeObject* L_41 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_42 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_43 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 34));
		NullCheck(L_43);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_43, L_41, (RuntimeObject*)__this, 4, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		NullCheck(L_40);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 36), L_40, (RuntimeObject*)L_43);
		V_4 = L_44;
		// var s6 = parent.source6.Subscribe(new ZipObserver<T6>(gate, this, 5, q6));
		ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* L_45 = (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B*)__this->___parent_5;
		NullCheck(L_45);
		RuntimeObject* L_46 = (RuntimeObject*)L_45->___source6_6;
		RuntimeObject* L_47 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_48 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_49 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 38));
		NullCheck(L_49);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_49, L_47, (RuntimeObject*)__this, 5, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_46);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_46, (RuntimeObject*)L_49);
		V_5 = L_50;
		// var s7 = parent.source7.Subscribe(new ZipObserver<T7>(gate, this, 6, q7));
		ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* L_51 = (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B*)__this->___parent_5;
		NullCheck(L_51);
		RuntimeObject* L_52 = (RuntimeObject*)L_51->___source7_7;
		RuntimeObject* L_53 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_54 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q7_13;
		ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* L_55 = (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 42));
		NullCheck(L_55);
		((  void (*) (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(L_55, L_53, (RuntimeObject*)__this, 6, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		NullCheck(L_52);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 44), L_52, (RuntimeObject*)L_55);
		V_6 = L_56;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, s7, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_57 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)8);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_58 = L_57;
		RuntimeObject* L_59 = V_0;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_59);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_60 = L_58;
		RuntimeObject* L_61 = V_1;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_61);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_62 = L_60;
		RuntimeObject* L_63 = V_2;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_63);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_64 = L_62;
		RuntimeObject* L_65 = V_3;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_65);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_66 = L_64;
		RuntimeObject* L_67 = V_4;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_67);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_68 = L_66;
		RuntimeObject* L_69 = V_5;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_69);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_70 = L_68;
		RuntimeObject* L_71 = V_6;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_71);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_71);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_72 = L_70;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_73 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_73, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 46)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_74;
		L_74 = Disposable_Create_mD328EE02472977116C1673CBEC11B7254AF75D35(L_73, NULL);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_74);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_74);
		RuntimeObject* L_75;
		L_75 = StableCompositeDisposable_Create_m4307A51237FAAAB08CEC9EE276973D3D2E2490F2(L_72, NULL);
		return (RuntimeObject*)L_75;
	}
}
// TR UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_GetResult_m8E851EA724E8BEFB2F631EA034207DACA2D40FEF_gshared (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue(), q5.Dequeue(), q6.Dequeue(), q7.Dequeue());
		ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* L_0 = (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* L_1 = (ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D*)L_0->___resultSelector_8;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_14 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q7_13;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)))(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		NullCheck(L_1);
		RuntimeObject* L_16;
		L_16 = ((  RuntimeObject* (*) (ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_16;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m71CF89165F23269FDF87AC0365EF0D7FC1FDD98A_gshared (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 56), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mC7EA54C82620C5FC15A346F8502544D4C870F4BF_gshared (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 56), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m700B579A17584D2547C96E256B979186FBC16387_gshared (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 56), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::<Run>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__10_0_m9A7842B055F5FF4F17E031D0B2323E272EFD5217_gshared (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0069;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0069:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 61)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
			NullCheck(L_6);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
			NullCheck(L_7);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 64)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
			NullCheck(L_8);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 65)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_9 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
			NullCheck(L_9);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q7_13;
			NullCheck(L_10);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 67)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 67));
			// }
			goto IL_006a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// }));
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
RuntimeObject* ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_Multicast(ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* currentDelegate = reinterpret_cast<ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_Open(ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg10, ___arg21, ___arg32, method);
}
RuntimeObject* ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_OpenStaticInvoker(ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32);
}
RuntimeObject* ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_ClosedStaticInvoker(ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32);
}
RuntimeObject* ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_OpenVirtual(ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg10, ___arg21, ___arg32);
}
RuntimeObject* ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_OpenInterface(ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg10, ___arg21, ___arg32);
}
RuntimeObject* ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_OpenGenericVirtual(ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32);
}
RuntimeObject* ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_OpenGenericInterface(ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32);
}
// System.Void UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_4__ctor_m104DB189201D8484CEDEF752D7615DA77BF44A68_gshared (ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_Multicast;
}
// TR UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_4_Invoke_mC0B83DA7F43EADC7686B5ECB588E774109202914_gshared (ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_4_BeginInvoke_mFFDCBED75AC32D7240ADF03F5257ABB395B6BE6C_gshared (ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// TR UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_4_EndInvoke_mD5FB2B3E2F0FCA680A8110838A26A3C12B21AB17_gshared (ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_Multicast(ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* currentDelegate = reinterpret_cast<ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_Open(ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg10, ___arg21, ___arg32, ___arg43, method);
}
RuntimeObject* ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_OpenStaticInvoker(ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43);
}
RuntimeObject* ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_ClosedStaticInvoker(ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43);
}
RuntimeObject* ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_OpenVirtual(ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg10, ___arg21, ___arg32, ___arg43);
}
RuntimeObject* ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_OpenInterface(ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg10, ___arg21, ___arg32, ___arg43);
}
RuntimeObject* ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_OpenGenericVirtual(ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43);
}
RuntimeObject* ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_OpenGenericInterface(ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43);
}
// System.Void UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_5__ctor_m8F9E552B22EF93ACAAA225C2588CEA9615C0E5FB_gshared (ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_Multicast;
}
// TR UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_5_Invoke_m501924E837455DD701F5544684636E02462E6F8D_gshared (ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_5_BeginInvoke_m4E408D7CA750376C5AC7B1DEE7BD2B1291498079_gshared (ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// TR UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_5_EndInvoke_mE8AF6BF6C501A68760DA8489F48BAF0F772C10AE_gshared (ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_Multicast(ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* currentDelegate = reinterpret_cast<ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_Open(ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, method);
}
RuntimeObject* ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_OpenStaticInvoker(ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
RuntimeObject* ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_ClosedStaticInvoker(ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
RuntimeObject* ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_OpenVirtual(ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return VirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
RuntimeObject* ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_OpenInterface(ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
RuntimeObject* ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_OpenGenericVirtual(ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
RuntimeObject* ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_OpenGenericInterface(ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
// System.Void UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_6__ctor_mB44B8CFF6A4E435066989C73EB51A3C24736BEDB_gshared (ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_Multicast;
}
// TR UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_6_Invoke_m7617EA1F5BCCA215E8DE6C25F8A403FE2DF35BCF_gshared (ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_6_BeginInvoke_m651436E6D01D1A133DBE5E11565AC26E9E3B76A8_gshared (ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// TR UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_6_EndInvoke_m6E82358DAB5221C1D28901EBF7D8A47993EAB53A_gshared (ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_Multicast(ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* currentDelegate = reinterpret_cast<ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_Open(ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, method);
}
RuntimeObject* ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_OpenStaticInvoker(ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
RuntimeObject* ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_ClosedStaticInvoker(ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
RuntimeObject* ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_OpenVirtual(ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
RuntimeObject* ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_OpenInterface(ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
RuntimeObject* ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_OpenGenericVirtual(ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
RuntimeObject* ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_OpenGenericInterface(ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
// System.Void UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_7__ctor_mA149B9DA9BA0616B1318AB8CAB8E1B4AD8CDBB66_gshared (ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_Multicast;
}
// TR UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_7_Invoke_m5E981339CD278710E57FCE0327801225665CED88_gshared (ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_7_BeginInvoke_m3FA55D4BFA88908B72A69888418EF24F3AB69A3C_gshared (ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback6, RuntimeObject* ___object7, const RuntimeMethod* method) 
{
	void *__d_args[7] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	__d_args[5] = ___arg65;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// TR UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_7_EndInvoke_m7F22AD8AE277DE0AA40A4CB9098018E1506B48BD_gshared (ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_Multicast(ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* currentDelegate = reinterpret_cast<ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_Open(ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, method);
}
RuntimeObject* ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_OpenStaticInvoker(ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
RuntimeObject* ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_ClosedStaticInvoker(ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return InvokerFuncInvoker8< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
RuntimeObject* ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_OpenVirtual(ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return VirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
RuntimeObject* ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_OpenInterface(ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
RuntimeObject* ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_OpenGenericVirtual(ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
RuntimeObject* ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_OpenGenericInterface(ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
// System.Void UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_8__ctor_mC54D77570BBFFC36518D30615E021B00ECBE26AE_gshared (ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 7;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_Multicast;
}
// TR UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_8_Invoke_mEBF4C4ACB3CFB3B0313078505B56407E336ED735_gshared (ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,T7,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_8_BeginInvoke_mD01F82FBD6C4CE86FF3F403F1E8D5C382451694B_gshared (ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback7, RuntimeObject* ___object8, const RuntimeMethod* method) 
{
	void *__d_args[8] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	__d_args[5] = ___arg65;
	__d_args[6] = ___arg76;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);
}
// TR UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_8_EndInvoke_mD08D66971ED47694246C779289711EAE31C322ED_gshared (ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`1<T>,System.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m1237D25D37C59B81EEA16BD508A1389F34F4DFD9_gshared (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* __this, ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// public ZipLatest(ZipLatestObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		((  void (*) (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1* L_3 = ___parent0;
		__this->___parent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m5259AC3D497FBAC0584AEB8E3C0C6FFE9D1B6F78_gshared (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// length = parent.sources.Length;
		ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1* L_0 = (ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1*)__this->___parent_2;
		NullCheck(L_0);
		IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* L_1 = (IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF*)L_0->___sources_1;
		NullCheck(L_1);
		__this->___length_4 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// values = new T[length];
		int32_t L_2 = (int32_t)__this->___length_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_2);
		__this->___values_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values_5), (void*)L_3);
		// isStarted = new bool[length];
		int32_t L_4 = (int32_t)__this->___length_4;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___isStarted_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isStarted_6), (void*)L_5);
		// isCompleted = new bool[length];
		int32_t L_6 = (int32_t)__this->___length_4;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___isCompleted_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isCompleted_7), (void*)L_7);
		// var disposables = new IDisposable[length];
		int32_t L_8 = (int32_t)__this->___length_4;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_9 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// for (int i = 0; i < length; i++)
		V_1 = 0;
		goto IL_0078;
	}

IL_0056:
	{
		// var source = parent.sources[i];
		ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1* L_10 = (ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1*)__this->___parent_2;
		NullCheck(L_10);
		IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* L_11 = (IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF*)L_10->___sources_1;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// disposables[i] = source.Subscribe(new ZipLatestObserver(this, i));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_15 = V_0;
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = V_2;
		int32_t L_18 = V_1;
		ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532* L_19 = (ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_19);
		((  void (*) (ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532*, ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_19, __this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_17);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_17, (RuntimeObject*)L_19);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_20);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_20);
		// for (int i = 0; i < length; i++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0078:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_22 = V_1;
		int32_t L_23 = (int32_t)__this->___length_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0056;
		}
	}
	{
		// return StableCompositeDisposable.CreateUnsafe(disposables);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_24 = V_0;
		RuntimeObject* L_25;
		L_25 = StableCompositeDisposable_CreateUnsafe_m0C27358516B1BF967D37897C161A881AA84F8BB4(L_24, NULL);
		return (RuntimeObject*)L_25;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::Publish(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_Publish_m8EAE7EB0DA38D9F8389C9B0B3255E9D3FE447A64_gshared (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// isStarted[index] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (bool)1);
		// var hasOnCompleted = false;
		V_0 = (bool)0;
		// var allValueStarted = true;
		V_1 = (bool)1;
		// for (int i = 0; i < length; i++)
		V_2 = 0;
		goto IL_0033;
	}

IL_0011:
	{
		// if (!isStarted[i])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (uint8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		// allValueStarted = false;
		V_1 = (bool)0;
		// break;
		goto IL_003c;
	}

IL_001f:
	{
		// if (i == index) continue;
		int32_t L_6 = V_2;
		int32_t L_7 = ___index0;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_002f;
		}
	}
	{
		// if (isCompleted[i]) hasOnCompleted = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isCompleted_7;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (uint8_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_002f;
		}
	}
	{
		// if (isCompleted[i]) hasOnCompleted = true;
		V_0 = (bool)1;
	}

IL_002f:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_13 = V_2;
		int32_t L_14 = (int32_t)__this->___length_4;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0011;
		}
	}

IL_003c:
	{
		// if (allValueStarted)
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		// OnNext(new List<T>(values));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___values_5;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_17 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_17);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (RuntimeObject*)L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnNext(TSource) */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this, (RuntimeObject*)L_17);
		// if (hasOnCompleted)
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this);
				((  void (*) (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_19 = (RuntimeObject*)((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_19);
			// try { observer.OnCompleted(); }
			goto IL_0069;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// return;
		return;
	}

IL_006a:
	{
		// Array.Clear(isStarted, 0, length); // reset
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_21 = (int32_t)__this->___length_4;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_20, 0, L_21, NULL);
		// return;
		return;
	}

IL_007d:
	{
		// for (int i = 0; i < length; i++)
		V_3 = 0;
		goto IL_00b4;
	}

IL_0081:
	{
		// if (i == index) continue;
		int32_t L_22 = V_3;
		int32_t L_23 = ___index0;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_00b0;
		}
	}
	{
		// if (isCompleted[i] && !isStarted[i])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isCompleted_7;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (uint8_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if (!L_27)
		{
			goto IL_00b0;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_28 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (uint8_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if (L_31)
		{
			goto IL_00b0;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a8:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this);
				((  void (*) (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_32 = (RuntimeObject*)((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_32);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_32);
			// try { observer.OnCompleted(); }
			goto IL_00af;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		// return;
		return;
	}

IL_00b0:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_34 = V_3;
		int32_t L_35 = (int32_t)__this->___length_4;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0081;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::OnNext(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_mDF473D572619340C2BAC42CF6BE426D335775FA0_gshared (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mC7F98A87CD6F6756789B67098347388644DEA18F_gshared (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this);
				((  void (*) (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mD3F5571A5773C3234731D97880D685F3BE4095B7_gshared (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this);
				((  void (*) (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`3<TLeft,TRight,TResult>,System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mA2FB1EFE6DCB33D910153AC82532C507887390BD_gshared (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8* __this, ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// public ZipLatest(ZipLatestObservable<TLeft, TRight, TResult> parent, IObserver<TResult> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* L_3 = ___parent0;
		__this->___parent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m180BC3EEEFFA6AF8A2E9AD2F72B43C2E01B17697_gshared (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var l = parent.left.Subscribe(new LeftObserver(this));
		ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* L_0 = (ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA*)__this->___parent_2;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___left_1;
		LeftObserver_tA2C063A8ED206878F8B639A781BDC96F29E56834* L_2 = (LeftObserver_tA2C063A8ED206878F8B639A781BDC96F29E56834*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (LeftObserver_tA2C063A8ED206878F8B639A781BDC96F29E56834*, ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, (RuntimeObject*)L_2);
		// var r = parent.right.Subscribe(new RightObserver(this));
		ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* L_4 = (ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA*)__this->___parent_2;
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___right_2;
		RightObserver_tF10C878D68024598026333A28A90794580BC1022* L_6 = (RightObserver_tF10C878D68024598026333A28A90794580BC1022*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_6);
		((  void (*) (RightObserver_tF10C878D68024598026333A28A90794580BC1022*, ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5, (RuntimeObject*)L_6);
		V_0 = L_7;
		// return StableCompositeDisposable.Create(l, r);
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = StableCompositeDisposable_Create_m3F55A19E14044B68AF90EE2EBAEA61F3AE6FA8E6(L_3, L_8, NULL);
		return (RuntimeObject*)L_9;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::Publish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_Publish_m912DC7D497A92ECD8DAB81A511452792C25ECE58_gshared (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if ((leftCompleted && !leftStarted) || (rightCompleted && !rightStarted))
		bool L_0 = (bool)__this->___leftCompleted_6;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (bool)__this->___leftStarted_5;
		if (!L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = (bool)__this->___rightCompleted_9;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		bool L_3 = (bool)__this->___rightStarted_8;
		if (L_3)
		{
			goto IL_0038;
		}
	}

IL_0020:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_4 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_4);
			// try { observer.OnCompleted(); }
			goto IL_0037;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// return;
		return;
	}

IL_0038:
	{
		// else if (!(leftStarted && rightStarted))
		bool L_5 = (bool)__this->___leftStarted_5;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		bool L_6 = (bool)__this->___rightStarted_8;
		if (L_6)
		{
			goto IL_0049;
		}
	}

IL_0048:
	{
		// return;
		return;
	}

IL_0049:
	{
	}
	try
	{// begin try (depth: 1)
		// v = parent.selector(leftValue, rightValue);
		ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* L_7 = (ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA*)__this->___parent_2;
		NullCheck(L_7);
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_8 = (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*)L_7->___selector_3;
		RuntimeObject* L_9 = (RuntimeObject*)__this->___leftValue_4;
		RuntimeObject* L_10 = (RuntimeObject*)__this->___rightValue_7;
		NullCheck(L_8);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_11;
		// }
		goto IL_0083;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_007a:
				{// begin finally (depth: 2)
					// finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
					((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
					// finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); }
				RuntimeObject* L_12 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_13 = V_1;
				NullCheck(L_12);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_12, L_13);
				// try { observer.OnError(ex); }
				goto IL_0081;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0081:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c0;
		}
	}// end catch (depth: 1)

IL_0083:
	{
		// OnNext(v);
		RuntimeObject* L_14 = V_0;
		NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>::OnNext(TSource) */, (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, L_14);
		// leftStarted = false;
		__this->___leftStarted_5 = (bool)0;
		// rightStarted = false;
		__this->___rightStarted_8 = (bool)0;
		// if (leftCompleted || rightCompleted)
		bool L_15 = (bool)__this->___leftCompleted_6;
		if (L_15)
		{
			goto IL_00a8;
		}
	}
	{
		bool L_16 = (bool)__this->___rightCompleted_9;
		if (!L_16)
		{
			goto IL_00c0;
		}
	}

IL_00a8:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_17 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_17);
			// try { observer.OnCompleted(); }
			goto IL_00bf;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		// return;
		return;
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::OnNext(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_mB94919D8DED117833127FC442F3F3E9F22D6EDD6_gshared (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m656318D2C9805A4F9D23ADBA50257EEDEA63AEAD_gshared (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mAFDF2C8D2C35F43EAFDEDFDC4F83802DF5E56E96_gshared (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`4<T1,T2,T3,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mF33B3D7327F6E6F31BC7C46FC0AF701C08959630_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, int32_t ___length0, ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		((  void (*) (NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* L_4 = ___parent1;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mBDB4CB9C25847542881250BCB658B36FB40F4A49_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_1 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_3 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_5 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* L_6 = (ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436*)__this->___parent_5;
		NullCheck(L_6);
		RuntimeObject* L_7 = (RuntimeObject*)L_6->___source1_1;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_8 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c1_7;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_7, (RuntimeObject*)L_8);
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* L_10 = (ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436*)__this->___parent_5;
		NullCheck(L_10);
		RuntimeObject* L_11 = (RuntimeObject*)L_10->___source2_2;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_12 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c2_8;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_11, (RuntimeObject*)L_12);
		V_0 = L_13;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* L_14 = (ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436*)__this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->___source3_3;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_16 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c3_9;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_15, (RuntimeObject*)L_16);
		V_1 = L_17;
		// return StableCompositeDisposable.Create(s1, s2, s3);
		RuntimeObject* L_18 = V_0;
		RuntimeObject* L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = StableCompositeDisposable_Create_m4CAA66263202E34EA3EA9D0AE75ADCA08A1132D4(L_9, L_18, L_19, NULL);
		return (RuntimeObject*)L_20;
	}
}
// TR UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_mFE570EE8AB65822978DF62102F94FA3EEAD1F5B0_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value);
		ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* L_0 = (ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* L_1 = (ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F*)L_0->___resultSelector_4;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_2 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_4 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_6 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		NullCheck(L_1);
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, L_3, L_5, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_8;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m61AAB00F66F38C5080AA8B32E6077A3E0DD3DC95_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mE2D4CDD3A0A2D5BCEF02E3B6891C69A213545862_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m7BDED6A41F994540A7A41BF96D045EF8E4305AC4_gshared (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mA826238FB387731687743E2ED5F2B1477ED2E46A_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, int32_t ___length0, ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		((  void (*) (NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_4 = ___parent1;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mFB1BC33E4B893A478ED82966049E9CCAD9CFF1E2_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_1 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_3 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_5 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_7 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_8 = (ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200*)__this->___parent_5;
		NullCheck(L_8);
		RuntimeObject* L_9 = (RuntimeObject*)L_8->___source1_1;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_10 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c1_7;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_9, (RuntimeObject*)L_10);
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_12 = (ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200*)__this->___parent_5;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->___source2_2;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_14 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c2_8;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_13, (RuntimeObject*)L_14);
		V_0 = L_15;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_16 = (ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200*)__this->___parent_5;
		NullCheck(L_16);
		RuntimeObject* L_17 = (RuntimeObject*)L_16->___source3_3;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_18 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c3_9;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_17, (RuntimeObject*)L_18);
		V_1 = L_19;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_20 = (ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200*)__this->___parent_5;
		NullCheck(L_20);
		RuntimeObject* L_21 = (RuntimeObject*)L_20->___source4_4;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_22 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c4_10;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_21, (RuntimeObject*)L_22);
		V_2 = L_23;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4);
		RuntimeObject* L_24 = V_0;
		RuntimeObject* L_25 = V_1;
		RuntimeObject* L_26 = V_2;
		RuntimeObject* L_27;
		L_27 = StableCompositeDisposable_Create_m9FB627C9A5E4E070960145FD8924EBA05753922F(L_11, L_24, L_25, L_26, NULL);
		return (RuntimeObject*)L_27;
	}
}
// TR UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_m595BA9CAFE5CF869FF4994F27E8FCEAAB804F4F7_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value);
		ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* L_0 = (ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* L_1 = (ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19*)L_0->___resultSelector_5;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_2 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_4 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_6 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_8 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		NullCheck(L_1);
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_1, L_3, L_5, L_7, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		return L_10;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_mDDCD78BDEAD26226ECF411225A1548FF721518B5_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mC63871D9E0CD59382E53B81C8D9A7357B4DD5DDB_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m7311E59D2ECE08F718DE7C174A02E91469D94FC1_gshared (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m02E115F6F3006F559D0CC6B567E67FB371D9A642_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, int32_t ___length0, ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		((  void (*) (NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_4 = ___parent1;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mA14C5536A4F53E9DACC82A9449F243FE4031DD0B_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_1 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_3 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_5 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_7 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_9 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_9);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_10 = (ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE*)__this->___parent_5;
		NullCheck(L_10);
		RuntimeObject* L_11 = (RuntimeObject*)L_10->___source1_1;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_12 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c1_7;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_11, (RuntimeObject*)L_12);
		V_0 = L_13;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_14 = (ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE*)__this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->___source2_2;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_16 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c2_8;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_15, (RuntimeObject*)L_16);
		V_1 = L_17;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_18 = (ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE*)__this->___parent_5;
		NullCheck(L_18);
		RuntimeObject* L_19 = (RuntimeObject*)L_18->___source3_3;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_20 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c3_9;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_19, (RuntimeObject*)L_20);
		V_2 = L_21;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_22 = (ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE*)__this->___parent_5;
		NullCheck(L_22);
		RuntimeObject* L_23 = (RuntimeObject*)L_22->___source4_4;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_24 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c4_10;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_23, (RuntimeObject*)L_24);
		V_3 = L_25;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_26 = (ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE*)__this->___parent_5;
		NullCheck(L_26);
		RuntimeObject* L_27 = (RuntimeObject*)L_26->___source5_5;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_28 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c5_11;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_27, (RuntimeObject*)L_28);
		V_4 = L_29;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_30 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_31 = L_30;
		RuntimeObject* L_32 = V_0;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_32);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_33 = L_31;
		RuntimeObject* L_34 = V_1;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_34);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_35 = L_33;
		RuntimeObject* L_36 = V_2;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_37 = L_35;
		RuntimeObject* L_38 = V_3;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_38);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_39 = L_37;
		RuntimeObject* L_40 = V_4;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_40);
		RuntimeObject* L_41;
		L_41 = StableCompositeDisposable_Create_m4307A51237FAAAB08CEC9EE276973D3D2E2490F2(L_39, NULL);
		return (RuntimeObject*)L_41;
	}
}
// TR UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_m50D2AFE5BC2BFD13DA9A3D4535C06FE93C69C4B7_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value);
		ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* L_0 = (ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* L_1 = (ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D*)L_0->___resultSelector_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_2 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_4 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_6 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_8 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_10 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_1, L_3, L_5, L_7, L_9, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_12;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m7598472B7E29105092A7BE4EBCF003B18894ACB3_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m23DF166B9AB478CAD12EB451FC05DCC663258B50_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m760AA71992D4FA0A0B23AE567B37FC8FC2AC456A_gshared (ZipLatest_t75753AB37E06FE536221761213746766398F841E* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mB98EF2914C2F88A4416ADCE15931A3020B278CB1_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, int32_t ___length0, ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		((  void (*) (NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_4 = ___parent1;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mEE82C7E7C91728FE03A933B225710C7632FFBD61_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_1 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_3 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_5 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_7 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_9 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_9);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// c6 = new ZipLatestObserver<T6>(gate, this, 5);
		RuntimeObject* L_10 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_11 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		NullCheck(L_11);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_11, L_10, (RuntimeObject*)__this, 5, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->___c6_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c6_12), (void*)L_11);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_12 = (ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE*)__this->___parent_5;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->___source1_1;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_14 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c1_7;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_13, (RuntimeObject*)L_14);
		V_0 = L_15;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_16 = (ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE*)__this->___parent_5;
		NullCheck(L_16);
		RuntimeObject* L_17 = (RuntimeObject*)L_16->___source2_2;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_18 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c2_8;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_17, (RuntimeObject*)L_18);
		V_1 = L_19;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_20 = (ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE*)__this->___parent_5;
		NullCheck(L_20);
		RuntimeObject* L_21 = (RuntimeObject*)L_20->___source3_3;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_22 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c3_9;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_21, (RuntimeObject*)L_22);
		V_2 = L_23;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_24 = (ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE*)__this->___parent_5;
		NullCheck(L_24);
		RuntimeObject* L_25 = (RuntimeObject*)L_24->___source4_4;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_26 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c4_10;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_25, (RuntimeObject*)L_26);
		V_3 = L_27;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_28 = (ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE*)__this->___parent_5;
		NullCheck(L_28);
		RuntimeObject* L_29 = (RuntimeObject*)L_28->___source5_5;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_30 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c5_11;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_29, (RuntimeObject*)L_30);
		V_4 = L_31;
		// var s6 = parent.source6.Subscribe(c6);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_32 = (ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE*)__this->___parent_5;
		NullCheck(L_32);
		RuntimeObject* L_33 = (RuntimeObject*)L_32->___source6_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_34 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c6_12;
		NullCheck(L_33);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_33, (RuntimeObject*)L_34);
		V_5 = L_35;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_36 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_37 = L_36;
		RuntimeObject* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_39 = L_37;
		RuntimeObject* L_40 = V_1;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_40);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_41 = L_39;
		RuntimeObject* L_42 = V_2;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_42);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_43 = L_41;
		RuntimeObject* L_44 = V_3;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_44);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_45 = L_43;
		RuntimeObject* L_46 = V_4;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_46);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_47 = L_45;
		RuntimeObject* L_48 = V_5;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_48);
		RuntimeObject* L_49;
		L_49 = StableCompositeDisposable_Create_m4307A51237FAAAB08CEC9EE276973D3D2E2490F2(L_47, NULL);
		return (RuntimeObject*)L_49;
	}
}
// TR UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_m09874D6235B6A9FA77C6E11F4BDAF9E58B193543_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value, c6.Value);
		ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* L_0 = (ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* L_1 = (ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730*)L_0->___resultSelector_7;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_2 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_4 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_6 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_8 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_10 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_12 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c6_12;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		NullCheck(L_1);
		RuntimeObject* L_14;
		L_14 = ((  RuntimeObject* (*) (ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_1, L_3, L_5, L_7, L_9, L_11, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_14;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m1552481DDA00EC86F0E27A9A07534A7A866ED1B0_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m4A851907C9F2C17E5D3F6F8E49CFFD159BF387D1_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m8791F7B3A57784B70D0CFA84A5BD3AFD2BF311CB_gshared (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mAD88B5650214C75FAD55000C54D4FDC719659711_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, int32_t ___length0, ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		((  void (*) (NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_tAFFAC34F893D9DC86DAF36594720990ACD805B8E*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_4 = ___parent1;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m734B9EB8FB67F7A1F0D67CB23359F6899D95669D_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_1 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_3 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_5 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_7 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_9 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_9);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// c6 = new ZipLatestObserver<T6>(gate, this, 5);
		RuntimeObject* L_10 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_11 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		NullCheck(L_11);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_11, L_10, (RuntimeObject*)__this, 5, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->___c6_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c6_12), (void*)L_11);
		// c7 = new ZipLatestObserver<T7>(gate, this, 6);
		RuntimeObject* L_12 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_13 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		NullCheck(L_13);
		((  void (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_13, L_12, (RuntimeObject*)__this, 6, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		__this->___c7_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c7_13), (void*)L_13);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_14 = (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE*)__this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->___source1_1;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_16 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c1_7;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_15, (RuntimeObject*)L_16);
		V_0 = L_17;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_18 = (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE*)__this->___parent_5;
		NullCheck(L_18);
		RuntimeObject* L_19 = (RuntimeObject*)L_18->___source2_2;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_20 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c2_8;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_19, (RuntimeObject*)L_20);
		V_1 = L_21;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_22 = (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE*)__this->___parent_5;
		NullCheck(L_22);
		RuntimeObject* L_23 = (RuntimeObject*)L_22->___source3_3;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_24 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c3_9;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_23, (RuntimeObject*)L_24);
		V_2 = L_25;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_26 = (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE*)__this->___parent_5;
		NullCheck(L_26);
		RuntimeObject* L_27 = (RuntimeObject*)L_26->___source4_4;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_28 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c4_10;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_27, (RuntimeObject*)L_28);
		V_3 = L_29;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_30 = (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE*)__this->___parent_5;
		NullCheck(L_30);
		RuntimeObject* L_31 = (RuntimeObject*)L_30->___source5_5;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_32 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c5_11;
		NullCheck(L_31);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_31, (RuntimeObject*)L_32);
		V_4 = L_33;
		// var s6 = parent.source6.Subscribe(c6);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_34 = (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE*)__this->___parent_5;
		NullCheck(L_34);
		RuntimeObject* L_35 = (RuntimeObject*)L_34->___source6_6;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_36 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c6_12;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_35, (RuntimeObject*)L_36);
		V_5 = L_37;
		// var s7 = parent.source7.Subscribe(c7);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_38 = (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE*)__this->___parent_5;
		NullCheck(L_38);
		RuntimeObject* L_39 = (RuntimeObject*)L_38->___source7_7;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_40 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c7_13;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_39, (RuntimeObject*)L_40);
		V_6 = L_41;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, s7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_43 = L_42;
		RuntimeObject* L_44 = V_0;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_45 = L_43;
		RuntimeObject* L_46 = V_1;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_46);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_47 = L_45;
		RuntimeObject* L_48 = V_2;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_48);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_49 = L_47;
		RuntimeObject* L_50 = V_3;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_50);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_51 = L_49;
		RuntimeObject* L_52 = V_4;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_52);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_53 = L_51;
		RuntimeObject* L_54 = V_5;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_54);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_55 = L_53;
		RuntimeObject* L_56 = V_6;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_56);
		RuntimeObject* L_57;
		L_57 = StableCompositeDisposable_Create_m4307A51237FAAAB08CEC9EE276973D3D2E2490F2(L_55, NULL);
		return (RuntimeObject*)L_57;
	}
}
// TR UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_mDFD8B52D2FD4CEABB872AACA3CE6BB3467E21638_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value, c6.Value, c7.Value);
		ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* L_0 = (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* L_1 = (ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17*)L_0->___resultSelector_8;
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_2 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_4 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_6 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_8 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_10 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_12 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c6_12;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* L_14 = (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*)__this->___c7_13;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = ((  RuntimeObject* (*) (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_1);
		RuntimeObject* L_16;
		L_16 = ((  RuntimeObject* (*) (ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_16;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_mD122C2F1E0A6286E88BC51A434B1284528E92297_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mC578634925CF3F0733568B44D85B53F364A99256_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m7B7D7E76DA0E743662465B33B9065F646D5CAE1B_gshared (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this);
				((  void (*) (OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_Multicast(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* currentDelegate = reinterpret_cast<ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_Open(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg10, ___arg21, ___arg32, method);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenStaticInvoker(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_ClosedStaticInvoker(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenVirtual(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg10, ___arg21, ___arg32);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenInterface(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg10, ___arg21, ___arg32);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenGenericVirtual(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenGenericInterface(ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32);
}
// System.Void UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_4__ctor_m3475633A4B10A188BD0B00D8D976FBDAE2257BAC_gshared (ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_Invoke_m65E81B48AD6307B9956C6B4D2654D425D8C3C7B6_gshared (ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_BeginInvoke_mBC37576C9AA95FB96A66E84B8567D0C83699EFDB_gshared (ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// TR UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_EndInvoke_m25B62E6BF7104267C24B43B93FE6A712F14F0192_gshared (ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_Multicast(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* currentDelegate = reinterpret_cast<ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_Open(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg10, ___arg21, ___arg32, ___arg43, method);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenStaticInvoker(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_ClosedStaticInvoker(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenVirtual(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg10, ___arg21, ___arg32, ___arg43);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenInterface(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg10, ___arg21, ___arg32, ___arg43);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenGenericVirtual(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenGenericInterface(ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43);
}
// System.Void UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_5__ctor_mF09DD180FCC42EEB4B9AAA0D23AB68C755F398A7_gshared (ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_Invoke_m1D501513F83DE7EDB9F93B6838B76641FE4D5766_gshared (ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_BeginInvoke_m337BD389BECAC9906411EC3581DD66E3E02147F4_gshared (ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// TR UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_EndInvoke_mE1AE8A58300C5854BE4515DE668207CA4D9DC56E_gshared (ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_Multicast(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* currentDelegate = reinterpret_cast<ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_Open(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, method);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenStaticInvoker(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_ClosedStaticInvoker(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenVirtual(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return VirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenInterface(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenGenericVirtual(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenGenericInterface(ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
}
// System.Void UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_6__ctor_m947E8247962CC1B2484522A45D11E9446B65A0CC_gshared (ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_Invoke_m85BDB7205DDF21BC25072D3A6D662036513F4BBC_gshared (ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_BeginInvoke_mF74829C7D6CEB961AA2F9171C10549A4EDDBF56B_gshared (ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// TR UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_EndInvoke_m5A8428E735D142921B53B5982785E5CE6ACB3A30_gshared (ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_Multicast(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* currentDelegate = reinterpret_cast<ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_Open(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, method);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenStaticInvoker(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_ClosedStaticInvoker(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenVirtual(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenInterface(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenGenericVirtual(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenGenericInterface(ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
}
// System.Void UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_7__ctor_mDD80003FFF0CE23E122E32271E19C57E60FF43F5_gshared (ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_Invoke_mF81D21D9FC0B59A7F7BCD9D00440BE7A8565C2DC_gshared (ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_BeginInvoke_m60BC2F1C92CD392A359576B393B0210FFC3D6B5F_gshared (ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback6, RuntimeObject* ___object7, const RuntimeMethod* method) 
{
	void *__d_args[7] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	__d_args[5] = ___arg65;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// TR UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_EndInvoke_m38008295D055F24D19811E7FE3661426AE6223BD_gshared (ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_Multicast(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* currentDelegate = reinterpret_cast<ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_Open(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, method);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenStaticInvoker(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_ClosedStaticInvoker(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return InvokerFuncInvoker8< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenVirtual(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return VirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenInterface(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenGenericVirtual(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenGenericInterface(ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
}
// System.Void UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_8__ctor_m34D6F0EBB727FA8E19A4FCE9EDB182F890526739_gshared (ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 7;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_Invoke_m20DA75FDB8B40465B61CB427B0A75A060FD0823B_gshared (ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,T7,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_BeginInvoke_m76A95256A7D441C415E66E10CF4FC9AFD78FD2FE_gshared (ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, RuntimeObject* ___arg54, RuntimeObject* ___arg65, RuntimeObject* ___arg76, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback7, RuntimeObject* ___object8, const RuntimeMethod* method) 
{
	void *__d_args[8] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	__d_args[5] = ___arg65;
	__d_args[6] = ___arg76;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);
}
// TR UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_EndInvoke_m0AA23DCE9D8234BCB287D0E677F35B93C7782BC5_gshared (ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`1<System.Object>::.ctor(System.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_1__ctor_m7AA73D8D815C39EE693DBFAD9361E7307C0A5001_gshared (ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1* __this, IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* ___sources0, const RuntimeMethod* method) 
{
	{
		// : base(true)
		((  void (*) (OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB*)__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.sources = sources;
		IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* L_0 = ___sources0;
		__this->___sources_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_1), (void*)L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`1<System.Object>::SubscribeCore(System.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_1_SubscribeCore_m56F919E9EE62F7EA006DED80B7D8FD3FAD93F46A_gshared (ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_2 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*, ZipLatestObservable_1_t380088C6E3E6C06615AB98DCA9B957D691ABEFE1*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<TLeft>,System.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_3__ctor_mB40DE79C4737271394F2BC6D74F4C5693BF51860_gshared (ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* __this, RuntimeObject* ___left0, RuntimeObject* ___right1, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector2, const RuntimeMethod* method) 
{
	ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* G_B2_0 = NULL;
	ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___left0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___right1;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___left0;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___right1;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_6 = ___selector2;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_3_SubscribeCore_m3BFA809DD3D811E6C5C51296C700807AC485C28C_gshared (ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8* L_2 = (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8*, ZipLatestObservable_3_t8ECF9601FA2814E73A1A372E233BF3A50A8959CA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t27E723DA8633C92C879684E931F46F65B36894E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_4__ctor_m635ADFBA5E8D065B2E9DA592970C611470AF07AD_gshared (ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* ___resultSelector3, const RuntimeMethod* method) 
{
	ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* G_B3_0 = NULL;
	ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* G_B1_0 = NULL;
	ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B4_1, (bool)G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// this.source1 = source1;
		RuntimeObject* L_6 = ___source10;
		__this->___source1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___source21;
		__this->___source2_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___source32;
		__this->___source3_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_8);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_4_tD410C37337EB8333C91FA319B2C4B43565CE1E0F* L_9 = ___resultSelector3;
		__this->___resultSelector_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_4), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_4_SubscribeCore_mF67531ADEE9F79332D6EC2CEE9EBA44CA7C79947_gshared (ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(3, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C* L_2 = (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C*, int32_t, ZipLatestObservable_4_tA73FC69F73F8A584EFA85C7E600296B26EDF4436*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, 3, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tA8E792490B3D10C202A6747FEB9C46A26A955A7C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_5__ctor_m74641D75F3CC0105F4966B2B2E7D7B1D40A4E8B6_gshared (ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* ___resultSelector4, const RuntimeMethod* method) 
{
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* G_B4_0 = NULL;
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* G_B1_0 = NULL;
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* G_B2_0 = NULL;
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B5_1, (bool)G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___source10;
		__this->___source1_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___source21;
		__this->___source2_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___source32;
		__this->___source3_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___source43;
		__this->___source4_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_11);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_5_t5F76D5D7CFD6E04A2609588A2CCA531295B09C19* L_12 = ___resultSelector4;
		__this->___resultSelector_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_5_SubscribeCore_m4FD7C42DAE422FD027204812C12AC5653C0DAED6_gshared (ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(4, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF* L_2 = (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF*, int32_t, ZipLatestObservable_5_t782DF10CCD7C94A143C398467A37FC28A3341200*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, 4, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tFE163C9BC78D730E04EADBDE2B11F7506E9285AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_6__ctor_m73670D17DEFD00A79890549FCF9C7B373E955FC3_gshared (ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* ___resultSelector5, const RuntimeMethod* method) 
{
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B5_0 = NULL;
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B1_0 = NULL;
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B2_0 = NULL;
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B3_0 = NULL;
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B6_1, (bool)G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___source10;
		__this->___source1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___source21;
		__this->___source2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___source32;
		__this->___source3_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___source43;
		__this->___source4_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___source54;
		__this->___source5_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_14);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_6_t013DDA117C6B7A39FA9FB47EED4B4329BEE0A64D* L_15 = ___resultSelector5;
		__this->___resultSelector_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_6_SubscribeCore_mC43191AC1E0708A596A286E1B5185D6930CFBEC6_gshared (ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(5, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t75753AB37E06FE536221761213746766398F841E* L_2 = (ZipLatest_t75753AB37E06FE536221761213746766398F841E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t75753AB37E06FE536221761213746766398F841E*, int32_t, ZipLatestObservable_6_tCB2524B4BB2D0D226C20DBBA30A92CFEF8971EFE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, 5, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t75753AB37E06FE536221761213746766398F841E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_7__ctor_m04ED95E737CD33DD64A4B8C74BDC9CCDFE95509E_gshared (ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* ___resultSelector6, const RuntimeMethod* method) 
{
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B6_0 = NULL;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B1_0 = NULL;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B2_0 = NULL;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B3_0 = NULL;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B4_0 = NULL;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B7_1, (bool)G_B7_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___source10;
		__this->___source1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___source21;
		__this->___source2_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___source32;
		__this->___source3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___source43;
		__this->___source4_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___source54;
		__this->___source5_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___source65;
		__this->___source6_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_17);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_7_t201366D66496DEB96658E0F8616CA2C0876B2730* L_18 = ___resultSelector6;
		__this->___resultSelector_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_7), (void*)L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_7_SubscribeCore_m6D9BE9D541D39FD13F37A37AF03859C448906788_gshared (ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(6, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5* L_2 = (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5*, int32_t, ZipLatestObservable_7_t8BECE8007335FF1BFE04F17211917CC5EE4913BE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, 6, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t799B05D5A59D79F79435670DD00093D3687604C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,System.IObservable`1<T7>,UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_8__ctor_m8546E32395A229578995106DFF3483C1C596587B_gshared (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, RuntimeObject* ___source76, ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* ___resultSelector7, const RuntimeMethod* method) 
{
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B7_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B1_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B2_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B3_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B4_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B5_0 = NULL;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B6_0 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___source76;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B8_1, (bool)G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___source10;
		__this->___source1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___source21;
		__this->___source2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___source32;
		__this->___source3_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___source43;
		__this->___source4_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___source54;
		__this->___source5_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___source65;
		__this->___source6_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___source76;
		__this->___source7_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7_7), (void*)L_20);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_8_tEC3B0554EB21A0515B105C86648CB50009A13A17* L_21 = ___resultSelector7;
		__this->___resultSelector_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_8), (void*)L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_8_SubscribeCore_mBF184095B7A3EAC66C343208AA448ABE51A4BB7F_gshared (ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(7, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E* L_2 = (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E*, int32_t, ZipLatestObservable_8_tDD58D47F07F412EB878D54725837516DFC9ED0EE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, 7, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tEC00B12E9DBB9D3AB44ACAF722D477DC500BEF3E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`1/ZipLatest<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver__ctor_m2BB422D84B99D5A3E2C23BC3A703E304D1A6D67D_gshared (ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532* __this, ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* ___parent0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		// public ZipLatestObserver(ZipLatest parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_0 = ___parent0;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// this.index = index;
		int32_t L_1 = ___index1;
		__this->___index_1 = L_1;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnNext_m297FB6E0221127E6F8A9ACE79A581947575B456E_gshared (ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_0 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0049;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_0049:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
			// parent.values[index] = value;
			ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_5 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)__this->___parent_0;
			NullCheck(L_5);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_5->___values_5;
			int32_t L_7 = (int32_t)__this->___index_1;
			RuntimeObject* L_8 = ___value0;
			NullCheck(L_6);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
			// parent.Publish(index);
			ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_9 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)__this->___parent_0;
			int32_t L_10 = (int32_t)__this->___index_1;
			NullCheck(L_9);
			((  void (*) (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// }
			goto IL_004a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnError_mD5813A99366CA9F9BA0F496659EAD546DC1866AC_gshared (ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_0 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
			// parent.OnError(ex);
			ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_5 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)__this->___parent_0;
			Exception_t* L_6 = ___ex0;
			NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_5);
			VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_5, L_6);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnCompleted_m476D31848A164D8D5A8E2F0E8CC1547F47CE5F77_gshared (ZipLatestObserver_t139F226197E3E8ED5756433C1552FA4767EC7532* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (parent.gate)
		ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_0 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				// parent.isCompleted[index] = true;
				ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_5 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)__this->___parent_0;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_5->___isCompleted_7;
				int32_t L_7 = (int32_t)__this->___index_1;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				// var allTrue = true;
				V_2 = (bool)1;
				// for (int i = 0; i < parent.length; i++)
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				// if (!parent.isCompleted[i])
				ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_8 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)__this->___parent_0;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_8->___isCompleted_7;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// allTrue = false;
				V_2 = (bool)0;
				// break;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_14 = V_3;
				ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_15 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)__this->___parent_0;
				NullCheck(L_15);
				int32_t L_16 = (int32_t)L_15->___length_4;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				// if (allTrue)
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				// parent.OnCompleted();
				ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5* L_18 = (ZipLatest_tCF104AB10AD46DC6B1E4542E5914832944F664C5*)__this->___parent_0;
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_18);
				VirtualActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_18);
			}

IL_0062_1:
			{
				// }
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// }
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
// T UniRx.Operators.ZipLatestObserver`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObserver_1_get_Value_mBB0CB04874E69787DA2C86B7BD277C95B1F88F6B_gshared (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* __this, const RuntimeMethod* method) 
{
	{
		// public T Value { get { return value; } }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_3;
		return L_0;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipLatestObservable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1__ctor_mFE69338B7BC68ECAB6534AD07995B612A37CE320_gshared (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* __this, RuntimeObject* ___gate0, RuntimeObject* ___parent1, int32_t ___index2, const RuntimeMethod* method) 
{
	{
		// public ZipLatestObserver(object gate, IZipLatestObservable parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.gate = gate;
		RuntimeObject* L_0 = ___gate0;
		__this->___gate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_0), (void*)L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___parent1;
		__this->___parent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_1);
		// this.index = index;
		int32_t L_2 = ___index2;
		__this->___index_2 = L_2;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnNext_mFC5A83BF7FA74611FCFBD5405EB0E43EC730AF84_gshared (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// this.value = value;
			RuntimeObject* L_4 = ___value0;
			__this->___value_3 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___value_3), (void*)L_4);
			// parent.Publish(index);
			RuntimeObject* L_5 = (RuntimeObject*)__this->___parent_1;
			int32_t L_6 = (int32_t)__this->___index_2;
			NullCheck(L_5);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipLatestObservable::Publish(System.Int32) */, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_5, L_6);
			// }
			goto IL_0035;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnError_m925631B1592C0D2B56C526C87E27A54185529B58_gshared (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// parent.Fail(error);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			Exception_t* L_5 = ___error0;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.Operators.IZipLatestObservable::Fail(System.Exception) */, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnCompleted_m8E0366ADE0C21BE143DD07E32C7C84B757E5FD2A_gshared (ZipLatestObserver_1_t12B675A89BBEFCE3A0A11B2FC1ACC3D6F1C734A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// parent.Done(index);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			int32_t L_5 = (int32_t)__this->___index_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipLatestObservable::Done(System.Int32) */, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
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
// System.Void UniRx.Operators.ZipObservable`1<System.Object>::.ctor(System.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_1__ctor_m1D6CDF9823B7AE2A1B462FF7B50CCEDCF751452B_gshared (ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2* __this, IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* ___sources0, const RuntimeMethod* method) 
{
	{
		// : base(true)
		((  void (*) (OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObservableBase_1_tA0344887F127C0AF02971FF71FFDF8B627F13EEB*)__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.sources = sources;
		IObservable_1U5BU5D_t9318F02797D6B0DEF3585C9F3E5879AA4F8FC7AF* L_0 = ___sources0;
		__this->___sources_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_1), (void*)L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`1<System.Object>::SubscribeCore(System.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_1_SubscribeCore_m477E55703C3BFC39B5441BF1599FC8F71985E08D_gshared (ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_2 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*, ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<TLeft>,System.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_3__ctor_m1836B77B94AC9EFD4C206FC5D84AF6DA75DFB0D4_gshared (ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* __this, RuntimeObject* ___left0, RuntimeObject* ___right1, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector2, const RuntimeMethod* method) 
{
	ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* G_B2_0 = NULL;
	ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___left0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___right1;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___left0;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___right1;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_6 = ___selector2;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_3_SubscribeCore_mAEC7D087D634182482F4210DBAE2A188929FCEF5_gshared (ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665* L_2 = (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		((  void (*) (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665*, ZipObservable_3_t06C7130E188441DD62E659D59E21AED3D3E8F2E2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t8936DD260E726F55DF9A8DE760963AE9B18FF665*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,UniRx.Operators.ZipFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_4__ctor_m59B9AA6B1FC26F2DF7CAD34D3E2BCC35BF326305_gshared (ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* ___resultSelector3, const RuntimeMethod* method) 
{
	ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* G_B3_0 = NULL;
	ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* G_B1_0 = NULL;
	ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B4_1, (bool)G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// this.source1 = source1;
		RuntimeObject* L_6 = ___source10;
		__this->___source1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___source21;
		__this->___source2_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___source32;
		__this->___source3_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_8);
		// this.resultSelector = resultSelector;
		ZipFunc_4_tF7C27776328CF7442DC16A7CA16A96F8A400FB17* L_9 = ___resultSelector3;
		__this->___resultSelector_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_4), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_4_SubscribeCore_mA6508A3734225A29A8BD06563978D1A35D5DE5FB_gshared (ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB* L_2 = (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		((  void (*) (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB*, ZipObservable_4_t2466B4383BE34B3769F7957311BA3B15D21596D8*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t708D3079D8BA1849EF5BB43B1E51A2EB2B1468DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_5__ctor_mE0EEF334F61425F403823BA59B772FCEC5FD58CB_gshared (ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* ___resultSelector4, const RuntimeMethod* method) 
{
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* G_B4_0 = NULL;
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* G_B1_0 = NULL;
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* G_B2_0 = NULL;
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B5_1, (bool)G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___source10;
		__this->___source1_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___source21;
		__this->___source2_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___source32;
		__this->___source3_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___source43;
		__this->___source4_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_11);
		// this.resultSelector = resultSelector;
		ZipFunc_5_tC39A53071CE115208D83E8424752415A2A45028D* L_12 = ___resultSelector4;
		__this->___resultSelector_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_5_SubscribeCore_mB34E906CA3694E10EC54041CF66691C615473D2B_gshared (ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53* L_2 = (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		((  void (*) (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53*, ZipObservable_5_tC9C7EC23D6FED44E79EC5E2418C78B4FA3FB4141*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t765BF0F32B17EA72D401E20D0FC66ACFD9170B53*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_6__ctor_mF7EBE09C23CCB0A71FF74BDEC898D65E281A948D_gshared (ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* ___resultSelector5, const RuntimeMethod* method) 
{
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B5_0 = NULL;
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B1_0 = NULL;
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B2_0 = NULL;
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B3_0 = NULL;
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B6_1, (bool)G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___source10;
		__this->___source1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___source21;
		__this->___source2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___source32;
		__this->___source3_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___source43;
		__this->___source4_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___source54;
		__this->___source5_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_14);
		// this.resultSelector = resultSelector;
		ZipFunc_6_t297A2200A6BCBAC96D866D186F898F1985FA756B* L_15 = ___resultSelector5;
		__this->___resultSelector_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_6_SubscribeCore_m82400F4B92AC5E7E00D39E19657D8D7E8D71823D_gshared (ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA* L_2 = (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		((  void (*) (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA*, ZipObservable_6_t8BFCD2A0F7189573D08015DA38533D608183734C*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t0A1E18AA6DBA78E1F79C6CC28E00BA63FD92FCEA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_7__ctor_m3C22FA7CEFD785246B8CFF3A57C014A6930C1696_gshared (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* ___resultSelector6, const RuntimeMethod* method) 
{
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B6_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B1_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B2_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B3_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B4_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B7_1, (bool)G_B7_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___source10;
		__this->___source1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___source21;
		__this->___source2_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___source32;
		__this->___source3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___source43;
		__this->___source4_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___source54;
		__this->___source5_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___source65;
		__this->___source6_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_17);
		// this.resultSelector = resultSelector;
		ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* L_18 = ___resultSelector6;
		__this->___resultSelector_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_7), (void*)L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_7_SubscribeCore_mA6A71EA561A648CABC815028263E92CCD33518CA_gshared (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1* L_2 = (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		((  void (*) (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1*, ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,System.IObservable`1<T7>,UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_8__ctor_m107A8110E5B0DB2CF2060E356C0076E388FA5F9A_gshared (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, RuntimeObject* ___source76, ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* ___resultSelector7, const RuntimeMethod* method) 
{
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B7_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B1_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B2_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B3_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B4_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B5_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B6_0 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___source76;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B8_1, (bool)G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___source10;
		__this->___source1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___source21;
		__this->___source2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___source32;
		__this->___source3_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___source43;
		__this->___source4_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___source54;
		__this->___source5_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___source65;
		__this->___source6_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___source76;
		__this->___source7_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7_7), (void*)L_20);
		// this.resultSelector = resultSelector;
		ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* L_21 = ___resultSelector7;
		__this->___resultSelector_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_8), (void*)L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_8_SubscribeCore_m58E177B4406807F458726219AC59A47B245D78B1_gshared (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t18CEBD71A9520CC4E97175478D72666FE988B182* L_2 = (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		((  void (*) (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182*, ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::.ctor(UniRx.Operators.ZipObservable`1/Zip<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver__ctor_m6F8187EFDEF9046B285A43BAAF557D66C0D7FF48_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* ___parent0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(Zip parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = ___parent0;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// this.index = index;
		int32_t L_1 = ___index1;
		__this->___index_1 = L_1;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnNext_m80D5844DD6FF3B28A0238C2F0926A15A2593F30F_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
			// parent.queues[index].Enqueue(value);
			Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_5 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
			NullCheck(L_5);
			Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_6 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)L_5->___queues_4;
			int32_t L_7 = (int32_t)__this->___index_1;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			RuntimeObject* L_10 = ___value0;
			NullCheck(L_9);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// parent.Dequeue(index);
			Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_11 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
			int32_t L_12 = (int32_t)__this->___index_1;
			NullCheck(L_11);
			((  void (*) (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			// }
			goto IL_004b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnError_mEFF1C9E4D750565BF8FAFE1DBA7EE0FE7CBC109C_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
			// parent.OnError(ex);
			Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_5 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
			Exception_t* L_6 = ___ex0;
			NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_5);
			VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_5, L_6);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnCompleted_m819A749EB60F84FF2C3AD802C46613AF2071D55D_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (parent.gate)
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				// parent.isDone[index] = true;
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_5 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_5->___isDone_5;
				int32_t L_7 = (int32_t)__this->___index_1;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				// var allTrue = true;
				V_2 = (bool)1;
				// for (int i = 0; i < parent.length; i++)
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				// if (!parent.isDone[i])
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_8 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_8->___isDone_5;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// allTrue = false;
				V_2 = (bool)0;
				// break;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_14 = V_3;
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_15 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
				NullCheck(L_15);
				int32_t L_16 = (int32_t)L_15->___length_6;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				// if (allTrue)
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				// parent.OnCompleted();
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_18 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_18);
				VirtualActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_18);
			}

IL_0062_1:
			{
				// }
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// }
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
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipObservable,System.Int32,System.Collections.Generic.Queue`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1__ctor_m4D843FE326A7A713DBCDF79E448F52691F2C6420_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, RuntimeObject* ___gate0, RuntimeObject* ___parent1, int32_t ___index2, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___queue3, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(object gate, IZipObservable parent, int index, Queue<T> queue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.gate = gate;
		RuntimeObject* L_0 = ___gate0;
		__this->___gate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_0), (void*)L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___parent1;
		__this->___parent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_1);
		// this.index = index;
		int32_t L_2 = ___index2;
		__this->___index_2 = L_2;
		// this.queue = queue;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = ___queue3;
		__this->___queue_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnNext_mD2F91872761B21627C585A6A45A9AAC931A41301_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// queue.Enqueue(value);
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queue_3;
			RuntimeObject* L_5 = ___value0;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// parent.Dequeue(index);
			RuntimeObject* L_6 = (RuntimeObject*)__this->___parent_1;
			int32_t L_7 = (int32_t)__this->___index_2;
			NullCheck(L_6);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipObservable::Dequeue(System.Int32) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_6, L_7);
			// }
			goto IL_003a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnError_mC5BE9D205FE077023C208D78DE7D551AE2BDE072_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// parent.Fail(error);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			Exception_t* L_5 = ___error0;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.Operators.IZipObservable::Fail(System.Exception) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnCompleted_m84919945B4901F74AC57266885E64E266F8AB50C_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// parent.Done(index);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			int32_t L_5 = (int32_t)__this->___index_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipObservable::Done(System.Int32) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_gshared_inline (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = (uint8_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)__this->____current_3;
		return L_0;
	}
}
