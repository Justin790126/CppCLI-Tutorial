#region License
// Copyright (c) 2007 James Newton-King
//
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following
// conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
#endregion

using System.Reflection;
using System.Runtime.InteropServices;
using System.Security;

// General Information about an assembly is controlled through the following 
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.

#if NETSTANDARD1_0
[assembly: AssemblyTitle("Json.NET Tests .NET Standard 1.0")]
#elif NETSTANDARD1_3
[assembly: AssemblyTitle("Json.NET Tests .NET Standard 1.3")]
#elif PORTABLE40
[assembly: AssemblyTitle("Json.NET Tests Portable .NET 4.0")]
#elif PORTABLE
[assembly: AssemblyTitle("Json.NET Tests Portable")]
#elif NET20
[assembly: AssemblyTitle("Json.NET Tests .NET 2.0")]
#elif NET35
[assembly: AssemblyTitle("Json.NET Tests .NET 3.5")]
#elif NET40
[assembly: AssemblyTitle("Json.NET Tests .NET 4.0")]
#else

[assembly: AssemblyTitle("Json.NET Tests")]
#endif

#if DNXCORE50
[assembly: Xunit.CollectionBehavior(DisableTestParallelization = true)]
#endif

[assembly: AssemblyDescription("")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("Newtonsoft")]
[assembly: AssemblyProduct("Json.NET Tests")]
[assembly: AssemblyCopyright("Copyright � James Newton-King 2008")]
[assembly: AssemblyTrademark("")]
[assembly: AssemblyCulture("")]

// Setting ComVisible to false makes the types in this assembly not visible 
// to COM components.  If you need to access a type in this assembly from 
// COM, set the ComVisible attribute to true on that type.

[assembly: ComVisible(false)]

// The following GUID is for the ID of the typelib if this project is exposed to COM

[assembly: Guid("0be3d72b-d2ef-409c-985c-d3ede89a25f1")]

// Version information for an assembly consists of the following four values:
//
//      Major Version
//      Minor Version 
//      Build Number
//      Revision
//
// You can specify all the values or you can default the Revision and Build Numbers 
// by using the '*' as shown below:

[assembly: AssemblyVersion("10.0.0.0")]
[assembly: AssemblyFileVersion("10.0.2.20802")]
