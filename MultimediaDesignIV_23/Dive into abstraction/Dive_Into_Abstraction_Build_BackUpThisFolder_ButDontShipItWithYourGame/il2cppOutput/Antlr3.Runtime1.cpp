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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.IList>
struct Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// Antlr.Runtime.Misc.Func`1<Antlr.Runtime.IAstRuleReturnScope>
struct Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F;
// Antlr.Runtime.Misc.Func`1<System.Object>
struct Func_1_tFD28F346415D64114C660AC5AD18B7017D86E3EC;
// Antlr.Runtime.Misc.Func`2<System.Object,System.Object>
struct Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>
struct IDictionary_2_t1DBD907AB48E2E0C407A1C0A5CE54723973A82A9;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_tC189DB2F3849FDE7C64E0E497B557212046F70ED;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Antlr.Runtime.Tree.ITree>
struct IList_1_t70D077FA6315C45FA2EB94FA2B8330148F1F627C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.IList>
struct KeyCollection_t5D372DB336DC2F33B239A7CA00D4290F1D738B90;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<Antlr.Runtime.IToken>
struct List_1_t40EDF6DB1A87D031D76B122798D35B86FD1A709D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.IList>
struct ValueCollection_tD2AC12FFB29B4114271DAF1D53E07E3B04894E71;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.IList>[]
struct EntryU5BU5D_tF6131033BA8B8DE544E7177054CC71ADB156C6E4;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>[]
struct IDictionary_2U5BU5D_tF539C288CAC9EE20955F9583B351746F45A75704;
// Antlr.Runtime.BitSet[]
struct BitSetU5BU5D_t12D8CFDB22821FDD7F37653B673B4785F5729EA8;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Antlr.Runtime.IToken[]
struct ITokenU5BU5D_tB7C928134180452E84B122A66AF3160AE2DB2482;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// Antlr.Runtime.Misc.Action
struct Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Antlr.Runtime.BaseRecognizer
struct BaseRecognizer_t2F14D84F70ACE2CB0BA7549984A262EC9FA1F385;
// Antlr.Runtime.Tree.BaseTree
struct BaseTree_t0D93F514AF1E79FC22DA882F9C4520FD6BF636AF;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Antlr.Runtime.BitSet
struct BitSet_t4B137A98ECAC9E937F62CF104E828ABE825FEFC7;
// Antlr.Runtime.CommonToken
struct CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F;
// Antlr.Runtime.Tree.CommonTree
struct CommonTree_t6AA87323D6EE7DFA4DF8C0ED60845470A8F967C0;
// Antlr.Runtime.Tree.CommonTreeAdaptor
struct CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1;
// Antlr.Runtime.Tree.CommonTreeNodeStream
struct CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Antlr.Runtime.Tree.DotTreeGenerator
struct DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Antlr.Runtime.IAstRuleReturnScope
struct IAstRuleReturnScope_tEE2265027FF09AF108202F494EC35014C696A14E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Antlr.Runtime.ICharStream
struct ICharStream_tF0EB2F13CD125E709B7829CDDF04B1CB48E26E79;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// Antlr.Runtime.IIntStream
struct IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// Antlr.Runtime.IToken
struct IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1;
// Antlr.Runtime.ITokenStream
struct ITokenStream_tE94CB9A1955031081D7B13DE70DAB4796B8C9C36;
// Antlr.Runtime.Tree.ITree
struct ITree_tA515DAFC6771136C92E780C92473EFE3E33BBE4D;
// Antlr.Runtime.Tree.ITreeAdaptor
struct ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867;
// Antlr.Runtime.Tree.ITreeNodeStream
struct ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F;
// Antlr.Runtime.Tree.ITreeVisitorAction
struct ITreeVisitorAction_t621FB5F242D0C9CA89D53CA45D6149261214DC0D;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Antlr.Runtime.MismatchedTreeNodeException
struct MismatchedTreeNodeException_t28A6786186D606A7DD912DE49D00CF67B84343BB;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Antlr.Runtime.Tree.ParseTree
struct ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207;
// Antlr.Runtime.RecognitionException
struct RecognitionException_t576E3524547A53B0950DC286707CBAE428645631;
// Antlr.Runtime.RecognizerSharedState
struct RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// Antlr.Runtime.Tree.RewriteCardinalityException
struct RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E;
// Antlr.Runtime.Tree.RewriteEarlyExitException
struct RewriteEarlyExitException_tFC31D6DD5630A3C5E5A3B87FB4AB6E60E2B76049;
// Antlr.Runtime.Tree.RewriteEmptyStreamException
struct RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1;
// Antlr.Runtime.Tree.RewriteRuleElementStream
struct RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6;
// Antlr.Runtime.Tree.RewriteRuleNodeStream
struct RewriteRuleNodeStream_t059525EBF94903C8F0A7A58B1D27DB0D26C6FF06;
// Antlr.Runtime.Tree.RewriteRuleSubtreeStream
struct RewriteRuleSubtreeStream_tDF7BD2219609A11BF6453FE1040119123D491B63;
// Antlr.Runtime.Tree.RewriteRuleTokenStream
struct RewriteRuleTokenStream_t8B39EC5BC5A9C437F13CBCD5D83CDD876F1649FA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// Antlr.Runtime.Tree.TreeFilter
struct TreeFilter_tD32D533ACEBD5E4519087B5B56085B153103456C;
// Antlr.Runtime.Tree.TreeIterator
struct TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4;
// Antlr.Runtime.Tree.TreeParser
struct TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120;
// Antlr.Runtime.Tree.TreePatternLexer
struct TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF;
// Antlr.Runtime.Tree.TreePatternParser
struct TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342;
// Antlr.Runtime.Tree.TreeRewriter
struct TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97;
// Antlr.Runtime.Tree.TreeVisitor
struct TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3;
// Antlr.Runtime.Tree.TreeVisitorAction
struct TreeVisitorAction_t8704A7EE215E2A6E6B0A7C95B34C3166265FF468;
// Antlr.Runtime.Tree.TreeWizard
struct TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9
struct U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090;
// Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8
struct U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Antlr.Runtime.Tree.TreeWizard/ActionVisitor
struct ActionVisitor_tF8A6085A57C134E956E9E996542E106C2190B8D0;
// Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor
struct FindTreeWizardContextVisitor_tF7E90D45DD07E51623B5DE4D7D4F7343F817B6FC;
// Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor
struct FindTreeWizardVisitor_t89484E4EAF3EED6A5897CF5D5FAE6256825B7325;
// Antlr.Runtime.Tree.TreeWizard/IContextVisitor
struct IContextVisitor_t087F66125AECA75D7707BB54492CFBDB4A9E4589;
// Antlr.Runtime.Tree.TreeWizard/TreePattern
struct TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096;
// Antlr.Runtime.Tree.TreeWizard/TreePatternTreeAdaptor
struct TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6;
// Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor
struct VisitTreeWizardContextVisitor_t291BBF45DE75CF84C28D35E331A12E4A1B25581C;
// Antlr.Runtime.Tree.TreeWizard/Visitor
struct Visitor_t80DD17571040243F981C06D12D16F0D7A2105A04;
// Antlr.Runtime.Tree.TreeWizard/WildcardTreePattern
struct WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11;

IL2CPP_EXTERN_C RuntimeClass* ActionVisitor_tF8A6085A57C134E956E9E996542E106C2190B8D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FindTreeWizardContextVisitor_tF7E90D45DD07E51623B5DE4D7D4F7343F817B6FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FindTreeWizardVisitor_t89484E4EAF3EED6A5897CF5D5FAE6256825B7325_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAstRuleReturnScope_tEE2265027FF09AF108202F494EC35014C696A14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t31AEFBCD4F757B04B4A7016B2E6B0E0923A6BB44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IContextVisitor_t087F66125AECA75D7707BB54492CFBDB4A9E4589_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t1DBD907AB48E2E0C407A1C0A5CE54723973A82A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t70D077FA6315C45FA2EB94FA2B8330148F1F627C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeVisitorAction_t621FB5F242D0C9CA89D53CA45D6149261214DC0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITree_tA515DAFC6771136C92E780C92473EFE3E33BBE4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedTreeNodeException_t28A6786186D606A7DD912DE49D00CF67B84343BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionException_t576E3524547A53B0950DC286707CBAE428645631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeVisitorAction_t8704A7EE215E2A6E6B0A7C95B34C3166265FF468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisitTreeWizardContextVisitor_t291BBF45DE75CF84C28D35E331A12E4A1B25581C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532;
IL2CPP_EXTERN_C String_t* _stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469;
IL2CPP_EXTERN_C String_t* _stringLiteral1F66D79B656BDA2916F8C6430ED835605C443B3E;
IL2CPP_EXTERN_C String_t* _stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E;
IL2CPP_EXTERN_C String_t* _stringLiteral2BDD70C3FF55D3012867CE5DF73EBDB975054E4E;
IL2CPP_EXTERN_C String_t* _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100;
IL2CPP_EXTERN_C String_t* _stringLiteral2E99079BE588CD012DF2F995F76F63AA4CFB15A0;
IL2CPP_EXTERN_C String_t* _stringLiteral32F05A3518F8993BB3D8FC6029754A5BD0C2407F;
IL2CPP_EXTERN_C String_t* _stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597;
IL2CPP_EXTERN_C String_t* _stringLiteral46AD75720E6D1C88A9CC45FBB82AA0582A17854F;
IL2CPP_EXTERN_C String_t* _stringLiteral4B73682CED1B654C47A337DF5A4BC2B5D6FD262A;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1;
IL2CPP_EXTERN_C String_t* _stringLiteral540925C49E1073D406F61AF4B04906CCACFC1DAE;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral79709B18E471A26FDB78780B715C9BBAAFD4CFEC;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral827B22AE86B43CCDB3331B7195ECFD0D429BB529;
IL2CPP_EXTERN_C String_t* _stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral884DE836248FF2895E37A904B1FE9B39766FAA84;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE7128187D3AD156C6CD8181A8C4A55758A7A64;
IL2CPP_EXTERN_C String_t* _stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
IL2CPP_EXTERN_C String_t* _stringLiteralAF78F12CBEBAA14971DB0DBFFF01C32258369393;
IL2CPP_EXTERN_C String_t* _stringLiteralB39D9436996A8004873548B9E60CABACFB9A297C;
IL2CPP_EXTERN_C String_t* _stringLiteralB598CF0802DB03FC469256176ABAFF79345D3832;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD1B1CFF3CAEB5B22780F45A8436CFAD9CFA542E8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDED6FFC1EBDB1883B38FE9BC796A376693C43877;
IL2CPP_EXTERN_C String_t* _stringLiteralEBD8044853D38524000A9618EB61AFD6F16295E8;
IL2CPP_EXTERN_C String_t* _stringLiteralED488AF45549D686E2B9C43CC5AA1CEA9AE1C324;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF821CB7F4C44C27F7CEAF54A257FF7D4D446AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m41CE364387C4E5027C7121E011B74D117FF388D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB4ABFB7D5439AA64BC954BECA405EA1DCB7D0F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA38077C7B16AE46F54A6A8E9C1F0EF0789C82B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteCardinalityException_GetObjectData_m2FB3FC72B0EAD22D06D9A26FD2CD20DF9E85FA90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteCardinalityException__ctor_m9E9EB5E28FAED5654584AA3CF363FFA5B417068A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_NextCore_m6B800350986383D298E2B757D87B6ABD4698E3D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleNodeStream_Dup_m1E006BF3070F592DC48B234BF6E173CEBDCEBF72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleTokenStream_Dup_m988CE5FA70CFEED394E14AF40A4F2E67DAC84C96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeFilter_U3CDownupU3Eb__5_0_mC5C701C2582F156A0373F5900641AEE0FC611093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeFilter_U3CDownupU3Eb__5_1_mCD642CA9F31CAFBACCA33B15FEC0EFED66A3511D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeParser_RecoverFromMismatchedToken_mC7F3D415D6612416C29DD914BBB544369A63B853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreePatternParser_ParseTree_m6CBE16DE799A33CA9678C3775D0AABC2B6033B49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeRewriter_U3CDownupU3Eb__10_0_mF3A7C821A06D7B6642A863F9405093B03B0C2C21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeRewriter_U3CDownupU3Eb__10_1_m16B2B176332A54A4CA0B02D9229C822755F6DA67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeRewriter_U3C_ctorU3Eb__6_0_mAED763D459EC2D1B8C36563BDC0454898426DA8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeRewriter_U3C_ctorU3Eb__6_1_m25060F7797D90F739CEF9F0D681AA505AD84AA19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDefineEdgesU3Ed__9_System_Collections_IEnumerator_Reset_mF84CCB99472B5340B67BB4062F6E9738C15835A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDefineNodesU3Ed__8_System_Collections_IEnumerator_Reset_m4E3773A61DEF815FC043151BFF86EA3A18C90B5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.IList>
struct Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF6131033BA8B8DE544E7177054CC71ADB156C6E4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5D372DB336DC2F33B239A7CA00D4290F1D738B90* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD2AC12FFB29B4114271DAF1D53E07E3B04894E71* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Antlr.Runtime.Misc.FastQueue`1<System.Object>
struct FastQueue_1_t3A36F778E8D558E8AE8DB771DA6A00B7541E3304  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Antlr.Runtime.Misc.FastQueue`1::_data
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____data_0;
	// System.Int32 Antlr.Runtime.Misc.FastQueue`1::_p
	int32_t ____p_1;
	// System.Int32 Antlr.Runtime.Misc.FastQueue`1::<Range>k__BackingField
	int32_t ___U3CRangeU3Ek__BackingField_2;
};

// System.Collections.Generic.List`1<Antlr.Runtime.IToken>
struct List_1_t40EDF6DB1A87D031D76B122798D35B86FD1A709D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ITokenU5BU5D_tB7C928134180452E84B122A66AF3160AE2DB2482* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t40EDF6DB1A87D031D76B122798D35B86FD1A709D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ITokenU5BU5D_tB7C928134180452E84B122A66AF3160AE2DB2482* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// Antlr.Runtime.BaseRecognizer
struct BaseRecognizer_t2F14D84F70ACE2CB0BA7549984A262EC9FA1F385  : public RuntimeObject
{
	// Antlr.Runtime.RecognizerSharedState Antlr.Runtime.BaseRecognizer::state
	RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* ___state_6;
	// System.IO.TextWriter Antlr.Runtime.BaseRecognizer::<TraceDestination>k__BackingField
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___U3CTraceDestinationU3Ek__BackingField_7;
};

// Antlr.Runtime.Tree.BaseTree
struct BaseTree_t0D93F514AF1E79FC22DA882F9C4520FD6BF636AF  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<Antlr.Runtime.Tree.ITree> Antlr.Runtime.Tree.BaseTree::_children
	RuntimeObject* ____children_0;
	// System.Int32 Antlr.Runtime.Tree.BaseTree::<Line>k__BackingField
	int32_t ___U3CLineU3Ek__BackingField_1;
	// System.Int32 Antlr.Runtime.Tree.BaseTree::<CharPositionInLine>k__BackingField
	int32_t ___U3CCharPositionInLineU3Ek__BackingField_2;
};

// Antlr.Runtime.Tree.BaseTreeAdaptor
struct BaseTreeAdaptor_t9CC9471A373DD900580C092A7FCF4167BDE4C954  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.Object,System.Int32> Antlr.Runtime.Tree.BaseTreeAdaptor::treeToUniqueIDMap
	RuntimeObject* ___treeToUniqueIDMap_0;
	// System.Int32 Antlr.Runtime.Tree.BaseTreeAdaptor::uniqueNodeID
	int32_t ___uniqueNodeID_1;
};

// Antlr.Runtime.BitSet
struct BitSet_t4B137A98ECAC9E937F62CF104E828ABE825FEFC7  : public RuntimeObject
{
	// System.UInt64[] Antlr.Runtime.BitSet::_bits
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____bits_3;
};

