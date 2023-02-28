/* ========================================================================
 * Copyright (c) 2005-2019 The OPC Foundation, Inc. All rights reserved.
 *
 * OPC Foundation MIT License 1.00
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * The complete license agreement can be found here:
 * http://opcfoundation.org/License/MIT/1.00/
 * ======================================================================*/

using System;
using System.Collections.Generic;
using System.Text;
using System.Xml;
using System.Runtime.Serialization;
using Opc.Ua;
using Opc.Ua.Di;
using Opc.Ua.Robotics;

namespace Opc.Ua.Ff
{
    #region CtrlConfigurationState Class
    #if (!OPCUA_EXCLUDE_CtrlConfigurationState)
    /// <summary>
    /// Stores an instance of the CtrlConfigurationType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class CtrlConfigurationState : DeviceState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public CtrlConfigurationState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.CtrlConfigurationType, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCAAgEA" +
           "AAADAB0AAABDdHJsQ29uZmlndXJhdGlvblR5cGVJbnN0YW5jZQEDpToBA6U6pToAAP////8PAAAAJGCA" +
           "CgEAAAADAAkAAABNZXRob2RTZXQBA6g6AwAAAAAUAAAARmxhdCBsaXN0IG9mIE1ldGhvZHMALwA6qDoA" +
           "AP////8CAAAABGGCCgQAAAADAAUAAABTdGFydAEDBjsALwEDBjsGOwAAAQH/////AAAAAARhggoEAAAA" +
           "AwAEAAAAU3RvcAEDBzsALwEDBzsHOwAAAQH/////AAAAADVgiQoCAAAAAQAMAAAATWFudWZhY3R1cmVy" +
           "AQO8OgMAAAAAMAAAAE5hbWUgb2YgdGhlIGNvbXBhbnkgdGhhdCBtYW51ZmFjdHVyZWQgdGhlIGRldmlj" +
           "ZQAuAES8OgAAABX/////AQH/////AAAAADVgiQoCAAAAAQAFAAAATW9kZWwBA746AwAAAAAYAAAATW9k" +
           "ZWwgbmFtZSBvZiB0aGUgZGV2aWNlAC4ARL46AAAAFf////8BAf////8AAAAANWCJCgIAAAABABAAAABI" +
           "YXJkd2FyZVJldmlzaW9uAQO/OgMAAAAALAAAAFJldmlzaW9uIGxldmVsIG9mIHRoZSBoYXJkd2FyZSBv" +
           "ZiB0aGUgZGV2aWNlAC4ARL86AAAADP////8BAf////8AAAAANWCJCgIAAAABABAAAABTb2Z0d2FyZVJl" +
           "dmlzaW9uAQPbOgMAAAAANQAAAFJldmlzaW9uIGxldmVsIG9mIHRoZSBzb2Z0d2FyZS9maXJtd2FyZSBv" +
           "ZiB0aGUgZGV2aWNlAC4ARNs6AAAADP////8BAf////8AAAAANWCJCgIAAAABAA4AAABEZXZpY2VSZXZp" +
           "c2lvbgED3DoDAAAAACQAAABPdmVyYWxsIHJldmlzaW9uIGxldmVsIG9mIHRoZSBkZXZpY2UALgBE3DoA" +
           "AAAM/////wEB/////wAAAAA1YIkKAgAAAAEADAAAAERldmljZU1hbnVhbAED3joDAAAAAFoAAABBZGRy" +
           "ZXNzIChwYXRobmFtZSBpbiB0aGUgZmlsZSBzeXN0ZW0gb3IgYSBVUkwgfCBXZWIgYWRkcmVzcykgb2Yg" +
           "dXNlciBtYW51YWwgZm9yIHRoZSBkZXZpY2UALgBE3joAAAAM/////wEB/////wAAAAA1YIkKAgAAAAEA" +
           "DAAAAFNlcmlhbE51bWJlcgED4DoDAAAAAE0AAABJZGVudGlmaWVyIHRoYXQgdW5pcXVlbHkgaWRlbnRp" +
           "Zmllcywgd2l0aGluIGEgbWFudWZhY3R1cmVyLCBhIGRldmljZSBpbnN0YW5jZQAuAETgOgAAAAz/////" +
           "AQH/////AAAAADVgiQoCAAAAAQAPAAAAUmV2aXNpb25Db3VudGVyAQPiOgMAAAAAaQAAAEFuIGluY3Jl" +
           "bWVudGFsIGNvdW50ZXIgaW5kaWNhdGluZyB0aGUgbnVtYmVyIG9mIHRpbWVzIHRoZSBzdGF0aWMgZGF0" +
           "YSB3aXRoaW4gdGhlIERldmljZSBoYXMgYmVlbiBtb2RpZmllZAAuAETiOgAAAAb/////AQH/////AAAA" +
           "AARggAoBAAAAAwAJAAAAUmVzb3VyY2VzAQMIOwAvAQHsAwg7AAD/////AQAAACRggAoBAAAAAQAOAAAA" +
           "U3VwcG9ydGVkVHlwZXMBAwk7AwAAAAByAAAARm9sZGVyIG1haW50YWluaW5nIHRoZSBzZXQgb2YgKHN1" +
           "Yi10eXBlcyBvZikgQmFzZU9iamVjdFR5cGVzIHRoYXQgY2FuIGJlIGluc3RhbnRpYXRlZCBpbiB0aGUg" +
           "Q29uZmlndXJhYmxlQ29tcG9uZW50AC8APQk7AAD/////AAAAAARggAoBAAAAAwAKAAAAR2xvYmFsVmFy" +
           "cwEDCjsALwEB7QMKOwAA/////wAAAAAEYIAKAQAAAAMACgAAAEFjY2Vzc1ZhcnMBAww7AC8BAe0DDDsA" +
           "AP////8AAAAABGCACgEAAAADAAoAAABDb25maWdWYXJzAQMOOwAvAQHtAw47AAD/////AAAAAARggAoB" +
           "AAAAAwANAAAAQ29uZmlndXJhdGlvbgEDEDsALwEB7QMQOwAA/////wAAAAAEYIAKAQAAAAMACgAAAERp" +
           "YWdub3N0aWMBAxI7AC8BAe0DEjsAAP////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public ConfigurableObjectState Resources
        {
            get
            {
                return m_resources;
            }

            set
            {
                if (!Object.ReferenceEquals(m_resources, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_resources = value;
            }
        }

        /// <remarks />
        public FunctionalGroupState GlobalVars
        {
            get
            {
                return m_globalVars;
            }

            set
            {
                if (!Object.ReferenceEquals(m_globalVars, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_globalVars = value;
            }
        }

        /// <remarks />
        public FunctionalGroupState AccessVars
        {
            get
            {
                return m_accessVars;
            }

            set
            {
                if (!Object.ReferenceEquals(m_accessVars, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_accessVars = value;
            }
        }

        /// <remarks />
        public FunctionalGroupState ConfigVars
        {
            get
            {
                return m_configVars;
            }

            set
            {
                if (!Object.ReferenceEquals(m_configVars, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_configVars = value;
            }
        }

        /// <remarks />
        public FunctionalGroupState Configuration
        {
            get
            {
                return m_configuration;
            }

            set
            {
                if (!Object.ReferenceEquals(m_configuration, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_configuration = value;
            }
        }

        /// <remarks />
        public FunctionalGroupState Diagnostic
        {
            get
            {
                return m_diagnostic;
            }

            set
            {
                if (!Object.ReferenceEquals(m_diagnostic, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_diagnostic = value;
            }
        }
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Populates a list with the children that belong to the node.
        /// </summary>
        /// <param name="context">The context for the system being accessed.</param>
        /// <param name="children">The list of children to populate.</param>
        public override void GetChildren(
            ISystemContext context,
            IList<BaseInstanceState> children)
        {
            if (m_resources != null)
            {
                children.Add(m_resources);
            }

            if (m_globalVars != null)
            {
                children.Add(m_globalVars);
            }

            if (m_accessVars != null)
            {
                children.Add(m_accessVars);
            }

            if (m_configVars != null)
            {
                children.Add(m_configVars);
            }

            if (m_configuration != null)
            {
                children.Add(m_configuration);
            }

            if (m_diagnostic != null)
            {
                children.Add(m_diagnostic);
            }

            base.GetChildren(context, children);
        }

        /// <summary>
        /// Finds the child with the specified browse name.
        /// </summary>
        protected override BaseInstanceState FindChild(
            ISystemContext context,
            QualifiedName browseName,
            bool createOrReplace,
            BaseInstanceState replacement)
        {
            if (QualifiedName.IsNull(browseName))
            {
                return null;
            }

            BaseInstanceState instance = null;

            switch (browseName.Name)
            {
                case Opc.Ua.Ff.BrowseNames.Resources:
                {
                    if (createOrReplace)
                    {
                        if (Resources == null)
                        {
                            if (replacement == null)
                            {
                                Resources = new ConfigurableObjectState(this);
                            }
                            else
                            {
                                Resources = (ConfigurableObjectState)replacement;
                            }
                        }
                    }

                    instance = Resources;
                    break;
                }

                case Opc.Ua.Ff.BrowseNames.GlobalVars:
                {
                    if (createOrReplace)
                    {
                        if (GlobalVars == null)
                        {
                            if (replacement == null)
                            {
                                GlobalVars = new FunctionalGroupState(this);
                            }
                            else
                            {
                                GlobalVars = (FunctionalGroupState)replacement;
                            }
                        }
                    }

                    instance = GlobalVars;
                    break;
                }

                case Opc.Ua.Ff.BrowseNames.AccessVars:
                {
                    if (createOrReplace)
                    {
                        if (AccessVars == null)
                        {
                            if (replacement == null)
                            {
                                AccessVars = new FunctionalGroupState(this);
                            }
                            else
                            {
                                AccessVars = (FunctionalGroupState)replacement;
                            }
                        }
                    }

                    instance = AccessVars;
                    break;
                }

                case Opc.Ua.Ff.BrowseNames.ConfigVars:
                {
                    if (createOrReplace)
                    {
                        if (ConfigVars == null)
                        {
                            if (replacement == null)
                            {
                                ConfigVars = new FunctionalGroupState(this);
                            }
                            else
                            {
                                ConfigVars = (FunctionalGroupState)replacement;
                            }
                        }
                    }

                    instance = ConfigVars;
                    break;
                }

                case Opc.Ua.Ff.BrowseNames.Configuration:
                {
                    if (createOrReplace)
                    {
                        if (Configuration == null)
                        {
                            if (replacement == null)
                            {
                                Configuration = new FunctionalGroupState(this);
                            }
                            else
                            {
                                Configuration = (FunctionalGroupState)replacement;
                            }
                        }
                    }

                    instance = Configuration;
                    break;
                }

                case Opc.Ua.Ff.BrowseNames.Diagnostic:
                {
                    if (createOrReplace)
                    {
                        if (Diagnostic == null)
                        {
                            if (replacement == null)
                            {
                                Diagnostic = new FunctionalGroupState(this);
                            }
                            else
                            {
                                Diagnostic = (FunctionalGroupState)replacement;
                            }
                        }
                    }

                    instance = Diagnostic;
                    break;
                }
            }

            if (instance != null)
            {
                return instance;
            }

            return base.FindChild(context, browseName, createOrReplace, replacement);
        }
        #endregion

        #region Private Fields
        private ConfigurableObjectState m_resources;
        private FunctionalGroupState m_globalVars;
        private FunctionalGroupState m_accessVars;
        private FunctionalGroupState m_configVars;
        private FunctionalGroupState m_configuration;
        private FunctionalGroupState m_diagnostic;
        #endregion
    }
    #endif
    #endregion

    #region CtrlResourceState Class
    #if (!OPCUA_EXCLUDE_CtrlResourceState)
    /// <summary>
    /// Stores an instance of the CtrlResourceType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class CtrlResourceState : DeviceState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public CtrlResourceState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.CtrlResourceType, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);

            if (MethodSet != null)
            {
                MethodSet.Initialize(context, MethodSet_InitializationString);
            }

            if (GlobalVars != null)
            {
                GlobalVars.Initialize(context, GlobalVars_InitializationString);
            }

            if (Configuration != null)
            {
                Configuration.Initialize(context, Configuration_InitializationString);
            }

            if (Diagnostic != null)
            {
                Diagnostic.Initialize(context, Diagnostic_InitializationString);
            }
        }

        #region Initialization String
        private const string MethodSet_InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////JGCACgEA" +
           "AAADAAkAAABNZXRob2RTZXQBAxc7AwAAAAAUAAAARmxhdCBsaXN0IG9mIE1ldGhvZHMALwA6FzsAAP//" +
           "//8CAAAABGGCCgQAAAADAAUAAABTdGFydAEDWjsALwEDWjtaOwAAAQH/////AAAAAARhggoEAAAAAwAE" +
           "AAAAU3RvcAEDWzsALwEDWztbOwAAAQH/////AAAAAA==";

        private const string GlobalVars_InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCACgEA" +
           "AAADAAoAAABHbG9iYWxWYXJzAQNgOwAvAQHtA2A7AAD/////AAAAAA==";

        private const string Configuration_InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCACgEA" +
           "AAADAA0AAABDb25maWd1cmF0aW9uAQNiOwAvAQHtA2I7AAD/////AAAAAA==";

        private const string Diagnostic_InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCACgEA" +
           "AAADAAoAAABEaWFnbm9zdGljAQNkOwAvAQHtA2Q7AAD/////AAAAAA==";

        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCAAgEA" +
           "AAADABgAAABDdHJsUmVzb3VyY2VUeXBlSW5zdGFuY2UBAxQ7AQMUOxQ7AAD/////DgAAACRggAoBAAAA" +
           "AwAJAAAATWV0aG9kU2V0AQMXOwMAAAAAFAAAAEZsYXQgbGlzdCBvZiBNZXRob2RzAC8AOhc7AAD/////" +
           "AgAAAARhggoEAAAAAwAFAAAAU3RhcnQBA1o7AC8BA1o7WjsAAAEB/////wAAAAAEYYIKBAAAAAMABAAA" +
           "AFN0b3ABA1s7AC8BA1s7WzsAAAEB/////wAAAAA1YIkKAgAAAAEADAAAAE1hbnVmYWN0dXJlcgEDKzsD" +
           "AAAAADAAAABOYW1lIG9mIHRoZSBjb21wYW55IHRoYXQgbWFudWZhY3R1cmVkIHRoZSBkZXZpY2UALgBE" +
           "KzsAAAAV/////wEB/////wAAAAA1YIkKAgAAAAEABQAAAE1vZGVsAQMtOwMAAAAAGAAAAE1vZGVsIG5h" +
           "bWUgb2YgdGhlIGRldmljZQAuAEQtOwAAABX/////AQH/////AAAAADVgiQoCAAAAAQAQAAAASGFyZHdh" +
           "cmVSZXZpc2lvbgEDLjsDAAAAACwAAABSZXZpc2lvbiBsZXZlbCBvZiB0aGUgaGFyZHdhcmUgb2YgdGhl" +
           "IGRldmljZQAuAEQuOwAAAAz/////AQH/////AAAAADVgiQoCAAAAAQAQAAAAU29mdHdhcmVSZXZpc2lv" +
           "bgEDLzsDAAAAADUAAABSZXZpc2lvbiBsZXZlbCBvZiB0aGUgc29mdHdhcmUvZmlybXdhcmUgb2YgdGhl" +
           "IGRldmljZQAuAEQvOwAAAAz/////AQH/////AAAAADVgiQoCAAAAAQAOAAAARGV2aWNlUmV2aXNpb24B" +
           "AzA7AwAAAAAkAAAAT3ZlcmFsbCByZXZpc2lvbiBsZXZlbCBvZiB0aGUgZGV2aWNlAC4ARDA7AAAADP//" +
           "//8BAf////8AAAAANWCJCgIAAAABAAwAAABEZXZpY2VNYW51YWwBAzI7AwAAAABaAAAAQWRkcmVzcyAo" +
           "cGF0aG5hbWUgaW4gdGhlIGZpbGUgc3lzdGVtIG9yIGEgVVJMIHwgV2ViIGFkZHJlc3MpIG9mIHVzZXIg" +
           "bWFudWFsIGZvciB0aGUgZGV2aWNlAC4ARDI7AAAADP////8BAf////8AAAAANWCJCgIAAAABAAwAAABT" +
           "ZXJpYWxOdW1iZXIBAzQ7AwAAAABNAAAASWRlbnRpZmllciB0aGF0IHVuaXF1ZWx5IGlkZW50aWZpZXMs" +
           "IHdpdGhpbiBhIG1hbnVmYWN0dXJlciwgYSBkZXZpY2UgaW5zdGFuY2UALgBENDsAAAAM/////wEB////" +
           "/wAAAAA1YIkKAgAAAAEADwAAAFJldmlzaW9uQ291bnRlcgEDNjsDAAAAAGkAAABBbiBpbmNyZW1lbnRh" +
           "bCBjb3VudGVyIGluZGljYXRpbmcgdGhlIG51bWJlciBvZiB0aW1lcyB0aGUgc3RhdGljIGRhdGEgd2l0" +
           "aGluIHRoZSBEZXZpY2UgaGFzIGJlZW4gbW9kaWZpZWQALgBENjsAAAAG/////wEB/////wAAAAAEYIAK" +
           "AQAAAAMABQAAAFRhc2tzAQNcOwAvAQHsA1w7AAD/////AQAAACRggAoBAAAAAQAOAAAAU3VwcG9ydGVk" +
           "VHlwZXMBA107AwAAAAByAAAARm9sZGVyIG1haW50YWluaW5nIHRoZSBzZXQgb2YgKHN1Yi10eXBlcyBv" +
           "ZikgQmFzZU9iamVjdFR5cGVzIHRoYXQgY2FuIGJlIGluc3RhbnRpYXRlZCBpbiB0aGUgQ29uZmlndXJh" +
           "YmxlQ29tcG9uZW50AC8APV07AAD/////AAAAAARggAoBAAAAAwAIAAAAUHJvZ3JhbXMBA147AC8BAewD" +
           "XjsAAP////8BAAAAJGCACgEAAAABAA4AAABTdXBwb3J0ZWRUeXBlcwEDXzsDAAAAAHIAAABGb2xkZXIg" +
           "bWFpbnRhaW5pbmcgdGhlIHNldCBvZiAoc3ViLXR5cGVzIG9mKSBCYXNlT2JqZWN0VHlwZXMgdGhhdCBj" +
           "YW4gYmUgaW5zdGFudGlhdGVkIGluIHRoZSBDb25maWd1cmFibGVDb21wb25lbnQALwA9XzsAAP////8A" +
           "AAAABGCACgEAAAADAAoAAABHbG9iYWxWYXJzAQNgOwAvAQHtA2A7AAD/////AAAAAARggAoBAAAAAwAN" +
           "AAAAQ29uZmlndXJhdGlvbgEDYjsALwEB7QNiOwAA/////wAAAAAEYIAKAQAAAAMACgAAAERpYWdub3N0" +
           "aWMBA2Q7AC8BAe0DZDsAAP////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public ConfigurableObjectState Tasks
        {
            get
            {
                return m_tasks;
            }

            set
            {
                if (!Object.ReferenceEquals(m_tasks, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_tasks = value;
            }
        }

        /// <remarks />
        public ConfigurableObjectState Programs
        {
            get
            {
                return m_programs;
            }

            set
            {
                if (!Object.ReferenceEquals(m_programs, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_programs = value;
            }
        }

        /// <remarks />
        public FunctionalGroupState GlobalVars
        {
            get
            {
                return m_globalVars;
            }

            set
            {
                if (!Object.ReferenceEquals(m_globalVars, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_globalVars = value;
            }
        }

        /// <remarks />
        public FunctionalGroupState Configuration
        {
            get
            {
                return m_configuration;
            }

            set
            {
                if (!Object.ReferenceEquals(m_configuration, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_configuration = value;
            }
        }

        /// <remarks />
        public FunctionalGroupState Diagnostic
        {
            get
            {
                return m_diagnostic;
            }

            set
            {
                if (!Object.ReferenceEquals(m_diagnostic, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_diagnostic = value;
            }
        }
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Populates a list with the children that belong to the node.
        /// </summary>
        /// <param name="context">The context for the system being accessed.</param>
        /// <param name="children">The list of children to populate.</param>
        public override void GetChildren(
            ISystemContext context,
            IList<BaseInstanceState> children)
        {
            if (m_tasks != null)
            {
                children.Add(m_tasks);
            }

            if (m_programs != null)
            {
                children.Add(m_programs);
            }

            if (m_globalVars != null)
            {
                children.Add(m_globalVars);
            }

            if (m_configuration != null)
            {
                children.Add(m_configuration);
            }

            if (m_diagnostic != null)
            {
                children.Add(m_diagnostic);
            }

            base.GetChildren(context, children);
        }

        /// <summary>
        /// Finds the child with the specified browse name.
        /// </summary>
        protected override BaseInstanceState FindChild(
            ISystemContext context,
            QualifiedName browseName,
            bool createOrReplace,
            BaseInstanceState replacement)
        {
            if (QualifiedName.IsNull(browseName))
            {
                return null;
            }

            BaseInstanceState instance = null;

            switch (browseName.Name)
            {
                case Opc.Ua.Ff.BrowseNames.Tasks:
                {
                    if (createOrReplace)
                    {
                        if (Tasks == null)
                        {
                            if (replacement == null)
                            {
                                Tasks = new ConfigurableObjectState(this);
                            }
                            else
                            {
                                Tasks = (ConfigurableObjectState)replacement;
                            }
                        }
                    }

                    instance = Tasks;
                    break;
                }

                case Opc.Ua.Ff.BrowseNames.Programs:
                {
                    if (createOrReplace)
                    {
                        if (Programs == null)
                        {
                            if (replacement == null)
                            {
                                Programs = new ConfigurableObjectState(this);
                            }
                            else
                            {
                                Programs = (ConfigurableObjectState)replacement;
                            }
                        }
                    }

                    instance = Programs;
                    break;
                }

                case Opc.Ua.Ff.BrowseNames.GlobalVars:
                {
                    if (createOrReplace)
                    {
                        if (GlobalVars == null)
                        {
                            if (replacement == null)
                            {
                                GlobalVars = new FunctionalGroupState(this);
                            }
                            else
                            {
                                GlobalVars = (FunctionalGroupState)replacement;
                            }
                        }
                    }

                    instance = GlobalVars;
                    break;
                }

                case Opc.Ua.Ff.BrowseNames.Configuration:
                {
                    if (createOrReplace)
                    {
                        if (Configuration == null)
                        {
                            if (replacement == null)
                            {
                                Configuration = new FunctionalGroupState(this);
                            }
                            else
                            {
                                Configuration = (FunctionalGroupState)replacement;
                            }
                        }
                    }

                    instance = Configuration;
                    break;
                }

                case Opc.Ua.Ff.BrowseNames.Diagnostic:
                {
                    if (createOrReplace)
                    {
                        if (Diagnostic == null)
                        {
                            if (replacement == null)
                            {
                                Diagnostic = new FunctionalGroupState(this);
                            }
                            else
                            {
                                Diagnostic = (FunctionalGroupState)replacement;
                            }
                        }
                    }

                    instance = Diagnostic;
                    break;
                }
            }

            if (instance != null)
            {
                return instance;
            }

            return base.FindChild(context, browseName, createOrReplace, replacement);
        }
        #endregion

        #region Private Fields
        private ConfigurableObjectState m_tasks;
        private ConfigurableObjectState m_programs;
        private FunctionalGroupState m_globalVars;
        private FunctionalGroupState m_configuration;
        private FunctionalGroupState m_diagnostic;
        #endregion
    }
    #endif
    #endregion

    #region CtrlProgramOrganizationUnitState Class
    #if (!OPCUA_EXCLUDE_CtrlProgramOrganizationUnitState)
    /// <summary>
    /// Stores an instance of the CtrlProgramOrganizationUnitType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class CtrlProgramOrganizationUnitState : BlockState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public CtrlProgramOrganizationUnitState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.CtrlProgramOrganizationUnitType, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);

            if (Body != null)
            {
                Body.Initialize(context, Body_InitializationString);
            }
        }

        #region Initialization String
        private const string Body_InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////FWCJCgIA" +
           "AAADAAQAAABCb2R5AQOCOwAvAD+COwAAABD/////AQH/////AAAAAA==";

        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCAAgEA" +
           "AAADACcAAABDdHJsUHJvZ3JhbU9yZ2FuaXphdGlvblVuaXRUeXBlSW5zdGFuY2UBA2Y7AQNmO2Y7AAD/" +
           "////AQAAABVgiQoCAAAAAwAEAAAAQm9keQEDgjsALwA/gjsAAAAQ/////wEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public BaseDataVariableState<XmlElement> Body
        {
            get
            {
                return m_body;
            }

            set
            {
                if (!Object.ReferenceEquals(m_body, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_body = value;
            }
        }
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Populates a list with the children that belong to the node.
        /// </summary>
        /// <param name="context">The context for the system being accessed.</param>
        /// <param name="children">The list of children to populate.</param>
        public override void GetChildren(
            ISystemContext context,
            IList<BaseInstanceState> children)
        {
            if (m_body != null)
            {
                children.Add(m_body);
            }

            base.GetChildren(context, children);
        }

        /// <summary>
        /// Finds the child with the specified browse name.
        /// </summary>
        protected override BaseInstanceState FindChild(
            ISystemContext context,
            QualifiedName browseName,
            bool createOrReplace,
            BaseInstanceState replacement)
        {
            if (QualifiedName.IsNull(browseName))
            {
                return null;
            }

            BaseInstanceState instance = null;

            switch (browseName.Name)
            {
                case Opc.Ua.Ff.BrowseNames.Body:
                {
                    if (createOrReplace)
                    {
                        if (Body == null)
                        {
                            if (replacement == null)
                            {
                                Body = new BaseDataVariableState<XmlElement>(this);
                            }
                            else
                            {
                                Body = (BaseDataVariableState<XmlElement>)replacement;
                            }
                        }
                    }

                    instance = Body;
                    break;
                }
            }

            if (instance != null)
            {
                return instance;
            }

            return base.FindChild(context, browseName, createOrReplace, replacement);
        }
        #endregion

        #region Private Fields
        private BaseDataVariableState<XmlElement> m_body;
        #endregion
    }
    #endif
    #endregion

    #region CtrlProgramState Class
    #if (!OPCUA_EXCLUDE_CtrlProgramState)
    /// <summary>
    /// Stores an instance of the CtrlProgramType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class CtrlProgramState : CtrlProgramOrganizationUnitState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public CtrlProgramState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.CtrlProgramType, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);

            if (Program != null)
            {
                Program.Initialize(context, Program_InitializationString);
            }
        }

        #region Initialization String
        private const string Program_InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////FWCJCgIA" +
           "AAADAAcAAABQcm9ncmFtAQOgOwAvAD+gOwAAABb/////AQH/////AAAAAA==";

        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCAAgEA" +
           "AAADABcAAABDdHJsUHJvZ3JhbVR5cGVJbnN0YW5jZQEDgzsBA4M7gzsAAP////8BAAAAFWCJCgIAAAAD" +
           "AAcAAABQcm9ncmFtAQOgOwAvAD+gOwAAABb/////AQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public BaseDataVariableState<ExtensionObject> Program
        {
            get
            {
                return m_program;
            }

            set
            {
                if (!Object.ReferenceEquals(m_program, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_program = value;
            }
        }
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Populates a list with the children that belong to the node.
        /// </summary>
        /// <param name="context">The context for the system being accessed.</param>
        /// <param name="children">The list of children to populate.</param>
        public override void GetChildren(
            ISystemContext context,
            IList<BaseInstanceState> children)
        {
            if (m_program != null)
            {
                children.Add(m_program);
            }

            base.GetChildren(context, children);
        }

        /// <summary>
        /// Finds the child with the specified browse name.
        /// </summary>
        protected override BaseInstanceState FindChild(
            ISystemContext context,
            QualifiedName browseName,
            bool createOrReplace,
            BaseInstanceState replacement)
        {
            if (QualifiedName.IsNull(browseName))
            {
                return null;
            }

            BaseInstanceState instance = null;

            switch (browseName.Name)
            {
                case Opc.Ua.Ff.BrowseNames.Program:
                {
                    if (createOrReplace)
                    {
                        if (Program == null)
                        {
                            if (replacement == null)
                            {
                                Program = new BaseDataVariableState<ExtensionObject>(this);
                            }
                            else
                            {
                                Program = (BaseDataVariableState<ExtensionObject>)replacement;
                            }
                        }
                    }

                    instance = Program;
                    break;
                }
            }

            if (instance != null)
            {
                return instance;
            }

            return base.FindChild(context, browseName, createOrReplace, replacement);
        }
        #endregion

        #region Private Fields
        private BaseDataVariableState<ExtensionObject> m_program;
        #endregion
    }
    #endif
    #endregion

    #region CtrlFunctionBlockState Class
    #if (!OPCUA_EXCLUDE_CtrlFunctionBlockState)
    /// <summary>
    /// Stores an instance of the CtrlFunctionBlockType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class CtrlFunctionBlockState : CtrlProgramOrganizationUnitState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public CtrlFunctionBlockState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.CtrlFunctionBlockType, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);

            if (FunctionBlock != null)
            {
                FunctionBlock.Initialize(context, FunctionBlock_InitializationString);
            }
        }

        #region Initialization String
        private const string FunctionBlock_InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////FWCJCgIA" +
           "AAADAA0AAABGdW5jdGlvbkJsb2NrAQO+OwAvAD++OwAAABj/////AQH/////AAAAAA==";

        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCAAgEA" +
           "AAADAB0AAABDdHJsRnVuY3Rpb25CbG9ja1R5cGVJbnN0YW5jZQEDoTsBA6E7oTsAAP////8BAAAAFWCJ" +
           "CgIAAAADAA0AAABGdW5jdGlvbkJsb2NrAQO+OwAvAD++OwAAABj/////AQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public BaseDataVariableState FunctionBlock
        {
            get
            {
                return m_functionBlock;
            }

            set
            {
                if (!Object.ReferenceEquals(m_functionBlock, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_functionBlock = value;
            }
        }
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Populates a list with the children that belong to the node.
        /// </summary>
        /// <param name="context">The context for the system being accessed.</param>
        /// <param name="children">The list of children to populate.</param>
        public override void GetChildren(
            ISystemContext context,
            IList<BaseInstanceState> children)
        {
            if (m_functionBlock != null)
            {
                children.Add(m_functionBlock);
            }

            base.GetChildren(context, children);
        }

        /// <summary>
        /// Finds the child with the specified browse name.
        /// </summary>
        protected override BaseInstanceState FindChild(
            ISystemContext context,
            QualifiedName browseName,
            bool createOrReplace,
            BaseInstanceState replacement)
        {
            if (QualifiedName.IsNull(browseName))
            {
                return null;
            }

            BaseInstanceState instance = null;

            switch (browseName.Name)
            {
                case Opc.Ua.Ff.BrowseNames.FunctionBlock:
                {
                    if (createOrReplace)
                    {
                        if (FunctionBlock == null)
                        {
                            if (replacement == null)
                            {
                                FunctionBlock = new BaseDataVariableState(this);
                            }
                            else
                            {
                                FunctionBlock = (BaseDataVariableState)replacement;
                            }
                        }
                    }

                    instance = FunctionBlock;
                    break;
                }
            }

            if (instance != null)
            {
                return instance;
            }

            return base.FindChild(context, browseName, createOrReplace, replacement);
        }
        #endregion

        #region Private Fields
        private BaseDataVariableState m_functionBlock;
        #endregion
    }
    #endif
    #endregion

    #region CtrlTaskState Class
    #if (!OPCUA_EXCLUDE_CtrlTaskState)
    /// <summary>
    /// Stores an instance of the CtrlTaskType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class CtrlTaskState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public CtrlTaskState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.CtrlTaskType, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);

            if (Interval != null)
            {
                Interval.Initialize(context, Interval_InitializationString);
            }

            if (Single != null)
            {
                Single.Initialize(context, Single_InitializationString);
            }
        }

        #region Initialization String
        private const string Interval_InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////FWCJCgIA" +
           "AAADAAgAAABJbnRlcnZhbAEDwTsALgBEwTsAAAAM/////wEB/////wAAAAA=";

        private const string Single_InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////FWCJCgIA" +
           "AAADAAYAAABTaW5nbGUBA8I7AC4ARMI7AAAADP////8BAf////8AAAAA";

        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCAAgEA" +
           "AAADABQAAABDdHJsVGFza1R5cGVJbnN0YW5jZQEDvzsBA787vzsAAP////8DAAAAFWCJCgIAAAADAAgA" +
           "AABQcmlvcml0eQEDwDsALgBEwDsAAAAH/////wEB/////wAAAAAVYIkKAgAAAAMACAAAAEludGVydmFs" +
           "AQPBOwAuAETBOwAAAAz/////AQH/////AAAAABVgiQoCAAAAAwAGAAAAU2luZ2xlAQPCOwAuAETCOwAA" +
           "AAz/////AQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<uint> Priority
        {
            get
            {
                return m_priority;
            }

            set
            {
                if (!Object.ReferenceEquals(m_priority, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_priority = value;
            }
        }

        /// <remarks />
        public PropertyState<string> Interval
        {
            get
            {
                return m_interval;
            }

            set
            {
                if (!Object.ReferenceEquals(m_interval, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_interval = value;
            }
        }

        /// <remarks />
        public PropertyState<string> Single
        {
            get
            {
                return m_single;
            }

            set
            {
                if (!Object.ReferenceEquals(m_single, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_single = value;
            }
        }
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Populates a list with the children that belong to the node.
        /// </summary>
        /// <param name="context">The context for the system being accessed.</param>
        /// <param name="children">The list of children to populate.</param>
        public override void GetChildren(
            ISystemContext context,
            IList<BaseInstanceState> children)
        {
            if (m_priority != null)
            {
                children.Add(m_priority);
            }

            if (m_interval != null)
            {
                children.Add(m_interval);
            }

            if (m_single != null)
            {
                children.Add(m_single);
            }

            base.GetChildren(context, children);
        }

        /// <summary>
        /// Finds the child with the specified browse name.
        /// </summary>
        protected override BaseInstanceState FindChild(
            ISystemContext context,
            QualifiedName browseName,
            bool createOrReplace,
            BaseInstanceState replacement)
        {
            if (QualifiedName.IsNull(browseName))
            {
                return null;
            }

            BaseInstanceState instance = null;

            switch (browseName.Name)
            {
                case Opc.Ua.Ff.BrowseNames.Priority:
                {
                    if (createOrReplace)
                    {
                        if (Priority == null)
                        {
                            if (replacement == null)
                            {
                                Priority = new PropertyState<uint>(this);
                            }
                            else
                            {
                                Priority = (PropertyState<uint>)replacement;
                            }
                        }
                    }

                    instance = Priority;
                    break;
                }

                case Opc.Ua.Ff.BrowseNames.Interval:
                {
                    if (createOrReplace)
                    {
                        if (Interval == null)
                        {
                            if (replacement == null)
                            {
                                Interval = new PropertyState<string>(this);
                            }
                            else
                            {
                                Interval = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = Interval;
                    break;
                }

                case Opc.Ua.Ff.BrowseNames.Single:
                {
                    if (createOrReplace)
                    {
                        if (Single == null)
                        {
                            if (replacement == null)
                            {
                                Single = new PropertyState<string>(this);
                            }
                            else
                            {
                                Single = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = Single;
                    break;
                }
            }

            if (instance != null)
            {
                return instance;
            }

            return base.FindChild(context, browseName, createOrReplace, replacement);
        }
        #endregion

        #region Private Fields
        private PropertyState<uint> m_priority;
        private PropertyState<string> m_interval;
        private PropertyState<string> m_single;
        #endregion
    }
    #endif
    #endregion

    #region SFCState Class
    #if (!OPCUA_EXCLUDE_SFCState)
    /// <summary>
    /// Stores an instance of the SFCType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class SFCState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public SFCState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.SFCType, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCAAgEA" +
           "AAADAA8AAABTRkNUeXBlSW5zdGFuY2UBA8M7AQPDO8M7AAD/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        #endregion

        #region Private Fields
        #endregion
    }
    #endif
    #endregion

    #region HC10State Class
    #if (!OPCUA_EXCLUDE_HC10State)
    /// <summary>
    /// Stores an instance of the HC10 ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class HC10State : MotionDeviceState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public HC10State(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.HC10, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCAAgEA" +
           "AAADAAwAAABIQzEwSW5zdGFuY2UBA6NIAQOjSKNIAAD/////CAAAACRggAoBAAAAAQAMAAAAUGFyYW1l" +
           "dGVyU2V0AQOkSAMAAAAAFwAAAEZsYXQgbGlzdCBvZiBQYXJhbWV0ZXJzAC8AOqRIAAD/////AQAAADVg" +
           "iQoCAAAAAgANAAAAU3BlZWRPdmVycmlkZQEDykgDAAAAAFsAAABTcGVlZE92ZXJyaWRlIHByb3ZpZGVz" +
           "IHRoZSBjdXJyZW50IHNwZWVkIHNldHRpbmcgaW4gcGVyY2VudCBvZiBwcm9ncmFtbWVkIHNwZWVkICgw" +
           "IC0gMTAwJSkuAC8AP8pIAAAAC/////8BAf////8AAAAAFWCJCgIAAAABAAwAAABNYW51ZmFjdHVyZXIB" +
           "A7lIAC4ARLlIAAAAFf////8BAf////8AAAAAFWCJCgIAAAABAAUAAABNb2RlbAEDu0gALgBEu0gAAAAV" +
           "/////wEB/////wAAAAAVYIkKAgAAAAEACwAAAFByb2R1Y3RDb2RlAQO/SAAuAES/SAAAAAz/////AQH/" +
           "////AAAAABVgiQoCAAAAAQAMAAAAU2VyaWFsTnVtYmVyAQPCSAAuAETCSAAAAAz/////AQH/////AAAA" +
           "ADVgiQoCAAAAAgAUAAAATW90aW9uRGV2aWNlQ2F0ZWdvcnkBA8dIAwAAAACCAAAAVGhlIHZhcmlhYmxl" +
           "IE1vdGlvbkRldmljZUNhdGVnb3J5IHByb3ZpZGVzIHRoZSBraW5kIG9mIG1vdGlvbiBkZXZpY2UgZGVm" +
           "aW5lZCBieSBNb3Rpb25EZXZpY2VDYXRlZ29yeUVudW1lcmF0aW9uIGJhc2VkIG9uIElTTyA4MzczLgAu" +
           "AETHSAAAAQIRR/////8BAf////8AAAAAJGCACgEAAAACAAQAAABBeGVzAQPLSAMAAAAAPgAAAEF4ZXMg" +
           "aXMgYSBjb250YWluZXIgZm9yIG9uZSBvciBtb3JlIGluc3RhbmNlcyBvZiB0aGUgQXhpc1R5cGUuAC8A" +
           "PctIAAD/////AAAAACRggAoBAAAAAgALAAAAUG93ZXJUcmFpbnMBAxtJAwAAAABLAAAAUG93ZXJUcmFp" +
           "bnMgaXMgYSBjb250YWluZXIgZm9yIG9uZSBvciBtb3JlIGluc3RhbmNlcyBvZiB0aGUgUG93ZXJUcmFp" +
           "blR5cGUuAC8APRtJAAD/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        #endregion

        #region Private Fields
        #endregion
    }
    #endif
    #endregion

    #region GP8State Class
    #if (!OPCUA_EXCLUDE_GP8State)
    /// <summary>
    /// Stores an instance of the GP8 ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class GP8State : MotionDeviceState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public GP8State(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.GP8, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCAAgEA" +
           "AAADAAsAAABHUDhJbnN0YW5jZQEDe0kBA3tJe0kAAP////8IAAAAJGCACgEAAAABAAwAAABQYXJhbWV0" +
           "ZXJTZXQBA3xJAwAAAAAXAAAARmxhdCBsaXN0IG9mIFBhcmFtZXRlcnMALwA6fEkAAP////8BAAAANWCJ" +
           "CgIAAAACAA0AAABTcGVlZE92ZXJyaWRlAQOiSQMAAAAAWwAAAFNwZWVkT3ZlcnJpZGUgcHJvdmlkZXMg" +
           "dGhlIGN1cnJlbnQgc3BlZWQgc2V0dGluZyBpbiBwZXJjZW50IG9mIHByb2dyYW1tZWQgc3BlZWQgKDAg" +
           "LSAxMDAlKS4ALwA/okkAAAAL/////wEB/////wAAAAAVYIkKAgAAAAEADAAAAE1hbnVmYWN0dXJlcgED" +
           "kUkALgBEkUkAAAAV/////wEB/////wAAAAAVYIkKAgAAAAEABQAAAE1vZGVsAQOTSQAuAESTSQAAABX/" +
           "////AQH/////AAAAABVgiQoCAAAAAQALAAAAUHJvZHVjdENvZGUBA5dJAC4ARJdJAAAADP////8BAf//" +
           "//8AAAAAFWCJCgIAAAABAAwAAABTZXJpYWxOdW1iZXIBA5pJAC4ARJpJAAAADP////8BAf////8AAAAA" +
           "NWCJCgIAAAACABQAAABNb3Rpb25EZXZpY2VDYXRlZ29yeQEDn0kDAAAAAIIAAABUaGUgdmFyaWFibGUg" +
           "TW90aW9uRGV2aWNlQ2F0ZWdvcnkgcHJvdmlkZXMgdGhlIGtpbmQgb2YgbW90aW9uIGRldmljZSBkZWZp" +
           "bmVkIGJ5IE1vdGlvbkRldmljZUNhdGVnb3J5RW51bWVyYXRpb24gYmFzZWQgb24gSVNPIDgzNzMuAC4A" +
           "RJ9JAAABAhFH/////wEB/////wAAAAAkYIAKAQAAAAIABAAAAEF4ZXMBA6NJAwAAAAA+AAAAQXhlcyBp" +
           "cyBhIGNvbnRhaW5lciBmb3Igb25lIG9yIG1vcmUgaW5zdGFuY2VzIG9mIHRoZSBBeGlzVHlwZS4ALwA9" +
           "o0kAAP////8AAAAAJGCACgEAAAACAAsAAABQb3dlclRyYWlucwED80kDAAAAAEsAAABQb3dlclRyYWlu" +
           "cyBpcyBhIGNvbnRhaW5lciBmb3Igb25lIG9yIG1vcmUgaW5zdGFuY2VzIG9mIHRoZSBQb3dlclRyYWlu" +
           "VHlwZS4ALwA980kAAP////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        #endregion

        #region Private Fields
        #endregion
    }
    #endif
    #endregion

    #region YRC1000State Class
    #if (!OPCUA_EXCLUDE_YRC1000State)
    /// <summary>
    /// Stores an instance of the YRC1000 ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class YRC1000State : ControllerState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public YRC1000State(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.YRC1000, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////hGCAAgEA" +
           "AAADAA8AAABZUkMxMDAwSW5zdGFuY2UBA1NKAQNTSlNKAAAB/////wcAAAAVYIkKAgAAAAEADAAAAE1h" +
           "bnVmYWN0dXJlcgEDaUoALgBEaUoAAAAV/////wEB/////wAAAAAVYIkKAgAAAAEABQAAAE1vZGVsAQNr" +
           "SgAuAERrSgAAABX/////AQH/////AAAAABVgiQoCAAAAAQALAAAAUHJvZHVjdENvZGUBA29KAC4ARG9K" +
           "AAAADP////8BAf////8AAAAAFWCJCgIAAAABAAwAAABTZXJpYWxOdW1iZXIBA3JKAC4ARHJKAAAADP//" +
           "//8BAf////8AAAAAJGCACgEAAAACAAsAAABDdXJyZW50VXNlcgEDd0oDAAAAAB0AAABUaGUgZ2l2ZW4g" +
           "bmFtZSBvZiB0aGUgZGV2aWNlLgAvAQL/RndKAAD/////AQAAADVgiQoCAAAAAgAFAAAATGV2ZWwBA3hK" +
           "AwAAAAA1AAAAVGhlIHdlaWdodCBvZiB0aGUgbG9hZCBtb3VudGVkIG9uIG9uZSBtb3VudGluZyBwb2lu" +
           "dC4ALgBEeEoAAAAM/////wEB/////wAAAAAkYIAKAQAAAAIACAAAAFNvZnR3YXJlAQOdSgMAAAAAVwAA" +
           "AFNvZnR3YXJlIGlzIGEgY29udGFpbmVyIGZvciBvbmUgb3IgbW9yZSBpbnN0YW5jZXMgb2YgU29mdHdh" +
           "cmVUeXBlIGRlZmluZWQgaW4gT1BDIFVBIERJLgAvAD2dSgAA/////wAAAAAkYIAKAQAAAAIADAAAAFRh" +
           "c2tDb250cm9scwEDwEoDAAAAAEkAAABUYXNrQ29udHJvbHMgaXMgYSBjb250YWluZXIgZm9yIG9uZSBv" +
           "ciBtb3JlIGluc3RhbmNlcyBvZiBUYXNrQ29udHJvbFR5cGUuAC8APcBKAAD/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        #endregion

        #region Private Fields
        #endregion
    }
    #endif
    #endregion

    #region YRC1000miniState Class
    #if (!OPCUA_EXCLUDE_YRC1000miniState)
    /// <summary>
    /// Stores an instance of the YRC1000mini ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class YRC1000miniState : ControllerState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public YRC1000miniState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.YRC1000mini, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////hGCAAgEA" +
           "AAADABMAAABZUkMxMDAwbWluaUluc3RhbmNlAQMLTAEDC0wLTAAAAf////8HAAAAFWCJCgIAAAABAAwA" +
           "AABNYW51ZmFjdHVyZXIBAyFMAC4ARCFMAAAAFf////8BAf////8AAAAAFWCJCgIAAAABAAUAAABNb2Rl" +
           "bAEDI0wALgBEI0wAAAAV/////wEB/////wAAAAAVYIkKAgAAAAEACwAAAFByb2R1Y3RDb2RlAQMnTAAu" +
           "AEQnTAAAAAz/////AQH/////AAAAABVgiQoCAAAAAQAMAAAAU2VyaWFsTnVtYmVyAQMqTAAuAEQqTAAA" +
           "AAz/////AQH/////AAAAACRggAoBAAAAAgALAAAAQ3VycmVudFVzZXIBAy9MAwAAAAAdAAAAVGhlIGdp" +
           "dmVuIG5hbWUgb2YgdGhlIGRldmljZS4ALwEC/0YvTAAA/////wEAAAA1YIkKAgAAAAIABQAAAExldmVs" +
           "AQMwTAMAAAAANQAAAFRoZSB3ZWlnaHQgb2YgdGhlIGxvYWQgbW91bnRlZCBvbiBvbmUgbW91bnRpbmcg" +
           "cG9pbnQuAC4ARDBMAAAADP////8BAf////8AAAAAJGCACgEAAAACAAgAAABTb2Z0d2FyZQEDVUwDAAAA" +
           "AFcAAABTb2Z0d2FyZSBpcyBhIGNvbnRhaW5lciBmb3Igb25lIG9yIG1vcmUgaW5zdGFuY2VzIG9mIFNv" +
           "ZnR3YXJlVHlwZSBkZWZpbmVkIGluIE9QQyBVQSBESS4ALwA9VUwAAP////8AAAAAJGCACgEAAAACAAwA" +
           "AABUYXNrQ29udHJvbHMBA3hMAwAAAABJAAAAVGFza0NvbnRyb2xzIGlzIGEgY29udGFpbmVyIGZvciBv" +
           "bmUgb3IgbW9yZSBpbnN0YW5jZXMgb2YgVGFza0NvbnRyb2xUeXBlLgAvAD14TAAA/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        #endregion

        #region Private Fields
        #endregion
    }
    #endif
    #endregion

    #region SINAMICS_G120CState Class
    #if (!OPCUA_EXCLUDE_SINAMICS_G120CState)
    /// <summary>
    /// Stores an instance of the SINAMICS_G120C ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class SINAMICS_G120CState : DriveState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public SINAMICS_G120CState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.SINAMICS_G120C, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
        }

        #if (!OPCUA_EXCLUDE_InitializationStrings)
        /// <summary>
        /// Initializes the instance.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            Initialize(context, InitializationString);
            InitializeOptionalChildren(context);
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }

        /// <summary>
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "AwAAAB8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5vcmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0" +
           "aW9uLm9yZy9VQS9Sb2JvdGljcy8aAAAAaHR0cHM6Ly9uZXh0dXNjLmNvbS9VQS9GRi//////BGCAAgEA" +
           "AAADABYAAABTSU5BTUlDU19HMTIwQ0luc3RhbmNlAQPDTQEDw03DTQAA/////woAAAAkYIAKAQAAAAEA" +
           "DAAAAFBhcmFtZXRlclNldAEDxE0DAAAAABcAAABGbGF0IGxpc3Qgb2YgUGFyYW1ldGVycwAvADrETQAA" +
           "/////wEAAAA1YIkKAgAAAAIACwAAAFRlbXBlcmF0dXJlAQPSOwMAAAAASAAAAFRoZSBEcml2ZSB0ZW1w" +
           "ZXJhdHVyZSBnaXZlbiBieSBhIHRlbXBlcmF0dXJlIHNlbnNvciBpbnNpZGUgb2YgdGhlIERyaXZlLgAv" +
           "AQBZRNI7AAAAC/////8BAf////8BAAAAFWCJCgIAAAAAABAAAABFbmdpbmVlcmluZ1VuaXRzAQPXOwAu" +
           "AETXOwAAAQB3A/////8BAf////8AAAAANWCJCgIAAAABAAwAAABNYW51ZmFjdHVyZXIBA9lNAwAAAAAw" +
           "AAAATmFtZSBvZiB0aGUgY29tcGFueSB0aGF0IG1hbnVmYWN0dXJlZCB0aGUgZGV2aWNlAC4ARNlNAAAA" +
           "Ff////8BAf////8AAAAANWCJCgIAAAABAAUAAABNb2RlbAED200DAAAAABgAAABNb2RlbCBuYW1lIG9m" +
           "IHRoZSBkZXZpY2UALgBE200AAAAV/////wEB/////wAAAAA1YIkKAgAAAAEAEAAAAEhhcmR3YXJlUmV2" +
           "aXNpb24BA9xNAwAAAAAsAAAAUmV2aXNpb24gbGV2ZWwgb2YgdGhlIGhhcmR3YXJlIG9mIHRoZSBkZXZp" +
           "Y2UALgBE3E0AAAAM/////wEB/////wAAAAA1YIkKAgAAAAEAEAAAAFNvZnR3YXJlUmV2aXNpb24BA91N" +
           "AwAAAAA1AAAAUmV2aXNpb24gbGV2ZWwgb2YgdGhlIHNvZnR3YXJlL2Zpcm13YXJlIG9mIHRoZSBkZXZp" +
           "Y2UALgBE3U0AAAAM/////wEB/////wAAAAA1YIkKAgAAAAEADgAAAERldmljZVJldmlzaW9uAQPeTQMA" +
           "AAAAJAAAAE92ZXJhbGwgcmV2aXNpb24gbGV2ZWwgb2YgdGhlIGRldmljZQAuAETeTQAAAAz/////AQH/" +
           "////AAAAADVgiQoCAAAAAQALAAAAUHJvZHVjdENvZGUBA99NAwAAAAC4AAAAVGhlIFByb2R1Y3RDb2Rl" +
           "IHByb3BlcnR5IHByb3ZpZGVzIGEgdW5pcXVlIGNvbWJpbmF0aW9uIG9mIG51bWJlcnMgYW5kIGxldHRl" +
           "cnMgdXNlZCB0byBpZGVudGlmeSB0aGUgcHJvZHVjdC4gSXQgbWF5IGJlIHRoZSBvcmRlciBpbmZvcm1h" +
           "dGlvbiBkaXNwbGF5ZWQgb24gdHlwZSBzaGllbGRzIG9yIGluIEVSUCBzeXN0ZW1zLgAuAETfTQAAAAz/" +
           "////AQH/////AAAAADVgiQoCAAAAAQAMAAAARGV2aWNlTWFudWFsAQPgTQMAAAAAWgAAAEFkZHJlc3Mg" +
           "KHBhdGhuYW1lIGluIHRoZSBmaWxlIHN5c3RlbSBvciBhIFVSTCB8IFdlYiBhZGRyZXNzKSBvZiB1c2Vy" +
           "IG1hbnVhbCBmb3IgdGhlIGRldmljZQAuAETgTQAAAAz/////AQH/////AAAAADVgiQoCAAAAAQAMAAAA" +
           "U2VyaWFsTnVtYmVyAQPiTQMAAAAATQAAAElkZW50aWZpZXIgdGhhdCB1bmlxdWVseSBpZGVudGlmaWVz" +
           "LCB3aXRoaW4gYSBtYW51ZmFjdHVyZXIsIGEgZGV2aWNlIGluc3RhbmNlAC4AROJNAAAADP////8BAf//" +
           "//8AAAAANWCJCgIAAAABAA8AAABSZXZpc2lvbkNvdW50ZXIBA+RNAwAAAABpAAAAQW4gaW5jcmVtZW50" +
           "YWwgY291bnRlciBpbmRpY2F0aW5nIHRoZSBudW1iZXIgb2YgdGltZXMgdGhlIHN0YXRpYyBkYXRhIHdp" +
           "dGhpbiB0aGUgRGV2aWNlIGhhcyBiZWVuIG1vZGlmaWVkAC4ARORNAAAABv////8BAf////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        #endregion

        #region Private Fields
        #endregion
    }
    #endif
    #endregion
}