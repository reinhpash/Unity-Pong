#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m7A21873FD59FBF9CD36B4F733BB49D1F470F8829 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000003 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000004 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000005 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000010 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x00000014 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000019 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001E System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000020 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000021 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000022 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000023 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000024 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000025 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000026 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000028 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000029 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000002A System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002D System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000032 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000034 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003C System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000047 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004A System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004B System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004C System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004D TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000050 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000052 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000053 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000054 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000055 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000056 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000057 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000059 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000005A System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000005B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000005C TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005E System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000060 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000061 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000062 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000063 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000064 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000065 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000066 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000067 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x00000068 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000069 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000006B System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000006C System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000006D System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000006E System.Void System.Linq.Set`1::Resize()
// 0x0000006F System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000070 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000071 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000072 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000074 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000075 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000076 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000077 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000078 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000079 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000007A System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000007C System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000007D System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000007E System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000007F System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000080 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000081 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000082 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000083 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000084 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000085 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000086 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000087 System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern void Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (void);
// 0x00000088 System.Void System.Linq.Expressions.Expression::.cctor()
extern void Expression__cctor_m69557D69429E0BF3BEDD70DD10F659876E6968E3 (void);
// 0x00000089 System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
extern void Error_ExtensionNodeMustOverrideProperty_mAC352E09338C9957B04ECD67B350317839E2C9DE (void);
// 0x0000008A System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern void LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (void);
// 0x0000008B System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern void MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (void);
// 0x0000008C System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern void MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A (void);
// 0x0000008D System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
extern void MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (void);
// 0x0000008E System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
extern void Strings_ExtensionNodeMustOverrideProperty_m6E6F9F848EDD10684FF52BF21D95D84983E92CFC (void);
// 0x0000008F System.Void System.Dynamic.Utils.CacheDict`2::.ctor(System.Int32)
// 0x00000090 System.Int32 System.Dynamic.Utils.CacheDict`2::AlignSize(System.Int32)
// 0x00000091 System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
extern void ContractUtils_get_Unreachable_m814C0ABAB566942A64D62EE4BF63B9C75B8BDF5D (void);
// 0x00000092 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000093 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000094 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000095 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000096 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000097 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000098 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000099 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000009A System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000009B System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000009C System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000009D System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000009E System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000A0 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000A1 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000A4 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A7 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000A8 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000AA System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000AB System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000AC T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000AD System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000AE System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[174] = 
{
	SR_Format_m7A21873FD59FBF9CD36B4F733BB49D1F470F8829,
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A,
	Expression__cctor_m69557D69429E0BF3BEDD70DD10F659876E6968E3,
	Error_ExtensionNodeMustOverrideProperty_mAC352E09338C9957B04ECD67B350317839E2C9DE,
	LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042,
	MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C,
	MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A,
	MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87,
	Strings_ExtensionNodeMustOverrideProperty_m6E6F9F848EDD10684FF52BF21D95D84983E92CFC,
	NULL,
	NULL,
	ContractUtils_get_Unreachable_m814C0ABAB566942A64D62EE4BF63B9C75B8BDF5D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[174] = 
{
	3278,
	3650,
	3650,
	3771,
	3771,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2313,
	3797,
	3650,
	2328,
	2328,
	2328,
	2328,
	3650,
	-1,
	-1,
	3771,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[54] = 
{
	{ 0x02000005, { 81, 4 } },
	{ 0x02000006, { 85, 9 } },
	{ 0x02000007, { 96, 7 } },
	{ 0x02000008, { 105, 10 } },
	{ 0x02000009, { 117, 11 } },
	{ 0x0200000A, { 131, 9 } },
	{ 0x0200000B, { 143, 12 } },
	{ 0x0200000C, { 158, 1 } },
	{ 0x0200000D, { 159, 2 } },
	{ 0x0200000E, { 161, 12 } },
	{ 0x0200000F, { 173, 11 } },
	{ 0x02000010, { 184, 6 } },
	{ 0x02000012, { 190, 8 } },
	{ 0x02000014, { 198, 3 } },
	{ 0x02000015, { 203, 5 } },
	{ 0x02000016, { 208, 7 } },
	{ 0x02000017, { 215, 3 } },
	{ 0x02000018, { 218, 7 } },
	{ 0x02000019, { 225, 4 } },
	{ 0x02000024, { 229, 3 } },
	{ 0x02000027, { 232, 21 } },
	{ 0x02000029, { 253, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 5 } },
	{ 0x06000009, { 25, 5 } },
	{ 0x0600000A, { 30, 1 } },
	{ 0x0600000B, { 31, 2 } },
	{ 0x0600000C, { 33, 2 } },
	{ 0x0600000D, { 35, 1 } },
	{ 0x0600000E, { 36, 1 } },
	{ 0x0600000F, { 37, 2 } },
	{ 0x06000010, { 39, 3 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 2 } },
	{ 0x06000013, { 46, 2 } },
	{ 0x06000014, { 48, 4 } },
	{ 0x06000015, { 52, 3 } },
	{ 0x06000016, { 55, 4 } },
	{ 0x06000017, { 59, 3 } },
	{ 0x06000018, { 62, 3 } },
	{ 0x06000019, { 65, 1 } },
	{ 0x0600001A, { 66, 3 } },
	{ 0x0600001B, { 69, 2 } },
	{ 0x0600001C, { 71, 3 } },
	{ 0x0600001D, { 74, 2 } },
	{ 0x0600001E, { 76, 5 } },
	{ 0x0600002E, { 94, 2 } },
	{ 0x06000033, { 103, 2 } },
	{ 0x06000038, { 115, 2 } },
	{ 0x0600003E, { 128, 3 } },
	{ 0x06000043, { 140, 3 } },
	{ 0x06000048, { 155, 3 } },
	{ 0x06000073, { 201, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[255] = 
{
	{ (Il2CppRGCTXDataType)2, 1865 },
	{ (Il2CppRGCTXDataType)3, 6828 },
	{ (Il2CppRGCTXDataType)2, 3189 },
	{ (Il2CppRGCTXDataType)2, 2734 },
	{ (Il2CppRGCTXDataType)3, 13784 },
	{ (Il2CppRGCTXDataType)2, 1980 },
	{ (Il2CppRGCTXDataType)2, 2741 },
	{ (Il2CppRGCTXDataType)3, 13834 },
	{ (Il2CppRGCTXDataType)2, 2736 },
	{ (Il2CppRGCTXDataType)3, 13796 },
	{ (Il2CppRGCTXDataType)2, 1866 },
	{ (Il2CppRGCTXDataType)3, 6829 },
	{ (Il2CppRGCTXDataType)2, 3211 },
	{ (Il2CppRGCTXDataType)2, 2743 },
	{ (Il2CppRGCTXDataType)3, 13846 },
	{ (Il2CppRGCTXDataType)2, 2000 },
	{ (Il2CppRGCTXDataType)2, 2751 },
	{ (Il2CppRGCTXDataType)3, 13914 },
	{ (Il2CppRGCTXDataType)2, 2747 },
	{ (Il2CppRGCTXDataType)3, 13877 },
	{ (Il2CppRGCTXDataType)2, 660 },
	{ (Il2CppRGCTXDataType)3, 61 },
	{ (Il2CppRGCTXDataType)3, 62 },
	{ (Il2CppRGCTXDataType)2, 1220 },
	{ (Il2CppRGCTXDataType)3, 5235 },
	{ (Il2CppRGCTXDataType)2, 661 },
	{ (Il2CppRGCTXDataType)3, 75 },
	{ (Il2CppRGCTXDataType)3, 76 },
	{ (Il2CppRGCTXDataType)2, 1232 },
	{ (Il2CppRGCTXDataType)3, 5239 },
	{ (Il2CppRGCTXDataType)3, 16102 },
	{ (Il2CppRGCTXDataType)2, 670 },
	{ (Il2CppRGCTXDataType)3, 139 },
	{ (Il2CppRGCTXDataType)2, 2400 },
	{ (Il2CppRGCTXDataType)3, 11007 },
	{ (Il2CppRGCTXDataType)3, 5739 },
	{ (Il2CppRGCTXDataType)3, 16068 },
	{ (Il2CppRGCTXDataType)2, 664 },
	{ (Il2CppRGCTXDataType)3, 97 },
	{ (Il2CppRGCTXDataType)2, 769 },
	{ (Il2CppRGCTXDataType)3, 985 },
	{ (Il2CppRGCTXDataType)3, 986 },
	{ (Il2CppRGCTXDataType)2, 1981 },
	{ (Il2CppRGCTXDataType)3, 7467 },
	{ (Il2CppRGCTXDataType)2, 1465 },
	{ (Il2CppRGCTXDataType)3, 16036 },
	{ (Il2CppRGCTXDataType)2, 662 },
	{ (Il2CppRGCTXDataType)3, 83 },
	{ (Il2CppRGCTXDataType)2, 1797 },
	{ (Il2CppRGCTXDataType)2, 1372 },
	{ (Il2CppRGCTXDataType)2, 1474 },
	{ (Il2CppRGCTXDataType)2, 1562 },
	{ (Il2CppRGCTXDataType)2, 1475 },
	{ (Il2CppRGCTXDataType)2, 1563 },
	{ (Il2CppRGCTXDataType)3, 5237 },
	{ (Il2CppRGCTXDataType)2, 1798 },
	{ (Il2CppRGCTXDataType)2, 1373 },
	{ (Il2CppRGCTXDataType)2, 1476 },
	{ (Il2CppRGCTXDataType)2, 1564 },
	{ (Il2CppRGCTXDataType)2, 1477 },
	{ (Il2CppRGCTXDataType)2, 1565 },
	{ (Il2CppRGCTXDataType)3, 5238 },
	{ (Il2CppRGCTXDataType)2, 1796 },
	{ (Il2CppRGCTXDataType)2, 1473 },
	{ (Il2CppRGCTXDataType)2, 1561 },
	{ (Il2CppRGCTXDataType)2, 1461 },
	{ (Il2CppRGCTXDataType)2, 1462 },
	{ (Il2CppRGCTXDataType)2, 1558 },
	{ (Il2CppRGCTXDataType)3, 5234 },
	{ (Il2CppRGCTXDataType)2, 1371 },
	{ (Il2CppRGCTXDataType)2, 1471 },
	{ (Il2CppRGCTXDataType)2, 1472 },
	{ (Il2CppRGCTXDataType)2, 1560 },
	{ (Il2CppRGCTXDataType)3, 5236 },
	{ (Il2CppRGCTXDataType)2, 1370 },
	{ (Il2CppRGCTXDataType)3, 16055 },
	{ (Il2CppRGCTXDataType)3, 4611 },
	{ (Il2CppRGCTXDataType)2, 1094 },
	{ (Il2CppRGCTXDataType)2, 1464 },
	{ (Il2CppRGCTXDataType)2, 1559 },
	{ (Il2CppRGCTXDataType)2, 1634 },
	{ (Il2CppRGCTXDataType)3, 6830 },
	{ (Il2CppRGCTXDataType)3, 6832 },
	{ (Il2CppRGCTXDataType)2, 452 },
	{ (Il2CppRGCTXDataType)3, 6831 },
	{ (Il2CppRGCTXDataType)3, 6840 },
	{ (Il2CppRGCTXDataType)2, 1869 },
	{ (Il2CppRGCTXDataType)2, 2737 },
	{ (Il2CppRGCTXDataType)3, 13797 },
	{ (Il2CppRGCTXDataType)3, 6841 },
	{ (Il2CppRGCTXDataType)2, 1522 },
	{ (Il2CppRGCTXDataType)2, 1591 },
	{ (Il2CppRGCTXDataType)3, 5246 },
	{ (Il2CppRGCTXDataType)3, 16039 },
	{ (Il2CppRGCTXDataType)2, 2748 },
	{ (Il2CppRGCTXDataType)3, 13878 },
	{ (Il2CppRGCTXDataType)3, 6833 },
	{ (Il2CppRGCTXDataType)2, 1868 },
	{ (Il2CppRGCTXDataType)2, 2735 },
	{ (Il2CppRGCTXDataType)3, 13785 },
	{ (Il2CppRGCTXDataType)3, 5245 },
	{ (Il2CppRGCTXDataType)3, 6834 },
	{ (Il2CppRGCTXDataType)3, 16038 },
	{ (Il2CppRGCTXDataType)2, 2744 },
	{ (Il2CppRGCTXDataType)3, 13847 },
	{ (Il2CppRGCTXDataType)3, 6847 },
	{ (Il2CppRGCTXDataType)2, 1870 },
	{ (Il2CppRGCTXDataType)2, 2742 },
	{ (Il2CppRGCTXDataType)3, 13835 },
	{ (Il2CppRGCTXDataType)3, 7520 },
	{ (Il2CppRGCTXDataType)3, 3673 },
	{ (Il2CppRGCTXDataType)3, 5247 },
	{ (Il2CppRGCTXDataType)3, 3672 },
	{ (Il2CppRGCTXDataType)3, 6848 },
	{ (Il2CppRGCTXDataType)3, 16040 },
	{ (Il2CppRGCTXDataType)2, 2752 },
	{ (Il2CppRGCTXDataType)3, 13915 },
	{ (Il2CppRGCTXDataType)3, 6861 },
	{ (Il2CppRGCTXDataType)2, 1872 },
	{ (Il2CppRGCTXDataType)2, 2750 },
	{ (Il2CppRGCTXDataType)3, 13880 },
	{ (Il2CppRGCTXDataType)3, 6862 },
	{ (Il2CppRGCTXDataType)2, 1525 },
	{ (Il2CppRGCTXDataType)2, 1594 },
	{ (Il2CppRGCTXDataType)3, 5251 },
	{ (Il2CppRGCTXDataType)3, 5250 },
	{ (Il2CppRGCTXDataType)2, 2739 },
	{ (Il2CppRGCTXDataType)3, 13799 },
	{ (Il2CppRGCTXDataType)3, 16048 },
	{ (Il2CppRGCTXDataType)2, 2749 },
	{ (Il2CppRGCTXDataType)3, 13879 },
	{ (Il2CppRGCTXDataType)3, 6854 },
	{ (Il2CppRGCTXDataType)2, 1871 },
	{ (Il2CppRGCTXDataType)2, 2746 },
	{ (Il2CppRGCTXDataType)3, 13849 },
	{ (Il2CppRGCTXDataType)3, 5249 },
	{ (Il2CppRGCTXDataType)3, 5248 },
	{ (Il2CppRGCTXDataType)3, 6855 },
	{ (Il2CppRGCTXDataType)2, 2738 },
	{ (Il2CppRGCTXDataType)3, 13798 },
	{ (Il2CppRGCTXDataType)3, 16047 },
	{ (Il2CppRGCTXDataType)2, 2745 },
	{ (Il2CppRGCTXDataType)3, 13848 },
	{ (Il2CppRGCTXDataType)3, 6868 },
	{ (Il2CppRGCTXDataType)2, 1873 },
	{ (Il2CppRGCTXDataType)2, 2754 },
	{ (Il2CppRGCTXDataType)3, 13917 },
	{ (Il2CppRGCTXDataType)3, 7521 },
	{ (Il2CppRGCTXDataType)3, 3675 },
	{ (Il2CppRGCTXDataType)3, 5253 },
	{ (Il2CppRGCTXDataType)3, 5252 },
	{ (Il2CppRGCTXDataType)3, 3674 },
	{ (Il2CppRGCTXDataType)3, 6869 },
	{ (Il2CppRGCTXDataType)2, 2740 },
	{ (Il2CppRGCTXDataType)3, 13800 },
	{ (Il2CppRGCTXDataType)3, 16049 },
	{ (Il2CppRGCTXDataType)2, 2753 },
	{ (Il2CppRGCTXDataType)3, 13916 },
	{ (Il2CppRGCTXDataType)3, 5242 },
	{ (Il2CppRGCTXDataType)3, 5243 },
	{ (Il2CppRGCTXDataType)3, 5254 },
	{ (Il2CppRGCTXDataType)3, 142 },
	{ (Il2CppRGCTXDataType)3, 141 },
	{ (Il2CppRGCTXDataType)2, 1517 },
	{ (Il2CppRGCTXDataType)2, 1587 },
	{ (Il2CppRGCTXDataType)3, 5244 },
	{ (Il2CppRGCTXDataType)2, 1532 },
	{ (Il2CppRGCTXDataType)2, 1607 },
	{ (Il2CppRGCTXDataType)3, 144 },
	{ (Il2CppRGCTXDataType)2, 590 },
	{ (Il2CppRGCTXDataType)2, 671 },
	{ (Il2CppRGCTXDataType)3, 140 },
	{ (Il2CppRGCTXDataType)3, 143 },
	{ (Il2CppRGCTXDataType)3, 99 },
	{ (Il2CppRGCTXDataType)2, 2532 },
	{ (Il2CppRGCTXDataType)3, 12597 },
	{ (Il2CppRGCTXDataType)2, 1514 },
	{ (Il2CppRGCTXDataType)2, 1585 },
	{ (Il2CppRGCTXDataType)3, 12598 },
	{ (Il2CppRGCTXDataType)3, 101 },
	{ (Il2CppRGCTXDataType)2, 449 },
	{ (Il2CppRGCTXDataType)2, 665 },
	{ (Il2CppRGCTXDataType)3, 98 },
	{ (Il2CppRGCTXDataType)3, 100 },
	{ (Il2CppRGCTXDataType)3, 85 },
	{ (Il2CppRGCTXDataType)2, 447 },
	{ (Il2CppRGCTXDataType)3, 87 },
	{ (Il2CppRGCTXDataType)2, 663 },
	{ (Il2CppRGCTXDataType)3, 84 },
	{ (Il2CppRGCTXDataType)3, 86 },
	{ (Il2CppRGCTXDataType)3, 4644 },
	{ (Il2CppRGCTXDataType)2, 1108 },
	{ (Il2CppRGCTXDataType)2, 3300 },
	{ (Il2CppRGCTXDataType)3, 12594 },
	{ (Il2CppRGCTXDataType)3, 12595 },
	{ (Il2CppRGCTXDataType)2, 1648 },
	{ (Il2CppRGCTXDataType)3, 12596 },
	{ (Il2CppRGCTXDataType)2, 384 },
	{ (Il2CppRGCTXDataType)2, 668 },
	{ (Il2CppRGCTXDataType)3, 125 },
	{ (Il2CppRGCTXDataType)3, 10994 },
	{ (Il2CppRGCTXDataType)2, 2401 },
	{ (Il2CppRGCTXDataType)3, 11008 },
	{ (Il2CppRGCTXDataType)2, 770 },
	{ (Il2CppRGCTXDataType)3, 987 },
	{ (Il2CppRGCTXDataType)3, 11000 },
	{ (Il2CppRGCTXDataType)3, 3647 },
	{ (Il2CppRGCTXDataType)2, 482 },
	{ (Il2CppRGCTXDataType)3, 10995 },
	{ (Il2CppRGCTXDataType)2, 2397 },
	{ (Il2CppRGCTXDataType)3, 1027 },
	{ (Il2CppRGCTXDataType)2, 787 },
	{ (Il2CppRGCTXDataType)2, 1067 },
	{ (Il2CppRGCTXDataType)3, 3653 },
	{ (Il2CppRGCTXDataType)3, 10996 },
	{ (Il2CppRGCTXDataType)3, 3642 },
	{ (Il2CppRGCTXDataType)3, 3643 },
	{ (Il2CppRGCTXDataType)3, 3641 },
	{ (Il2CppRGCTXDataType)3, 3644 },
	{ (Il2CppRGCTXDataType)2, 1063 },
	{ (Il2CppRGCTXDataType)2, 3261 },
	{ (Il2CppRGCTXDataType)3, 5241 },
	{ (Il2CppRGCTXDataType)3, 3646 },
	{ (Il2CppRGCTXDataType)2, 1447 },
	{ (Il2CppRGCTXDataType)3, 3645 },
	{ (Il2CppRGCTXDataType)2, 1374 },
	{ (Il2CppRGCTXDataType)2, 3214 },
	{ (Il2CppRGCTXDataType)2, 1491 },
	{ (Il2CppRGCTXDataType)2, 1566 },
	{ (Il2CppRGCTXDataType)3, 998 },
	{ (Il2CppRGCTXDataType)2, 772 },
	{ (Il2CppRGCTXDataType)2, 3268 },
	{ (Il2CppRGCTXDataType)3, 4627 },
	{ (Il2CppRGCTXDataType)2, 1102 },
	{ (Il2CppRGCTXDataType)3, 5600 },
	{ (Il2CppRGCTXDataType)3, 5601 },
	{ (Il2CppRGCTXDataType)3, 5606 },
	{ (Il2CppRGCTXDataType)2, 1643 },
	{ (Il2CppRGCTXDataType)3, 5603 },
	{ (Il2CppRGCTXDataType)3, 16489 },
	{ (Il2CppRGCTXDataType)2, 1069 },
	{ (Il2CppRGCTXDataType)3, 3665 },
	{ (Il2CppRGCTXDataType)1, 1444 },
	{ (Il2CppRGCTXDataType)2, 3226 },
	{ (Il2CppRGCTXDataType)3, 5602 },
	{ (Il2CppRGCTXDataType)1, 3226 },
	{ (Il2CppRGCTXDataType)1, 1643 },
	{ (Il2CppRGCTXDataType)2, 3298 },
	{ (Il2CppRGCTXDataType)2, 3226 },
	{ (Il2CppRGCTXDataType)3, 5607 },
	{ (Il2CppRGCTXDataType)3, 5605 },
	{ (Il2CppRGCTXDataType)3, 5604 },
	{ (Il2CppRGCTXDataType)2, 319 },
	{ (Il2CppRGCTXDataType)3, 3676 },
	{ (Il2CppRGCTXDataType)2, 462 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	174,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	54,
	s_rgctxIndices,
	255,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