// Antlr.Runtime.CommonToken
struct CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F  : public RuntimeObject
{
	// System.Int32 Antlr.Runtime.CommonToken::type
	int32_t ___type_0;
	// System.Int32 Antlr.Runtime.CommonToken::line
	int32_t ___line_1;
	// System.Int32 Antlr.Runtime.CommonToken::charPositionInLine
	int32_t ___charPositionInLine_2;
	// System.Int32 Antlr.Runtime.CommonToken::channel
	int32_t ___channel_3;
	// Antlr.Runtime.ICharStream Antlr.Runtime.CommonToken::input
	RuntimeObject* ___input_4;
	// System.String Antlr.Runtime.CommonToken::text
	String_t* ___text_5;
	// System.Int32 Antlr.Runtime.CommonToken::index
	int32_t ___index_6;
	// System.Int32 Antlr.Runtime.CommonToken::start
	int32_t ___start_7;
	// System.Int32 Antlr.Runtime.CommonToken::stop
	int32_t ___stop_8;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Antlr.Runtime.Tree.DotTreeGenerator
struct DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3  : public RuntimeObject
{
	// System.String[] Antlr.Runtime.Tree.DotTreeGenerator::HeaderLines
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___HeaderLines_0;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> Antlr.Runtime.Tree.DotTreeGenerator::nodeToNumberMap
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___nodeToNumberMap_4;
	// System.Int32 Antlr.Runtime.Tree.DotTreeGenerator::nodeNumber
	int32_t ___nodeNumber_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Antlr.Runtime.RecognizerSharedState
struct RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1  : public RuntimeObject
{
	// Antlr.Runtime.BitSet[] Antlr.Runtime.RecognizerSharedState::following
	BitSetU5BU5D_t12D8CFDB22821FDD7F37653B673B4785F5729EA8* ___following_0;
	// System.Int32 Antlr.Runtime.RecognizerSharedState::_fsp
	int32_t ____fsp_1;
	// System.Boolean Antlr.Runtime.RecognizerSharedState::errorRecovery
	bool ___errorRecovery_2;
	// System.Int32 Antlr.Runtime.RecognizerSharedState::lastErrorIndex
	int32_t ___lastErrorIndex_3;
	// System.Boolean Antlr.Runtime.RecognizerSharedState::failed
	bool ___failed_4;
	// System.Int32 Antlr.Runtime.RecognizerSharedState::syntaxErrors
	int32_t ___syntaxErrors_5;
	// System.Int32 Antlr.Runtime.RecognizerSharedState::backtracking
	int32_t ___backtracking_6;
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>[] Antlr.Runtime.RecognizerSharedState::ruleMemo
	IDictionary_2U5BU5D_tF539C288CAC9EE20955F9583B351746F45A75704* ___ruleMemo_7;
	// Antlr.Runtime.IToken Antlr.Runtime.RecognizerSharedState::token
	RuntimeObject* ___token_8;
	// System.Int32 Antlr.Runtime.RecognizerSharedState::tokenStartCharIndex
	int32_t ___tokenStartCharIndex_9;
	// System.Int32 Antlr.Runtime.RecognizerSharedState::tokenStartLine
	int32_t ___tokenStartLine_10;
	// System.Int32 Antlr.Runtime.RecognizerSharedState::tokenStartCharPositionInLine
	int32_t ___tokenStartCharPositionInLine_11;
	// System.Int32 Antlr.Runtime.RecognizerSharedState::channel
	int32_t ___channel_12;
	// System.Int32 Antlr.Runtime.RecognizerSharedState::type
	int32_t ___type_13;
	// System.String Antlr.Runtime.RecognizerSharedState::text
	String_t* ___text_14;
};

// Antlr.Runtime.Misc.RegexOptionsHelper
struct RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83  : public RuntimeObject
{
};

struct RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83_StaticFields
{
	// System.Text.RegularExpressions.RegexOptions Antlr.Runtime.Misc.RegexOptionsHelper::Compiled
	int32_t ___Compiled_0;
};

// Antlr.Runtime.Tree.RewriteRuleElementStream
struct RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6  : public RuntimeObject
{
	// System.Int32 Antlr.Runtime.Tree.RewriteRuleElementStream::cursor
	int32_t ___cursor_0;
	// System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::singleElement
	RuntimeObject* ___singleElement_1;
	// System.Collections.IList Antlr.Runtime.Tree.RewriteRuleElementStream::elements
	RuntimeObject* ___elements_2;
	// System.Boolean Antlr.Runtime.Tree.RewriteRuleElementStream::dirty
	bool ___dirty_3;
	// System.String Antlr.Runtime.Tree.RewriteRuleElementStream::elementDescription
	String_t* ___elementDescription_4;
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.RewriteRuleElementStream::adaptor
	RuntimeObject* ___adaptor_5;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Antlr.Runtime.Tree.TreeIterator
struct TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4  : public RuntimeObject
{
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.TreeIterator::adaptor
	RuntimeObject* ___adaptor_0;
	// System.Object Antlr.Runtime.Tree.TreeIterator::root
	RuntimeObject* ___root_1;
	// System.Object Antlr.Runtime.Tree.TreeIterator::tree
	RuntimeObject* ___tree_2;
	// System.Boolean Antlr.Runtime.Tree.TreeIterator::firstTime
	bool ___firstTime_3;
	// System.Boolean Antlr.Runtime.Tree.TreeIterator::reachedEof
	bool ___reachedEof_4;
	// System.Object Antlr.Runtime.Tree.TreeIterator::up
	RuntimeObject* ___up_5;
	// System.Object Antlr.Runtime.Tree.TreeIterator::down
	RuntimeObject* ___down_6;
	// System.Object Antlr.Runtime.Tree.TreeIterator::eof
	RuntimeObject* ___eof_7;
	// System.Collections.Generic.Queue`1<System.Object> Antlr.Runtime.Tree.TreeIterator::nodes
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___nodes_8;
	// System.Object Antlr.Runtime.Tree.TreeIterator::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_9;
};

// Antlr.Runtime.Tree.TreePatternLexer
struct TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF  : public RuntimeObject
{
	// System.String Antlr.Runtime.Tree.TreePatternLexer::pattern
	String_t* ___pattern_7;
	// System.Int32 Antlr.Runtime.Tree.TreePatternLexer::p
	int32_t ___p_8;
	// System.Int32 Antlr.Runtime.Tree.TreePatternLexer::c
	int32_t ___c_9;
	// System.Int32 Antlr.Runtime.Tree.TreePatternLexer::n
	int32_t ___n_10;
	// System.Text.StringBuilder Antlr.Runtime.Tree.TreePatternLexer::sval
	StringBuilder_t* ___sval_11;
	// System.Boolean Antlr.Runtime.Tree.TreePatternLexer::error
	bool ___error_12;
};

// Antlr.Runtime.Tree.TreePatternParser
struct TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342  : public RuntimeObject
{
	// Antlr.Runtime.Tree.TreePatternLexer Antlr.Runtime.Tree.TreePatternParser::tokenizer
	TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* ___tokenizer_0;
	// System.Int32 Antlr.Runtime.Tree.TreePatternParser::ttype
	int32_t ___ttype_1;
	// Antlr.Runtime.Tree.TreeWizard Antlr.Runtime.Tree.TreePatternParser::wizard
	TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* ___wizard_2;
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.TreePatternParser::adaptor
	RuntimeObject* ___adaptor_3;
};

// Antlr.Runtime.Tree.TreeVisitor
struct TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3  : public RuntimeObject
{
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.TreeVisitor::adaptor
	RuntimeObject* ___adaptor_0;
};

// Antlr.Runtime.Tree.TreeVisitorAction
struct TreeVisitorAction_t8704A7EE215E2A6E6B0A7C95B34C3166265FF468  : public RuntimeObject
{
	// Antlr.Runtime.Misc.Func`2<System.Object,System.Object> Antlr.Runtime.Tree.TreeVisitorAction::_preAction
	Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* ____preAction_0;
	// Antlr.Runtime.Misc.Func`2<System.Object,System.Object> Antlr.Runtime.Tree.TreeVisitorAction::_postAction
	Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* ____postAction_1;
};

// Antlr.Runtime.Tree.TreeWizard
struct TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B  : public RuntimeObject
{
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.TreeWizard::adaptor
	RuntimeObject* ___adaptor_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Antlr.Runtime.Tree.TreeWizard::tokenNameToTypeMap
	RuntimeObject* ___tokenNameToTypeMap_1;
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

// Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9
struct U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090  : public RuntimeObject
{
	// System.Int32 Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Object Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::tree
	RuntimeObject* ___tree_3;
	// System.Object Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>3__tree
	RuntimeObject* ___U3CU3E3__tree_4;
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::adaptor
	RuntimeObject* ___adaptor_5;
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>3__adaptor
	RuntimeObject* ___U3CU3E3__adaptor_6;
	// Antlr.Runtime.Tree.DotTreeGenerator Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>4__this
	DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* ___U3CU3E4__this_7;
	// System.String Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<parentName>5__1
	String_t* ___U3CparentNameU3E5__1_8;
	// System.String Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<parentText>5__2
	String_t* ___U3CparentTextU3E5__2_9;
	// System.Object Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<child>5__3
	RuntimeObject* ___U3CchildU3E5__3_10;
	// System.Int32 Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<i>5__4
	int32_t ___U3CiU3E5__4_11;
	// System.Int32 Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<n>5__5
	int32_t ___U3CnU3E5__5_12;
	// System.Collections.Generic.IEnumerator`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_13;
};

// Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8
struct U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164  : public RuntimeObject
{
	// System.Int32 Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Object Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::tree
	RuntimeObject* ___tree_3;
	// System.Object Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>3__tree
	RuntimeObject* ___U3CU3E3__tree_4;
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::adaptor
	RuntimeObject* ___adaptor_5;
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>3__adaptor
	RuntimeObject* ___U3CU3E3__adaptor_6;
	// Antlr.Runtime.Tree.DotTreeGenerator Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>4__this
	DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* ___U3CU3E4__this_7;
	// System.Object Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<child>5__1
	RuntimeObject* ___U3CchildU3E5__1_8;
	// System.Int32 Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<i>5__2
	int32_t ___U3CiU3E5__2_9;
	// System.Int32 Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<n>5__3
	int32_t ___U3CnU3E5__3_10;
	// System.Collections.Generic.IEnumerator`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_11;
};

// Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor
struct FindTreeWizardContextVisitor_tF7E90D45DD07E51623B5DE4D7D4F7343F817B6FC  : public RuntimeObject
{
	// Antlr.Runtime.Tree.TreeWizard Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::_outer
	TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* ____outer_0;
	// Antlr.Runtime.Tree.TreeWizard/TreePattern Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::_tpattern
	TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* ____tpattern_1;
	// System.Collections.IList Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::_subtrees
	RuntimeObject* ____subtrees_2;
};

// Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor
struct VisitTreeWizardContextVisitor_t291BBF45DE75CF84C28D35E331A12E4A1B25581C  : public RuntimeObject
{
	// Antlr.Runtime.Tree.TreeWizard Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::_outer
	TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* ____outer_0;
	// Antlr.Runtime.Tree.TreeWizard/IContextVisitor Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::_visitor
	RuntimeObject* ____visitor_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::_labels
	RuntimeObject* ____labels_2;
	// Antlr.Runtime.Tree.TreeWizard/TreePattern Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::_tpattern
	TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* ____tpattern_3;
};

// Antlr.Runtime.Tree.TreeWizard/Visitor
struct Visitor_t80DD17571040243F981C06D12D16F0D7A2105A04  : public RuntimeObject
{
};

// Antlr.Runtime.Misc.LookaheadStream`1<System.Object>
struct LookaheadStream_1_tA3717D71E0F69421520951E9F6BC47F1684E45D4  : public FastQueue_1_t3A36F778E8D558E8AE8DB771DA6A00B7541E3304
{
	// System.Int32 Antlr.Runtime.Misc.LookaheadStream`1::_currentElementIndex
	int32_t ____currentElementIndex_3;
	// T Antlr.Runtime.Misc.LookaheadStream`1::_previousElement
	RuntimeObject* ____previousElement_4;
	// T Antlr.Runtime.Misc.LookaheadStream`1::_eof
	RuntimeObject* ____eof_5;
	// System.Int32 Antlr.Runtime.Misc.LookaheadStream`1::_lastMarker
	int32_t ____lastMarker_6;
	// System.Int32 Antlr.Runtime.Misc.LookaheadStream`1::_markDepth
	int32_t ____markDepth_7;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Antlr.Runtime.Tree.CommonTree
struct CommonTree_t6AA87323D6EE7DFA4DF8C0ED60845470A8F967C0  : public BaseTree_t0D93F514AF1E79FC22DA882F9C4520FD6BF636AF
{
	// Antlr.Runtime.IToken Antlr.Runtime.Tree.CommonTree::_token
	RuntimeObject* ____token_3;
	// System.Int32 Antlr.Runtime.Tree.CommonTree::startIndex
	int32_t ___startIndex_4;
	// System.Int32 Antlr.Runtime.Tree.CommonTree::stopIndex
	int32_t ___stopIndex_5;
	// Antlr.Runtime.Tree.CommonTree Antlr.Runtime.Tree.CommonTree::parent
	CommonTree_t6AA87323D6EE7DFA4DF8C0ED60845470A8F967C0* ___parent_6;
	// System.Int32 Antlr.Runtime.Tree.CommonTree::childIndex
	int32_t ___childIndex_7;
};

// Antlr.Runtime.Tree.CommonTreeAdaptor
struct CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1  : public BaseTreeAdaptor_t9CC9471A373DD900580C092A7FCF4167BDE4C954
{
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

// Antlr.Runtime.Tree.ParseTree
struct ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207  : public BaseTree_t0D93F514AF1E79FC22DA882F9C4520FD6BF636AF
{
	// System.Object Antlr.Runtime.Tree.ParseTree::payload
	RuntimeObject* ___payload_3;
	// System.Collections.Generic.List`1<Antlr.Runtime.IToken> Antlr.Runtime.Tree.ParseTree::hiddenTokens
	List_1_t40EDF6DB1A87D031D76B122798D35B86FD1A709D* ___hiddenTokens_4;
};

// Antlr.Runtime.Tree.RewriteRuleNodeStream
struct RewriteRuleNodeStream_t059525EBF94903C8F0A7A58B1D27DB0D26C6FF06  : public RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6
{
};

// Antlr.Runtime.Tree.RewriteRuleSubtreeStream
struct RewriteRuleSubtreeStream_tDF7BD2219609A11BF6453FE1040119123D491B63  : public RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6
{
};

// Antlr.Runtime.Tree.RewriteRuleTokenStream
struct RewriteRuleTokenStream_t8B39EC5BC5A9C437F13CBCD5D83CDD876F1649FA  : public RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6
{
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// Antlr.Runtime.Tree.TreeParser
struct TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120  : public BaseRecognizer_t2F14D84F70ACE2CB0BA7549984A262EC9FA1F385
{
	// Antlr.Runtime.Tree.ITreeNodeStream Antlr.Runtime.Tree.TreeParser::input
	RuntimeObject* ___input_14;
};

struct TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_StaticFields
{
	// System.String Antlr.Runtime.Tree.TreeParser::dotdot
	String_t* ___dotdot_10;
	// System.String Antlr.Runtime.Tree.TreeParser::doubleEtc
	String_t* ___doubleEtc_11;
	// System.Text.RegularExpressions.Regex Antlr.Runtime.Tree.TreeParser::dotdotPattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___dotdotPattern_12;
	// System.Text.RegularExpressions.Regex Antlr.Runtime.Tree.TreeParser::doubleEtcPattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___doubleEtcPattern_13;
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

// Antlr.Runtime.Tree.TreeWizard/ActionVisitor
struct ActionVisitor_tF8A6085A57C134E956E9E996542E106C2190B8D0  : public Visitor_t80DD17571040243F981C06D12D16F0D7A2105A04
{
	// System.Action`1<System.Object> Antlr.Runtime.Tree.TreeWizard/ActionVisitor::_action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____action_0;
};

// Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor
struct FindTreeWizardVisitor_t89484E4EAF3EED6A5897CF5D5FAE6256825B7325  : public Visitor_t80DD17571040243F981C06D12D16F0D7A2105A04
{
	// System.Collections.IList Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor::_nodes
	RuntimeObject* ____nodes_0;
};

// Antlr.Runtime.Tree.CommonTreeNodeStream
struct CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38  : public LookaheadStream_1_tA3717D71E0F69421520951E9F6BC47F1684E45D4
{
	// System.Object Antlr.Runtime.Tree.CommonTreeNodeStream::_root
	RuntimeObject* ____root_10;
	// Antlr.Runtime.ITokenStream Antlr.Runtime.Tree.CommonTreeNodeStream::tokens
	RuntimeObject* ___tokens_11;
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.CommonTreeNodeStream::_adaptor
	RuntimeObject* ____adaptor_12;
	// Antlr.Runtime.Tree.TreeIterator Antlr.Runtime.Tree.CommonTreeNodeStream::_it
	TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* ____it_13;
	// System.Collections.Generic.Stack`1<System.Int32> Antlr.Runtime.Tree.CommonTreeNodeStream::_calls
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ____calls_14;
	// System.Boolean Antlr.Runtime.Tree.CommonTreeNodeStream::_hasNilRoot
	bool ____hasNilRoot_15;
	// System.Int32 Antlr.Runtime.Tree.CommonTreeNodeStream::_level
	int32_t ____level_16;
	// System.Object Antlr.Runtime.Tree.CommonTreeNodeStream::_previousLocationElement
	RuntimeObject* ____previousLocationElement_17;
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

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Antlr.Runtime.Tree.TreeFilter
struct TreeFilter_tD32D533ACEBD5E4519087B5B56085B153103456C  : public TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120
{
	// Antlr.Runtime.ITokenStream Antlr.Runtime.Tree.TreeFilter::originalTokenStream
	RuntimeObject* ___originalTokenStream_15;
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.TreeFilter::originalAdaptor
	RuntimeObject* ___originalAdaptor_16;
};

// Antlr.Runtime.Tree.TreeRewriter
struct TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97  : public TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120
{
	// System.Boolean Antlr.Runtime.Tree.TreeRewriter::showTransformations
	bool ___showTransformations_15;
	// Antlr.Runtime.ITokenStream Antlr.Runtime.Tree.TreeRewriter::originalTokenStream
	RuntimeObject* ___originalTokenStream_16;
	// Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.TreeRewriter::originalAdaptor
	RuntimeObject* ___originalAdaptor_17;
	// Antlr.Runtime.Misc.Func`1<Antlr.Runtime.IAstRuleReturnScope> Antlr.Runtime.Tree.TreeRewriter::topdown_func
	Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* ___topdown_func_18;
	// Antlr.Runtime.Misc.Func`1<Antlr.Runtime.IAstRuleReturnScope> Antlr.Runtime.Tree.TreeRewriter::bottomup_func
	Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* ___bottomup_func_19;
};

// Antlr.Runtime.Tree.TreeWizard/TreePattern
struct TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096  : public CommonTree_t6AA87323D6EE7DFA4DF8C0ED60845470A8F967C0
{
	// System.String Antlr.Runtime.Tree.TreeWizard/TreePattern::label
	String_t* ___label_8;
	// System.Boolean Antlr.Runtime.Tree.TreeWizard/TreePattern::hasTextArg
	bool ___hasTextArg_9;
};

// Antlr.Runtime.Tree.TreeWizard/TreePatternTreeAdaptor
struct TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6  : public CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1
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

// Antlr.Runtime.RecognitionException
struct RecognitionException_t576E3524547A53B0950DC286707CBAE428645631  : public Exception_t
{
	// Antlr.Runtime.IIntStream Antlr.Runtime.RecognitionException::_input
	RuntimeObject* ____input_18;
	// System.Int32 Antlr.Runtime.RecognitionException::_k
	int32_t ____k_19;
	// System.Int32 Antlr.Runtime.RecognitionException::_index
	int32_t ____index_20;
	// Antlr.Runtime.IToken Antlr.Runtime.RecognitionException::_token
	RuntimeObject* ____token_21;
	// System.Object Antlr.Runtime.RecognitionException::_node
	RuntimeObject* ____node_22;
	// System.Int32 Antlr.Runtime.RecognitionException::_c
	int32_t ____c_23;
	// System.Int32 Antlr.Runtime.RecognitionException::_line
	int32_t ____line_24;
	// System.Int32 Antlr.Runtime.RecognitionException::_charPositionInLine
	int32_t ____charPositionInLine_25;
	// System.Boolean Antlr.Runtime.RecognitionException::_approximateLineInfo
	bool ____approximateLineInfo_26;
};

// Antlr.Runtime.Tree.RewriteCardinalityException
struct RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E  : public Exception_t
{
	// System.String Antlr.Runtime.Tree.RewriteCardinalityException::_elementDescription
	String_t* ____elementDescription_18;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Antlr.Runtime.Tree.TreeWizard/WildcardTreePattern
struct WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11  : public TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// Antlr.Runtime.Misc.Func`1<Antlr.Runtime.IAstRuleReturnScope>
struct Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F  : public MulticastDelegate_t
{
};

// Antlr.Runtime.Misc.Func`1<System.Object>
struct Func_1_tFD28F346415D64114C660AC5AD18B7017D86E3EC  : public MulticastDelegate_t
{
};

// Antlr.Runtime.Misc.Func`2<System.Object,System.Object>
struct Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE  : public MulticastDelegate_t
{
};

// Antlr.Runtime.Misc.Action
struct Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Antlr.Runtime.MismatchedTreeNodeException
struct MismatchedTreeNodeException_t28A6786186D606A7DD912DE49D00CF67B84343BB  : public RecognitionException_t576E3524547A53B0950DC286707CBAE428645631
{
	// System.Int32 Antlr.Runtime.MismatchedTreeNodeException::_expecting
	int32_t ____expecting_27;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Antlr.Runtime.Tree.RewriteEarlyExitException
struct RewriteEarlyExitException_tFC31D6DD5630A3C5E5A3B87FB4AB6E60E2B76049  : public RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E
{
};

// Antlr.Runtime.Tree.RewriteEmptyStreamException
struct RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1  : public RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// TResult Antlr.Runtime.Misc.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mB1969CADA86CD70B7E310F9B24DA989DA1C83D92_gshared_inline (Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Misc.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m558F3C853A299B4949A686D90F716D2303B6FF1B_gshared (Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Misc.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m5544C8A129FEF8DF01BA204537698D09B84ED551_gshared (Func_1_tFD28F346415D64114C660AC5AD18B7017D86E3EC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TResult Antlr.Runtime.Misc.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m52200AB41573A469E51866B6F8FBA3773040A8C8_gshared_inline (Func_1_tFD28F346415D64114C660AC5AD18B7017D86E3EC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;

// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.CommonTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeAdaptor__ctor_m76A72A7C0D6D23F7DB87E28534B34AE74FBA229C (CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8__ctor_m08C548EB39034645D49DA126FA2A64486F791B74 (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9__ctor_m02F18D76FAEEA63E66913679093203B36B1517DB (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66 (String_t* ___input0, String_t* ___pattern1, String_t* ___replacement2, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8_U3CU3Em__Finally1_mA96B136FA0BD9137D664554BEA5884B9CC275F2E (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8_System_IDisposable_Dispose_mC7C30B55A9327850A28761BBC458A83C80C19ECA (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineNodesU3Ed__8_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m6F9FBF635E1B7AD43EE403B7190444EAFA15882E (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9_U3CU3Em__Finally1_m05F80D702ADCF57D347C026834A29FC4948FB27A (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9_System_IDisposable_Dispose_m91679D2AC1691E29AAAC5CB2A56FBF53CAD379DB (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineEdgesU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m3D92A3603C27CBC022C79382C3BAB8EA49E900CE (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, const RuntimeMethod* method) ;
// TResult Antlr.Runtime.Misc.Func`2<System.Object,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_mB1969CADA86CD70B7E310F9B24DA989DA1C83D92_inline (Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mB1969CADA86CD70B7E310F9B24DA989DA1C83D92_gshared_inline)(__this, ___arg0, method);
}
// System.Void Antlr.Runtime.Tree.BaseTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree__ctor_mE00DB893ADC95F1FD7BF4E7B94C20757E96BBD71 (BaseTree_t0D93F514AF1E79FC22DA882F9C4520FD6BF636AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Antlr.Runtime.IToken>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mA38077C7B16AE46F54A6A8E9C1F0EF0789C82B54 (List_1_t40EDF6DB1A87D031D76B122798D35B86FD1A709D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t40EDF6DB1A87D031D76B122798D35B86FD1A709D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Antlr.Runtime.IToken>::get_Count()
inline int32_t List_1_get_Count_mB4ABFB7D5439AA64BC954BECA405EA1DCB7D0F4A_inline (List_1_t40EDF6DB1A87D031D76B122798D35B86FD1A709D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t40EDF6DB1A87D031D76B122798D35B86FD1A709D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m79F5E316CA7AE3C1A7CE8FBEFC087AB5033A5F1C (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, String_t* ___message0, String_t* ___elementDescription1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m99025AC33BB81CCEC928C4483AEF284E17ECF3DC (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, String_t* ___message0, String_t* ___elementDescription1, Exception_t* ___innerException2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_mF0753AFAA13AABF8A30B8F0890AEC52BFBBC73E9 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m5F21FF186D979E077C11BA66FAA770B8F0B9E066 (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_mF4B3131D2B157862AA94F141D33C7B0A94736C47 (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, String_t* ___elementDescription0, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m30681F2099524DD52826A52BD94F88B98A857451 (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, String_t* ___elementDescription0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m9E9EB5E28FAED5654584AA3CF363FFA5B417068A (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_m11B714A116154B49EDB36DA726CE4988F2002CB1 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
inline void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_mE89334963CB2EA62B7298059451E8475D17D4C96 (RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1* __this, String_t* ___elementDescription0, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_mA3BEFCE1219249C340637697B95214CF1D7488E1 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_m83627CE3ABEB0BD3A14F0191969B175579F56D36 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.RecognizerSharedState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizerSharedState__ctor_mBD6CA377430FFE7EF9EA4A157079CAC82210C00D (RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeFilter::.ctor(Antlr.Runtime.Tree.ITreeNodeStream,Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter__ctor_m83321B384A97E79E3D5B9003107F419BD195BED6 (TreeFilter_tD32D533ACEBD5E4519087B5B56085B153103456C* __this, RuntimeObject* ___input0, RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* ___state1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeParser::.ctor(Antlr.Runtime.Tree.ITreeNodeStream,Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser__ctor_mD264BCA00B3235E0CF338F1C11BC219C268BDD4B (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, RuntimeObject* ___input0, RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* ___state1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.CommonTreeNodeStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeNodeStream__ctor_m8748AF9B7B1A4B04275F405E5701136F9DDB3189 (CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38* __this, RuntimeObject* ___adaptor0, RuntimeObject* ___tree1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Misc.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_inline (Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeVisitor::.ctor(Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeVisitor__ctor_m3E8404CD0899DAA04021EC339E8F378620E20927 (TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3* __this, RuntimeObject* ___adaptor0, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Misc.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m558F3C853A299B4949A686D90F716D2303B6FF1B (Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m558F3C853A299B4949A686D90F716D2303B6FF1B_gshared)(__this, ___object0, ___method1, method);
}
// System.Object Antlr.Runtime.Tree.TreeVisitor::Visit(System.Object,Antlr.Runtime.Misc.Func`2<System.Object,System.Object>,Antlr.Runtime.Misc.Func`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitor_Visit_m36C8086121A295DA25B3895BC17F2AE85D36D8A9 (TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3* __this, RuntimeObject* ___t0, Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* ___preAction1, Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* ___postAction2, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Misc.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mE4CBCF6C81F4CE25FD2F85865F08A3B6B21DE0D4 (Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeIterator::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator__ctor_m0F6998C96766A949938BF99B849EFCF442658992 (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, RuntimeObject* ___adaptor0, RuntimeObject* ___tree1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
inline void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
inline void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Void Antlr.Runtime.Tree.TreeIterator::set_Current(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreeIterator_set_Current_m27B1815CCABA80A76497E2C3E109CFF19A265E69_inline (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
inline int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
inline RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Object Antlr.Runtime.Tree.TreeIterator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TreeIterator_get_Current_m4E2E5459FBF71F2E91101D0DF2127BB05F7AFC7D_inline (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
inline void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// System.Void Antlr.Runtime.BaseRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_mBA691BDC92EDBB9CB1EDF51690D768BAE11C7740 (BaseRecognizer_t2F14D84F70ACE2CB0BA7549984A262EC9FA1F385* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.BaseRecognizer::.ctor(Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_m8B2F902DBAD909C3FD0C185E31025F07051395C0 (BaseRecognizer_t2F14D84F70ACE2CB0BA7549984A262EC9FA1F385* __this, RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* ___state0, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.BaseRecognizer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_Reset_m331082184C41A2EF4082EF0FE6AF9034456BE1B5 (BaseRecognizer_t2F14D84F70ACE2CB0BA7549984A262EC9FA1F385* __this, const RuntimeMethod* method) ;
// Antlr.Runtime.IIntStream Antlr.Runtime.RecognitionException::get_Input()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Input_m3BB2983115EDC82A40F858E08AB8EA5F80A86B90_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.CommonToken::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_m4AA3C59E97512BA3F1E894CAD8556CEE8D4323A4 (CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F* __this, int32_t ___type0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.MismatchedTreeNodeException::.ctor(System.Int32,Antlr.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTreeNodeException__ctor_m57871564C29753048A911AE67D41B8C026960577 (MismatchedTreeNodeException_t28A6786186D606A7DD912DE49D00CF67B84343BB* __this, int32_t ___expecting0, RuntimeObject* ___input1, const RuntimeMethod* method) ;
// System.Boolean Antlr.Runtime.RecognitionException::get_ApproximateLineInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RecognitionException_get_ApproximateLineInfo_m605D71D61A379E5314A0C48FAB8AACEA1DF4DD4D_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) ;
// System.Int32 Antlr.Runtime.RecognitionException::get_Line()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_mC197DA09461F8EE834725C92EB042E02275DD186_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) ;
// System.Int32 Antlr.Runtime.RecognitionException::get_CharPositionInLine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_mE8AA1E6859878D55F48EE1BA1B29A13B964B4B5C_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Object Antlr.Runtime.RecognitionException::get_Node()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Node_mA6FB149FE5FE8CCCEAFE0D2D70F0FB011842DACE_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.RecognitionException::set_Token(Antlr.Runtime.IToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionException_set_Token_m958D222E0ACFE7D231929262AF30CA115807167F_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Antlr.Runtime.IToken Antlr.Runtime.RecognitionException::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_m0CB661816AB5D38DB2C59ECBA0A9F912D9D11A6A_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) ;
// System.String Antlr.Runtime.BaseRecognizer::GetErrorMessage(Antlr.Runtime.RecognitionException,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_GetErrorMessage_m3A42AF82D5CAC36B00F1CFE67D35565C6EB60139 (BaseRecognizer_t2F14D84F70ACE2CB0BA7549984A262EC9FA1F385* __this, RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* ___e0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.BaseRecognizer::TraceIn(System.String,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_TraceIn_m2CD0C6C8F81AAEDED34DE8D30212FB2586E664DC (BaseRecognizer_t2F14D84F70ACE2CB0BA7549984A262EC9FA1F385* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, RuntimeObject* ___inputSymbol2, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.BaseRecognizer::TraceOut(System.String,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_TraceOut_mD3DE56C63DB3BF6AEC27B8434797E9478CF8876A (BaseRecognizer_t2F14D84F70ACE2CB0BA7549984A262EC9FA1F385* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, RuntimeObject* ___inputSymbol2, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeWizard/WildcardTreePattern::.ctor(Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WildcardTreePattern__ctor_mCDED29F350E50B0E99A5ABDE85CBA779894CCECF (WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11* __this, RuntimeObject* ___payload0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeRewriter::.ctor(Antlr.Runtime.Tree.ITreeNodeStream,Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeRewriter__ctor_mCD13323EC83093F61A3C21D8BC6BB262929B1DE8 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, RuntimeObject* ___input0, RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* ___state1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Misc.Func`1<Antlr.Runtime.IAstRuleReturnScope>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m30952416DA2C7CD2BAFCF03658DE2A93200DB991 (Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m5544C8A129FEF8DF01BA204537698D09B84ED551_gshared)(__this, ___object0, ___method1, method);
}
// TResult Antlr.Runtime.Misc.Func`1<Antlr.Runtime.IAstRuleReturnScope>::Invoke()
inline RuntimeObject* Func_1_Invoke_m90AB37C261679CABC823813C4167C4B8CCA4E0B6_inline (Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F*, const RuntimeMethod*))Func_1_Invoke_m52200AB41573A469E51866B6F8FBA3773040A8C8_gshared_inline)(__this, method);
}
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m8EA4BDC446722A76375AC8DB04FEDB134E7A9A27 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Object Antlr.Runtime.Tree.TreeVisitor::Visit(System.Object,Antlr.Runtime.Tree.ITreeVisitorAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitor_Visit_mB6C553975C89403FF2D1AB84630BBADC2E947BB3 (TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3* __this, RuntimeObject* ___t0, RuntimeObject* ___action1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeVisitorAction::.ctor(Antlr.Runtime.Misc.Func`2<System.Object,System.Object>,Antlr.Runtime.Misc.Func`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeVisitorAction__ctor_mC262D0BF7C3DCDD5A754FB63B2A3424E9CA12A97 (TreeVisitorAction_t8704A7EE215E2A6E6B0A7C95B34C3166265FF468* __this, Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* ___preAction0, Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* ___postAction1, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeWizard::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard__ctor_m53EBA865DEA2C7A31A153691B1077B9E8FE460B1 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___adaptor0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.IList>::.ctor()
inline void Dictionary_2__ctor_m41CE364387C4E5027C7121E011B74D117FF388D5 (Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor::.ctor(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardVisitor__ctor_m88749B29469C684F4D648EBF443E896103229F60 (FindTreeWizardVisitor_t89484E4EAF3EED6A5897CF5D5FAE6256825B7325* __this, RuntimeObject* ___nodes0, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeWizard::Visit(System.Object,System.Int32,Antlr.Runtime.Tree.TreeWizard/IContextVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_Visit_m4DA62C2AB139CAA695AD26BC6EB75B6A709C4B61 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, int32_t ___ttype1, RuntimeObject* ___visitor2, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreePatternLexer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternLexer__ctor_m59DCBF05858A285C49CD8352B59681ED369A9401 (TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* __this, String_t* ___pattern0, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeWizard/TreePatternTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternTreeAdaptor__ctor_mDF3A35E91943CC4C39F1857202338490F1A4CAA1 (TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreePatternParser::.ctor(Antlr.Runtime.Tree.TreePatternLexer,Antlr.Runtime.Tree.TreeWizard,Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternParser__ctor_m5D8CB3AA6693BF4D7DF5DC4545C1DCEF3BBE7251 (TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342* __this, TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* ___tokenizer0, TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* ___wizard1, RuntimeObject* ___adaptor2, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::.ctor(Antlr.Runtime.Tree.TreeWizard,Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardContextVisitor__ctor_mBF92A4A85E96424BCBAC86EA5C989305C1B950B3 (FindTreeWizardContextVisitor_tF7E90D45DD07E51623B5DE4D7D4F7343F817B6FC* __this, TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* ___outer0, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* ___tpattern1, RuntimeObject* ___subtrees2, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeWizard/ActionVisitor::.ctor(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionVisitor__ctor_m09949FE5E1C5455A6F95E91F1FE09E6CBE0549EE (ActionVisitor_tF8A6085A57C134E956E9E996542E106C2190B8D0* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::.ctor(Antlr.Runtime.Tree.TreeWizard,Antlr.Runtime.Tree.TreeWizard/IContextVisitor,System.Collections.Generic.IDictionary`2<System.String,System.Object>,Antlr.Runtime.Tree.TreeWizard/TreePattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitTreeWizardContextVisitor__ctor_m0A502360F286ECFB39D2CD351D04CDBE6714DF8E (VisitTreeWizardContextVisitor_t291BBF45DE75CF84C28D35E331A12E4A1B25581C* __this, TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* ___outer0, RuntimeObject* ___visitor1, RuntimeObject* ___labels2, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* ___tpattern3, const RuntimeMethod* method) ;
// System.Boolean Antlr.Runtime.Tree.TreeWizard::Parse(System.Object,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_Parse_mB3F41ABBC888FB518FC2D5D8B918902561CD83AF (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, String_t* ___pattern1, RuntimeObject* ___labels2, const RuntimeMethod* method) ;
// System.Boolean Antlr.Runtime.Tree.TreeWizard::EqualsCore(System.Object,System.Object,Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_EqualsCore_m194FD8516F1E91C8B10F219134899B3E5A68DC5A (RuntimeObject* ___t10, RuntimeObject* ___t21, RuntimeObject* ___adaptor2, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeWizard/Visitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visitor__ctor_mCD5D20DCB415ED9BA4001B6AAA222B6D2DC6177A (Visitor_t80DD17571040243F981C06D12D16F0D7A2105A04* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Antlr.Runtime.Tree.CommonTree::.ctor(Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_mDB78BF2B48AF569A5A2968CA39C9B1680949B381 (CommonTree_t6AA87323D6EE7DFA4DF8C0ED60845470A8F967C0* __this, RuntimeObject* ___t0, const RuntimeMethod* method) ;
// System.String Antlr.Runtime.Tree.CommonTree::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTree_ToString_m77E1CF809813B9849A7FA45C5F204E7A31117887 (CommonTree_t6AA87323D6EE7DFA4DF8C0ED60845470A8F967C0* __this, const RuntimeMethod* method) ;
// System.Void Antlr.Runtime.Tree.TreeWizard/TreePattern::.ctor(Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePattern__ctor_m96F0E0E3B37C97F348750B2E929343FFE537A755 (TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* __this, RuntimeObject* ___payload0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Antlr.Runtime.Tree.DotTreeGenerator::ToDot(System.Object,Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotTreeGenerator_ToDot_m8CD3AEBAA9F2962655AFDCC784BADA75F3807141 (DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* __this, RuntimeObject* ___tree0, RuntimeObject* ___adaptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___HeaderLines_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0023;
	}

IL_0011:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		StringBuilder_t* L_6 = V_0;
		String_t* L_7 = V_4;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_6, L_7, NULL);
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		__this->___nodeNumber_5 = 0;
		RuntimeObject* L_12 = ___tree0;
		RuntimeObject* L_13 = ___adaptor1;
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IEnumerable`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator::DefineNodes(System.Object,Antlr.Runtime.Tree.ITreeAdaptor) */, __this, L_12, L_13);
		__this->___nodeNumber_5 = 0;
		RuntimeObject* L_15 = ___tree0;
		RuntimeObject* L_16 = ___adaptor1;
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* System.Collections.Generic.IEnumerable`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator::DefineEdges(System.Object,Antlr.Runtime.Tree.ITreeAdaptor) */, __this, L_15, L_16);
		V_1 = L_17;
		NullCheck(L_14);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_14);
		V_5 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_19 = V_5;
					if (!L_19)
					{
						goto IL_0079;
					}
				}
				{
					RuntimeObject* L_20 = V_5;
					NullCheck(L_20);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_20);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0063_1;
			}

IL_0051_1:
			{
				RuntimeObject* L_21 = V_5;
				NullCheck(L_21);
				String_t* L_22;
				L_22 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_21);
				V_6 = L_22;
				StringBuilder_t* L_23 = V_0;
				String_t* L_24 = V_6;
				NullCheck(L_23);
				StringBuilder_t* L_25;
				L_25 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_23, L_24, NULL);
			}

IL_0063_1:
			{
				RuntimeObject* L_26 = V_5;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_0051_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_28, NULL);
		RuntimeObject* L_30 = V_1;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_30);
		V_5 = L_31;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a8:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_32 = V_5;
					if (!L_32)
					{
						goto IL_00b3;
					}
				}
				{
					RuntimeObject* L_33 = V_5;
					NullCheck(L_33);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_33);
				}

IL_00b3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009d_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_34 = V_5;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_34);
				V_7 = L_35;
				StringBuilder_t* L_36 = V_0;
				String_t* L_37 = V_7;
				NullCheck(L_36);
				StringBuilder_t* L_38;
				L_38 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_36, L_37, NULL);
			}

IL_009d_1:
			{
				RuntimeObject* L_39 = V_5;
				NullCheck(L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_39);
				if (L_40)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00b4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b4:
	{
		StringBuilder_t* L_41 = V_0;
		NullCheck(L_41);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_41, NULL);
		StringBuilder_t* L_43 = V_0;
		NullCheck(L_43);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_43, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_45 = V_0;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
		return L_46;
	}
}
// System.String Antlr.Runtime.Tree.DotTreeGenerator::ToDot(Antlr.Runtime.Tree.ITree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotTreeGenerator_ToDot_m1E89231C3007EE688BE2831E3E0CB1B43434F8D5 (DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* __this, RuntimeObject* ___tree0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___tree0;
		CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1* L_1 = (CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1*)il2cpp_codegen_object_new(CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CommonTreeAdaptor__ctor_m76A72A7C0D6D23F7DB87E28534B34AE74FBA229C(L_1, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.String Antlr.Runtime.Tree.DotTreeGenerator::ToDot(System.Object,Antlr.Runtime.Tree.ITreeAdaptor) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator::DefineNodes(System.Object,Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DotTreeGenerator_DefineNodes_m9C1263F7BFF900E43828D2CBEE8FE0B7907BA5F0 (DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* __this, RuntimeObject* ___tree0, RuntimeObject* ___adaptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* L_0 = (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164*)il2cpp_codegen_object_new(U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDefineNodesU3Ed__8__ctor_m08C548EB39034645D49DA126FA2A64486F791B74(L_0, ((int32_t)-2), NULL);
		U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_7), (void*)__this);
		U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* L_2 = L_1;
		RuntimeObject* L_3 = ___tree0;
		NullCheck(L_2);
		L_2->___U3CU3E3__tree_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___U3CU3E3__tree_4), (void*)L_3);
		U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* L_4 = L_2;
		RuntimeObject* L_5 = ___adaptor1;
		NullCheck(L_4);
		L_4->___U3CU3E3__adaptor_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E3__adaptor_6), (void*)L_5);
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator::DefineEdges(System.Object,Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DotTreeGenerator_DefineEdges_m72FCB5FA6382D52F6EA251DC48966778D0A767A3 (DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* __this, RuntimeObject* ___tree0, RuntimeObject* ___adaptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* L_0 = (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090*)il2cpp_codegen_object_new(U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDefineEdgesU3Ed__9__ctor_m02F18D76FAEEA63E66913679093203B36B1517DB(L_0, ((int32_t)-2), NULL);
		U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_7), (void*)__this);
		U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* L_2 = L_1;
		RuntimeObject* L_3 = ___tree0;
		NullCheck(L_2);
		L_2->___U3CU3E3__tree_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___U3CU3E3__tree_4), (void*)L_3);
		U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* L_4 = L_2;
		RuntimeObject* L_5 = ___adaptor1;
		NullCheck(L_4);
		L_4->___U3CU3E3__adaptor_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E3__adaptor_6), (void*)L_5);
		return L_4;
	}
}
// System.String Antlr.Runtime.Tree.DotTreeGenerator::GetNodeText(Antlr.Runtime.Tree.ITreeAdaptor,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotTreeGenerator_GetNodeText_mB19B0421B31DB2ACFEFB9141AD2389B7CFFB4155 (DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* __this, RuntimeObject* ___adaptor0, RuntimeObject* ___t1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF78F12CBEBAA14971DB0DBFFF01C32258369393);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___adaptor0;
		RuntimeObject* L_1 = ___t1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___t1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(9 /* System.Int32 Antlr.Runtime.Tree.DotTreeGenerator::GetNodeNumber(System.Object) */, __this, L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6, L_6, NULL);
		V_1 = L_7;
		String_t* L_8 = V_1;
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(10 /* System.String Antlr.Runtime.Tree.DotTreeGenerator::FixString(System.String) */, __this, L_9);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralAF78F12CBEBAA14971DB0DBFFF01C32258369393, L_8, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Antlr.Runtime.Tree.DotTreeGenerator::GetNodeNumber(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotTreeGenerator_GetNodeNumber_m7333C267EEA0C4F8E5180F79132528C04491DED3 (DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_0 = __this->___nodeToNumberMap_4;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_4 = __this->___nodeToNumberMap_4;
		RuntimeObject* L_5 = ___t0;
		int32_t L_6 = __this->___nodeNumber_5;
		NullCheck(L_4);
		Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13(L_4, L_5, L_6, Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_RuntimeMethod_var);
		int32_t L_7 = __this->___nodeNumber_5;
		__this->___nodeNumber_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = __this->___nodeNumber_5;
		return ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}
}
// System.String Antlr.Runtime.Tree.DotTreeGenerator::FixString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotTreeGenerator_FixString_mBF728FABB08DD7C88C93359BB904333755918DB5 (DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED488AF45549D686E2B9C43CC5AA1CEA9AE1C324);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (!L_0)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_1 = ___text0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_1, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralED488AF45549D686E2B9C43CC5AA1CEA9AE1C324, NULL);
		___text0 = L_2;
		String_t* L_3 = ___text0;
		String_t* L_4;
		L_4 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_3, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, _stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E, NULL);
		___text0 = L_4;
		String_t* L_5 = ___text0;
		String_t* L_6;
		L_6 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_5, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, _stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469, NULL);
		___text0 = L_6;
		String_t* L_7 = ___text0;
		String_t* L_8;
		L_8 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_7, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, _stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1, NULL);
		___text0 = L_8;
		String_t* L_9 = ___text0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)20))))
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_11 = ___text0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_11, 0, 8, NULL);
		String_t* L_13 = ___text0;
		String_t* L_14 = ___text0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_13, ((int32_t)il2cpp_codegen_subtract(L_15, 8)), NULL);
		String_t* L_17;
		L_17 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_12, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, L_16, NULL);
		___text0 = L_17;
	}

IL_0077:
	{
		String_t* L_18 = ___text0;
		return L_18;
	}
}
// System.Void Antlr.Runtime.Tree.DotTreeGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotTreeGenerator__ctor_mA3C76CE8AF203C5EF72D0312797E5AF2CD21F116 (DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BDD70C3FF55D3012867CE5DF73EBDB975054E4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E99079BE588CD012DF2F995F76F63AA4CFB15A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46AD75720E6D1C88A9CC45FBB82AA0582A17854F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral540925C49E1073D406F61AF4B04906CCACFC1DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1B1CFF3CAEB5B22780F45A8436CFAD9CFA542E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF821CB7F4C44C27F7CEAF54A257FF7D4D446AE2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2E99079BE588CD012DF2F995F76F63AA4CFB15A0);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2E99079BE588CD012DF2F995F76F63AA4CFB15A0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral2BDD70C3FF55D3012867CE5DF73EBDB975054E4E);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2BDD70C3FF55D3012867CE5DF73EBDB975054E4E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralF821CB7F4C44C27F7CEAF54A257FF7D4D446AE2A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF821CB7F4C44C27F7CEAF54A257FF7D4D446AE2A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralD1B1CFF3CAEB5B22780F45A8436CFAD9CFA542E8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralD1B1CFF3CAEB5B22780F45A8436CFAD9CFA542E8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral540925C49E1073D406F61AF4B04906CCACFC1DAE);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral540925C49E1073D406F61AF4B04906CCACFC1DAE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral46AD75720E6D1C88A9CC45FBB82AA0582A17854F);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral46AD75720E6D1C88A9CC45FBB82AA0582A17854F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___HeaderLines_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HeaderLines_0), (void*)L_8);
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_9 = (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*)il2cpp_codegen_object_new(Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C(L_9, Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_RuntimeMethod_var);
		__this->___nodeToNumberMap_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodeToNumberMap_4), (void*)L_9);
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
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8__ctor_m08C548EB39034645D49DA126FA2A64486F791B74 (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		__this->___U3CU3El__initialThreadId_2 = L_2;
		return;
	}
}
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8_System_IDisposable_Dispose_mC7C30B55A9327850A28761BBC458A83C80C19ECA (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CDefineNodesU3Ed__8_U3CU3Em__Finally1_mA96B136FA0BD9137D664554BEA5884B9CC275F2E(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDefineNodesU3Ed__8_MoveNext_m1F6264542DD6743255645EB35F4BF87E6BD85FE2 (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0185:
			{// begin fault (depth: 1)
				U3CDefineNodesU3Ed__8_System_IDisposable_Dispose_mC7C30B55A9327850A28761BBC458A83C80C19ECA(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				switch (L_1)
				{
					case 0:
					{
						goto IL_0024_1;
					}
					case 1:
					{
						goto IL_008b_1;
					}
					case 2:
					{
						goto IL_00e6_1;
					}
					case 3:
					{
						goto IL_0137_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_018c;
			}

IL_0024_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				RuntimeObject* L_2 = __this->___tree_3;
				if (L_2)
				{
					goto IL_003a_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_018c;
			}

IL_003a_1:
			{
				RuntimeObject* L_3 = __this->___adaptor_5;
				RuntimeObject* L_4 = __this->___tree_3;
				NullCheck(L_3);
				int32_t L_5;
				L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_3, L_4);
				__this->___U3CnU3E5__3_10 = L_5;
				int32_t L_6 = __this->___U3CnU3E5__3_10;
				if (L_6)
				{
					goto IL_0060_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_018c;
			}

IL_0060_1:
			{
				DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* L_7 = __this->___U3CU3E4__this_7;
				RuntimeObject* L_8 = __this->___adaptor_5;
				RuntimeObject* L_9 = __this->___tree_3;
				NullCheck(L_7);
				String_t* L_10;
				L_10 = VirtualFuncInvoker2< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.String Antlr.Runtime.Tree.DotTreeGenerator::GetNodeText(Antlr.Runtime.Tree.ITreeAdaptor,System.Object) */, L_7, L_8, L_9);
				__this->___U3CU3E2__current_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_018c;
			}

IL_008b_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				__this->___U3CiU3E5__2_9 = 0;
				goto IL_0170_1;
			}

IL_009e_1:
			{
				RuntimeObject* L_11 = __this->___adaptor_5;
				RuntimeObject* L_12 = __this->___tree_3;
				int32_t L_13 = __this->___U3CiU3E5__2_9;
				NullCheck(L_11);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_11, L_12, L_13);
				__this->___U3CchildU3E5__1_8 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildU3E5__1_8), (void*)L_14);
				DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* L_15 = __this->___U3CU3E4__this_7;
				RuntimeObject* L_16 = __this->___adaptor_5;
				RuntimeObject* L_17 = __this->___U3CchildU3E5__1_8;
				NullCheck(L_15);
				String_t* L_18;
				L_18 = VirtualFuncInvoker2< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.String Antlr.Runtime.Tree.DotTreeGenerator::GetNodeText(Antlr.Runtime.Tree.ITreeAdaptor,System.Object) */, L_15, L_16, L_17);
				__this->___U3CU3E2__current_1 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_018c;
			}

IL_00e6_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* L_19 = __this->___U3CU3E4__this_7;
				RuntimeObject* L_20 = __this->___U3CchildU3E5__1_8;
				RuntimeObject* L_21 = __this->___adaptor_5;
				NullCheck(L_19);
				RuntimeObject* L_22;
				L_22 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IEnumerable`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator::DefineNodes(System.Object,Antlr.Runtime.Tree.ITreeAdaptor) */, L_19, L_20, L_21);
				NullCheck(L_22);
				RuntimeObject* L_23;
				L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_22);
				__this->___U3CU3E7__wrap1_11 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_11), (void*)L_23);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_013f_1;
			}

IL_0119_1:
			{
				RuntimeObject* L_24 = __this->___U3CU3E7__wrap1_11;
				NullCheck(L_24);
				String_t* L_25;
				L_25 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_24);
				V_2 = L_25;
				String_t* L_26 = V_2;
				__this->___U3CU3E2__current_1 = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
				__this->___U3CU3E1__state_0 = 3;
				V_0 = (bool)1;
				goto IL_018c;
			}

IL_0137_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_013f_1:
			{
				RuntimeObject* L_27 = __this->___U3CU3E7__wrap1_11;
				NullCheck(L_27);
				bool L_28;
				L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_27);
				if (L_28)
				{
					goto IL_0119_1;
				}
			}
			{
				U3CDefineNodesU3Ed__8_U3CU3Em__Finally1_mA96B136FA0BD9137D664554BEA5884B9CC275F2E(__this, NULL);
				__this->___U3CU3E7__wrap1_11 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_11), (void*)(RuntimeObject*)NULL);
				__this->___U3CchildU3E5__1_8 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildU3E5__1_8), (void*)NULL);
				int32_t L_29 = __this->___U3CiU3E5__2_9;
				V_3 = L_29;
				int32_t L_30 = V_3;
				__this->___U3CiU3E5__2_9 = ((int32_t)il2cpp_codegen_add(L_30, 1));
			}

IL_0170_1:
			{
				int32_t L_31 = __this->___U3CiU3E5__2_9;
				int32_t L_32 = __this->___U3CnU3E5__3_10;
				if ((((int32_t)L_31) < ((int32_t)L_32)))
				{
					goto IL_009e_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_018c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_018c:
	{
		bool L_33 = V_0;
		return L_33;
	}
}
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8_U3CU3Em__Finally1_mA96B136FA0BD9137D664554BEA5884B9CC275F2E (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_11;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_11;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.String Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CDefineNodesU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_m76182474578C8991215357A1D1B41B062CA21C2B (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8_System_Collections_IEnumerator_Reset_m4E3773A61DEF815FC043151BFF86EA3A18C90B5C (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDefineNodesU3Ed__8_System_Collections_IEnumerator_Reset_m4E3773A61DEF815FC043151BFF86EA3A18C90B5C_RuntimeMethod_var)));
	}
}
// System.Object Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineNodesU3Ed__8_System_Collections_IEnumerator_get_Current_m760EDCBB50DA8AD2EA3ACE93905FA893AC34BF06 (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineNodesU3Ed__8_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m6F9FBF635E1B7AD43EE403B7190444EAFA15882E (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2;
		L_2 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_003a;
	}

IL_0027:
	{
		U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* L_4 = (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164*)il2cpp_codegen_object_new(U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CDefineNodesU3Ed__8__ctor_m08C548EB39034645D49DA126FA2A64486F791B74(L_4, 0, NULL);
		V_0 = L_4;
		U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* L_5 = V_0;
		DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* L_6 = __this->___U3CU3E4__this_7;
		NullCheck(L_5);
		L_5->___U3CU3E4__this_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___U3CU3E4__this_7), (void*)L_6);
	}

IL_003a:
	{
		U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* L_7 = V_0;
		RuntimeObject* L_8 = __this->___U3CU3E3__tree_4;
		NullCheck(L_7);
		L_7->___tree_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___tree_3), (void*)L_8);
		U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* L_9 = V_0;
		RuntimeObject* L_10 = __this->___U3CU3E3__adaptor_6;
		NullCheck(L_9);
		L_9->___adaptor_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___adaptor_5), (void*)L_10);
		U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* L_11 = V_0;
		return L_11;
	}
}
// System.Collections.IEnumerator Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineNodesU3Ed__8_System_Collections_IEnumerable_GetEnumerator_mFF4497B1775AA1CA8304CC69F3EC94939F604E3E (U3CDefineNodesU3Ed__8_tDCEE24B0CE9B30103C60624AA97C6C389AE9F164* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CDefineNodesU3Ed__8_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m6F9FBF635E1B7AD43EE403B7190444EAFA15882E(__this, NULL);
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
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9__ctor_m02F18D76FAEEA63E66913679093203B36B1517DB (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		__this->___U3CU3El__initialThreadId_2 = L_2;
		return;
	}
}
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9_System_IDisposable_Dispose_m91679D2AC1691E29AAAC5CB2A56FBF53CAD379DB (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CDefineEdgesU3Ed__9_U3CU3Em__Finally1_m05F80D702ADCF57D347C026834A29FC4948FB27A(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDefineEdgesU3Ed__9_MoveNext_m65847ED503AC8C2FFB306F3FC2BABF6EDF6D7E6D (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB39D9436996A8004873548B9E60CABACFB9A297C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_01ec:
			{// begin fault (depth: 1)
				U3CDefineEdgesU3Ed__9_System_IDisposable_Dispose_m91679D2AC1691E29AAAC5CB2A56FBF53CAD379DB(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				switch (L_1)
				{
					case 0:
					{
						goto IL_0020_1;
					}
					case 1:
					{
						goto IL_0149_1;
					}
					case 2:
					{
						goto IL_019c_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_01f3;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				RuntimeObject* L_2 = __this->___tree_3;
				if (L_2)
				{
					goto IL_0036_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_01f3;
			}

IL_0036_1:
			{
				RuntimeObject* L_3 = __this->___adaptor_5;
				RuntimeObject* L_4 = __this->___tree_3;
				NullCheck(L_3);
				int32_t L_5;
				L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_3, L_4);
				__this->___U3CnU3E5__5_12 = L_5;
				int32_t L_6 = __this->___U3CnU3E5__5_12;
				if (L_6)
				{
					goto IL_005c_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_01f3;
			}

IL_005c_1:
			{
				DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* L_7 = __this->___U3CU3E4__this_7;
				RuntimeObject* L_8 = __this->___tree_3;
				NullCheck(L_7);
				int32_t L_9;
				L_9 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(9 /* System.Int32 Antlr.Runtime.Tree.DotTreeGenerator::GetNodeNumber(System.Object) */, L_7, L_8);
				int32_t L_10 = L_9;
				RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
				String_t* L_12;
				L_12 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6, L_11, NULL);
				__this->___U3CparentNameU3E5__1_8 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentNameU3E5__1_8), (void*)L_12);
				RuntimeObject* L_13 = __this->___adaptor_5;
				RuntimeObject* L_14 = __this->___tree_3;
				NullCheck(L_13);
				String_t* L_15;
				L_15 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_13, L_14);
				__this->___U3CparentTextU3E5__2_9 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentTextU3E5__2_9), (void*)L_15);
				__this->___U3CiU3E5__4_11 = 0;
				goto IL_01d7_1;
			}

IL_00a5_1:
			{
				RuntimeObject* L_16 = __this->___adaptor_5;
				RuntimeObject* L_17 = __this->___tree_3;
				int32_t L_18 = __this->___U3CiU3E5__4_11;
				NullCheck(L_16);
				RuntimeObject* L_19;
				L_19 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_16, L_17, L_18);
				__this->___U3CchildU3E5__3_10 = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildU3E5__3_10), (void*)L_19);
				RuntimeObject* L_20 = __this->___adaptor_5;
				RuntimeObject* L_21 = __this->___U3CchildU3E5__3_10;
				NullCheck(L_20);
				String_t* L_22;
				L_22 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_20, L_21);
				V_2 = L_22;
				DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* L_23 = __this->___U3CU3E4__this_7;
				RuntimeObject* L_24 = __this->___U3CchildU3E5__3_10;
				NullCheck(L_23);
				int32_t L_25;
				L_25 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(9 /* System.Int32 Antlr.Runtime.Tree.DotTreeGenerator::GetNodeNumber(System.Object) */, L_23, L_24);
				int32_t L_26 = L_25;
				RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
				String_t* L_28;
				L_28 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6, L_27, NULL);
				V_3 = L_28;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29;
				String_t* L_31 = __this->___U3CparentNameU3E5__1_8;
				NullCheck(L_30);
				ArrayElementTypeCheck (L_30, L_31);
				(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_31);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_30;
				String_t* L_33 = V_3;
				NullCheck(L_32);
				ArrayElementTypeCheck (L_32, L_33);
				(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_33);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_32;
				DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* L_35 = __this->___U3CU3E4__this_7;
				String_t* L_36 = __this->___U3CparentTextU3E5__2_9;
				NullCheck(L_35);
				String_t* L_37;
				L_37 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(10 /* System.String Antlr.Runtime.Tree.DotTreeGenerator::FixString(System.String) */, L_35, L_36);
				NullCheck(L_34);
				ArrayElementTypeCheck (L_34, L_37);
				(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_37);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_34;
				DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* L_39 = __this->___U3CU3E4__this_7;
				String_t* L_40 = V_2;
				NullCheck(L_39);
				String_t* L_41;
				L_41 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(10 /* System.String Antlr.Runtime.Tree.DotTreeGenerator::FixString(System.String) */, L_39, L_40);
				NullCheck(L_38);
				ArrayElementTypeCheck (L_38, L_41);
				(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_41);
				String_t* L_42;
				L_42 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralB39D9436996A8004873548B9E60CABACFB9A297C, L_38, NULL);
				__this->___U3CU3E2__current_1 = L_42;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_42);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_01f3;
			}

IL_0149_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* L_43 = __this->___U3CU3E4__this_7;
				RuntimeObject* L_44 = __this->___U3CchildU3E5__3_10;
				RuntimeObject* L_45 = __this->___adaptor_5;
				NullCheck(L_43);
				RuntimeObject* L_46;
				L_46 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* System.Collections.Generic.IEnumerable`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator::DefineEdges(System.Object,Antlr.Runtime.Tree.ITreeAdaptor) */, L_43, L_44, L_45);
				NullCheck(L_46);
				RuntimeObject* L_47;
				L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_46);
				__this->___U3CU3E7__wrap1_13 = L_47;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_13), (void*)L_47);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_01a4_1;
			}

IL_017c_1:
			{
				RuntimeObject* L_48 = __this->___U3CU3E7__wrap1_13;
				NullCheck(L_48);
				String_t* L_49;
				L_49 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_48);
				V_4 = L_49;
				String_t* L_50 = V_4;
				__this->___U3CU3E2__current_1 = L_50;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_50);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_01f3;
			}

IL_019c_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_01a4_1:
			{
				RuntimeObject* L_51 = __this->___U3CU3E7__wrap1_13;
				NullCheck(L_51);
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_51);
				if (L_52)
				{
					goto IL_017c_1;
				}
			}
			{
				U3CDefineEdgesU3Ed__9_U3CU3Em__Finally1_m05F80D702ADCF57D347C026834A29FC4948FB27A(__this, NULL);
				__this->___U3CU3E7__wrap1_13 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_13), (void*)(RuntimeObject*)NULL);
				__this->___U3CchildU3E5__3_10 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildU3E5__3_10), (void*)NULL);
				int32_t L_53 = __this->___U3CiU3E5__4_11;
				V_5 = L_53;
				int32_t L_54 = V_5;
				__this->___U3CiU3E5__4_11 = ((int32_t)il2cpp_codegen_add(L_54, 1));
			}

IL_01d7_1:
			{
				int32_t L_55 = __this->___U3CiU3E5__4_11;
				int32_t L_56 = __this->___U3CnU3E5__5_12;
				if ((((int32_t)L_55) < ((int32_t)L_56)))
				{
					goto IL_00a5_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_01f3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01f3:
	{
		bool L_57 = V_0;
		return L_57;
	}
}
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9_U3CU3Em__Finally1_m05F80D702ADCF57D347C026834A29FC4948FB27A (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_13;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_13;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.String Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CDefineEdgesU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_m84D9FE7D8A2AD0899F0A6F1C8E2208D89A8D69C3 (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9_System_Collections_IEnumerator_Reset_mF84CCB99472B5340B67BB4062F6E9738C15835A4 (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDefineEdgesU3Ed__9_System_Collections_IEnumerator_Reset_mF84CCB99472B5340B67BB4062F6E9738C15835A4_RuntimeMethod_var)));
	}
}
// System.Object Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineEdgesU3Ed__9_System_Collections_IEnumerator_get_Current_m31341D25A74F415A4AC0748D0A7C1BC1B7C4FCF3 (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineEdgesU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m3D92A3603C27CBC022C79382C3BAB8EA49E900CE (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2;
		L_2 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_003a;
	}

IL_0027:
	{
		U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* L_4 = (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090*)il2cpp_codegen_object_new(U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CDefineEdgesU3Ed__9__ctor_m02F18D76FAEEA63E66913679093203B36B1517DB(L_4, 0, NULL);
		V_0 = L_4;
		U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* L_5 = V_0;
		DotTreeGenerator_t018449817B5D241AEE8C80D433E878D293FCFAA3* L_6 = __this->___U3CU3E4__this_7;
		NullCheck(L_5);
		L_5->___U3CU3E4__this_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___U3CU3E4__this_7), (void*)L_6);
	}

IL_003a:
	{
		U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* L_7 = V_0;
		RuntimeObject* L_8 = __this->___U3CU3E3__tree_4;
		NullCheck(L_7);
		L_7->___tree_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___tree_3), (void*)L_8);
		U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* L_9 = V_0;
		RuntimeObject* L_10 = __this->___U3CU3E3__adaptor_6;
		NullCheck(L_9);
		L_9->___adaptor_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___adaptor_5), (void*)L_10);
		U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* L_11 = V_0;
		return L_11;
	}
}
// System.Collections.IEnumerator Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineEdgesU3Ed__9_System_Collections_IEnumerable_GetEnumerator_mB19A0584ED63698E16F4A0060D1981D5771CB9D8 (U3CDefineEdgesU3Ed__9_tF9E1E0B50D174BE56F53E0394F3680DA318A9090* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CDefineEdgesU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m3D92A3603C27CBC022C79382C3BAB8EA49E900CE(__this, NULL);
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
// System.Void Antlr.Runtime.Tree.TreeVisitorAction::.ctor(Antlr.Runtime.Misc.Func`2<System.Object,System.Object>,Antlr.Runtime.Misc.Func`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeVisitorAction__ctor_mC262D0BF7C3DCDD5A754FB63B2A3424E9CA12A97 (TreeVisitorAction_t8704A7EE215E2A6E6B0A7C95B34C3166265FF468* __this, Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* ___preAction0, Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* ___postAction1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_0 = ___preAction0;
		__this->____preAction_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preAction_0), (void*)L_0);
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_1 = ___postAction1;
		__this->____postAction_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____postAction_1), (void*)L_1);
		return;
	}
}
// System.Object Antlr.Runtime.Tree.TreeVisitorAction::Pre(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitorAction_Pre_mDA7FC93F08C53206A72C24D500BC1B83346CF759 (TreeVisitorAction_t8704A7EE215E2A6E6B0A7C95B34C3166265FF468* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	{
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_0 = __this->____preAction_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_1 = __this->____preAction_0;
		RuntimeObject* L_2 = ___t0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = Func_2_Invoke_mB1969CADA86CD70B7E310F9B24DA989DA1C83D92_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___t0;
		return L_4;
	}
}
// System.Object Antlr.Runtime.Tree.TreeVisitorAction::Post(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitorAction_Post_m2647BF79F1CE23C4242FA480B1DBC4B74B74F452 (TreeVisitorAction_t8704A7EE215E2A6E6B0A7C95B34C3166265FF468* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	{
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_0 = __this->____postAction_1;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_1 = __this->____postAction_1;
		RuntimeObject* L_2 = ___t0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = Func_2_Invoke_mB1969CADA86CD70B7E310F9B24DA989DA1C83D92_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___t0;
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
// System.Void Antlr.Runtime.Tree.ParseTree::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree__ctor_m85316C5F5B15644D8B7A17484174B345FD2C7547 (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, RuntimeObject* ___label0, const RuntimeMethod* method) 
{
	{
		BaseTree__ctor_mE00DB893ADC95F1FD7BF4E7B94C20757E96BBD71(__this, NULL);
		RuntimeObject* L_0 = ___label0;
		__this->___payload_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___payload_3), (void*)L_0);
		return;
	}
}
// System.String Antlr.Runtime.Tree.ParseTree::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_get_Text_m47F7AF94ABCB26D035F1E1BFC7166C414AE4604F (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		return L_0;
	}
}
// System.Void Antlr.Runtime.Tree.ParseTree::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_set_Text_m8DAA0449611ABF103CEBD886C5DA28E92643F906 (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Antlr.Runtime.Tree.ParseTree::get_TokenStartIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParseTree_get_TokenStartIndex_mF9A940EF9430FBDDACBD6AD4502DF46F3CE62C9A (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Void Antlr.Runtime.Tree.ParseTree::set_TokenStartIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_set_TokenStartIndex_m1DCA14252114881A2B2E4C9180DAD1364E6B3FF3 (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Antlr.Runtime.Tree.ParseTree::get_TokenStopIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParseTree_get_TokenStopIndex_m610FECA0DB6AB13CDD53C1E0EB868D5D08B38169 (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Void Antlr.Runtime.Tree.ParseTree::set_TokenStopIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_set_TokenStopIndex_m2A17F3F904389F9E2E1764A0ADDE0A6D26C691E6 (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Antlr.Runtime.Tree.ParseTree::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParseTree_get_Type_m40FB4758E0642DF869DBD337D35A131CC20EC9C8 (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Void Antlr.Runtime.Tree.ParseTree::set_Type(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_set_Type_mBA3BD2A9B5AF99CA25144331C1B1C0B5690D5406 (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Antlr.Runtime.Tree.ITree Antlr.Runtime.Tree.ParseTree::DupNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParseTree_DupNode_m5357097C8BB305558D6E36EA37B3E63C379C0165 (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, const RuntimeMethod* method) 
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.String Antlr.Runtime.Tree.ParseTree::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_ToString_m915C72011849A970D0D0239EB0BBECCA7889ACFD (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___payload_3;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = __this->___payload_3;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Antlr.Runtime.IToken::get_Type() */, IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		return _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
	}

IL_0028:
	{
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Antlr.Runtime.IToken::get_Text() */, IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}

IL_002f:
	{
		RuntimeObject* L_6 = __this->___payload_3;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		return L_7;
	}
}
// System.String Antlr.Runtime.Tree.ParseTree::ToStringWithHiddenTokens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_ToStringWithHiddenTokens_m390F29CE4CE0C186B34F343D6CD0437AFA1B0E82 (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB4ABFB7D5439AA64BC954BECA405EA1DCB7D0F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA38077C7B16AE46F54A6A8E9C1F0EF0789C82B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		List_1_t40EDF6DB1A87D031D76B122798D35B86FD1A709D* L_1 = __this->___hiddenTokens_4;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		V_2 = 0;
		goto IL_0030;
	}

IL_0012:
	{
		List_1_t40EDF6DB1A87D031D76B122798D35B86FD1A709D* L_2 = __this->___hiddenTokens_4;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_mA38077C7B16AE46F54A6A8E9C1F0EF0789C82B54(L_2, L_3, List_1_get_Item_mA38077C7B16AE46F54A6A8E9C1F0EF0789C82B54_RuntimeMethod_var);
		V_3 = L_4;
		StringBuilder_t* L_5 = V_0;
		RuntimeObject* L_6 = V_3;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Antlr.Runtime.IToken::get_Text() */, IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, L_7, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0030:
	{
		int32_t L_10 = V_2;
		List_1_t40EDF6DB1A87D031D76B122798D35B86FD1A709D* L_11 = __this->___hiddenTokens_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mB4ABFB7D5439AA64BC954BECA405EA1DCB7D0F4A_inline(L_11, List_1_get_Count_mB4ABFB7D5439AA64BC954BECA405EA1DCB7D0F4A_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}

IL_003e:
	{
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		V_1 = L_13;
		String_t* L_14 = V_1;
		NullCheck(L_14);
		bool L_15;
		L_15 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_14, _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921, NULL);
		if (L_15)
		{
			goto IL_005a;
		}
	}
	{
		StringBuilder_t* L_16 = V_0;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_17, NULL);
	}

IL_005a:
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		return L_20;
	}
}
// System.String Antlr.Runtime.Tree.ParseTree::ToInputString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_ToInputString_m88247A2CDEB1085F8DB717FC7945E837B73DB499 (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		VirtualActionInvoker1< StringBuilder_t* >::Invoke(71 /* System.Void Antlr.Runtime.Tree.ParseTree::ToStringLeaves(System.Text.StringBuilder) */, __this, L_1);
		StringBuilder_t* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void Antlr.Runtime.Tree.ParseTree::ToStringLeaves(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_ToStringLeaves_m61643C05DE7657771A81B4CE8CE501082D25E5B0 (ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207* __this, StringBuilder_t* ___buf0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t31AEFBCD4F757B04B4A7016B2E6B0E0923A6BB44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t70D077FA6315C45FA2EB94FA2B8330148F1F627C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___payload_3;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}
	{
		StringBuilder_t* L_1 = ___buf0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(69 /* System.String Antlr.Runtime.Tree.ParseTree::ToStringWithHiddenTokens() */, __this);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_2, NULL);
		return;
	}

IL_001b:
	{
		V_0 = 0;
		goto IL_003a;
	}

IL_001f:
	{
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Antlr.Runtime.Tree.ITree> Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Antlr.Runtime.Tree.ITree>::get_Item(System.Int32) */, IList_1_t70D077FA6315C45FA2EB94FA2B8330148F1F627C_il2cpp_TypeInfo_var, L_4, L_5);
		StringBuilder_t* L_7 = ___buf0;
		NullCheck(((ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207*)CastclassClass((RuntimeObject*)L_6, ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207_il2cpp_TypeInfo_var)));
		VirtualActionInvoker1< StringBuilder_t* >::Invoke(71 /* System.Void Antlr.Runtime.Tree.ParseTree::ToStringLeaves(System.Text.StringBuilder) */, ((ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207*)CastclassClass((RuntimeObject*)L_6, ParseTree_t7ACC8640A92AE86C3E896B6627682FD88A67F207_il2cpp_TypeInfo_var)), L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003a:
	{
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Antlr.Runtime.Tree.ITree> Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_10 = V_0;
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Antlr.Runtime.Tree.ITree> Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr.Runtime.Tree.ITree>::get_Count() */, ICollection_1_t31AEFBCD4F757B04B4A7016B2E6B0E0923A6BB44_il2cpp_TypeInfo_var, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}

IL_0050:
	{
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
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m5F21FF186D979E077C11BA66FAA770B8F0B9E066 (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_mF4B3131D2B157862AA94F141D33C7B0A94736C47 (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, String_t* ___elementDescription0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		String_t* L_1 = ___elementDescription0;
		RewriteCardinalityException__ctor_m79F5E316CA7AE3C1A7CE8FBEFC087AB5033A5F1C(__this, L_0, L_1, NULL);
		String_t* L_2 = ___elementDescription0;
		__this->____elementDescription_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elementDescription_18), (void*)L_2);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m30681F2099524DD52826A52BD94F88B98A857451 (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, String_t* ___elementDescription0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		String_t* L_1 = ___elementDescription0;
		Exception_t* L_2 = ___innerException1;
		RewriteCardinalityException__ctor_m99025AC33BB81CCEC928C4483AEF284E17ECF3DC(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m79F5E316CA7AE3C1A7CE8FBEFC087AB5033A5F1C (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, String_t* ___message0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		String_t* L_1 = ___elementDescription1;
		__this->____elementDescription_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elementDescription_18), (void*)L_1);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m99025AC33BB81CCEC928C4483AEF284E17ECF3DC (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, String_t* ___message0, String_t* ___elementDescription1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException2;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		String_t* L_2 = ___elementDescription1;
		__this->____elementDescription_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elementDescription_18), (void*)L_2);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m9E9EB5E28FAED5654584AA3CF363FFA5B417068A (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDED6FFC1EBDB1883B38FE9BC796A376693C43877);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120(__this, L_0, L_1, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteCardinalityException__ctor_m9E9EB5E28FAED5654584AA3CF363FFA5B417068A_RuntimeMethod_var)));
	}

IL_0016:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = SerializationInfo_GetString_mF0753AFAA13AABF8A30B8F0890AEC52BFBBC73E9(L_4, _stringLiteralDED6FFC1EBDB1883B38FE9BC796A376693C43877, NULL);
		__this->____elementDescription_18 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elementDescription_18), (void*)L_5);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteCardinalityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException_GetObjectData_m2FB3FC72B0EAD22D06D9A26FD2CD20DF9E85FA90 (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDED6FFC1EBDB1883B38FE9BC796A376693C43877);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteCardinalityException_GetObjectData_m2FB3FC72B0EAD22D06D9A26FD2CD20DF9E85FA90_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_3 = ___context1;
		Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9(__this, L_2, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info0;
		String_t* L_5 = __this->____elementDescription_18;
		NullCheck(L_4);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_4, _stringLiteralDED6FFC1EBDB1883B38FE9BC796A376693C43877, L_5, NULL);
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
// System.Void Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_m213014B5E36B5FE7F0A026E416136895E48EF489 (RewriteEarlyExitException_tFC31D6DD5630A3C5E5A3B87FB4AB6E60E2B76049* __this, const RuntimeMethod* method) 
{
	{
		RewriteCardinalityException__ctor_m5F21FF186D979E077C11BA66FAA770B8F0B9E066(__this, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_mBAAEA265B2FB7772FB8732CC373860E938207D07 (RewriteEarlyExitException_tFC31D6DD5630A3C5E5A3B87FB4AB6E60E2B76049* __this, String_t* ___elementDescription0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		RewriteCardinalityException__ctor_mF4B3131D2B157862AA94F141D33C7B0A94736C47(__this, L_0, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_mC8D0363228F7594BD0971D5C958D0A085BE1CF34 (RewriteEarlyExitException_tFC31D6DD5630A3C5E5A3B87FB4AB6E60E2B76049* __this, String_t* ___elementDescription0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		Exception_t* L_1 = ___innerException1;
		RewriteCardinalityException__ctor_m30681F2099524DD52826A52BD94F88B98A857451(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_mF5AEB67E02DDE3396595FEFD6B47326345CF0D9F (RewriteEarlyExitException_tFC31D6DD5630A3C5E5A3B87FB4AB6E60E2B76049* __this, String_t* ___message0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___elementDescription1;
		RewriteCardinalityException__ctor_m79F5E316CA7AE3C1A7CE8FBEFC087AB5033A5F1C(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_mB54E23C5F2725212BE561E5B15302AEC179165AF (RewriteEarlyExitException_tFC31D6DD5630A3C5E5A3B87FB4AB6E60E2B76049* __this, String_t* ___message0, String_t* ___elementDescription1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___elementDescription1;
		Exception_t* L_2 = ___innerException2;
		RewriteCardinalityException__ctor_m99025AC33BB81CCEC928C4483AEF284E17ECF3DC(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_m0AA88EDA76C1FBA079D309E3BD15B5248A4E87F0 (RewriteEarlyExitException_tFC31D6DD5630A3C5E5A3B87FB4AB6E60E2B76049* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		RewriteCardinalityException__ctor_m9E9EB5E28FAED5654584AA3CF363FFA5B417068A(__this, L_0, L_1, NULL);
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
// System.Void Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_m275B7BD07A242F9D71CC02BC4FCA398374C19D1F (RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1* __this, const RuntimeMethod* method) 
{
	{
		RewriteCardinalityException__ctor_m5F21FF186D979E077C11BA66FAA770B8F0B9E066(__this, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_mE89334963CB2EA62B7298059451E8475D17D4C96 (RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1* __this, String_t* ___elementDescription0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		RewriteCardinalityException__ctor_mF4B3131D2B157862AA94F141D33C7B0A94736C47(__this, L_0, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_mD9DDE97C0B2E8E517809D0C86D443BF1B14895CE (RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1* __this, String_t* ___elementDescription0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		Exception_t* L_1 = ___innerException1;
		RewriteCardinalityException__ctor_m30681F2099524DD52826A52BD94F88B98A857451(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_m328002C44F886893055C3E5359A5B5ED5380B6A6 (RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1* __this, String_t* ___message0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___elementDescription1;
		RewriteCardinalityException__ctor_m79F5E316CA7AE3C1A7CE8FBEFC087AB5033A5F1C(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_m8DE5D6B0BC4D70A4BA0B0AD4051C27C8D3959A44 (RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1* __this, String_t* ___message0, String_t* ___elementDescription1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___elementDescription1;
		Exception_t* L_2 = ___innerException2;
		RewriteCardinalityException__ctor_m99025AC33BB81CCEC928C4483AEF284E17ECF3DC(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_mC77887380326AC8B31EAB0D2FAB05662E96BCA61 (RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		RewriteCardinalityException__ctor_m9E9EB5E28FAED5654584AA3CF363FFA5B417068A(__this, L_0, L_1, NULL);
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
// System.Void Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_m11B714A116154B49EDB36DA726CE4988F2002CB1 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___elementDescription1;
		__this->___elementDescription_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elementDescription_4), (void*)L_0);
		RuntimeObject* L_1 = ___adaptor0;
		__this->___adaptor_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_5), (void*)L_1);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_mA3BEFCE1219249C340637697B95214CF1D7488E1 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream__ctor_m11B714A116154B49EDB36DA726CE4988F2002CB1(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___oneElement2;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Antlr.Runtime.Tree.RewriteRuleElementStream::Add(System.Object) */, __this, L_2);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_m83627CE3ABEB0BD3A14F0191969B175579F56D36 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream__ctor_m11B714A116154B49EDB36DA726CE4988F2002CB1(__this, L_0, L_1, NULL);
		__this->___singleElement_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleElement_1), (void*)NULL);
		RuntimeObject* L_2 = ___elements2;
		__this->___elements_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elements_2), (void*)L_2);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteRuleElementStream::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream_Reset_mC8954009847A16DEEA21030714ED2FC084107BF3 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, const RuntimeMethod* method) 
{
	{
		__this->___cursor_0 = 0;
		__this->___dirty_3 = (bool)1;
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteRuleElementStream::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream_Add_m32E73D65A85A0BC62A09BE87EF44D0E6158018B1 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___el0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = __this->___elements_2;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = __this->___elements_2;
		RuntimeObject* L_3 = ___el0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}

IL_001a:
	{
		RuntimeObject* L_5 = __this->___singleElement_1;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_6 = ___el0;
		__this->___singleElement_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleElement_1), (void*)L_6);
		return;
	}

IL_002a:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_7 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_7, 5, List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		__this->___elements_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elements_2), (void*)L_7);
		RuntimeObject* L_8 = __this->___elements_2;
		RuntimeObject* L_9 = __this->___singleElement_1;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		__this->___singleElement_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleElement_1), (void*)NULL);
		RuntimeObject* L_11 = __this->___elements_2;
		RuntimeObject* L_12 = ___el0;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_11, L_12);
		return;
	}
}
// System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::NextTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleElementStream_NextTree_mC82DE7A3B785B55F28A795C265DB3A4FEEB33048 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Antlr.Runtime.Tree.RewriteRuleElementStream::get_Count() */, __this);
		V_0 = L_0;
		bool L_1 = __this->___dirty_3;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->___cursor_0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}

IL_001c:
	{
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::Dup(System.Object) */, __this, L_6);
		return L_7;
	}

IL_002b:
	{
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		return L_8;
	}
}
// System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleElementStream_NextCore_m6B800350986383D298E2B757D87B6ABD4698E3D5 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Antlr.Runtime.Tree.RewriteRuleElementStream::get_Count() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = __this->___elementDescription_4;
		RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1* L_3 = (RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteEmptyStreamException_t58A73DC1106902B9C4E5378E43FB7BA8676F40E1_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		RewriteEmptyStreamException__ctor_mE89334963CB2EA62B7298059451E8475D17D4C96(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteRuleElementStream_NextCore_m6B800350986383D298E2B757D87B6ABD4698E3D5_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_4 = __this->___cursor_0;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_7 = __this->___singleElement_1;
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(9 /* System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::ToTree(System.Object) */, __this, L_7);
		return L_8;
	}

IL_0030:
	{
		String_t* L_9 = __this->___elementDescription_4;
		RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E* L_10 = (RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteCardinalityException_tC77AFEAA4F6DC77A9570745583A9C87BE3FE4D6E_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		RewriteCardinalityException__ctor_mF4B3131D2B157862AA94F141D33C7B0A94736C47(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteRuleElementStream_NextCore_m6B800350986383D298E2B757D87B6ABD4698E3D5_RuntimeMethod_var)));
	}

IL_003c:
	{
		RuntimeObject* L_11 = __this->___singleElement_1;
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_12 = __this->___cursor_0;
		__this->___cursor_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		RuntimeObject* L_13 = __this->___singleElement_1;
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(9 /* System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::ToTree(System.Object) */, __this, L_13);
		return L_14;
	}

IL_005f:
	{
		RuntimeObject* L_15 = __this->___elements_2;
		int32_t L_16 = __this->___cursor_0;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_15, L_16);
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(9 /* System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::ToTree(System.Object) */, __this, L_17);
		int32_t L_19 = __this->___cursor_0;
		__this->___cursor_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return L_18;
	}
}
// System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::ToTree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleElementStream_ToTree_m85B07EF01436ABC91DD9609AC72D998B864878C4 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___el0;
		return L_0;
	}
}
// System.Boolean Antlr.Runtime.Tree.RewriteRuleElementStream::get_HasNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewriteRuleElementStream_get_HasNext_mE572BF102482B16E32509A027709729E619498B1 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___singleElement_1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->___cursor_0;
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_002f;
		}
	}

IL_0011:
	{
		RuntimeObject* L_2 = __this->___elements_2;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = __this->___cursor_0;
		RuntimeObject* L_4 = __this->___elements_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		return (bool)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0);
	}

IL_002d:
	{
		return (bool)0;
	}

IL_002f:
	{
		return (bool)1;
	}
}
// System.Int32 Antlr.Runtime.Tree.RewriteRuleElementStream::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewriteRuleElementStream_get_Count_m51101DE63BCFF0318B91CD6EFFD443F1F0FF8350 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		RuntimeObject* L_0 = __this->___singleElement_1;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		V_0 = 1;
	}

IL_000c:
	{
		RuntimeObject* L_1 = __this->___elements_2;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = __this->___elements_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Antlr.Runtime.Tree.RewriteRuleElementStream::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RewriteRuleElementStream_get_Description_m23480FA8DF629E08FD8313ADF7F79A00390B51C9 (RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___elementDescription_4;
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
// System.Void Antlr.Runtime.Tree.RewriteRuleNodeStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleNodeStream__ctor_m6F8DF79F080F167AE09D354BFC7A882B090AC397 (RewriteRuleNodeStream_t059525EBF94903C8F0A7A58B1D27DB0D26C6FF06* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream__ctor_m11B714A116154B49EDB36DA726CE4988F2002CB1(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteRuleNodeStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleNodeStream__ctor_m1C4E170B31E16F571845A99FE82F6AAFDC6F705A (RewriteRuleNodeStream_t059525EBF94903C8F0A7A58B1D27DB0D26C6FF06* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___oneElement2;
		RewriteRuleElementStream__ctor_mA3BEFCE1219249C340637697B95214CF1D7488E1(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteRuleNodeStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleNodeStream__ctor_mE23506389C945CFF19848815279638AE855A7429 (RewriteRuleNodeStream_t059525EBF94903C8F0A7A58B1D27DB0D26C6FF06* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___elements2;
		RewriteRuleElementStream__ctor_m83627CE3ABEB0BD3A14F0191969B175579F56D36(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Object Antlr.Runtime.Tree.RewriteRuleNodeStream::NextNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleNodeStream_NextNode_m5DBB500368778CCB7264E7DE538D80B33BF3C427 (RewriteRuleNodeStream_t059525EBF94903C8F0A7A58B1D27DB0D26C6FF06* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		return L_0;
	}
}
// System.Object Antlr.Runtime.Tree.RewriteRuleNodeStream::ToTree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleNodeStream_ToTree_mAD3B28038B010A71238D80404563E290CFCC43E4 (RewriteRuleNodeStream_t059525EBF94903C8F0A7A58B1D27DB0D26C6FF06* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6*)__this)->___adaptor_5;
		RuntimeObject* L_1 = ___el0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::DupNode(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Object Antlr.Runtime.Tree.RewriteRuleNodeStream::Dup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleNodeStream_Dup_m1E006BF3070F592DC48B234BF6E173CEBDCEBF72 (RewriteRuleNodeStream_t059525EBF94903C8F0A7A58B1D27DB0D26C6FF06* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE7128187D3AD156C6CD8181A8C4A55758A7A64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteRuleNodeStream_Dup_m1E006BF3070F592DC48B234BF6E173CEBDCEBF72_RuntimeMethod_var)));
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
// System.Void Antlr.Runtime.Tree.RewriteRuleSubtreeStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleSubtreeStream__ctor_mA5E5BF8D8C40A2C52FE53F6B6A07D46979787625 (RewriteRuleSubtreeStream_tDF7BD2219609A11BF6453FE1040119123D491B63* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream__ctor_m11B714A116154B49EDB36DA726CE4988F2002CB1(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteRuleSubtreeStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleSubtreeStream__ctor_m7732114EA7C63FEE7E8BF84387C794DC8C22A4D3 (RewriteRuleSubtreeStream_tDF7BD2219609A11BF6453FE1040119123D491B63* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___oneElement2;
		RewriteRuleElementStream__ctor_mA3BEFCE1219249C340637697B95214CF1D7488E1(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteRuleSubtreeStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleSubtreeStream__ctor_m95FA2ECC17BAD4B044CB845CB85D0382399254AF (RewriteRuleSubtreeStream_tDF7BD2219609A11BF6453FE1040119123D491B63* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___elements2;
		RewriteRuleElementStream__ctor_m83627CE3ABEB0BD3A14F0191969B175579F56D36(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Object Antlr.Runtime.Tree.RewriteRuleSubtreeStream::NextNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_NextNode_m09014DE0F8E3DADEA3442A7D596E55FB0598ECB7 (RewriteRuleSubtreeStream_tDF7BD2219609A11BF6453FE1040119123D491B63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Antlr.Runtime.Tree.RewriteRuleElementStream::get_Count() */, __this);
		V_0 = L_0;
		bool L_1 = ((RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6*)__this)->___dirty_3;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = ((RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6*)__this)->___cursor_0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}

IL_001c:
	{
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		V_2 = L_5;
		RuntimeObject* L_6 = ((RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6*)__this)->___adaptor_5;
		RuntimeObject* L_7 = V_2;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::DupNode(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_6, L_7);
		return L_8;
	}

IL_0030:
	{
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		V_1 = L_9;
		goto IL_0047;
	}

IL_0039:
	{
		RuntimeObject* L_10 = ((RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6*)__this)->___adaptor_5;
		RuntimeObject* L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_10, L_11, 0);
		V_1 = L_12;
	}

IL_0047:
	{
		RuntimeObject* L_13 = ((RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6*)__this)->___adaptor_5;
		RuntimeObject* L_14 = V_1;
		NullCheck(L_13);
		bool L_15;
		L_15 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(12 /* System.Boolean Antlr.Runtime.Tree.ITreeAdaptor::IsNil(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_13, L_14);
		if (!L_15)
		{
			goto IL_0064;
		}
	}
	{
		RuntimeObject* L_16 = ((RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6*)__this)->___adaptor_5;
		RuntimeObject* L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_16, L_17);
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}

IL_0064:
	{
		RuntimeObject* L_19 = ((RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6*)__this)->___adaptor_5;
		RuntimeObject* L_20 = V_1;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::DupNode(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_19, L_20);
		return L_21;
	}
}
// System.Object Antlr.Runtime.Tree.RewriteRuleSubtreeStream::Dup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_Dup_m6E099761B3FAB133B74BD365711216EADCAF070A (RewriteRuleSubtreeStream_tDF7BD2219609A11BF6453FE1040119123D491B63* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6*)__this)->___adaptor_5;
		RuntimeObject* L_1 = ___el0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(9 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::DupTree(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
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
// System.Void Antlr.Runtime.Tree.RewriteRuleTokenStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleTokenStream__ctor_mEF58CE624CC56E9A6C6C4A94A49A1E386C4D3106 (RewriteRuleTokenStream_t8B39EC5BC5A9C437F13CBCD5D83CDD876F1649FA* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream__ctor_m11B714A116154B49EDB36DA726CE4988F2002CB1(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteRuleTokenStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleTokenStream__ctor_mBAB46897C3E2528E2D31B4C0B900A1EA66D2090F (RewriteRuleTokenStream_t8B39EC5BC5A9C437F13CBCD5D83CDD876F1649FA* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___oneElement2;
		RewriteRuleElementStream__ctor_mA3BEFCE1219249C340637697B95214CF1D7488E1(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.RewriteRuleTokenStream::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleTokenStream__ctor_mF4C7082D597CEEF263ACAE2BD3A72D40AF0FCF7B (RewriteRuleTokenStream_t8B39EC5BC5A9C437F13CBCD5D83CDD876F1649FA* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___elements2;
		RewriteRuleElementStream__ctor_m83627CE3ABEB0BD3A14F0191969B175579F56D36(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Object Antlr.Runtime.Tree.RewriteRuleTokenStream::NextNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleTokenStream_NextNode_m38D7BF043A4CAD8CB7F412E58A498A92FFC5F1B2 (RewriteRuleTokenStream_t8B39EC5BC5A9C437F13CBCD5D83CDD876F1649FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = ((RewriteRuleElementStream_t40EBEE99B3F654EA8653CB00176FA9BF4FA229B6*)__this)->___adaptor_5;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::Create(Antlr.Runtime.IToken) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// Antlr.Runtime.IToken Antlr.Runtime.Tree.RewriteRuleTokenStream::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleTokenStream_NextToken_mBA213F7564038E286896AADFF628AA2928107BEB (RewriteRuleTokenStream_t8B39EC5BC5A9C437F13CBCD5D83CDD876F1649FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IToken_tAB0C9FE2D7431A6146F20C876712F4F9D69D14D1_il2cpp_TypeInfo_var));
	}
}
// System.Object Antlr.Runtime.Tree.RewriteRuleTokenStream::ToTree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleTokenStream_ToTree_mA4F2898E18B1D1161773A1552D862E0D0AF288A0 (RewriteRuleTokenStream_t8B39EC5BC5A9C437F13CBCD5D83CDD876F1649FA* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___el0;
		return L_0;
	}
}
// System.Object Antlr.Runtime.Tree.RewriteRuleTokenStream::Dup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleTokenStream_Dup_m988CE5FA70CFEED394E14AF40A4F2E67DAC84C96 (RewriteRuleTokenStream_t8B39EC5BC5A9C437F13CBCD5D83CDD876F1649FA* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral884DE836248FF2895E37A904B1FE9B39766FAA84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteRuleTokenStream_Dup_m988CE5FA70CFEED394E14AF40A4F2E67DAC84C96_RuntimeMethod_var)));
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
// System.Void Antlr.Runtime.Tree.TreeFilter::.ctor(Antlr.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter__ctor_mE17C546658B12D8F050949D090797892EA534CFF (TreeFilter_tD32D533ACEBD5E4519087B5B56085B153103456C* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* L_1 = (RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1*)il2cpp_codegen_object_new(RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RecognizerSharedState__ctor_mBD6CA377430FFE7EF9EA4A157079CAC82210C00D(L_1, NULL);
		TreeFilter__ctor_m83321B384A97E79E3D5B9003107F419BD195BED6(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeFilter::.ctor(Antlr.Runtime.Tree.ITreeNodeStream,Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter__ctor_m83321B384A97E79E3D5B9003107F419BD195BED6 (TreeFilter_tD32D533ACEBD5E4519087B5B56085B153103456C* __this, RuntimeObject* ___input0, RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* L_1 = ___state1;
		il2cpp_codegen_runtime_class_init_inline(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var);
		TreeParser__ctor_mD264BCA00B3235E0CF338F1C11BC219C268BDD4B(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___input0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var, L_2);
		__this->___originalAdaptor_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalAdaptor_16), (void*)L_3);
		RuntimeObject* L_4 = ___input0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Antlr.Runtime.ITokenStream Antlr.Runtime.Tree.ITreeNodeStream::get_TokenStream() */, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var, L_4);
		__this->___originalTokenStream_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalTokenStream_15), (void*)L_5);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeFilter::ApplyOnce(System.Object,Antlr.Runtime.Misc.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter_ApplyOnce_m25895E70DCEB5205E1D0ADED9A8454BA62E6EC34 (TreeFilter_tD32D533ACEBD5E4519087B5B56085B153103456C* __this, RuntimeObject* ___t0, Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* ___whichRule1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___t0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
	}
	try
	{// begin try (depth: 1)
		RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* L_1 = (RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1*)il2cpp_codegen_object_new(RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RecognizerSharedState__ctor_mBD6CA377430FFE7EF9EA4A157079CAC82210C00D(L_1, NULL);
		VirtualActionInvoker1< RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* >::Invoke(4 /* System.Void Antlr.Runtime.BaseRecognizer::SetState(Antlr.Runtime.RecognizerSharedState) */, __this, L_1);
		RuntimeObject* L_2 = __this->___originalAdaptor_16;
		RuntimeObject* L_3 = ___t0;
		CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38* L_4 = (CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38*)il2cpp_codegen_object_new(CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CommonTreeNodeStream__ctor_m8748AF9B7B1A4B04275F405E5701136F9DDB3189(L_4, L_2, L_3, NULL);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(57 /* System.Void Antlr.Runtime.Tree.TreeParser::SetTreeNodeStream(Antlr.Runtime.Tree.ITreeNodeStream) */, __this, L_4);
		RuntimeObject* L_5 = ((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120*)__this)->___input_14;
		RuntimeObject* L_6 = __this->___originalTokenStream_15;
		NullCheck(((CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38*)CastclassClass((RuntimeObject*)L_5, CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38_il2cpp_TypeInfo_var)));
		VirtualActionInvoker1< RuntimeObject* >::Invoke(49 /* System.Void Antlr.Runtime.Tree.CommonTreeNodeStream::set_TokenStream(Antlr.Runtime.ITokenStream) */, ((CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38*)CastclassClass((RuntimeObject*)L_5, CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38_il2cpp_TypeInfo_var)), L_6);
		VirtualActionInvoker1< int32_t >::Invoke(32 /* System.Void Antlr.Runtime.BaseRecognizer::set_BacktrackingLevel(System.Int32) */, __this, 1);
		Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* L_7 = ___whichRule1;
		NullCheck(L_7);
		Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_inline(L_7, NULL);
		VirtualActionInvoker1< int32_t >::Invoke(32 /* System.Void Antlr.Runtime.BaseRecognizer::set_BacktrackingLevel(System.Int32) */, __this, 0);
		goto IL_0051;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_t576E3524547A53B0950DC286707CBAE428645631_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004e;
		}
		throw e;
	}

CATCH_004e:
	{// begin catch(Antlr.Runtime.RecognitionException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeFilter::Downup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter_Downup_m7B263DB696F70198BD5669C17EE54B78FFC14EA2 (TreeFilter_tD32D533ACEBD5E4519087B5B56085B153103456C* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeFilter_U3CDownupU3Eb__5_0_mC5C701C2582F156A0373F5900641AEE0FC611093_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeFilter_U3CDownupU3Eb__5_1_mCD642CA9F31CAFBACCA33B15FEC0EFED66A3511D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* V_0 = NULL;
	Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* V_1 = NULL;
	{
		CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1* L_0 = (CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1*)il2cpp_codegen_object_new(CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommonTreeAdaptor__ctor_m76A72A7C0D6D23F7DB87E28534B34AE74FBA229C(L_0, NULL);
		TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3* L_1 = (TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3*)il2cpp_codegen_object_new(TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TreeVisitor__ctor_m3E8404CD0899DAA04021EC339E8F378620E20927(L_1, L_0, NULL);
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_2 = (Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE*)il2cpp_codegen_object_new(Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_2__ctor_m558F3C853A299B4949A686D90F716D2303B6FF1B(L_2, __this, (intptr_t)((void*)TreeFilter_U3CDownupU3Eb__5_0_mC5C701C2582F156A0373F5900641AEE0FC611093_RuntimeMethod_var), NULL);
		V_0 = L_2;
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_3 = (Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE*)il2cpp_codegen_object_new(Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_m558F3C853A299B4949A686D90F716D2303B6FF1B(L_3, __this, (intptr_t)((void*)TreeFilter_U3CDownupU3Eb__5_1_mCD642CA9F31CAFBACCA33B15FEC0EFED66A3511D_RuntimeMethod_var), NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = ___t0;
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_5 = V_0;
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_6 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_7;
		L_7 = TreeVisitor_Visit_m36C8086121A295DA25B3895BC17F2AE85D36D8A9(L_1, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeFilter::Topdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter_Topdown_mFAFEA59C23174CC72BB621352FF1784B43A258CD (TreeFilter_tD32D533ACEBD5E4519087B5B56085B153103456C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeFilter::Bottomup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter_Bottomup_m3ABAF9EA1F4C67E0D7EF74AB5D5C87361F8CD55F (TreeFilter_tD32D533ACEBD5E4519087B5B56085B153103456C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Object Antlr.Runtime.Tree.TreeFilter::<Downup>b__5_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeFilter_U3CDownupU3Eb__5_0_mC5C701C2582F156A0373F5900641AEE0FC611093 (TreeFilter_tD32D533ACEBD5E4519087B5B56085B153103456C* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* L_1 = (Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A*)il2cpp_codegen_object_new(Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mE4CBCF6C81F4CE25FD2F85865F08A3B6B21DE0D4(L_1, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 63)), NULL);
		VirtualActionInvoker2< RuntimeObject*, Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* >::Invoke(61 /* System.Void Antlr.Runtime.Tree.TreeFilter::ApplyOnce(System.Object,Antlr.Runtime.Misc.Action) */, __this, L_0, L_1);
		RuntimeObject* L_2 = ___o0;
		return L_2;
	}
}
// System.Object Antlr.Runtime.Tree.TreeFilter::<Downup>b__5_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeFilter_U3CDownupU3Eb__5_1_mCD642CA9F31CAFBACCA33B15FEC0EFED66A3511D (TreeFilter_tD32D533ACEBD5E4519087B5B56085B153103456C* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* L_1 = (Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A*)il2cpp_codegen_object_new(Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mE4CBCF6C81F4CE25FD2F85865F08A3B6B21DE0D4(L_1, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 64)), NULL);
		VirtualActionInvoker2< RuntimeObject*, Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* >::Invoke(61 /* System.Void Antlr.Runtime.Tree.TreeFilter::ApplyOnce(System.Object,Antlr.Runtime.Misc.Action) */, __this, L_0, L_1);
		RuntimeObject* L_2 = ___o0;
		return L_2;
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
// System.Void Antlr.Runtime.Tree.TreeIterator::.ctor(Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator__ctor_m43FBB596F4882995E15E62EE8CC35501E85D74C5 (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, CommonTree_t6AA87323D6EE7DFA4DF8C0ED60845470A8F967C0* ___tree0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1* L_0 = (CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1*)il2cpp_codegen_object_new(CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommonTreeAdaptor__ctor_m76A72A7C0D6D23F7DB87E28534B34AE74FBA229C(L_0, NULL);
		CommonTree_t6AA87323D6EE7DFA4DF8C0ED60845470A8F967C0* L_1 = ___tree0;
		TreeIterator__ctor_m0F6998C96766A949938BF99B849EFCF442658992(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeIterator::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator__ctor_m0F6998C96766A949938BF99B849EFCF442658992 (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, RuntimeObject* ___adaptor0, RuntimeObject* ___tree1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32F05A3518F8993BB3D8FC6029754A5BD0C2407F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB598CF0802DB03FC469256176ABAFF79345D3832);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___firstTime_3 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___adaptor0;
		__this->___adaptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_0), (void*)L_0);
		RuntimeObject* L_1 = ___tree1;
		__this->___tree_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_1);
		RuntimeObject* L_2 = ___tree1;
		__this->___root_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root_1), (void*)L_2);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB(L_3, Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_RuntimeMethod_var);
		__this->___nodes_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodes_8), (void*)L_3);
		RuntimeObject* L_4 = ___adaptor0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, String_t* >::Invoke(4 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::Create(System.Int32,System.String) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_4, 2, _stringLiteral32F05A3518F8993BB3D8FC6029754A5BD0C2407F);
		__this->___down_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___down_6), (void*)L_5);
		RuntimeObject* L_6 = ___adaptor0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, String_t* >::Invoke(4 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::Create(System.Int32,System.String) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_6, 3, _stringLiteralB598CF0802DB03FC469256176ABAFF79345D3832);
		__this->___up_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___up_5), (void*)L_7);
		RuntimeObject* L_8 = ___adaptor0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, String_t* >::Invoke(4 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::Create(System.Int32,System.String) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_8, (-1), _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D);
		__this->___eof_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eof_7), (void*)L_9);
		return;
	}
}
// System.Object Antlr.Runtime.Tree.TreeIterator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeIterator_get_Current_m4E2E5459FBF71F2E91101D0DF2127BB05F7AFC7D (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Antlr.Runtime.Tree.TreeIterator::set_Current(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator_set_Current_m27B1815CCABA80A76497E2C3E109CFF19A265E69 (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeIterator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator_Dispose_m7FDE4F49660B7541E94D7474C2702C7F695C68A0 (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Antlr.Runtime.Tree.TreeIterator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeIterator_MoveNext_m811F7E89B7A354BFF57538C2D6410332B1158ABC (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B21_0 = 0;
	{
		bool L_0 = __this->___firstTime_3;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		__this->___firstTime_3 = (bool)0;
		RuntimeObject* L_1 = __this->___adaptor_0;
		RuntimeObject* L_2 = __this->___tree_2;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_1, L_2);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = __this->___nodes_8;
		RuntimeObject* L_5 = __this->___eof_7;
		NullCheck(L_4);
		Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF(L_4, L_5, Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
	}

IL_0033:
	{
		RuntimeObject* L_6 = __this->___tree_2;
		TreeIterator_set_Current_m27B1815CCABA80A76497E2C3E109CFF19A265E69_inline(__this, L_6, NULL);
		goto IL_01b0;
	}

IL_0044:
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = __this->___nodes_8;
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = __this->___nodes_8;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_inline(L_8, Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = __this->___nodes_8;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84(L_10, Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var);
		TreeIterator_set_Current_m27B1815CCABA80A76497E2C3E109CFF19A265E69_inline(__this, L_11, NULL);
		goto IL_01b0;
	}

IL_0070:
	{
		RuntimeObject* L_12 = __this->___tree_2;
		if (L_12)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_13 = __this->___eof_7;
		TreeIterator_set_Current_m27B1815CCABA80A76497E2C3E109CFF19A265E69_inline(__this, L_13, NULL);
		goto IL_01b0;
	}

IL_0089:
	{
		RuntimeObject* L_14 = __this->___adaptor_0;
		RuntimeObject* L_15 = __this->___tree_2;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_14, L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00d7;
		}
	}
	{
		RuntimeObject* L_17 = __this->___adaptor_0;
		RuntimeObject* L_18 = __this->___tree_2;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_17, L_18, 0);
		__this->___tree_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_19);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_20 = __this->___nodes_8;
		RuntimeObject* L_21 = __this->___tree_2;
		NullCheck(L_20);
		Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF(L_20, L_21, Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
		RuntimeObject* L_22 = __this->___down_6;
		TreeIterator_set_Current_m27B1815CCABA80A76497E2C3E109CFF19A265E69_inline(__this, L_22, NULL);
		goto IL_01b0;
	}

IL_00d7:
	{
		RuntimeObject* L_23 = __this->___adaptor_0;
		RuntimeObject* L_24 = __this->___tree_2;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetParent(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_23, L_24);
		V_0 = L_25;
		goto IL_0115;
	}

IL_00eb:
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_26 = __this->___nodes_8;
		RuntimeObject* L_27 = __this->___up_5;
		NullCheck(L_26);
		Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF(L_26, L_27, Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
		RuntimeObject* L_28 = V_0;
		__this->___tree_2 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_28);
		RuntimeObject* L_29 = __this->___adaptor_0;
		RuntimeObject* L_30 = __this->___tree_2;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetParent(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_29, L_30);
		V_0 = L_31;
	}

IL_0115:
	{
		RuntimeObject* L_32 = V_0;
		if (!L_32)
		{
			goto IL_0139;
		}
	}
	{
		RuntimeObject* L_33 = __this->___adaptor_0;
		RuntimeObject* L_34 = __this->___tree_2;
		NullCheck(L_33);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(32 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildIndex(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_33, L_34);
		RuntimeObject* L_36 = __this->___adaptor_0;
		RuntimeObject* L_37 = V_0;
		NullCheck(L_36);
		int32_t L_38;
		L_38 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_36, L_37);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_35, 1))) >= ((int32_t)L_38)))
		{
			goto IL_00eb;
		}
	}

IL_0139:
	{
		RuntimeObject* L_39 = V_0;
		if (L_39)
		{
			goto IL_0167;
		}
	}
	{
		__this->___tree_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)NULL);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_40 = __this->___nodes_8;
		RuntimeObject* L_41 = __this->___eof_7;
		NullCheck(L_40);
		Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF(L_40, L_41, Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_42 = __this->___nodes_8;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84(L_42, Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var);
		TreeIterator_set_Current_m27B1815CCABA80A76497E2C3E109CFF19A265E69_inline(__this, L_43, NULL);
		goto IL_01b0;
	}

IL_0167:
	{
		RuntimeObject* L_44 = __this->___adaptor_0;
		RuntimeObject* L_45 = __this->___tree_2;
		NullCheck(L_44);
		int32_t L_46;
		L_46 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(32 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildIndex(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_44, L_45);
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		RuntimeObject* L_47 = __this->___adaptor_0;
		RuntimeObject* L_48 = V_0;
		int32_t L_49 = V_1;
		NullCheck(L_47);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_47, L_48, L_49);
		__this->___tree_2 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_50);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_51 = __this->___nodes_8;
		RuntimeObject* L_52 = __this->___tree_2;
		NullCheck(L_51);
		Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF(L_51, L_52, Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_53 = __this->___nodes_8;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84(L_53, Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var);
		TreeIterator_set_Current_m27B1815CCABA80A76497E2C3E109CFF19A265E69_inline(__this, L_54, NULL);
	}

IL_01b0:
	{
		RuntimeObject* L_55;
		L_55 = TreeIterator_get_Current_m4E2E5459FBF71F2E91101D0DF2127BB05F7AFC7D_inline(__this, NULL);
		RuntimeObject* L_56 = __this->___eof_7;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_55) == ((RuntimeObject*)(RuntimeObject*)L_56))))
		{
			goto IL_01c9;
		}
	}
	{
		bool L_57 = __this->___reachedEof_4;
		G_B21_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_01ca;
	}

IL_01c9:
	{
		G_B21_0 = 1;
	}

IL_01ca:
	{
		RuntimeObject* L_58;
		L_58 = TreeIterator_get_Current_m4E2E5459FBF71F2E91101D0DF2127BB05F7AFC7D_inline(__this, NULL);
		RuntimeObject* L_59 = __this->___eof_7;
		__this->___reachedEof_4 = (bool)((((RuntimeObject*)(RuntimeObject*)L_58) == ((RuntimeObject*)(RuntimeObject*)L_59))? 1 : 0);
		return (bool)G_B21_0;
	}
}
// System.Void Antlr.Runtime.Tree.TreeIterator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator_Reset_m1C575BE85B5649E3E37D7337D71ED271818C7936 (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___firstTime_3 = (bool)1;
		RuntimeObject* L_0 = __this->___root_1;
		__this->___tree_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_0);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = __this->___nodes_8;
		NullCheck(L_1);
		Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711(L_1, Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_RuntimeMethod_var);
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
// System.Void Antlr.Runtime.Tree.TreeParser::.ctor(Antlr.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser__ctor_m7B1539824AD207AE740D10A4D4DD22F3D9415928 (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	{
		BaseRecognizer__ctor_mBA691BDC92EDBB9CB1EDF51690D768BAE11C7740(__this, NULL);
		RuntimeObject* L_0 = ___input0;
		__this->___input_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_14), (void*)L_0);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeParser::.ctor(Antlr.Runtime.Tree.ITreeNodeStream,Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser__ctor_mD264BCA00B3235E0CF338F1C11BC219C268BDD4B (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, RuntimeObject* ___input0, RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* ___state1, const RuntimeMethod* method) 
{
	{
		RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* L_0 = ___state1;
		BaseRecognizer__ctor_m8B2F902DBAD909C3FD0C185E31025F07051395C0(__this, L_0, NULL);
		RuntimeObject* L_1 = ___input0;
		__this->___input_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_14), (void*)L_1);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeParser::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_Reset_m8BDDF954902FCBA87282588A798CE8777AB92089 (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseRecognizer_Reset_m331082184C41A2EF4082EF0FE6AF9034456BE1B5(__this, NULL);
		RuntimeObject* L_0 = __this->___input_14;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___input_14;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(7 /* System.Void Antlr.Runtime.IIntStream::Seek(System.Int32) */, IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF_il2cpp_TypeInfo_var, L_1, 0);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeParser::SetTreeNodeStream(Antlr.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_SetTreeNodeStream_m1A67A2F0C45EF3EC819ADE9F52C17CBF8211B5FB (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___input0;
		__this->___input_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_14), (void*)L_0);
		return;
	}
}
// Antlr.Runtime.Tree.ITreeNodeStream Antlr.Runtime.Tree.TreeParser::GetTreeNodeStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_GetTreeNodeStream_mFA873FE67D848B5A294E03F5304A713CD0172129 (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___input_14;
		return L_0;
	}
}
// System.String Antlr.Runtime.Tree.TreeParser::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TreeParser_get_SourceName_m9E2C7DE2CF9EA6F1F04890677AA2259062E44366 (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___input_14;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Antlr.Runtime.IIntStream::get_SourceName() */, IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object Antlr.Runtime.Tree.TreeParser::GetCurrentInputSymbol(Antlr.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_GetCurrentInputSymbol_m2406ECBA04FBE6ED1EC046C740DBE9D2207D66AE (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1 /* System.Object Antlr.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var)), 1);
		return L_1;
	}
}
// System.Object Antlr.Runtime.Tree.TreeParser::GetMissingSymbol(Antlr.Runtime.IIntStream,Antlr.Runtime.RecognitionException,System.Int32,Antlr.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_GetMissingSymbol_mB3547074FA5A49A040C99088D7C13B5C50034D46 (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, RuntimeObject* ___input0, RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* ___e1, int32_t ___expectedTokenType2, BitSet_t4B137A98ECAC9E937F62CF104E828ABE825FEFC7* ___follow3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(34 /* System.String[] Antlr.Runtime.BaseRecognizer::get_TokenNames() */, __this);
		int32_t L_1 = ___expectedTokenType2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623, L_3, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		V_0 = L_4;
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_5 = ___e1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = RecognitionException_get_Input_m3BB2983115EDC82A40F858E08AB8EA5F80A86B90_inline(L_5, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var)));
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var)));
		int32_t L_8 = ___expectedTokenType2;
		String_t* L_9 = V_0;
		CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F* L_10 = (CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F*)il2cpp_codegen_object_new(CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		CommonToken__ctor_m4AA3C59E97512BA3F1E894CAD8556CEE8D4323A4(L_10, L_8, L_9, NULL);
		NullCheck(L_7);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::Create(Antlr.Runtime.IToken) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_7, L_10);
		return L_11;
	}
}
// System.Void Antlr.Runtime.Tree.TreeParser::MatchAny(Antlr.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_MatchAny_mF3E7FFEC4072B5D427E99625822FF0FBED81D8BE (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, RuntimeObject* ___ignore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* L_0 = ((BaseRecognizer_t2F14D84F70ACE2CB0BA7549984A262EC9FA1F385*)__this)->___state_6;
		NullCheck(L_0);
		L_0->___errorRecovery_2 = (bool)0;
		RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* L_1 = ((BaseRecognizer_t2F14D84F70ACE2CB0BA7549984A262EC9FA1F385*)__this)->___state_6;
		NullCheck(L_1);
		L_1->___failed_4 = (bool)0;
		RuntimeObject* L_2 = __this->___input_14;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Antlr.Runtime.IIntStream::Consume() */, IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_3 = __this->___input_14;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF_il2cpp_TypeInfo_var, L_3, 1);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_5 = __this->___input_14;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Antlr.Runtime.IIntStream::Consume() */, IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF_il2cpp_TypeInfo_var, L_5);
		V_0 = 1;
		goto IL_0084;
	}

IL_0041:
	{
		RuntimeObject* L_6 = __this->___input_14;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF_il2cpp_TypeInfo_var, L_6, 1);
		V_1 = L_7;
		int32_t L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_8, (-1))))
		{
			case 0:
			{
				goto IL_0078;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_006c;
			}
			case 4:
			{
				goto IL_0072;
			}
		}
	}
	{
		goto IL_0079;
	}

IL_006c:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_0079;
	}

IL_0072:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_0079;
	}

IL_0078:
	{
		return;
	}

IL_0079:
	{
		RuntimeObject* L_11 = __this->___input_14;
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Antlr.Runtime.IIntStream::Consume() */, IIntStream_t2E4E8064179B86A07BE12FD255CD510C4D854BDF_il2cpp_TypeInfo_var, L_11);
	}

IL_0084:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0041;
		}
	}

IL_0088:
	{
		return;
	}
}
// System.Object Antlr.Runtime.Tree.TreeParser::RecoverFromMismatchedToken(Antlr.Runtime.IIntStream,System.Int32,Antlr.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_RecoverFromMismatchedToken_mC7F3D415D6612416C29DD914BBB544369A63B853 (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, RuntimeObject* ___input0, int32_t ___ttype1, BitSet_t4B137A98ECAC9E937F62CF104E828ABE825FEFC7* ___follow2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___ttype1;
		RuntimeObject* L_1 = ___input0;
		MismatchedTreeNodeException_t28A6786186D606A7DD912DE49D00CF67B84343BB* L_2 = (MismatchedTreeNodeException_t28A6786186D606A7DD912DE49D00CF67B84343BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedTreeNodeException_t28A6786186D606A7DD912DE49D00CF67B84343BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		MismatchedTreeNodeException__ctor_m57871564C29753048A911AE67D41B8C026960577(L_2, L_0, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var)))), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TreeParser_RecoverFromMismatchedToken_mC7F3D415D6612416C29DD914BBB544369A63B853_RuntimeMethod_var)));
	}
}
// System.String Antlr.Runtime.Tree.TreeParser::GetErrorHeader(Antlr.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TreeParser_GetErrorHeader_mDA13A7A3E33A62E7672B3EB07BB43E1B941C3406 (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F66D79B656BDA2916F8C6430ED835605C443B3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Antlr.Runtime.BaseRecognizer::get_GrammarFileName() */, __this);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_5 = ___e0;
		NullCheck(L_5);
		bool L_6;
		L_6 = RecognitionException_get_ApproximateLineInfo_m605D71D61A379E5314A0C48FAB8AACEA1DF4DD4D_inline(L_5, NULL);
		G_B1_0 = 2;
		G_B1_1 = L_4;
		G_B1_2 = L_4;
		if (L_6)
		{
			G_B2_0 = 2;
			G_B2_1 = L_4;
			G_B2_2 = L_4;
			goto IL_0028;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_002d;
	}

IL_0028:
	{
		G_B3_0 = _stringLiteral1F66D79B656BDA2916F8C6430ED835605C443B3E;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_002d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_9 = ___e0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RecognitionException_get_Line_mC197DA09461F8EE834725C92EB042E02275DD186_inline(L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_8;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_15 = ___e0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = RecognitionException_get_CharPositionInLine_mE8AA1E6859878D55F48EE1BA1B29A13B964B4B5C_inline(L_15, NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_14, NULL);
		return L_19;
	}
}
// System.String Antlr.Runtime.Tree.TreeParser::GetErrorMessage(Antlr.Runtime.RecognitionException,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TreeParser_GetErrorMessage_mFFF4BFDF95A7F62C5C209330DE8B9958192219A0 (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* ___e0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		if (!__this)
		{
			goto IL_0051;
		}
	}
	{
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_0 = ___e0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = RecognitionException_get_Input_m3BB2983115EDC82A40F858E08AB8EA5F80A86B90_inline(L_0, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var)));
		V_0 = L_2;
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_3 = ___e0;
		RuntimeObject* L_4 = V_0;
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_5 = ___e0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = RecognitionException_get_Node_mA6FB149FE5FE8CCCEAFE0D2D70F0FB011842DACE_inline(L_5, NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(22 /* Antlr.Runtime.IToken Antlr.Runtime.Tree.ITreeAdaptor::GetToken(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_4, L_6);
		NullCheck(L_3);
		RecognitionException_set_Token_m958D222E0ACFE7D231929262AF30CA115807167F_inline(L_3, L_7, NULL);
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_8 = ___e0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = RecognitionException_get_Token_m0CB661816AB5D38DB2C59ECBA0A9F912D9D11A6A_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_0051;
		}
	}
	{
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_10 = ___e0;
		RuntimeObject* L_11 = V_0;
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_12 = ___e0;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = RecognitionException_get_Node_mA6FB149FE5FE8CCCEAFE0D2D70F0FB011842DACE_inline(L_12, NULL);
		NullCheck(L_11);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_11, L_13);
		RuntimeObject* L_15 = V_0;
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_16 = ___e0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = RecognitionException_get_Node_mA6FB149FE5FE8CCCEAFE0D2D70F0FB011842DACE_inline(L_16, NULL);
		NullCheck(L_15);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_15, L_17);
		CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F* L_19 = (CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F*)il2cpp_codegen_object_new(CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		CommonToken__ctor_m4AA3C59E97512BA3F1E894CAD8556CEE8D4323A4(L_19, L_14, L_18, NULL);
		NullCheck(L_10);
		RecognitionException_set_Token_m958D222E0ACFE7D231929262AF30CA115807167F_inline(L_10, L_19, NULL);
	}

IL_0051:
	{
		RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* L_20 = ___e0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = ___tokenNames1;
		String_t* L_22;
		L_22 = BaseRecognizer_GetErrorMessage_m3A42AF82D5CAC36B00F1CFE67D35565C6EB60139(__this, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Void Antlr.Runtime.Tree.TreeParser::TraceIn(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_TraceIn_m297F2BFB7FBFCA67F6114ECB82773B13D43EA6FF (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___ruleName0;
		int32_t L_1 = ___ruleIndex1;
		RuntimeObject* L_2 = __this->___input_14;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1 /* System.Object Antlr.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var, L_2, 1);
		BaseRecognizer_TraceIn_m2CD0C6C8F81AAEDED34DE8D30212FB2586E664DC(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeParser::TraceOut(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_TraceOut_mBB619FFB5D836490035461CC80A8CD9D701F1C72 (TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___ruleName0;
		int32_t L_1 = ___ruleIndex1;
		RuntimeObject* L_2 = __this->___input_14;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1 /* System.Object Antlr.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var, L_2, 1);
		BaseRecognizer_TraceOut_mD3DE56C63DB3BF6AEC27B8434797E9478CF8876A(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser__cctor_mA123268782DD5B00AF00EB46150493E48285E7FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var))->___dotdot_10 = _stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var))->___dotdot_10), (void*)_stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61);
		((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var))->___doubleEtc_11 = _stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var))->___doubleEtc_11), (void*)_stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597);
		String_t* L_0 = ((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var))->___dotdot_10;
		il2cpp_codegen_runtime_class_init_inline(RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83_il2cpp_TypeInfo_var);
		int32_t L_1 = ((RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83_StaticFields*)il2cpp_codegen_static_fields_for(RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83_il2cpp_TypeInfo_var))->___Compiled_0;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_2 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_2, L_0, L_1, NULL);
		((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var))->___dotdotPattern_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var))->___dotdotPattern_12), (void*)L_2);
		String_t* L_3 = ((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var))->___doubleEtc_11;
		int32_t L_4 = ((RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83_StaticFields*)il2cpp_codegen_static_fields_for(RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83_il2cpp_TypeInfo_var))->___Compiled_0;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_5 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_5, L_3, L_4, NULL);
		((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var))->___doubleEtcPattern_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var))->___doubleEtcPattern_13), (void*)L_5);
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
// System.Void Antlr.Runtime.Tree.TreePatternLexer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternLexer__ctor_m59DCBF05858A285C49CD8352B59681ED369A9401 (TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* __this, String_t* ___pattern0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___p_8 = (-1);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___sval_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sval_11), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_1 = ___pattern0;
		__this->___pattern_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pattern_7), (void*)L_1);
		String_t* L_2 = ___pattern0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		__this->___n_10 = L_3;
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return;
	}
}
// System.Int32 Antlr.Runtime.Tree.TreePatternLexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreePatternLexer_NextToken_m078D79D5540373CAB46812887672CF8EAC8ECF61 (TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* __this, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = __this->___sval_11;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		goto IL_01d5;
	}

IL_0011:
	{
		int32_t L_1 = __this->___c_9;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_2 = __this->___c_9;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = __this->___c_9;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)13))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_4 = __this->___c_9;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0044;
		}
	}

IL_0039:
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		goto IL_01d5;
	}

IL_0044:
	{
		int32_t L_5 = __this->___c_9;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)97))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->___c_9;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0076;
		}
	}

IL_0058:
	{
		int32_t L_7 = __this->___c_9;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)65))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_8 = __this->___c_9;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0076;
		}
	}

IL_006c:
	{
		int32_t L_9 = __this->___c_9;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_00f2;
		}
	}

IL_0076:
	{
		StringBuilder_t* L_10 = __this->___sval_11;
		int32_t L_11 = __this->___c_9;
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)(uint16_t)L_11), NULL);
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		goto IL_00aa;
	}

IL_0091:
	{
		StringBuilder_t* L_13 = __this->___sval_11;
		int32_t L_14 = __this->___c_9;
		NullCheck(L_13);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_14), NULL);
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
	}

IL_00aa:
	{
		int32_t L_16 = __this->___c_9;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_17 = __this->___c_9;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0091;
		}
	}

IL_00be:
	{
		int32_t L_18 = __this->___c_9;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)65))))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_19 = __this->___c_9;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0091;
		}
	}

IL_00d2:
	{
		int32_t L_20 = __this->___c_9;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)48))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_21 = __this->___c_9;
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0091;
		}
	}

IL_00e6:
	{
		int32_t L_22 = __this->___c_9;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)95))))
		{
			goto IL_0091;
		}
	}
	{
		return 3;
	}

IL_00f2:
	{
		int32_t L_23 = __this->___c_9;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_0104;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 1;
	}

IL_0104:
	{
		int32_t L_24 = __this->___c_9;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0116;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 2;
	}

IL_0116:
	{
		int32_t L_25 = __this->___c_9;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0128;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 5;
	}

IL_0128:
	{
		int32_t L_26 = __this->___c_9;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_013a;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 6;
	}

IL_013a:
	{
		int32_t L_27 = __this->___c_9;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_014c;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 7;
	}

IL_014c:
	{
		int32_t L_28 = __this->___c_9;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_01c6;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		goto IL_01b4;
	}

IL_015e:
	{
		int32_t L_29 = __this->___c_9;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_019b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		int32_t L_30 = __this->___c_9;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)93))))
		{
			goto IL_0186;
		}
	}
	{
		StringBuilder_t* L_31 = __this->___sval_11;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)92), NULL);
	}

IL_0186:
	{
		StringBuilder_t* L_33 = __this->___sval_11;
		int32_t L_34 = __this->___c_9;
		NullCheck(L_33);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_33, ((int32_t)(uint16_t)L_34), NULL);
		goto IL_01ae;
	}

IL_019b:
	{
		StringBuilder_t* L_36 = __this->___sval_11;
		int32_t L_37 = __this->___c_9;
		NullCheck(L_36);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_36, ((int32_t)(uint16_t)L_37), NULL);
	}

IL_01ae:
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
	}

IL_01b4:
	{
		int32_t L_39 = __this->___c_9;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_015e;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 4;
	}

IL_01c6:
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		__this->___error_12 = (bool)1;
		return (-1);
	}

IL_01d5:
	{
		int32_t L_40 = __this->___c_9;
		if ((!(((uint32_t)L_40) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return (-1);
	}
}
// System.Void Antlr.Runtime.Tree.TreePatternLexer::Consume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternLexer_Consume_mF91D825385369B69C11426A3370810ED4B381658 (TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___p_8;
		__this->___p_8 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___p_8;
		int32_t L_2 = __this->___n_10;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0024;
		}
	}
	{
		__this->___c_9 = (-1);
		return;
	}

IL_0024:
	{
		String_t* L_3 = __this->___pattern_7;
		int32_t L_4 = __this->___p_8;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		__this->___c_9 = L_5;
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
// System.Void Antlr.Runtime.Tree.TreePatternParser::.ctor(Antlr.Runtime.Tree.TreePatternLexer,Antlr.Runtime.Tree.TreeWizard,Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternParser__ctor_m5D8CB3AA6693BF4D7DF5DC4545C1DCEF3BBE7251 (TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342* __this, TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* ___tokenizer0, TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* ___wizard1, RuntimeObject* ___adaptor2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_0 = ___tokenizer0;
		__this->___tokenizer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenizer_0), (void*)L_0);
		TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* L_1 = ___wizard1;
		__this->___wizard_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wizard_2), (void*)L_1);
		RuntimeObject* L_2 = ___adaptor2;
		__this->___adaptor_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_3), (void*)L_2);
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_3 = ___tokenizer0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_3);
		__this->___ttype_1 = L_4;
		return;
	}
}
// System.Object Antlr.Runtime.Tree.TreePatternParser::Pattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreePatternParser_Pattern_mC612D090E821AA43D78A63C6C4D474007FE2B42E (TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = __this->___ttype_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object Antlr.Runtime.Tree.TreePatternParser::ParseTree() */, __this);
		return L_1;
	}

IL_0010:
	{
		int32_t L_2 = __this->___ttype_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Antlr.Runtime.Tree.TreePatternParser::ParseNode() */, __this);
		V_0 = L_3;
		int32_t L_4 = __this->___ttype_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}

IL_002b:
	{
		return NULL;
	}

IL_002d:
	{
		return NULL;
	}
}
// System.Object Antlr.Runtime.Tree.TreePatternParser::ParseTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreePatternParser_ParseTree_m6CBE16DE799A33CA9678C3775D0AABC2B6033B49 (TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = __this->___ttype_1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B73682CED1B654C47A337DF5A4BC2B5D6FD262A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TreePatternParser_ParseTree_m6CBE16DE799A33CA9678C3775D0AABC2B6033B49_RuntimeMethod_var)));
	}

IL_0014:
	{
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_2 = __this->___tokenizer_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_2);
		__this->___ttype_1 = L_3;
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Antlr.Runtime.Tree.TreePatternParser::ParseNode() */, __this);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		if (L_5)
		{
			goto IL_0069;
		}
	}
	{
		return NULL;
	}

IL_0031:
	{
		int32_t L_6 = __this->___ttype_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object Antlr.Runtime.Tree.TreePatternParser::ParseTree() */, __this);
		V_1 = L_7;
		RuntimeObject* L_8 = __this->___adaptor_3;
		RuntimeObject* L_9 = V_0;
		RuntimeObject* L_10 = V_1;
		NullCheck(L_8);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(13 /* System.Void Antlr.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		goto IL_0069;
	}

IL_0050:
	{
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Antlr.Runtime.Tree.TreePatternParser::ParseNode() */, __this);
		V_2 = L_11;
		RuntimeObject* L_12 = V_2;
		if (L_12)
		{
			goto IL_005c;
		}
	}
	{
		return NULL;
	}

IL_005c:
	{
		RuntimeObject* L_13 = __this->___adaptor_3;
		RuntimeObject* L_14 = V_0;
		RuntimeObject* L_15 = V_2;
		NullCheck(L_13);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(13 /* System.Void Antlr.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_13, L_14, L_15);
	}

IL_0069:
	{
		int32_t L_16 = __this->___ttype_1;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_17 = __this->___ttype_1;
		if ((((int32_t)L_17) == ((int32_t)3)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_18 = __this->___ttype_1;
		if ((((int32_t)L_18) == ((int32_t)5)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_19 = __this->___ttype_1;
		if ((((int32_t)L_19) == ((int32_t)7)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_20 = __this->___ttype_1;
		if ((((int32_t)L_20) == ((int32_t)2)))
		{
			goto IL_00a1;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79709B18E471A26FDB78780B715C9BBAAFD4CFEC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TreePatternParser_ParseTree_m6CBE16DE799A33CA9678C3775D0AABC2B6033B49_RuntimeMethod_var)));
	}

IL_00a1:
	{
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_22 = __this->___tokenizer_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_22);
		__this->___ttype_1 = L_23;
		RuntimeObject* L_24 = V_0;
		return L_24;
	}
}
// System.Object Antlr.Runtime.Tree.TreePatternParser::ParseNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreePatternParser_ParseNode_mDA5DF804826A9FB6BDDFA52CCE0A7D85E9B9B436 (TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* V_6 = NULL;
	{
		V_0 = (String_t*)NULL;
		int32_t L_0 = __this->___ttype_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0065;
		}
	}
	{
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_1 = __this->___tokenizer_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_1);
		__this->___ttype_1 = L_2;
		int32_t L_3 = __this->___ttype_1;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0027;
		}
	}
	{
		return NULL;
	}

IL_0027:
	{
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_4 = __this->___tokenizer_0;
		NullCheck(L_4);
		StringBuilder_t* L_5 = L_4->___sval_11;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_0 = L_6;
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_7 = __this->___tokenizer_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_7);
		__this->___ttype_1 = L_8;
		int32_t L_9 = __this->___ttype_1;
		if ((((int32_t)L_9) == ((int32_t)6)))
		{
			goto IL_0054;
		}
	}
	{
		return NULL;
	}

IL_0054:
	{
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_10 = __this->___tokenizer_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_10);
		__this->___ttype_1 = L_11;
	}

IL_0065:
	{
		int32_t L_12 = __this->___ttype_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)7))))
		{
			goto IL_009f;
		}
	}
	{
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_13 = __this->___tokenizer_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_13);
		__this->___ttype_1 = L_14;
		CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F* L_15 = (CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F*)il2cpp_codegen_object_new(CommonToken_tF2B87AFDF875077673BBBEAEA56CC2E0B266C53F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		CommonToken__ctor_m4AA3C59E97512BA3F1E894CAD8556CEE8D4323A4(L_15, 0, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11* L_16 = (WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11*)il2cpp_codegen_object_new(WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WildcardTreePattern__ctor_mCDED29F350E50B0E99A5ABDE85CBA779894CCECF(L_16, L_15, NULL);
		V_6 = L_16;
		String_t* L_17 = V_0;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_18 = V_6;
		String_t* L_19 = V_0;
		NullCheck(L_18);
		L_18->___label_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___label_8), (void*)L_19);
	}

IL_009c:
	{
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_20 = V_6;
		return L_20;
	}

IL_009f:
	{
		int32_t L_21 = __this->___ttype_1;
		if ((((int32_t)L_21) == ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		return NULL;
	}

IL_00aa:
	{
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_22 = __this->___tokenizer_0;
		NullCheck(L_22);
		StringBuilder_t* L_23 = L_22->___sval_11;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		V_1 = L_24;
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_25 = __this->___tokenizer_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_25);
		__this->___ttype_1 = L_26;
		String_t* L_27 = V_1;
		NullCheck(L_27);
		bool L_28;
		L_28 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_27, _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100, NULL);
		if (!L_28)
		{
			goto IL_00e5;
		}
	}
	{
		RuntimeObject* L_29 = __this->___adaptor_3;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::Nil() */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_29);
		return L_30;
	}

IL_00e5:
	{
		String_t* L_31 = V_1;
		V_2 = L_31;
		V_3 = (String_t*)NULL;
		int32_t L_32 = __this->___ttype_1;
		if ((!(((uint32_t)L_32) == ((uint32_t)4))))
		{
			goto IL_0116;
		}
	}
	{
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_33 = __this->___tokenizer_0;
		NullCheck(L_33);
		StringBuilder_t* L_34 = L_33->___sval_11;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		V_3 = L_35;
		String_t* L_36 = V_3;
		V_2 = L_36;
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_37 = __this->___tokenizer_0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_37);
		__this->___ttype_1 = L_38;
	}

IL_0116:
	{
		TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* L_39 = __this->___wizard_2;
		String_t* L_40 = V_1;
		NullCheck(L_39);
		int32_t L_41;
		L_41 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(5 /* System.Int32 Antlr.Runtime.Tree.TreeWizard::GetTokenType(System.String) */, L_39, L_40);
		V_4 = L_41;
		int32_t L_42 = V_4;
		if (L_42)
		{
			goto IL_012a;
		}
	}
	{
		return NULL;
	}

IL_012a:
	{
		RuntimeObject* L_43 = __this->___adaptor_3;
		int32_t L_44 = V_4;
		String_t* L_45 = V_2;
		NullCheck(L_43);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, String_t* >::Invoke(4 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::Create(System.Int32,System.String) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_43, L_44, L_45);
		V_5 = L_46;
		String_t* L_47 = V_0;
		if (!L_47)
		{
			goto IL_015d;
		}
	}
	{
		RuntimeObject* L_48 = V_5;
		NullCheck(L_48);
		Type_t* L_49;
		L_49 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_48, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_50, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_49) == ((RuntimeObject*)(Type_t*)L_51))))
		{
			goto IL_015d;
		}
	}
	{
		RuntimeObject* L_52 = V_5;
		String_t* L_53 = V_0;
		NullCheck(((TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*)CastclassClass((RuntimeObject*)L_52, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var)));
		((TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*)CastclassClass((RuntimeObject*)L_52, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var))->___label_8 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&((TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*)CastclassClass((RuntimeObject*)L_52, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var))->___label_8), (void*)L_53);
	}

IL_015d:
	{
		String_t* L_54 = V_3;
		if (!L_54)
		{
			goto IL_0180;
		}
	}
	{
		RuntimeObject* L_55 = V_5;
		NullCheck(L_55);
		Type_t* L_56;
		L_56 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_55, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_57, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_56) == ((RuntimeObject*)(Type_t*)L_58))))
		{
			goto IL_0180;
		}
	}
	{
		RuntimeObject* L_59 = V_5;
		NullCheck(((TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*)CastclassClass((RuntimeObject*)L_59, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var)));
		((TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*)CastclassClass((RuntimeObject*)L_59, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var))->___hasTextArg_9 = (bool)1;
	}

IL_0180:
	{
		RuntimeObject* L_60 = V_5;
		return L_60;
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
// System.Void Antlr.Runtime.Tree.TreeRewriter::.ctor(Antlr.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeRewriter__ctor_m18CA4FCFE38914A01A947C5051359DD915341339 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* L_1 = (RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1*)il2cpp_codegen_object_new(RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RecognizerSharedState__ctor_mBD6CA377430FFE7EF9EA4A157079CAC82210C00D(L_1, NULL);
		TreeRewriter__ctor_mCD13323EC83093F61A3C21D8BC6BB262929B1DE8(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeRewriter::.ctor(Antlr.Runtime.Tree.ITreeNodeStream,Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeRewriter__ctor_mCD13323EC83093F61A3C21D8BC6BB262929B1DE8 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, RuntimeObject* ___input0, RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeRewriter_U3C_ctorU3Eb__6_0_mAED763D459EC2D1B8C36563BDC0454898426DA8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeRewriter_U3C_ctorU3Eb__6_1_m25060F7797D90F739CEF9F0D681AA505AD84AA19_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* L_1 = ___state1;
		il2cpp_codegen_runtime_class_init_inline(TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120_il2cpp_TypeInfo_var);
		TreeParser__ctor_mD264BCA00B3235E0CF338F1C11BC219C268BDD4B(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___input0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Antlr.Runtime.Tree.ITreeAdaptor Antlr.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var, L_2);
		__this->___originalAdaptor_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalAdaptor_17), (void*)L_3);
		RuntimeObject* L_4 = ___input0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Antlr.Runtime.ITokenStream Antlr.Runtime.Tree.ITreeNodeStream::get_TokenStream() */, ITreeNodeStream_tB3F3A48E15F19A66D559077C86EC6DB46091C13F_il2cpp_TypeInfo_var, L_4);
		__this->___originalTokenStream_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalTokenStream_16), (void*)L_5);
		Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* L_6 = (Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F*)il2cpp_codegen_object_new(Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_1__ctor_m30952416DA2C7CD2BAFCF03658DE2A93200DB991(L_6, __this, (intptr_t)((void*)TreeRewriter_U3C_ctorU3Eb__6_0_mAED763D459EC2D1B8C36563BDC0454898426DA8B_RuntimeMethod_var), NULL);
		__this->___topdown_func_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topdown_func_18), (void*)L_6);
		Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* L_7 = (Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F*)il2cpp_codegen_object_new(Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_1__ctor_m30952416DA2C7CD2BAFCF03658DE2A93200DB991(L_7, __this, (intptr_t)((void*)TreeRewriter_U3C_ctorU3Eb__6_1_m25060F7797D90F739CEF9F0D681AA505AD84AA19_RuntimeMethod_var), NULL);
		__this->___bottomup_func_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bottomup_func_19), (void*)L_7);
		return;
	}
}
// System.Object Antlr.Runtime.Tree.TreeRewriter::ApplyOnce(System.Object,Antlr.Runtime.Misc.Func`1<Antlr.Runtime.IAstRuleReturnScope>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_ApplyOnce_m8CF95C7CC7718A2B5A63D4D0249457B89CED54D2 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, RuntimeObject* ___t0, Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* ___whichRule1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAstRuleReturnScope_tEE2265027FF09AF108202F494EC35014C696A14E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___t0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
	}
	try
	{// begin try (depth: 1)
		{
			RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* L_1 = (RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1*)il2cpp_codegen_object_new(RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1_il2cpp_TypeInfo_var);
			NullCheck(L_1);
			RecognizerSharedState__ctor_mBD6CA377430FFE7EF9EA4A157079CAC82210C00D(L_1, NULL);
			VirtualActionInvoker1< RecognizerSharedState_tC0F837EA62C9538B5E3ACF597B76DAB3306375A1* >::Invoke(4 /* System.Void Antlr.Runtime.BaseRecognizer::SetState(Antlr.Runtime.RecognizerSharedState) */, __this, L_1);
			RuntimeObject* L_2 = __this->___originalAdaptor_17;
			RuntimeObject* L_3 = ___t0;
			CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38* L_4 = (CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38*)il2cpp_codegen_object_new(CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			CommonTreeNodeStream__ctor_m8748AF9B7B1A4B04275F405E5701136F9DDB3189(L_4, L_2, L_3, NULL);
			VirtualActionInvoker1< RuntimeObject* >::Invoke(57 /* System.Void Antlr.Runtime.Tree.TreeParser::SetTreeNodeStream(Antlr.Runtime.Tree.ITreeNodeStream) */, __this, L_4);
			RuntimeObject* L_5 = ((TreeParser_t997D0B2F2035018C43E415C8D1E3B9A7364C3120*)__this)->___input_14;
			RuntimeObject* L_6 = __this->___originalTokenStream_16;
			NullCheck(((CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38*)CastclassClass((RuntimeObject*)L_5, CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38_il2cpp_TypeInfo_var)));
			VirtualActionInvoker1< RuntimeObject* >::Invoke(49 /* System.Void Antlr.Runtime.Tree.CommonTreeNodeStream::set_TokenStream(Antlr.Runtime.ITokenStream) */, ((CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38*)CastclassClass((RuntimeObject*)L_5, CommonTreeNodeStream_t16EF6E1782D8566363C9CBD9E2BE60350EC24B38_il2cpp_TypeInfo_var)), L_6);
			VirtualActionInvoker1< int32_t >::Invoke(32 /* System.Void Antlr.Runtime.BaseRecognizer::set_BacktrackingLevel(System.Int32) */, __this, 1);
			Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* L_7 = ___whichRule1;
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = Func_1_Invoke_m90AB37C261679CABC823813C4167C4B8CCA4E0B6_inline(L_7, NULL);
			V_0 = L_8;
			VirtualActionInvoker1< int32_t >::Invoke(32 /* System.Void Antlr.Runtime.BaseRecognizer::set_BacktrackingLevel(System.Int32) */, __this, 0);
			bool L_9;
			L_9 = VirtualFuncInvoker0< bool >::Invoke(33 /* System.Boolean Antlr.Runtime.BaseRecognizer::get_Failed() */, __this);
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			RuntimeObject* L_10 = ___t0;
			V_1 = L_10;
			goto IL_00a5;
		}

IL_005a_1:
		{
			bool L_11 = __this->___showTransformations_15;
			if (!L_11)
			{
				goto IL_0088_1;
			}
		}
		{
			RuntimeObject* L_12 = V_0;
			if (!L_12)
			{
				goto IL_0088_1;
			}
		}
		{
			RuntimeObject* L_13 = ___t0;
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Antlr.Runtime.IAstRuleReturnScope::get_Tree() */, IAstRuleReturnScope_tEE2265027FF09AF108202F494EC35014C696A14E_il2cpp_TypeInfo_var, L_14);
			NullCheck(L_13);
			bool L_16;
			L_16 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_13, L_15);
			if (L_16)
			{
				goto IL_0088_1;
			}
		}
		{
			RuntimeObject* L_17 = V_0;
			NullCheck(L_17);
			RuntimeObject* L_18;
			L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Antlr.Runtime.IAstRuleReturnScope::get_Tree() */, IAstRuleReturnScope_tEE2265027FF09AF108202F494EC35014C696A14E_il2cpp_TypeInfo_var, L_17);
			if (!L_18)
			{
				goto IL_0088_1;
			}
		}
		{
			RuntimeObject* L_19 = ___t0;
			RuntimeObject* L_20 = V_0;
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Antlr.Runtime.IAstRuleReturnScope::get_Tree() */, IAstRuleReturnScope_tEE2265027FF09AF108202F494EC35014C696A14E_il2cpp_TypeInfo_var, L_20);
			VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(67 /* System.Void Antlr.Runtime.Tree.TreeRewriter::ReportTransformation(System.Object,System.Object) */, __this, L_19, L_21);
		}

IL_0088_1:
		{
			RuntimeObject* L_22 = V_0;
			if (!L_22)
			{
				goto IL_009c_1;
			}
		}
		{
			RuntimeObject* L_23 = V_0;
			NullCheck(L_23);
			RuntimeObject* L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Antlr.Runtime.IAstRuleReturnScope::get_Tree() */, IAstRuleReturnScope_tEE2265027FF09AF108202F494EC35014C696A14E_il2cpp_TypeInfo_var, L_23);
			if (!L_24)
			{
				goto IL_009c_1;
			}
		}
		{
			RuntimeObject* L_25 = V_0;
			NullCheck(L_25);
			RuntimeObject* L_26;
			L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Antlr.Runtime.IAstRuleReturnScope::get_Tree() */, IAstRuleReturnScope_tEE2265027FF09AF108202F494EC35014C696A14E_il2cpp_TypeInfo_var, L_25);
			V_1 = L_26;
			goto IL_00a5;
		}

IL_009c_1:
		{
			RuntimeObject* L_27 = ___t0;
			V_1 = L_27;
			goto IL_00a5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_t576E3524547A53B0950DC286707CBAE428645631_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a0;
		}
		throw e;
	}

CATCH_00a0:
	{// begin catch(Antlr.Runtime.RecognitionException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a3;
	}// end catch (depth: 1)

IL_00a3:
	{
		RuntimeObject* L_28 = ___t0;
		return L_28;
	}

IL_00a5:
	{
		RuntimeObject* L_29 = V_1;
		return L_29;
	}
}
// System.Object Antlr.Runtime.Tree.TreeRewriter::ApplyRepeatedly(System.Object,Antlr.Runtime.Misc.Func`1<Antlr.Runtime.IAstRuleReturnScope>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_ApplyRepeatedly_m12239AF8B1E3A39D87128FE9A1939065EE5B9C93 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, RuntimeObject* ___t0, Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* ___whichRule1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		V_0 = (bool)1;
		goto IL_001b;
	}

IL_0004:
	{
		RuntimeObject* L_0 = ___t0;
		Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* L_1 = ___whichRule1;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* >::Invoke(61 /* System.Object Antlr.Runtime.Tree.TreeRewriter::ApplyOnce(System.Object,Antlr.Runtime.Misc.Func`1<Antlr.Runtime.IAstRuleReturnScope>) */, __this, L_0, L_1);
		V_1 = L_2;
		RuntimeObject* L_3 = ___t0;
		RuntimeObject* L_4 = V_1;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		RuntimeObject* L_6 = V_1;
		___t0 = L_6;
	}

IL_001b:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_0004;
		}
	}
	{
		RuntimeObject* L_8 = ___t0;
		return L_8;
	}
}
// System.Object Antlr.Runtime.Tree.TreeRewriter::Downup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_Downup_mC34DE74607A68A72E9A4CE82091727AAA9954605 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, bool >::Invoke(64 /* System.Object Antlr.Runtime.Tree.TreeRewriter::Downup(System.Object,System.Boolean) */, __this, L_0, (bool)0);
		return L_1;
	}
}
// System.Object Antlr.Runtime.Tree.TreeRewriter::Downup(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_Downup_m0002ED7E1036C299248725684CE113EEA491B898 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, RuntimeObject* ___t0, bool ___showTransformations1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeRewriter_U3CDownupU3Eb__10_0_mF3A7C821A06D7B6642A863F9405093B03B0C2C21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeRewriter_U3CDownupU3Eb__10_1_m16B2B176332A54A4CA0B02D9229C822755F6DA67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___showTransformations1;
		__this->___showTransformations_15 = L_0;
		CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1* L_1 = (CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1*)il2cpp_codegen_object_new(CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CommonTreeAdaptor__ctor_m76A72A7C0D6D23F7DB87E28534B34AE74FBA229C(L_1, NULL);
		TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3* L_2 = (TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3*)il2cpp_codegen_object_new(TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TreeVisitor__ctor_m3E8404CD0899DAA04021EC339E8F378620E20927(L_2, L_1, NULL);
		RuntimeObject* L_3 = ___t0;
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_4 = (Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE*)il2cpp_codegen_object_new(Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m558F3C853A299B4949A686D90F716D2303B6FF1B(L_4, __this, (intptr_t)((void*)TreeRewriter_U3CDownupU3Eb__10_0_mF3A7C821A06D7B6642A863F9405093B03B0C2C21_RuntimeMethod_var), NULL);
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_5 = (Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE*)il2cpp_codegen_object_new(Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m558F3C853A299B4949A686D90F716D2303B6FF1B(L_5, __this, (intptr_t)((void*)TreeRewriter_U3CDownupU3Eb__10_1_m16B2B176332A54A4CA0B02D9229C822755F6DA67_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RuntimeObject* L_6;
		L_6 = TreeVisitor_Visit_m36C8086121A295DA25B3895BC17F2AE85D36D8A9(L_2, L_3, L_4, L_5, NULL);
		___t0 = L_6;
		RuntimeObject* L_7 = ___t0;
		return L_7;
	}
}
// Antlr.Runtime.IAstRuleReturnScope Antlr.Runtime.Tree.TreeRewriter::Topdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_Topdown_m16658C1D990199E6201A8D2749E298D4C6801830 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, const RuntimeMethod* method) 
{
	{
		return (RuntimeObject*)NULL;
	}
}
// Antlr.Runtime.IAstRuleReturnScope Antlr.Runtime.Tree.TreeRewriter::Bottomup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_Bottomup_mDECAA3272EC995154B12BF583F2BCE2D34C9D271 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, const RuntimeMethod* method) 
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.Void Antlr.Runtime.Tree.TreeRewriter::ReportTransformation(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeRewriter_ReportTransformation_mC6989F550E638F99813ED1EF645D4163343E3B8B (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, RuntimeObject* ___oldTree0, RuntimeObject* ___newTree1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_tA515DAFC6771136C92E780C92473EFE3E33BBE4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral827B22AE86B43CCDB3331B7195ECFD0D429BB529);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBD8044853D38524000A9618EB61AFD6F16295E8);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		RuntimeObject* L_0 = ___oldTree0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ITree_tA515DAFC6771136C92E780C92473EFE3E33BBE4D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = ___newTree1;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ITree_tA515DAFC6771136C92E780C92473EFE3E33BBE4D_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteralEBD8044853D38524000A9618EB61AFD6F16295E8;
		goto IL_001e;
	}

IL_0018:
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(24 /* System.String Antlr.Runtime.Tree.ITree::ToStringTree() */, ITree_tA515DAFC6771136C92E780C92473EFE3E33BBE4D_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_001e:
	{
		V_2 = G_B3_0;
		RuntimeObject* L_5 = V_1;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		G_B6_0 = _stringLiteralEBD8044853D38524000A9618EB61AFD6F16295E8;
		goto IL_002f;
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(24 /* System.String Antlr.Runtime.Tree.ITree::ToStringTree() */, ITree_tA515DAFC6771136C92E780C92473EFE3E33BBE4D_il2cpp_TypeInfo_var, L_6);
		G_B6_0 = L_7;
	}

IL_002f:
	{
		V_3 = G_B6_0;
		String_t* L_8 = V_2;
		String_t* L_9 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m8EA4BDC446722A76375AC8DB04FEDB134E7A9A27(_stringLiteral827B22AE86B43CCDB3331B7195ECFD0D429BB529, L_8, L_9, NULL);
		return;
	}
}
// Antlr.Runtime.IAstRuleReturnScope Antlr.Runtime.Tree.TreeRewriter::<.ctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_U3C_ctorU3Eb__6_0_mAED763D459EC2D1B8C36563BDC0454898426DA8B (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(65 /* Antlr.Runtime.IAstRuleReturnScope Antlr.Runtime.Tree.TreeRewriter::Topdown() */, __this);
		return L_0;
	}
}
// Antlr.Runtime.IAstRuleReturnScope Antlr.Runtime.Tree.TreeRewriter::<.ctor>b__6_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_U3C_ctorU3Eb__6_1_m25060F7797D90F739CEF9F0D681AA505AD84AA19 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(66 /* Antlr.Runtime.IAstRuleReturnScope Antlr.Runtime.Tree.TreeRewriter::Bottomup() */, __this);
		return L_0;
	}
}
// System.Object Antlr.Runtime.Tree.TreeRewriter::<Downup>b__10_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_U3CDownupU3Eb__10_0_mF3A7C821A06D7B6642A863F9405093B03B0C2C21 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___o0;
		Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* L_1 = __this->___topdown_func_18;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* >::Invoke(61 /* System.Object Antlr.Runtime.Tree.TreeRewriter::ApplyOnce(System.Object,Antlr.Runtime.Misc.Func`1<Antlr.Runtime.IAstRuleReturnScope>) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Object Antlr.Runtime.Tree.TreeRewriter::<Downup>b__10_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_U3CDownupU3Eb__10_1_m16B2B176332A54A4CA0B02D9229C822755F6DA67 (TreeRewriter_tF642DC2DD781EC88C1B944673E853DA592C15A97* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___o0;
		Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* L_1 = __this->___bottomup_func_19;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_1_t16B8A4C22D14F41630ED290E060869BA1A780F3F* >::Invoke(62 /* System.Object Antlr.Runtime.Tree.TreeRewriter::ApplyRepeatedly(System.Object,Antlr.Runtime.Misc.Func`1<Antlr.Runtime.IAstRuleReturnScope>) */, __this, L_0, L_1);
		return L_2;
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
// System.Void Antlr.Runtime.Tree.TreeVisitor::.ctor(Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeVisitor__ctor_m3E8404CD0899DAA04021EC339E8F378620E20927 (TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3* __this, RuntimeObject* ___adaptor0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___adaptor0;
		__this->___adaptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_0), (void*)L_0);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeVisitor__ctor_mA3EF30E2269448FE52CFFE7CD18F89CA7B299AEB (TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1* L_0 = (CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1*)il2cpp_codegen_object_new(CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommonTreeAdaptor__ctor_m76A72A7C0D6D23F7DB87E28534B34AE74FBA229C(L_0, NULL);
		TreeVisitor__ctor_m3E8404CD0899DAA04021EC339E8F378620E20927(__this, L_0, NULL);
		return;
	}
}
// System.Object Antlr.Runtime.Tree.TreeVisitor::Visit(System.Object,Antlr.Runtime.Tree.ITreeVisitorAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitor_Visit_mB6C553975C89403FF2D1AB84630BBADC2E947BB3 (TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3* __this, RuntimeObject* ___t0, RuntimeObject* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeVisitorAction_t621FB5F242D0C9CA89D53CA45D6149261214DC0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = __this->___adaptor_0;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(12 /* System.Boolean Antlr.Runtime.Tree.ITreeAdaptor::IsNil(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___action1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_5 = ___action1;
		RuntimeObject* L_6 = ___t0;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Antlr.Runtime.Tree.ITreeVisitorAction::Pre(System.Object) */, ITreeVisitorAction_t621FB5F242D0C9CA89D53CA45D6149261214DC0D_il2cpp_TypeInfo_var, L_5, L_6);
		___t0 = L_7;
	}

IL_001c:
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0020:
	{
		RuntimeObject* L_8 = __this->___adaptor_0;
		RuntimeObject* L_9 = ___t0;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		V_2 = L_11;
		RuntimeObject* L_12 = V_2;
		RuntimeObject* L_13 = ___action1;
		RuntimeObject* L_14;
		L_14 = TreeVisitor_Visit_mB6C553975C89403FF2D1AB84630BBADC2E947BB3(__this, L_12, L_13, NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003b:
	{
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = __this->___adaptor_0;
		RuntimeObject* L_18 = ___t0;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_17, L_18);
		if ((((int32_t)L_16) < ((int32_t)L_19)))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_20 = ___action1;
		if (!L_20)
		{
			goto IL_0059;
		}
	}
	{
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_22 = ___action1;
		RuntimeObject* L_23 = ___t0;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(1 /* System.Object Antlr.Runtime.Tree.ITreeVisitorAction::Post(System.Object) */, ITreeVisitorAction_t621FB5F242D0C9CA89D53CA45D6149261214DC0D_il2cpp_TypeInfo_var, L_22, L_23);
		___t0 = L_24;
	}

IL_0059:
	{
		RuntimeObject* L_25 = ___t0;
		return L_25;
	}
}
// System.Object Antlr.Runtime.Tree.TreeVisitor::Visit(System.Object,Antlr.Runtime.Misc.Func`2<System.Object,System.Object>,Antlr.Runtime.Misc.Func`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitor_Visit_m36C8086121A295DA25B3895BC17F2AE85D36D8A9 (TreeVisitor_t2C0EF3603F30160C72F67AEEF65D7FF3735166E3* __this, RuntimeObject* ___t0, Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* ___preAction1, Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* ___postAction2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeVisitorAction_t8704A7EE215E2A6E6B0A7C95B34C3166265FF468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___t0;
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_1 = ___preAction1;
		Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* L_2 = ___postAction2;
		TreeVisitorAction_t8704A7EE215E2A6E6B0A7C95B34C3166265FF468* L_3 = (TreeVisitorAction_t8704A7EE215E2A6E6B0A7C95B34C3166265FF468*)il2cpp_codegen_object_new(TreeVisitorAction_t8704A7EE215E2A6E6B0A7C95B34C3166265FF468_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TreeVisitorAction__ctor_mC262D0BF7C3DCDD5A754FB63B2A3424E9CA12A97(L_3, L_1, L_2, NULL);
		RuntimeObject* L_4;
		L_4 = TreeVisitor_Visit_mB6C553975C89403FF2D1AB84630BBADC2E947BB3(__this, L_0, L_3, NULL);
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
// System.Void Antlr.Runtime.Tree.TreeWizard::.ctor(Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard__ctor_m89161A0A4AA676FDD6C27C2979F00882CA096774 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___adaptor0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___adaptor0;
		__this->___adaptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_0), (void*)L_0);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.Collections.Generic.IDictionary`2<System.String,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard__ctor_m2DCA2A6D7870973D676A766C75ACEB24D6F7924B (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___adaptor0, RuntimeObject* ___tokenNameToTypeMap1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___adaptor0;
		__this->___adaptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_0), (void*)L_0);
		RuntimeObject* L_1 = ___tokenNameToTypeMap1;
		__this->___tokenNameToTypeMap_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenNameToTypeMap_1), (void*)L_1);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard::.ctor(Antlr.Runtime.Tree.ITreeAdaptor,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard__ctor_m53EBA865DEA2C7A31A153691B1077B9E8FE460B1 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___adaptor0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___adaptor0;
		__this->___adaptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_0), (void*)L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___tokenNames1;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(4 /* System.Collections.Generic.IDictionary`2<System.String,System.Int32> Antlr.Runtime.Tree.TreeWizard::ComputeTokenTypes(System.String[]) */, __this, L_1);
		__this->___tokenNameToTypeMap_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenNameToTypeMap_1), (void*)L_2);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard__ctor_m663596CC3272C4BD3F581CD55D25F44CFD2C00FC (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1* L_0 = (CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1*)il2cpp_codegen_object_new(CommonTreeAdaptor_t07A4209B07B402269F5EA1267E397B612953DFC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommonTreeAdaptor__ctor_m76A72A7C0D6D23F7DB87E28534B34AE74FBA229C(L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___tokenNames0;
		TreeWizard__ctor_m53EBA865DEA2C7A31A153691B1077B9E8FE460B1(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Antlr.Runtime.Tree.TreeWizard::ComputeTokenTypes(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_ComputeTokenTypes_m48992A4361F72E9AC003218ABC448D5D90A0D79A (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_0 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_0, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		V_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___tokenNames0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}

IL_000b:
	{
		V_1 = 4;
		goto IL_001f;
	}

IL_000f:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___tokenNames0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		RuntimeObject* L_7 = V_0;
		String_t* L_8 = V_2;
		int32_t L_9 = V_1;
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001f:
	{
		int32_t L_11 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___tokenNames0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_13 = V_0;
		return L_13;
	}
}
// System.Int32 Antlr.Runtime.Tree.TreeWizard::GetTokenType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreeWizard_GetTokenType_m3845B9B7BCAA4274C56D1205937B44147AFE9A50 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, String_t* ___tokenName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___tokenNameToTypeMap_1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___tokenNameToTypeMap_1;
		String_t* L_2 = ___tokenName0;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, String_t*, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_1, L_2, (&V_0));
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_001c:
	{
		return 0;
	}
}
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList> Antlr.Runtime.Tree.TreeWizard::Index(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_Index_mE001828E03A2AAC731197AFB8747CECA52F83466 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m41CE364387C4E5027C7121E011B74D117FF388D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A* L_0 = (Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A*)il2cpp_codegen_object_new(Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m41CE364387C4E5027C7121E011B74D117FF388D5(L_0, Dictionary_2__ctor_m41CE364387C4E5027C7121E011B74D117FF388D5_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___t0;
		RuntimeObject* L_2 = V_0;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Antlr.Runtime.Tree.TreeWizard::IndexCore(System.Object,System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>) */, __this, L_1, L_2);
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard::IndexCore(System.Object,System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_IndexCore_mCCA6A5B8D1AB6101044F1EC35583C603DF5D5CF9 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, RuntimeObject* ___m1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t1DBD907AB48E2E0C407A1C0A5CE54723973A82A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = ___t0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = __this->___adaptor_0;
		RuntimeObject* L_2 = ___t0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		RuntimeObject* L_4 = ___m1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker2< bool, int32_t, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>::TryGetValue(TKey,TValue&) */, IDictionary_2_t1DBD907AB48E2E0C407A1C0A5CE54723973A82A9_il2cpp_TypeInfo_var, L_4, L_5, (&V_1));
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		if (L_7)
		{
			goto IL_002d;
		}
	}

IL_001f:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_8 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_8, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_1 = L_8;
		RuntimeObject* L_9 = ___m1;
		int32_t L_10 = V_0;
		RuntimeObject* L_11 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>::set_Item(TKey,TValue) */, IDictionary_2_t1DBD907AB48E2E0C407A1C0A5CE54723973A82A9_il2cpp_TypeInfo_var, L_9, L_10, L_11);
	}

IL_002d:
	{
		RuntimeObject* L_12 = V_1;
		RuntimeObject* L_13 = ___t0;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_15 = __this->___adaptor_0;
		RuntimeObject* L_16 = ___t0;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_15, L_16);
		V_2 = L_17;
		V_3 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		RuntimeObject* L_18 = __this->___adaptor_0;
		RuntimeObject* L_19 = ___t0;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_18, L_19, L_20);
		V_4 = L_21;
		RuntimeObject* L_22 = V_4;
		RuntimeObject* L_23 = ___m1;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Antlr.Runtime.Tree.TreeWizard::IndexCore(System.Object,System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>) */, __this, L_22, L_23);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0062:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Collections.IList Antlr.Runtime.Tree.TreeWizard::Find(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_Find_m459187C9C8B3A360E46B500EF1E5DDA0672F401F (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, int32_t ___ttype1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FindTreeWizardVisitor_t89484E4EAF3EED6A5897CF5D5FAE6256825B7325_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___t0;
		int32_t L_2 = ___ttype1;
		RuntimeObject* L_3 = V_0;
		FindTreeWizardVisitor_t89484E4EAF3EED6A5897CF5D5FAE6256825B7325* L_4 = (FindTreeWizardVisitor_t89484E4EAF3EED6A5897CF5D5FAE6256825B7325*)il2cpp_codegen_object_new(FindTreeWizardVisitor_t89484E4EAF3EED6A5897CF5D5FAE6256825B7325_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FindTreeWizardVisitor__ctor_m88749B29469C684F4D648EBF443E896103229F60(L_4, L_3, NULL);
		TreeWizard_Visit_m4DA62C2AB139CAA695AD26BC6EB75B6A709C4B61(__this, L_1, L_2, L_4, NULL);
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IList Antlr.Runtime.Tree.TreeWizard::Find(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_Find_m4B96B1A9D481B6C1644085C3D1798DD8DEFDDE08 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, String_t* ___pattern1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FindTreeWizardContextVisitor_tF7E90D45DD07E51623B5DE4D7D4F7343F817B6FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* V_1 = NULL;
	int32_t V_2 = 0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		String_t* L_1 = ___pattern1;
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_2 = (TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF*)il2cpp_codegen_object_new(TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TreePatternLexer__ctor_m59DCBF05858A285C49CD8352B59681ED369A9401(L_2, L_1, NULL);
		TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6* L_3 = (TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6*)il2cpp_codegen_object_new(TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TreePatternTreeAdaptor__ctor_mDF3A35E91943CC4C39F1857202338490F1A4CAA1(L_3, NULL);
		TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342* L_4 = (TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342*)il2cpp_codegen_object_new(TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TreePatternParser__ctor_m5D8CB3AA6693BF4D7DF5DC4545C1DCEF3BBE7251(L_4, L_2, __this, L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Antlr.Runtime.Tree.TreePatternParser::Pattern() */, L_4);
		V_1 = ((TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*)CastclassClass((RuntimeObject*)L_5, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var));
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_6 = V_1;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(36 /* System.Boolean Antlr.Runtime.Tree.BaseTree::get_IsNil() */, L_7);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_9 = V_1;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_10) == ((RuntimeObject*)(Type_t*)L_12))))
		{
			goto IL_0041;
		}
	}

IL_003f:
	{
		return (RuntimeObject*)NULL;
	}

IL_0041:
	{
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(41 /* System.Int32 Antlr.Runtime.Tree.BaseTree::get_Type() */, L_13);
		V_2 = L_14;
		RuntimeObject* L_15 = ___t0;
		int32_t L_16 = V_2;
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_17 = V_1;
		RuntimeObject* L_18 = V_0;
		FindTreeWizardContextVisitor_tF7E90D45DD07E51623B5DE4D7D4F7343F817B6FC* L_19 = (FindTreeWizardContextVisitor_tF7E90D45DD07E51623B5DE4D7D4F7343F817B6FC*)il2cpp_codegen_object_new(FindTreeWizardContextVisitor_tF7E90D45DD07E51623B5DE4D7D4F7343F817B6FC_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		FindTreeWizardContextVisitor__ctor_mBF92A4A85E96424BCBAC86EA5C989305C1B950B3(L_19, __this, L_17, L_18, NULL);
		TreeWizard_Visit_m4DA62C2AB139CAA695AD26BC6EB75B6A709C4B61(__this, L_15, L_16, L_19, NULL);
		RuntimeObject* L_20 = V_0;
		return L_20;
	}
}
// System.Object Antlr.Runtime.Tree.TreeWizard::FindFirst(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_FindFirst_mF9E65C529462AB7E44B05B0884545BF49D546EC4 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, int32_t ___ttype1, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
// System.Object Antlr.Runtime.Tree.TreeWizard::FindFirst(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_FindFirst_mDE036A6CFE7C658923AB593A6D202F1AEEEB062F (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, String_t* ___pattern1, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard::Visit(System.Object,System.Int32,Antlr.Runtime.Tree.TreeWizard/IContextVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_Visit_m4DA62C2AB139CAA695AD26BC6EB75B6A709C4B61 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, int32_t ___ttype1, RuntimeObject* ___visitor2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t0;
		int32_t L_1 = ___ttype1;
		RuntimeObject* L_2 = ___visitor2;
		VirtualActionInvoker5< RuntimeObject*, RuntimeObject*, int32_t, int32_t, RuntimeObject* >::Invoke(11 /* System.Void Antlr.Runtime.Tree.TreeWizard::VisitCore(System.Object,System.Object,System.Int32,System.Int32,Antlr.Runtime.Tree.TreeWizard/IContextVisitor) */, __this, L_0, NULL, 0, L_1, L_2);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard::Visit(System.Object,System.Int32,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_Visit_m7EF6F493FA470123261059D3F9A3ED3A4B14607D (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, int32_t ___ttype1, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionVisitor_tF8A6085A57C134E956E9E996542E106C2190B8D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___t0;
		int32_t L_1 = ___ttype1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___action2;
		ActionVisitor_tF8A6085A57C134E956E9E996542E106C2190B8D0* L_3 = (ActionVisitor_tF8A6085A57C134E956E9E996542E106C2190B8D0*)il2cpp_codegen_object_new(ActionVisitor_tF8A6085A57C134E956E9E996542E106C2190B8D0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ActionVisitor__ctor_m09949FE5E1C5455A6F95E91F1FE09E6CBE0549EE(L_3, L_2, NULL);
		TreeWizard_Visit_m4DA62C2AB139CAA695AD26BC6EB75B6A709C4B61(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard::VisitCore(System.Object,System.Object,System.Int32,System.Int32,Antlr.Runtime.Tree.TreeWizard/IContextVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_VisitCore_mE3B9B462895989721ECE9755FE8CF6453BDF4C02 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, RuntimeObject* ___parent1, int32_t ___childIndex2, int32_t ___ttype3, RuntimeObject* ___visitor4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IContextVisitor_t087F66125AECA75D7707BB54492CFBDB4A9E4589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___t0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = __this->___adaptor_0;
		RuntimeObject* L_2 = ___t0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_1, L_2);
		int32_t L_4 = ___ttype3;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_5 = ___visitor4;
		RuntimeObject* L_6 = ___t0;
		RuntimeObject* L_7 = ___parent1;
		int32_t L_8 = ___childIndex2;
		NullCheck(L_5);
		InterfaceActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject* >::Invoke(0 /* System.Void Antlr.Runtime.Tree.TreeWizard/IContextVisitor::Visit(System.Object,System.Object,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, IContextVisitor_t087F66125AECA75D7707BB54492CFBDB4A9E4589_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8, (RuntimeObject*)NULL);
	}

IL_001f:
	{
		RuntimeObject* L_9 = __this->___adaptor_0;
		RuntimeObject* L_10 = ___t0;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_9, L_10);
		V_0 = L_11;
		V_1 = 0;
		goto IL_004f;
	}

IL_0030:
	{
		RuntimeObject* L_12 = __this->___adaptor_0;
		RuntimeObject* L_13 = ___t0;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_12, L_13, L_14);
		V_2 = L_15;
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___t0;
		int32_t L_18 = V_1;
		int32_t L_19 = ___ttype3;
		RuntimeObject* L_20 = ___visitor4;
		VirtualActionInvoker5< RuntimeObject*, RuntimeObject*, int32_t, int32_t, RuntimeObject* >::Invoke(11 /* System.Void Antlr.Runtime.Tree.TreeWizard::VisitCore(System.Object,System.Object,System.Int32,System.Int32,Antlr.Runtime.Tree.TreeWizard/IContextVisitor) */, __this, L_16, L_17, L_18, L_19, L_20);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_004f:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard::Visit(System.Object,System.String,Antlr.Runtime.Tree.TreeWizard/IContextVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_Visit_m5D9B60A207ABD0F50AE617FD7575C5E8083B5FC6 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, String_t* ___pattern1, RuntimeObject* ___visitor2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitTreeWizardContextVisitor_t291BBF45DE75CF84C28D35E331A12E4A1B25581C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___pattern1;
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_1 = (TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF*)il2cpp_codegen_object_new(TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TreePatternLexer__ctor_m59DCBF05858A285C49CD8352B59681ED369A9401(L_1, L_0, NULL);
		TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6* L_2 = (TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6*)il2cpp_codegen_object_new(TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TreePatternTreeAdaptor__ctor_mDF3A35E91943CC4C39F1857202338490F1A4CAA1(L_2, NULL);
		TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342* L_3 = (TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342*)il2cpp_codegen_object_new(TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TreePatternParser__ctor_m5D8CB3AA6693BF4D7DF5DC4545C1DCEF3BBE7251(L_3, L_1, __this, L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Antlr.Runtime.Tree.TreePatternParser::Pattern() */, L_3);
		V_0 = ((TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*)CastclassClass((RuntimeObject*)L_4, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var));
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(36 /* System.Boolean Antlr.Runtime.Tree.BaseTree::get_IsNil() */, L_6);
		if (L_7)
		{
			goto IL_0039;
		}
	}
	{
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_8 = V_0;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_9) == ((RuntimeObject*)(Type_t*)L_11))))
		{
			goto IL_003a;
		}
	}

IL_0039:
	{
		return;
	}

IL_003a:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_12 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_12, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_1 = L_12;
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(41 /* System.Int32 Antlr.Runtime.Tree.BaseTree::get_Type() */, L_13);
		V_2 = L_14;
		RuntimeObject* L_15 = ___t0;
		int32_t L_16 = V_2;
		RuntimeObject* L_17 = ___visitor2;
		RuntimeObject* L_18 = V_1;
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_19 = V_0;
		VisitTreeWizardContextVisitor_t291BBF45DE75CF84C28D35E331A12E4A1B25581C* L_20 = (VisitTreeWizardContextVisitor_t291BBF45DE75CF84C28D35E331A12E4A1B25581C*)il2cpp_codegen_object_new(VisitTreeWizardContextVisitor_t291BBF45DE75CF84C28D35E331A12E4A1B25581C_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		VisitTreeWizardContextVisitor__ctor_m0A502360F286ECFB39D2CD351D04CDBE6714DF8E(L_20, __this, L_17, L_18, L_19, NULL);
		TreeWizard_Visit_m4DA62C2AB139CAA695AD26BC6EB75B6A709C4B61(__this, L_15, L_16, L_20, NULL);
		return;
	}
}
// System.Boolean Antlr.Runtime.Tree.TreeWizard::Parse(System.Object,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_Parse_mB3F41ABBC888FB518FC2D5D8B918902561CD83AF (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, String_t* ___pattern1, RuntimeObject* ___labels2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* V_0 = NULL;
	{
		String_t* L_0 = ___pattern1;
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_1 = (TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF*)il2cpp_codegen_object_new(TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TreePatternLexer__ctor_m59DCBF05858A285C49CD8352B59681ED369A9401(L_1, L_0, NULL);
		TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6* L_2 = (TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6*)il2cpp_codegen_object_new(TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TreePatternTreeAdaptor__ctor_mDF3A35E91943CC4C39F1857202338490F1A4CAA1(L_2, NULL);
		TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342* L_3 = (TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342*)il2cpp_codegen_object_new(TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TreePatternParser__ctor_m5D8CB3AA6693BF4D7DF5DC4545C1DCEF3BBE7251(L_3, L_1, __this, L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Antlr.Runtime.Tree.TreePatternParser::Pattern() */, L_3);
		V_0 = ((TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*)CastclassClass((RuntimeObject*)L_4, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = ___t0;
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_6 = V_0;
		RuntimeObject* L_7 = ___labels2;
		bool L_8;
		L_8 = VirtualFuncInvoker3< bool, RuntimeObject*, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*, RuntimeObject* >::Invoke(12 /* System.Boolean Antlr.Runtime.Tree.TreeWizard::ParseCore(System.Object,Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, __this, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Boolean Antlr.Runtime.Tree.TreeWizard::Parse(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_Parse_mD75D12FEEF7E8EDDA52F84FEFC322D5C427E445E (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t0, String_t* ___pattern1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t0;
		String_t* L_1 = ___pattern1;
		bool L_2;
		L_2 = TreeWizard_Parse_mB3F41ABBC888FB518FC2D5D8B918902561CD83AF(__this, L_0, L_1, (RuntimeObject*)NULL, NULL);
		return L_2;
	}
}
// System.Boolean Antlr.Runtime.Tree.TreeWizard::ParseCore(System.Object,Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_ParseCore_m317E0271A805771C9D2237DCF26A7B5367AE0BB7 (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t10, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* ___tpattern1, RuntimeObject* ___labels2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* V_4 = NULL;
	{
		RuntimeObject* L_0 = ___t10;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_1 = ___tpattern1;
		if (L_1)
		{
			goto IL_0008;
		}
	}

IL_0006:
	{
		return (bool)0;
	}

IL_0008:
	{
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_2 = ___tpattern1;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		if ((((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_5)))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_6 = __this->___adaptor_0;
		RuntimeObject* L_7 = ___t10;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_6, L_7);
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_9 = ___tpattern1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(41 /* System.Int32 Antlr.Runtime.Tree.BaseTree::get_Type() */, L_9);
		if ((((int32_t)L_8) == ((int32_t)L_10)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_11 = ___tpattern1;
		NullCheck(L_11);
		bool L_12 = L_11->___hasTextArg_9;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_13 = __this->___adaptor_0;
		RuntimeObject* L_14 = ___t10;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_13, L_14);
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_16 = ___tpattern1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(43 /* System.String Antlr.Runtime.Tree.BaseTree::get_Text() */, L_16);
		NullCheck(L_15);
		bool L_18;
		L_18 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_15, L_17, NULL);
		if (L_18)
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0053:
	{
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_19 = ___tpattern1;
		NullCheck(L_19);
		String_t* L_20 = L_19->___label_8;
		if (!L_20)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject* L_21 = ___labels2;
		if (!L_21)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject* L_22 = ___labels2;
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_23 = ___tpattern1;
		NullCheck(L_23);
		String_t* L_24 = L_23->___label_8;
		RuntimeObject* L_25 = ___t10;
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_22, L_24, L_25);
	}

IL_006b:
	{
		RuntimeObject* L_26 = __this->___adaptor_0;
		RuntimeObject* L_27 = ___t10;
		NullCheck(L_26);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_26, L_27);
		V_0 = L_28;
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_29 = ___tpattern1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 Antlr.Runtime.Tree.BaseTree::get_ChildCount() */, L_29);
		V_1 = L_30;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0085:
	{
		V_2 = 0;
		goto IL_00b7;
	}

IL_0089:
	{
		RuntimeObject* L_33 = __this->___adaptor_0;
		RuntimeObject* L_34 = ___t10;
		int32_t L_35 = V_2;
		NullCheck(L_33);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_33, L_34, L_35);
		V_3 = L_36;
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_37 = ___tpattern1;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(49 /* Antlr.Runtime.Tree.ITree Antlr.Runtime.Tree.BaseTree::GetChild(System.Int32) */, L_37, L_38);
		V_4 = ((TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*)CastclassClass((RuntimeObject*)L_39, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var));
		RuntimeObject* L_40 = V_3;
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_41 = V_4;
		RuntimeObject* L_42 = ___labels2;
		bool L_43;
		L_43 = VirtualFuncInvoker3< bool, RuntimeObject*, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*, RuntimeObject* >::Invoke(12 /* System.Boolean Antlr.Runtime.Tree.TreeWizard::ParseCore(System.Object,Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, __this, L_40, L_41, L_42);
		if (L_43)
		{
			goto IL_00b3;
		}
	}
	{
		return (bool)0;
	}

IL_00b3:
	{
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00b7:
	{
		int32_t L_45 = V_2;
		int32_t L_46 = V_0;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0089;
		}
	}
	{
		return (bool)1;
	}
}
// System.Object Antlr.Runtime.Tree.TreeWizard::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_Create_mAE252E358946424F28FB8CA52B09F51643CC272C (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, String_t* ___pattern0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___pattern0;
		TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF* L_1 = (TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF*)il2cpp_codegen_object_new(TreePatternLexer_tDECB513A7DF8C515F110A49C1E87051964C9DCEF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TreePatternLexer__ctor_m59DCBF05858A285C49CD8352B59681ED369A9401(L_1, L_0, NULL);
		RuntimeObject* L_2 = __this->___adaptor_0;
		TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342* L_3 = (TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342*)il2cpp_codegen_object_new(TreePatternParser_t167F1632450CDCFA543A161642F6ACD70436B342_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TreePatternParser__ctor_m5D8CB3AA6693BF4D7DF5DC4545C1DCEF3BBE7251(L_3, L_1, __this, L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Antlr.Runtime.Tree.TreePatternParser::Pattern() */, L_3);
		return L_4;
	}
}
// System.Boolean Antlr.Runtime.Tree.TreeWizard::Equals(System.Object,System.Object,Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_Equals_m60B2EE97AD4F61968D08F449FE69BCEFD9E6456F (RuntimeObject* ___t10, RuntimeObject* ___t21, RuntimeObject* ___adaptor2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t10;
		RuntimeObject* L_1 = ___t21;
		RuntimeObject* L_2 = ___adaptor2;
		bool L_3;
		L_3 = TreeWizard_EqualsCore_m194FD8516F1E91C8B10F219134899B3E5A68DC5A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Antlr.Runtime.Tree.TreeWizard::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_Equals_mD0A6D664B66EA1D8BAA93AE3A2EC00154177074A (TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* __this, RuntimeObject* ___t10, RuntimeObject* ___t21, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t10;
		RuntimeObject* L_1 = ___t21;
		RuntimeObject* L_2 = __this->___adaptor_0;
		bool L_3;
		L_3 = TreeWizard_EqualsCore_m194FD8516F1E91C8B10F219134899B3E5A68DC5A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Antlr.Runtime.Tree.TreeWizard::EqualsCore(System.Object,System.Object,Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_EqualsCore_m194FD8516F1E91C8B10F219134899B3E5A68DC5A (RuntimeObject* ___t10, RuntimeObject* ___t21, RuntimeObject* ___adaptor2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___t10;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		RuntimeObject* L_1 = ___t21;
		if (L_1)
		{
			goto IL_0008;
		}
	}

IL_0006:
	{
		return (bool)0;
	}

IL_0008:
	{
		RuntimeObject* L_2 = ___adaptor2;
		RuntimeObject* L_3 = ___t10;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_5 = ___adaptor2;
		RuntimeObject* L_6 = ___t21;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_5, L_6);
		if ((((int32_t)L_4) == ((int32_t)L_7)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		RuntimeObject* L_8 = ___adaptor2;
		RuntimeObject* L_9 = ___t10;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_11 = ___adaptor2;
		RuntimeObject* L_12 = ___t21;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_11, L_12);
		NullCheck(L_10);
		bool L_14;
		L_14 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_10, L_13, NULL);
		if (L_14)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		RuntimeObject* L_15 = ___adaptor2;
		RuntimeObject* L_16 = ___t10;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_15, L_16);
		V_0 = L_17;
		RuntimeObject* L_18 = ___adaptor2;
		RuntimeObject* L_19 = ___t21;
		NullCheck(L_18);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_18, L_19);
		V_1 = L_20;
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0047:
	{
		V_2 = 0;
		goto IL_006b;
	}

IL_004b:
	{
		RuntimeObject* L_23 = ___adaptor2;
		RuntimeObject* L_24 = ___t10;
		int32_t L_25 = V_2;
		NullCheck(L_23);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		RuntimeObject* L_27 = ___adaptor2;
		RuntimeObject* L_28 = ___t21;
		int32_t L_29 = V_2;
		NullCheck(L_27);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_t265BED3B4710352EA46DD53A28BFF3A2E740B867_il2cpp_TypeInfo_var, L_27, L_28, L_29);
		V_3 = L_30;
		RuntimeObject* L_31 = V_3;
		RuntimeObject* L_32 = ___adaptor2;
		bool L_33;
		L_33 = TreeWizard_EqualsCore_m194FD8516F1E91C8B10F219134899B3E5A68DC5A(L_26, L_31, L_32, NULL);
		if (L_33)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_006b:
	{
		int32_t L_35 = V_2;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_004b;
		}
	}
	{
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
// System.Void Antlr.Runtime.Tree.TreeWizard/Visitor::Visit(System.Object,System.Object,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visitor_Visit_m868430E4B1BB4A36185CC5BDB1547BBF3967DDD4 (Visitor_t80DD17571040243F981C06D12D16F0D7A2105A04* __this, RuntimeObject* ___t0, RuntimeObject* ___parent1, int32_t ___childIndex2, RuntimeObject* ___labels3, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(6 /* System.Void Antlr.Runtime.Tree.TreeWizard/Visitor::Visit(System.Object) */, __this, L_0);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard/Visitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visitor__ctor_mCD5D20DCB415ED9BA4001B6AAA222B6D2DC6177A (Visitor_t80DD17571040243F981C06D12D16F0D7A2105A04* __this, const RuntimeMethod* method) 
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
// System.Void Antlr.Runtime.Tree.TreeWizard/ActionVisitor::.ctor(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionVisitor__ctor_m09949FE5E1C5455A6F95E91F1FE09E6CBE0549EE (ActionVisitor_tF8A6085A57C134E956E9E996542E106C2190B8D0* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) 
{
	{
		Visitor__ctor_mCD5D20DCB415ED9BA4001B6AAA222B6D2DC6177A(__this, NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___action0;
		__this->____action_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____action_0), (void*)L_0);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard/ActionVisitor::Visit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionVisitor_Visit_m0BA85C821EC2AB328BDA4FEC441CC3EA920D0CD7 (ActionVisitor_tF8A6085A57C134E956E9E996542E106C2190B8D0* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = __this->____action_0;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_0, L_1, NULL);
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
// System.Void Antlr.Runtime.Tree.TreeWizard/TreePattern::.ctor(Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePattern__ctor_m96F0E0E3B37C97F348750B2E929343FFE537A755 (TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* __this, RuntimeObject* ___payload0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___payload0;
		CommonTree__ctor_mDB78BF2B48AF569A5A2968CA39C9B1680949B381(__this, L_0, NULL);
		return;
	}
}
// System.String Antlr.Runtime.Tree.TreeWizard/TreePattern::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TreePattern_ToString_m825B1732269B8DE315702BCB177DF045B886D001 (TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___label_8;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = __this->___label_8;
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, L_1, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		return L_2;
	}

IL_001e:
	{
		String_t* L_3;
		L_3 = CommonTree_ToString_m77E1CF809813B9849A7FA45C5F204E7A31117887(__this, NULL);
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
// System.Void Antlr.Runtime.Tree.TreeWizard/WildcardTreePattern::.ctor(Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WildcardTreePattern__ctor_mCDED29F350E50B0E99A5ABDE85CBA779894CCECF (WildcardTreePattern_tC8357EA72A57CD4452C467D4E7345CA84944CB11* __this, RuntimeObject* ___payload0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___payload0;
		TreePattern__ctor_m96F0E0E3B37C97F348750B2E929343FFE537A755(__this, L_0, NULL);
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
// System.Object Antlr.Runtime.Tree.TreeWizard/TreePatternTreeAdaptor::Create(Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreePatternTreeAdaptor_Create_m05618AC407A24CACBE920E89970B521540DE5D68 (TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6* __this, RuntimeObject* ___payload0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___payload0;
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_1 = (TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*)il2cpp_codegen_object_new(TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TreePattern__ctor_m96F0E0E3B37C97F348750B2E929343FFE537A755(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard/TreePatternTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternTreeAdaptor__ctor_mDF3A35E91943CC4C39F1857202338490F1A4CAA1 (TreePatternTreeAdaptor_tDF671CDF9541F0647D0A28FA8C426CFB821984E6* __this, const RuntimeMethod* method) 
{
	{
		CommonTreeAdaptor__ctor_m76A72A7C0D6D23F7DB87E28534B34AE74FBA229C(__this, NULL);
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
// System.Void Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor::.ctor(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardVisitor__ctor_m88749B29469C684F4D648EBF443E896103229F60 (FindTreeWizardVisitor_t89484E4EAF3EED6A5897CF5D5FAE6256825B7325* __this, RuntimeObject* ___nodes0, const RuntimeMethod* method) 
{
	{
		Visitor__ctor_mCD5D20DCB415ED9BA4001B6AAA222B6D2DC6177A(__this, NULL);
		RuntimeObject* L_0 = ___nodes0;
		__this->____nodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes_0), (void*)L_0);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor::Visit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardVisitor_Visit_mF69AC3D117278C8CE205221635062F0796A9396C (FindTreeWizardVisitor_t89484E4EAF3EED6A5897CF5D5FAE6256825B7325* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____nodes_0;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
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
// System.Void Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::.ctor(Antlr.Runtime.Tree.TreeWizard,Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardContextVisitor__ctor_mBF92A4A85E96424BCBAC86EA5C989305C1B950B3 (FindTreeWizardContextVisitor_tF7E90D45DD07E51623B5DE4D7D4F7343F817B6FC* __this, TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* ___outer0, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* ___tpattern1, RuntimeObject* ___subtrees2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* L_0 = ___outer0;
		__this->____outer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outer_0), (void*)L_0);
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_1 = ___tpattern1;
		__this->____tpattern_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tpattern_1), (void*)L_1);
		RuntimeObject* L_2 = ___subtrees2;
		__this->____subtrees_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subtrees_2), (void*)L_2);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::Visit(System.Object,System.Object,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardContextVisitor_Visit_mADB83EB2FA32009FF8666EBF0E782C0A4C88E696 (FindTreeWizardContextVisitor_tF7E90D45DD07E51623B5DE4D7D4F7343F817B6FC* __this, RuntimeObject* ___t0, RuntimeObject* ___parent1, int32_t ___childIndex2, RuntimeObject* ___labels3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* L_0 = __this->____outer_0;
		RuntimeObject* L_1 = ___t0;
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_2 = __this->____tpattern_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker3< bool, RuntimeObject*, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*, RuntimeObject* >::Invoke(12 /* System.Boolean Antlr.Runtime.Tree.TreeWizard::ParseCore(System.Object,Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, L_0, L_1, L_2, (RuntimeObject*)NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = __this->____subtrees_2;
		RuntimeObject* L_5 = ___t0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0022:
	{
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
// System.Void Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::.ctor(Antlr.Runtime.Tree.TreeWizard,Antlr.Runtime.Tree.TreeWizard/IContextVisitor,System.Collections.Generic.IDictionary`2<System.String,System.Object>,Antlr.Runtime.Tree.TreeWizard/TreePattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitTreeWizardContextVisitor__ctor_m0A502360F286ECFB39D2CD351D04CDBE6714DF8E (VisitTreeWizardContextVisitor_t291BBF45DE75CF84C28D35E331A12E4A1B25581C* __this, TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* ___outer0, RuntimeObject* ___visitor1, RuntimeObject* ___labels2, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* ___tpattern3, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* L_0 = ___outer0;
		__this->____outer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outer_0), (void*)L_0);
		RuntimeObject* L_1 = ___visitor1;
		__this->____visitor_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____visitor_1), (void*)L_1);
		RuntimeObject* L_2 = ___labels2;
		__this->____labels_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____labels_2), (void*)L_2);
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_3 = ___tpattern3;
		__this->____tpattern_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tpattern_3), (void*)L_3);
		return;
	}
}
// System.Void Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::Visit(System.Object,System.Object,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitTreeWizardContextVisitor_Visit_m13A8767CA49145698E4784F47E6E7CECB887A841 (VisitTreeWizardContextVisitor_t291BBF45DE75CF84C28D35E331A12E4A1B25581C* __this, RuntimeObject* ___t0, RuntimeObject* ___parent1, int32_t ___childIndex2, RuntimeObject* ___unusedlabels3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IContextVisitor_t087F66125AECA75D7707BB54492CFBDB4A9E4589_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____labels_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear() */, ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var, L_0);
		TreeWizard_tEA786F0B6B36A346550803D8AB203365697B712B* L_1 = __this->____outer_0;
		RuntimeObject* L_2 = ___t0;
		TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096* L_3 = __this->____tpattern_3;
		RuntimeObject* L_4 = __this->____labels_2;
		NullCheck(L_1);
		bool L_5;
		L_5 = VirtualFuncInvoker3< bool, RuntimeObject*, TreePattern_t615EF6A19D4B78BEDE6F1DD960DB42C3D5AA5096*, RuntimeObject* >::Invoke(12 /* System.Boolean Antlr.Runtime.Tree.TreeWizard::ParseCore(System.Object,Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, L_1, L_2, L_3, L_4);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_6 = __this->____visitor_1;
		RuntimeObject* L_7 = ___t0;
		RuntimeObject* L_8 = ___parent1;
		int32_t L_9 = ___childIndex2;
		RuntimeObject* L_10 = __this->____labels_2;
		NullCheck(L_6);
		InterfaceActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject* >::Invoke(0 /* System.Void Antlr.Runtime.Tree.TreeWizard/IContextVisitor::Visit(System.Object,System.Object,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, IContextVisitor_t087F66125AECA75D7707BB54492CFBDB4A9E4589_il2cpp_TypeInfo_var, L_6, L_7, L_8, L_9, L_10);
	}

IL_0039:
	{
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
void Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_Multicast(Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* currentDelegate = reinterpret_cast<Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_OpenInst(Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_OpenStatic(Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_OpenStaticInvoker(Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_ClosedStaticInvoker(Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A (Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Antlr.Runtime.Misc.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mE4CBCF6C81F4CE25FD2F85865F08A3B6B21DE0D4 (Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_Multicast;
}
// System.Void Antlr.Runtime.Misc.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE (Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Antlr.Runtime.Misc.Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m482FEDD098392C9E3A1B8177ABBAE47EBDB75DCF (Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Antlr.Runtime.Misc.Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_mC859749472510749A60276F1998F9E7A62D4D94F (Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Antlr.Runtime.Misc.RegexOptionsHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexOptionsHelper__cctor_mCA3046D460DA5A91FEAD28916F698C9EA0CB1CD8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83_StaticFields*)il2cpp_codegen_static_fields_for(RegexOptionsHelper_tDE7D4CF884C3AF73B164B1FEAA0417FE4C763C83_il2cpp_TypeInfo_var))->___Compiled_0 = 8;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m52F9F0657B9E293F306FFAE13ECCBACE18D808EE_inline (Action_t792630B15173B2416B024E9F4AAA43D8ED6FF80A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreeIterator_set_Current_m27B1815CCABA80A76497E2C3E109CFF19A265E69_inline (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TreeIterator_get_Current_m4E2E5459FBF71F2E91101D0DF2127BB05F7AFC7D_inline (TreeIterator_tE4D9919F048313BE46C2CEDE08F389034CFA5CF4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Input_m3BB2983115EDC82A40F858E08AB8EA5F80A86B90_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____input_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RecognitionException_get_ApproximateLineInfo_m605D71D61A379E5314A0C48FAB8AACEA1DF4DD4D_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____approximateLineInfo_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_mC197DA09461F8EE834725C92EB042E02275DD186_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____line_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_mE8AA1E6859878D55F48EE1BA1B29A13B964B4B5C_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____charPositionInLine_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Node_mA6FB149FE5FE8CCCEAFE0D2D70F0FB011842DACE_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____node_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionException_set_Token_m958D222E0ACFE7D231929262AF30CA115807167F_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->____token_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____token_21), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_m0CB661816AB5D38DB2C59ECBA0A9F912D9D11A6A_inline (RecognitionException_t576E3524547A53B0950DC286707CBAE428645631* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____token_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mB1969CADA86CD70B7E310F9B24DA989DA1C83D92_gshared_inline (Func_2_t64A381AE9FC05C716D7D183214846E7FAE4190DE* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m52200AB41573A469E51866B6F8FBA3773040A8C8_gshared_inline (Func_1_tFD28F346415D64114C660AC5AD18B7017D86E3EC* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
