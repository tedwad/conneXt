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
using Opc.Ua.Plc;

namespace Opc.Ua.Ff
{
    #region TopologyElementState Class
    #if (!OPCUA_EXCLUDE_TopologyElementState)
    /// <summary>
    /// Stores an instance of the TopologyElementType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class TopologyElementState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public TopologyElementState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.TopologyElementType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (ParameterSet != null)
            {
                ParameterSet.Initialize(context, ParameterSet_InitializationString);
            }

            if (MethodSet != null)
            {
                MethodSet.Initialize(context, MethodSet_InitializationString);
            }

            if (Identification != null)
            {
                Identification.Initialize(context, Identification_InitializationString);
            }

            if (Lock != null)
            {
                Lock.Initialize(context, Lock_InitializationString);
            }
        }

        #region Initialization String
        private const string ParameterSet_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAgAMAAAAUGFyYW1ldGVyU2V0" +
           "AQLDOgMAAAAAFwAAAEZsYXQgbGlzdCBvZiBQYXJhbWV0ZXJzAC8AOsM6AAD/////AAAAAA==";

        private const string MethodSet_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAgAJAAAATWV0aG9kU2V0AQLF" +
           "OgMAAAAAFAAAAEZsYXQgbGlzdCBvZiBNZXRob2RzAC8AOsU6AAD/////AAAAAA==";

        private const string Identification_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAgAOAAAASWRlbnRpZmljYXRp" +
           "b24BAsg6AwAAAABGAAAAVXNlZCB0byBvcmdhbml6ZSBwYXJhbWV0ZXJzIGZvciBpZGVudGlmaWNhdGlv" +
           "biBvZiB0aGlzIFRvcG9sb2d5RWxlbWVudAAvAQKHPsg6AAD/////AAAAAA==";

        private const string Lock_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAgAEAAAATG9jawECyjoDAAAA" +
           "ACIAAABVc2VkIHRvIGxvY2sgdGhlIHRvcG9sb2d5IGVsZW1lbnQuAC8BAvo+yjoAAP////8IAAAAFWCJ" +
           "CgIAAAACAAYAAABMb2NrZWQBAss6AC4ARMs6AAAAAf////8BAf////8AAAAAFWCJCgIAAAACAA0AAABM" +
           "b2NraW5nQ2xpZW50AQLMOgAuAETMOgAAAAz/////AQH/////AAAAABVgiQoCAAAAAgALAAAATG9ja2lu" +
           "Z1VzZXIBAs06AC4ARM06AAAADP////8BAf////8AAAAAFWCJCgIAAAACABEAAABSZW1haW5pbmdMb2Nr" +
           "VGltZQECzjoALgBEzjoAAAEAIgH/////AQH/////AAAAAARhggoEAAAAAgAIAAAASW5pdExvY2sBAs86" +
           "AC8BAgA/zzoAAAEB/////wIAAAAXYKkKAgAAAAAADgAAAElucHV0QXJndW1lbnRzAQLQOgAuAETQOgAA" +
           "lgEAAAABACoBARYAAAAHAAAAQ29udGV4dAAM/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAA" +
           "AAAXYKkKAgAAAAAADwAAAE91dHB1dEFyZ3VtZW50cwEC0ToALgBE0ToAAJYBAAAAAQAqAQEdAAAADgAA" +
           "AEluaXRMb2NrU3RhdHVzAAb/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAAARhggoEAAAA" +
           "AgAJAAAAUmVuZXdMb2NrAQLSOgAvAQIDP9I6AAABAf////8BAAAAF2CpCgIAAAAAAA8AAABPdXRwdXRB" +
           "cmd1bWVudHMBAtM6AC4ARNM6AACWAQAAAAEAKgEBHgAAAA8AAABSZW5ld0xvY2tTdGF0dXMABv////8A" +
           "AAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAABGGCCgQAAAACAAgAAABFeGl0TG9jawEC1DoALwEC" +
           "BT/UOgAAAQH/////AQAAABdgqQoCAAAAAAAPAAAAT3V0cHV0QXJndW1lbnRzAQLVOgAuAETVOgAAlgEA" +
           "AAABACoBAR0AAAAOAAAARXhpdExvY2tTdGF0dXMABv////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf//" +
           "//8AAAAABGGCCgQAAAACAAkAAABCcmVha0xvY2sBAtY6AC8BAgc/1joAAAEB/////wEAAAAXYKkKAgAA" +
           "AAAADwAAAE91dHB1dEFyZ3VtZW50cwEC1zoALgBE1zoAAJYBAAAAAQAqAQEeAAAADwAAAEJyZWFrTG9j" +
           "a1N0YXR1cwAG/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAbAAAAVG9wb2xvZ3lFbGVt" +
           "ZW50VHlwZUluc3RhbmNlAQLCOgECwjrCOgAA/////wQAAAAkYIAKAQAAAAIADAAAAFBhcmFtZXRlclNl" +
           "dAECwzoDAAAAABcAAABGbGF0IGxpc3Qgb2YgUGFyYW1ldGVycwAvADrDOgAA/////wAAAAAkYIAKAQAA" +
           "AAIACQAAAE1ldGhvZFNldAECxToDAAAAABQAAABGbGF0IGxpc3Qgb2YgTWV0aG9kcwAvADrFOgAA////" +
           "/wAAAAAkYIAKAQAAAAIADgAAAElkZW50aWZpY2F0aW9uAQLIOgMAAAAARgAAAFVzZWQgdG8gb3JnYW5p" +
           "emUgcGFyYW1ldGVycyBmb3IgaWRlbnRpZmljYXRpb24gb2YgdGhpcyBUb3BvbG9neUVsZW1lbnQALwEC" +
           "hz7IOgAA/////wAAAAAkYIAKAQAAAAIABAAAAExvY2sBAso6AwAAAAAiAAAAVXNlZCB0byBsb2NrIHRo" +
           "ZSB0b3BvbG9neSBlbGVtZW50LgAvAQL6Pso6AAD/////CAAAABVgiQoCAAAAAgAGAAAATG9ja2VkAQLL" +
           "OgAuAETLOgAAAAH/////AQH/////AAAAABVgiQoCAAAAAgANAAAATG9ja2luZ0NsaWVudAECzDoALgBE" +
           "zDoAAAAM/////wEB/////wAAAAAVYIkKAgAAAAIACwAAAExvY2tpbmdVc2VyAQLNOgAuAETNOgAAAAz/" +
           "////AQH/////AAAAABVgiQoCAAAAAgARAAAAUmVtYWluaW5nTG9ja1RpbWUBAs46AC4ARM46AAABACIB" +
           "/////wEB/////wAAAAAEYYIKBAAAAAIACAAAAEluaXRMb2NrAQLPOgAvAQIAP886AAABAf////8CAAAA" +
           "F2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwEC0DoALgBE0DoAAJYBAAAAAQAqAQEWAAAABwAAAENv" +
           "bnRleHQADP////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAF2CpCgIAAAAAAA8AAABPdXRw" +
           "dXRBcmd1bWVudHMBAtE6AC4ARNE6AACWAQAAAAEAKgEBHQAAAA4AAABJbml0TG9ja1N0YXR1cwAG////" +
           "/wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAAEYYIKBAAAAAIACQAAAFJlbmV3TG9jawEC0joA" +
           "LwECAz/SOgAAAQH/////AQAAABdgqQoCAAAAAAAPAAAAT3V0cHV0QXJndW1lbnRzAQLTOgAuAETTOgAA" +
           "lgEAAAABACoBAR4AAAAPAAAAUmVuZXdMb2NrU3RhdHVzAAb/////AAAAAAABACgBAQAAAAEAAAAAAAAA" +
           "AQH/////AAAAAARhggoEAAAAAgAIAAAARXhpdExvY2sBAtQ6AC8BAgU/1DoAAAEB/////wEAAAAXYKkK" +
           "AgAAAAAADwAAAE91dHB1dEFyZ3VtZW50cwEC1ToALgBE1ToAAJYBAAAAAQAqAQEdAAAADgAAAEV4aXRM" +
           "b2NrU3RhdHVzAAb/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAAARhggoEAAAAAgAJAAAA" +
           "QnJlYWtMb2NrAQLWOgAvAQIHP9Y6AAABAf////8BAAAAF2CpCgIAAAAAAA8AAABPdXRwdXRBcmd1bWVu" +
           "dHMBAtc6AC4ARNc6AACWAQAAAAEAKgEBHgAAAA8AAABCcmVha0xvY2tTdGF0dXMABv////8AAAAAAAEA" +
           "KAEBAAAAAQAAAAAAAAABAf////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public BaseObjectState ParameterSet
        {
            get
            {
                return m_parameterSet;
            }

            set
            {
                if (!Object.ReferenceEquals(m_parameterSet, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_parameterSet = value;
            }
        }

        /// <remarks />
        public BaseObjectState MethodSet
        {
            get
            {
                return m_methodSet;
            }

            set
            {
                if (!Object.ReferenceEquals(m_methodSet, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_methodSet = value;
            }
        }

        /// <remarks />
        public FunctionalGroupState Identification
        {
            get
            {
                return m_identification;
            }

            set
            {
                if (!Object.ReferenceEquals(m_identification, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_identification = value;
            }
        }

        /// <remarks />
        public LockingServicesState Lock
        {
            get
            {
                return m_lock;
            }

            set
            {
                if (!Object.ReferenceEquals(m_lock, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_lock = value;
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
            if (m_parameterSet != null)
            {
                children.Add(m_parameterSet);
            }

            if (m_methodSet != null)
            {
                children.Add(m_methodSet);
            }

            if (m_identification != null)
            {
                children.Add(m_identification);
            }

            if (m_lock != null)
            {
                children.Add(m_lock);
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
                case Opc.Ua.Di.BrowseNames.ParameterSet:
                {
                    if (createOrReplace)
                    {
                        if (ParameterSet == null)
                        {
                            if (replacement == null)
                            {
                                ParameterSet = new BaseObjectState(this);
                            }
                            else
                            {
                                ParameterSet = (BaseObjectState)replacement;
                            }
                        }
                    }

                    instance = ParameterSet;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.MethodSet:
                {
                    if (createOrReplace)
                    {
                        if (MethodSet == null)
                        {
                            if (replacement == null)
                            {
                                MethodSet = new BaseObjectState(this);
                            }
                            else
                            {
                                MethodSet = (BaseObjectState)replacement;
                            }
                        }
                    }

                    instance = MethodSet;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Identification:
                {
                    if (createOrReplace)
                    {
                        if (Identification == null)
                        {
                            if (replacement == null)
                            {
                                Identification = new FunctionalGroupState(this);
                            }
                            else
                            {
                                Identification = (FunctionalGroupState)replacement;
                            }
                        }
                    }

                    instance = Identification;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Lock:
                {
                    if (createOrReplace)
                    {
                        if (Lock == null)
                        {
                            if (replacement == null)
                            {
                                Lock = new LockingServicesState(this);
                            }
                            else
                            {
                                Lock = (LockingServicesState)replacement;
                            }
                        }
                    }

                    instance = Lock;
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
        private BaseObjectState m_parameterSet;
        private BaseObjectState m_methodSet;
        private FunctionalGroupState m_identification;
        private LockingServicesState m_lock;
        #endregion
    }
    #endif
    #endregion

    #region IVendorNameplateState Class
    #if (!OPCUA_EXCLUDE_IVendorNameplateState)
    /// <summary>
    /// Stores an instance of the IVendorNameplateType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class IVendorNameplateState : BaseInterfaceState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public IVendorNameplateState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.IVendorNameplateType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (Manufacturer != null)
            {
                Manufacturer.Initialize(context, Manufacturer_InitializationString);
            }

            if (ManufacturerUri != null)
            {
                ManufacturerUri.Initialize(context, ManufacturerUri_InitializationString);
            }

            if (Model != null)
            {
                Model.Initialize(context, Model_InitializationString);
            }

            if (HardwareRevision != null)
            {
                HardwareRevision.Initialize(context, HardwareRevision_InitializationString);
            }

            if (SoftwareRevision != null)
            {
                SoftwareRevision.Initialize(context, SoftwareRevision_InitializationString);
            }

            if (DeviceRevision != null)
            {
                DeviceRevision.Initialize(context, DeviceRevision_InitializationString);
            }

            if (ProductCode != null)
            {
                ProductCode.Initialize(context, ProductCode_InitializationString);
            }

            if (DeviceManual != null)
            {
                DeviceManual.Initialize(context, DeviceManual_InitializationString);
            }

            if (DeviceClass != null)
            {
                DeviceClass.Initialize(context, DeviceClass_InitializationString);
            }

            if (SerialNumber != null)
            {
                SerialNumber.Initialize(context, SerialNumber_InitializationString);
            }

            if (ProductInstanceUri != null)
            {
                ProductInstanceUri.Initialize(context, ProductInstanceUri_InitializationString);
            }

            if (RevisionCounter != null)
            {
                RevisionCounter.Initialize(context, RevisionCounter_InitializationString);
            }
        }

        #region Initialization String
        private const string Manufacturer_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAMAAAATWFudWZhY3R1cmVy" +
           "AQLZOgAuAETZOgAAABX/////AQH/////AAAAAA==";

        private const string ManufacturerUri_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAPAAAATWFudWZhY3R1cmVy" +
           "VXJpAQLaOgAuAETaOgAAAAz/////AQH/////AAAAAA==";

        private const string Model_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAFAAAATW9kZWwBAts6AC4A" +
           "RNs6AAAAFf////8BAf////8AAAAA";

        private const string HardwareRevision_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAQAAAASGFyZHdhcmVSZXZp" +
           "c2lvbgEC3DoALgBE3DoAAAAM/////wEB/////wAAAAA=";

        private const string SoftwareRevision_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAQAAAAU29mdHdhcmVSZXZp" +
           "c2lvbgEC3ToALgBE3ToAAAAM/////wEB/////wAAAAA=";

        private const string DeviceRevision_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAOAAAARGV2aWNlUmV2aXNp" +
           "b24BAt46AC4ARN46AAAADP////8BAf////8AAAAA";

        private const string ProductCode_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgALAAAAUHJvZHVjdENvZGUB" +
           "At86AC4ARN86AAAADP////8BAf////8AAAAA";

        private const string DeviceManual_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAMAAAARGV2aWNlTWFudWFs" +
           "AQLgOgAuAETgOgAAAAz/////AQH/////AAAAAA==";

        private const string DeviceClass_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgALAAAARGV2aWNlQ2xhc3MB" +
           "AuE6AC4AROE6AAAADP////8BAf////8AAAAA";

        private const string SerialNumber_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAMAAAAU2VyaWFsTnVtYmVy" +
           "AQLiOgAuAETiOgAAAAz/////AQH/////AAAAAA==";

        private const string ProductInstanceUri_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgASAAAAUHJvZHVjdEluc3Rh" +
           "bmNlVXJpAQLjOgAuAETjOgAAAAz/////AQH/////AAAAAA==";

        private const string RevisionCounter_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAPAAAAUmV2aXNpb25Db3Vu" +
           "dGVyAQLkOgAuAETkOgAAAAb/////AQH/////AAAAAA==";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAcAAAASVZlbmRvck5hbWVw" +
           "bGF0ZVR5cGVJbnN0YW5jZQEC2DoBAtg62DoAAP////8MAAAAFWCJCgIAAAACAAwAAABNYW51ZmFjdHVy" +
           "ZXIBAtk6AC4ARNk6AAAAFf////8BAf////8AAAAAFWCJCgIAAAACAA8AAABNYW51ZmFjdHVyZXJVcmkB" +
           "Ato6AC4ARNo6AAAADP////8BAf////8AAAAAFWCJCgIAAAACAAUAAABNb2RlbAEC2zoALgBE2zoAAAAV" +
           "/////wEB/////wAAAAAVYIkKAgAAAAIAEAAAAEhhcmR3YXJlUmV2aXNpb24BAtw6AC4ARNw6AAAADP//" +
           "//8BAf////8AAAAAFWCJCgIAAAACABAAAABTb2Z0d2FyZVJldmlzaW9uAQLdOgAuAETdOgAAAAz/////" +
           "AQH/////AAAAABVgiQoCAAAAAgAOAAAARGV2aWNlUmV2aXNpb24BAt46AC4ARN46AAAADP////8BAf//" +
           "//8AAAAAFWCJCgIAAAACAAsAAABQcm9kdWN0Q29kZQEC3zoALgBE3zoAAAAM/////wEB/////wAAAAAV" +
           "YIkKAgAAAAIADAAAAERldmljZU1hbnVhbAEC4DoALgBE4DoAAAAM/////wEB/////wAAAAAVYIkKAgAA" +
           "AAIACwAAAERldmljZUNsYXNzAQLhOgAuAEThOgAAAAz/////AQH/////AAAAABVgiQoCAAAAAgAMAAAA" +
           "U2VyaWFsTnVtYmVyAQLiOgAuAETiOgAAAAz/////AQH/////AAAAABVgiQoCAAAAAgASAAAAUHJvZHVj" +
           "dEluc3RhbmNlVXJpAQLjOgAuAETjOgAAAAz/////AQH/////AAAAABVgiQoCAAAAAgAPAAAAUmV2aXNp" +
           "b25Db3VudGVyAQLkOgAuAETkOgAAAAb/////AQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<LocalizedText> Manufacturer
        {
            get
            {
                return m_manufacturer;
            }

            set
            {
                if (!Object.ReferenceEquals(m_manufacturer, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_manufacturer = value;
            }
        }

        /// <remarks />
        public PropertyState<string> ManufacturerUri
        {
            get
            {
                return m_manufacturerUri;
            }

            set
            {
                if (!Object.ReferenceEquals(m_manufacturerUri, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_manufacturerUri = value;
            }
        }

        /// <remarks />
        public PropertyState<LocalizedText> Model
        {
            get
            {
                return m_model;
            }

            set
            {
                if (!Object.ReferenceEquals(m_model, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_model = value;
            }
        }

        /// <remarks />
        public PropertyState<string> HardwareRevision
        {
            get
            {
                return m_hardwareRevision;
            }

            set
            {
                if (!Object.ReferenceEquals(m_hardwareRevision, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_hardwareRevision = value;
            }
        }

        /// <remarks />
        public PropertyState<string> SoftwareRevision
        {
            get
            {
                return m_softwareRevision;
            }

            set
            {
                if (!Object.ReferenceEquals(m_softwareRevision, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_softwareRevision = value;
            }
        }

        /// <remarks />
        public PropertyState<string> DeviceRevision
        {
            get
            {
                return m_deviceRevision;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceRevision, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceRevision = value;
            }
        }

        /// <remarks />
        public PropertyState<string> ProductCode
        {
            get
            {
                return m_productCode;
            }

            set
            {
                if (!Object.ReferenceEquals(m_productCode, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_productCode = value;
            }
        }

        /// <remarks />
        public PropertyState<string> DeviceManual
        {
            get
            {
                return m_deviceManual;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceManual, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceManual = value;
            }
        }

        /// <remarks />
        public PropertyState<string> DeviceClass
        {
            get
            {
                return m_deviceClass;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceClass, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceClass = value;
            }
        }

        /// <remarks />
        public PropertyState<string> SerialNumber
        {
            get
            {
                return m_serialNumber;
            }

            set
            {
                if (!Object.ReferenceEquals(m_serialNumber, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_serialNumber = value;
            }
        }

        /// <remarks />
        public PropertyState<string> ProductInstanceUri
        {
            get
            {
                return m_productInstanceUri;
            }

            set
            {
                if (!Object.ReferenceEquals(m_productInstanceUri, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_productInstanceUri = value;
            }
        }

        /// <remarks />
        public PropertyState<int> RevisionCounter
        {
            get
            {
                return m_revisionCounter;
            }

            set
            {
                if (!Object.ReferenceEquals(m_revisionCounter, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_revisionCounter = value;
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
            if (m_manufacturer != null)
            {
                children.Add(m_manufacturer);
            }

            if (m_manufacturerUri != null)
            {
                children.Add(m_manufacturerUri);
            }

            if (m_model != null)
            {
                children.Add(m_model);
            }

            if (m_hardwareRevision != null)
            {
                children.Add(m_hardwareRevision);
            }

            if (m_softwareRevision != null)
            {
                children.Add(m_softwareRevision);
            }

            if (m_deviceRevision != null)
            {
                children.Add(m_deviceRevision);
            }

            if (m_productCode != null)
            {
                children.Add(m_productCode);
            }

            if (m_deviceManual != null)
            {
                children.Add(m_deviceManual);
            }

            if (m_deviceClass != null)
            {
                children.Add(m_deviceClass);
            }

            if (m_serialNumber != null)
            {
                children.Add(m_serialNumber);
            }

            if (m_productInstanceUri != null)
            {
                children.Add(m_productInstanceUri);
            }

            if (m_revisionCounter != null)
            {
                children.Add(m_revisionCounter);
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
                case Opc.Ua.Di.BrowseNames.Manufacturer:
                {
                    if (createOrReplace)
                    {
                        if (Manufacturer == null)
                        {
                            if (replacement == null)
                            {
                                Manufacturer = new PropertyState<LocalizedText>(this);
                            }
                            else
                            {
                                Manufacturer = (PropertyState<LocalizedText>)replacement;
                            }
                        }
                    }

                    instance = Manufacturer;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ManufacturerUri:
                {
                    if (createOrReplace)
                    {
                        if (ManufacturerUri == null)
                        {
                            if (replacement == null)
                            {
                                ManufacturerUri = new PropertyState<string>(this);
                            }
                            else
                            {
                                ManufacturerUri = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = ManufacturerUri;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Model:
                {
                    if (createOrReplace)
                    {
                        if (Model == null)
                        {
                            if (replacement == null)
                            {
                                Model = new PropertyState<LocalizedText>(this);
                            }
                            else
                            {
                                Model = (PropertyState<LocalizedText>)replacement;
                            }
                        }
                    }

                    instance = Model;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.HardwareRevision:
                {
                    if (createOrReplace)
                    {
                        if (HardwareRevision == null)
                        {
                            if (replacement == null)
                            {
                                HardwareRevision = new PropertyState<string>(this);
                            }
                            else
                            {
                                HardwareRevision = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = HardwareRevision;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.SoftwareRevision:
                {
                    if (createOrReplace)
                    {
                        if (SoftwareRevision == null)
                        {
                            if (replacement == null)
                            {
                                SoftwareRevision = new PropertyState<string>(this);
                            }
                            else
                            {
                                SoftwareRevision = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = SoftwareRevision;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.DeviceRevision:
                {
                    if (createOrReplace)
                    {
                        if (DeviceRevision == null)
                        {
                            if (replacement == null)
                            {
                                DeviceRevision = new PropertyState<string>(this);
                            }
                            else
                            {
                                DeviceRevision = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = DeviceRevision;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ProductCode:
                {
                    if (createOrReplace)
                    {
                        if (ProductCode == null)
                        {
                            if (replacement == null)
                            {
                                ProductCode = new PropertyState<string>(this);
                            }
                            else
                            {
                                ProductCode = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = ProductCode;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.DeviceManual:
                {
                    if (createOrReplace)
                    {
                        if (DeviceManual == null)
                        {
                            if (replacement == null)
                            {
                                DeviceManual = new PropertyState<string>(this);
                            }
                            else
                            {
                                DeviceManual = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = DeviceManual;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.DeviceClass:
                {
                    if (createOrReplace)
                    {
                        if (DeviceClass == null)
                        {
                            if (replacement == null)
                            {
                                DeviceClass = new PropertyState<string>(this);
                            }
                            else
                            {
                                DeviceClass = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = DeviceClass;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.SerialNumber:
                {
                    if (createOrReplace)
                    {
                        if (SerialNumber == null)
                        {
                            if (replacement == null)
                            {
                                SerialNumber = new PropertyState<string>(this);
                            }
                            else
                            {
                                SerialNumber = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = SerialNumber;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ProductInstanceUri:
                {
                    if (createOrReplace)
                    {
                        if (ProductInstanceUri == null)
                        {
                            if (replacement == null)
                            {
                                ProductInstanceUri = new PropertyState<string>(this);
                            }
                            else
                            {
                                ProductInstanceUri = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = ProductInstanceUri;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.RevisionCounter:
                {
                    if (createOrReplace)
                    {
                        if (RevisionCounter == null)
                        {
                            if (replacement == null)
                            {
                                RevisionCounter = new PropertyState<int>(this);
                            }
                            else
                            {
                                RevisionCounter = (PropertyState<int>)replacement;
                            }
                        }
                    }

                    instance = RevisionCounter;
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
        private PropertyState<LocalizedText> m_manufacturer;
        private PropertyState<string> m_manufacturerUri;
        private PropertyState<LocalizedText> m_model;
        private PropertyState<string> m_hardwareRevision;
        private PropertyState<string> m_softwareRevision;
        private PropertyState<string> m_deviceRevision;
        private PropertyState<string> m_productCode;
        private PropertyState<string> m_deviceManual;
        private PropertyState<string> m_deviceClass;
        private PropertyState<string> m_serialNumber;
        private PropertyState<string> m_productInstanceUri;
        private PropertyState<int> m_revisionCounter;
        #endregion
    }
    #endif
    #endregion

    #region ITagNameplateState Class
    #if (!OPCUA_EXCLUDE_ITagNameplateState)
    /// <summary>
    /// Stores an instance of the ITagNameplateType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ITagNameplateState : BaseInterfaceState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ITagNameplateState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.ITagNameplateType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (AssetId != null)
            {
                AssetId.Initialize(context, AssetId_InitializationString);
            }

            if (ComponentName != null)
            {
                ComponentName.Initialize(context, ComponentName_InitializationString);
            }
        }

        #region Initialization String
        private const string AssetId_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAHAAAAQXNzZXRJZAEC5joA" +
           "LgBE5joAAAAM/////wEB/////wAAAAA=";

        private const string ComponentName_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgANAAAAQ29tcG9uZW50TmFt" +
           "ZQEC5zoALgBE5zoAAAAV/////wEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAZAAAASVRhZ05hbWVwbGF0" +
           "ZVR5cGVJbnN0YW5jZQEC5ToBAuU65ToAAP////8CAAAAFWCJCgIAAAACAAcAAABBc3NldElkAQLmOgAu" +
           "AETmOgAAAAz/////AQH/////AAAAABVgiQoCAAAAAgANAAAAQ29tcG9uZW50TmFtZQEC5zoALgBE5zoA" +
           "AAAV/////wEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<string> AssetId
        {
            get
            {
                return m_assetId;
            }

            set
            {
                if (!Object.ReferenceEquals(m_assetId, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_assetId = value;
            }
        }

        /// <remarks />
        public PropertyState<LocalizedText> ComponentName
        {
            get
            {
                return m_componentName;
            }

            set
            {
                if (!Object.ReferenceEquals(m_componentName, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_componentName = value;
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
            if (m_assetId != null)
            {
                children.Add(m_assetId);
            }

            if (m_componentName != null)
            {
                children.Add(m_componentName);
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
                case Opc.Ua.Di.BrowseNames.AssetId:
                {
                    if (createOrReplace)
                    {
                        if (AssetId == null)
                        {
                            if (replacement == null)
                            {
                                AssetId = new PropertyState<string>(this);
                            }
                            else
                            {
                                AssetId = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = AssetId;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ComponentName:
                {
                    if (createOrReplace)
                    {
                        if (ComponentName == null)
                        {
                            if (replacement == null)
                            {
                                ComponentName = new PropertyState<LocalizedText>(this);
                            }
                            else
                            {
                                ComponentName = (PropertyState<LocalizedText>)replacement;
                            }
                        }
                    }

                    instance = ComponentName;
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
        private PropertyState<string> m_assetId;
        private PropertyState<LocalizedText> m_componentName;
        #endregion
    }
    #endif
    #endregion

    #region IDeviceHealthState Class
    #if (!OPCUA_EXCLUDE_IDeviceHealthState)
    /// <summary>
    /// Stores an instance of the IDeviceHealthType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class IDeviceHealthState : BaseInterfaceState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public IDeviceHealthState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.IDeviceHealthType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (DeviceHealth != null)
            {
                DeviceHealth.Initialize(context, DeviceHealth_InitializationString);
            }

            if (DeviceHealthAlarms != null)
            {
                DeviceHealthAlarms.Initialize(context, DeviceHealthAlarms_InitializationString);
            }
        }

        #region Initialization String
        private const string DeviceHealth_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAMAAAARGV2aWNlSGVhbHRo" +
           "AQLpOgAvAD/pOgAAAQKMPv////8BAf////8AAAAA";

        private const string DeviceHealthAlarms_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgASAAAARGV2aWNlSGVhbHRo" +
           "QWxhcm1zAQLqOgAvAD3qOgAA/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAZAAAASURldmljZUhlYWx0" +
           "aFR5cGVJbnN0YW5jZQEC6DoBAug66DoAAP////8CAAAAFWCJCgIAAAACAAwAAABEZXZpY2VIZWFsdGgB" +
           "Auk6AC8AP+k6AAABAow+/////wEB/////wAAAAAEYIAKAQAAAAIAEgAAAERldmljZUhlYWx0aEFsYXJt" +
           "cwEC6joALwA96joAAP////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public BaseDataVariableState<DeviceHealthEnumeration> DeviceHealth
        {
            get
            {
                return m_deviceHealth;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceHealth, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceHealth = value;
            }
        }

        /// <remarks />
        public FolderState DeviceHealthAlarms
        {
            get
            {
                return m_deviceHealthAlarms;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceHealthAlarms, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceHealthAlarms = value;
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
            if (m_deviceHealth != null)
            {
                children.Add(m_deviceHealth);
            }

            if (m_deviceHealthAlarms != null)
            {
                children.Add(m_deviceHealthAlarms);
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
                case Opc.Ua.Di.BrowseNames.DeviceHealth:
                {
                    if (createOrReplace)
                    {
                        if (DeviceHealth == null)
                        {
                            if (replacement == null)
                            {
                                DeviceHealth = new BaseDataVariableState<DeviceHealthEnumeration>(this);
                            }
                            else
                            {
                                DeviceHealth = (BaseDataVariableState<DeviceHealthEnumeration>)replacement;
                            }
                        }
                    }

                    instance = DeviceHealth;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.DeviceHealthAlarms:
                {
                    if (createOrReplace)
                    {
                        if (DeviceHealthAlarms == null)
                        {
                            if (replacement == null)
                            {
                                DeviceHealthAlarms = new FolderState(this);
                            }
                            else
                            {
                                DeviceHealthAlarms = (FolderState)replacement;
                            }
                        }
                    }

                    instance = DeviceHealthAlarms;
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
        private BaseDataVariableState<DeviceHealthEnumeration> m_deviceHealth;
        private FolderState m_deviceHealthAlarms;
        #endregion
    }
    #endif
    #endregion

    #region ISupportInfoState Class
    #if (!OPCUA_EXCLUDE_ISupportInfoState)
    /// <summary>
    /// Stores an instance of the ISupportInfoType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ISupportInfoState : BaseInterfaceState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ISupportInfoState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.ISupportInfoType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (DeviceTypeImage != null)
            {
                DeviceTypeImage.Initialize(context, DeviceTypeImage_InitializationString);
            }

            if (Documentation != null)
            {
                Documentation.Initialize(context, Documentation_InitializationString);
            }

            if (ProtocolSupport != null)
            {
                ProtocolSupport.Initialize(context, ProtocolSupport_InitializationString);
            }

            if (ImageSet != null)
            {
                ImageSet.Initialize(context, ImageSet_InitializationString);
            }
        }

        #region Initialization String
        private const string DeviceTypeImage_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgAPAAAARGV2aWNlVHlwZUlt" +
           "YWdlAQLsOgAvAD3sOgAA/////wAAAAA=";

        private const string Documentation_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgANAAAARG9jdW1lbnRhdGlv" +
           "bgEC7joALwA97joAAP////8AAAAA";

        private const string ProtocolSupport_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgAPAAAAUHJvdG9jb2xTdXBw" +
           "b3J0AQLwOgAvAD3wOgAA/////wAAAAA=";

        private const string ImageSet_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgAIAAAASW1hZ2VTZXQBAvI6" +
           "AC8APfI6AAD/////AAAAAA==";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAYAAAASVN1cHBvcnRJbmZv" +
           "VHlwZUluc3RhbmNlAQLrOgEC6zrrOgAA/////wQAAAAEYIAKAQAAAAIADwAAAERldmljZVR5cGVJbWFn" +
           "ZQEC7DoALwA97DoAAP////8AAAAABGCACgEAAAACAA0AAABEb2N1bWVudGF0aW9uAQLuOgAvAD3uOgAA" +
           "/////wAAAAAEYIAKAQAAAAIADwAAAFByb3RvY29sU3VwcG9ydAEC8DoALwA98DoAAP////8AAAAABGCA" +
           "CgEAAAACAAgAAABJbWFnZVNldAEC8joALwA98joAAP////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public FolderState DeviceTypeImage
        {
            get
            {
                return m_deviceTypeImage;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceTypeImage, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceTypeImage = value;
            }
        }

        /// <remarks />
        public FolderState Documentation
        {
            get
            {
                return m_documentation;
            }

            set
            {
                if (!Object.ReferenceEquals(m_documentation, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_documentation = value;
            }
        }

        /// <remarks />
        public FolderState ProtocolSupport
        {
            get
            {
                return m_protocolSupport;
            }

            set
            {
                if (!Object.ReferenceEquals(m_protocolSupport, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_protocolSupport = value;
            }
        }

        /// <remarks />
        public FolderState ImageSet
        {
            get
            {
                return m_imageSet;
            }

            set
            {
                if (!Object.ReferenceEquals(m_imageSet, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_imageSet = value;
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
            if (m_deviceTypeImage != null)
            {
                children.Add(m_deviceTypeImage);
            }

            if (m_documentation != null)
            {
                children.Add(m_documentation);
            }

            if (m_protocolSupport != null)
            {
                children.Add(m_protocolSupport);
            }

            if (m_imageSet != null)
            {
                children.Add(m_imageSet);
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
                case Opc.Ua.Di.BrowseNames.DeviceTypeImage:
                {
                    if (createOrReplace)
                    {
                        if (DeviceTypeImage == null)
                        {
                            if (replacement == null)
                            {
                                DeviceTypeImage = new FolderState(this);
                            }
                            else
                            {
                                DeviceTypeImage = (FolderState)replacement;
                            }
                        }
                    }

                    instance = DeviceTypeImage;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Documentation:
                {
                    if (createOrReplace)
                    {
                        if (Documentation == null)
                        {
                            if (replacement == null)
                            {
                                Documentation = new FolderState(this);
                            }
                            else
                            {
                                Documentation = (FolderState)replacement;
                            }
                        }
                    }

                    instance = Documentation;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ProtocolSupport:
                {
                    if (createOrReplace)
                    {
                        if (ProtocolSupport == null)
                        {
                            if (replacement == null)
                            {
                                ProtocolSupport = new FolderState(this);
                            }
                            else
                            {
                                ProtocolSupport = (FolderState)replacement;
                            }
                        }
                    }

                    instance = ProtocolSupport;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ImageSet:
                {
                    if (createOrReplace)
                    {
                        if (ImageSet == null)
                        {
                            if (replacement == null)
                            {
                                ImageSet = new FolderState(this);
                            }
                            else
                            {
                                ImageSet = (FolderState)replacement;
                            }
                        }
                    }

                    instance = ImageSet;
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
        private FolderState m_deviceTypeImage;
        private FolderState m_documentation;
        private FolderState m_protocolSupport;
        private FolderState m_imageSet;
        #endregion
    }
    #endif
    #endregion

    #region ComponentState Class
    #if (!OPCUA_EXCLUDE_ComponentState)
    /// <summary>
    /// Stores an instance of the ComponentType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ComponentState : TopologyElementState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ComponentState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.ComponentType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (Manufacturer != null)
            {
                Manufacturer.Initialize(context, Manufacturer_InitializationString);
            }

            if (ManufacturerUri != null)
            {
                ManufacturerUri.Initialize(context, ManufacturerUri_InitializationString);
            }

            if (Model != null)
            {
                Model.Initialize(context, Model_InitializationString);
            }

            if (HardwareRevision != null)
            {
                HardwareRevision.Initialize(context, HardwareRevision_InitializationString);
            }

            if (SoftwareRevision != null)
            {
                SoftwareRevision.Initialize(context, SoftwareRevision_InitializationString);
            }

            if (DeviceRevision != null)
            {
                DeviceRevision.Initialize(context, DeviceRevision_InitializationString);
            }

            if (ProductCode != null)
            {
                ProductCode.Initialize(context, ProductCode_InitializationString);
            }

            if (DeviceManual != null)
            {
                DeviceManual.Initialize(context, DeviceManual_InitializationString);
            }

            if (DeviceClass != null)
            {
                DeviceClass.Initialize(context, DeviceClass_InitializationString);
            }

            if (SerialNumber != null)
            {
                SerialNumber.Initialize(context, SerialNumber_InitializationString);
            }

            if (ProductInstanceUri != null)
            {
                ProductInstanceUri.Initialize(context, ProductInstanceUri_InitializationString);
            }

            if (RevisionCounter != null)
            {
                RevisionCounter.Initialize(context, RevisionCounter_InitializationString);
            }

            if (AssetId != null)
            {
                AssetId.Initialize(context, AssetId_InitializationString);
            }

            if (ComponentName != null)
            {
                ComponentName.Initialize(context, ComponentName_InitializationString);
            }
        }

        #region Initialization String
        private const string Manufacturer_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAMAAAATWFudWZhY3R1cmVy" +
           "AQIKOwAuAEQKOwAAABX/////AQH/////AAAAAA==";

        private const string ManufacturerUri_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAPAAAATWFudWZhY3R1cmVy" +
           "VXJpAQILOwAuAEQLOwAAAAz/////AQH/////AAAAAA==";

        private const string Model_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAFAAAATW9kZWwBAgw7AC4A" +
           "RAw7AAAAFf////8BAf////8AAAAA";

        private const string HardwareRevision_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAQAAAASGFyZHdhcmVSZXZp" +
           "c2lvbgECDTsALgBEDTsAAAAM/////wEB/////wAAAAA=";

        private const string SoftwareRevision_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAQAAAAU29mdHdhcmVSZXZp" +
           "c2lvbgECDjsALgBEDjsAAAAM/////wEB/////wAAAAA=";

        private const string DeviceRevision_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAOAAAARGV2aWNlUmV2aXNp" +
           "b24BAg87AC4ARA87AAAADP////8BAf////8AAAAA";

        private const string ProductCode_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgALAAAAUHJvZHVjdENvZGUB" +
           "AhA7AC4ARBA7AAAADP////8BAf////8AAAAA";

        private const string DeviceManual_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAMAAAARGV2aWNlTWFudWFs" +
           "AQIROwAuAEQROwAAAAz/////AQH/////AAAAAA==";

        private const string DeviceClass_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgALAAAARGV2aWNlQ2xhc3MB" +
           "AhI7AC4ARBI7AAAADP////8BAf////8AAAAA";

        private const string SerialNumber_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAMAAAAU2VyaWFsTnVtYmVy" +
           "AQITOwAuAEQTOwAAAAz/////AQH/////AAAAAA==";

        private const string ProductInstanceUri_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgASAAAAUHJvZHVjdEluc3Rh" +
           "bmNlVXJpAQIUOwAuAEQUOwAAAAz/////AQH/////AAAAAA==";

        private const string RevisionCounter_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAPAAAAUmV2aXNpb25Db3Vu" +
           "dGVyAQIVOwAuAEQVOwAAAAb/////AQH/////AAAAAA==";

        private const string AssetId_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAHAAAAQXNzZXRJZAECFjsA" +
           "LgBEFjsAAAAM/////wEB/////wAAAAA=";

        private const string ComponentName_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgANAAAAQ29tcG9uZW50TmFt" +
           "ZQECFzsALgBEFzsAAAAV/////wEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAVAAAAQ29tcG9uZW50VHlw" +
           "ZUluc3RhbmNlAQL0OgEC9Dr0OgAAAgAAAAEAw0QAAQLYOgEAw0QAAQLlOg4AAAAVYIkKAgAAAAIADAAA" +
           "AE1hbnVmYWN0dXJlcgECCjsALgBECjsAAAAV/////wEB/////wAAAAAVYIkKAgAAAAIADwAAAE1hbnVm" +
           "YWN0dXJlclVyaQECCzsALgBECzsAAAAM/////wEB/////wAAAAAVYIkKAgAAAAIABQAAAE1vZGVsAQIM" +
           "OwAuAEQMOwAAABX/////AQH/////AAAAABVgiQoCAAAAAgAQAAAASGFyZHdhcmVSZXZpc2lvbgECDTsA" +
           "LgBEDTsAAAAM/////wEB/////wAAAAAVYIkKAgAAAAIAEAAAAFNvZnR3YXJlUmV2aXNpb24BAg47AC4A" +
           "RA47AAAADP////8BAf////8AAAAAFWCJCgIAAAACAA4AAABEZXZpY2VSZXZpc2lvbgECDzsALgBEDzsA" +
           "AAAM/////wEB/////wAAAAAVYIkKAgAAAAIACwAAAFByb2R1Y3RDb2RlAQIQOwAuAEQQOwAAAAz/////" +
           "AQH/////AAAAABVgiQoCAAAAAgAMAAAARGV2aWNlTWFudWFsAQIROwAuAEQROwAAAAz/////AQH/////" +
           "AAAAABVgiQoCAAAAAgALAAAARGV2aWNlQ2xhc3MBAhI7AC4ARBI7AAAADP////8BAf////8AAAAAFWCJ" +
           "CgIAAAACAAwAAABTZXJpYWxOdW1iZXIBAhM7AC4ARBM7AAAADP////8BAf////8AAAAAFWCJCgIAAAAC" +
           "ABIAAABQcm9kdWN0SW5zdGFuY2VVcmkBAhQ7AC4ARBQ7AAAADP////8BAf////8AAAAAFWCJCgIAAAAC" +
           "AA8AAABSZXZpc2lvbkNvdW50ZXIBAhU7AC4ARBU7AAAABv////8BAf////8AAAAAFWCJCgIAAAACAAcA" +
           "AABBc3NldElkAQIWOwAuAEQWOwAAAAz/////AQH/////AAAAABVgiQoCAAAAAgANAAAAQ29tcG9uZW50" +
           "TmFtZQECFzsALgBEFzsAAAAV/////wEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<LocalizedText> Manufacturer
        {
            get
            {
                return m_manufacturer;
            }

            set
            {
                if (!Object.ReferenceEquals(m_manufacturer, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_manufacturer = value;
            }
        }

        /// <remarks />
        public PropertyState<string> ManufacturerUri
        {
            get
            {
                return m_manufacturerUri;
            }

            set
            {
                if (!Object.ReferenceEquals(m_manufacturerUri, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_manufacturerUri = value;
            }
        }

        /// <remarks />
        public PropertyState<LocalizedText> Model
        {
            get
            {
                return m_model;
            }

            set
            {
                if (!Object.ReferenceEquals(m_model, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_model = value;
            }
        }

        /// <remarks />
        public PropertyState<string> HardwareRevision
        {
            get
            {
                return m_hardwareRevision;
            }

            set
            {
                if (!Object.ReferenceEquals(m_hardwareRevision, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_hardwareRevision = value;
            }
        }

        /// <remarks />
        public PropertyState<string> SoftwareRevision
        {
            get
            {
                return m_softwareRevision;
            }

            set
            {
                if (!Object.ReferenceEquals(m_softwareRevision, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_softwareRevision = value;
            }
        }

        /// <remarks />
        public PropertyState<string> DeviceRevision
        {
            get
            {
                return m_deviceRevision;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceRevision, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceRevision = value;
            }
        }

        /// <remarks />
        public PropertyState<string> ProductCode
        {
            get
            {
                return m_productCode;
            }

            set
            {
                if (!Object.ReferenceEquals(m_productCode, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_productCode = value;
            }
        }

        /// <remarks />
        public PropertyState<string> DeviceManual
        {
            get
            {
                return m_deviceManual;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceManual, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceManual = value;
            }
        }

        /// <remarks />
        public PropertyState<string> DeviceClass
        {
            get
            {
                return m_deviceClass;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceClass, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceClass = value;
            }
        }

        /// <remarks />
        public PropertyState<string> SerialNumber
        {
            get
            {
                return m_serialNumber;
            }

            set
            {
                if (!Object.ReferenceEquals(m_serialNumber, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_serialNumber = value;
            }
        }

        /// <remarks />
        public PropertyState<string> ProductInstanceUri
        {
            get
            {
                return m_productInstanceUri;
            }

            set
            {
                if (!Object.ReferenceEquals(m_productInstanceUri, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_productInstanceUri = value;
            }
        }

        /// <remarks />
        public PropertyState<int> RevisionCounter
        {
            get
            {
                return m_revisionCounter;
            }

            set
            {
                if (!Object.ReferenceEquals(m_revisionCounter, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_revisionCounter = value;
            }
        }

        /// <remarks />
        public PropertyState<string> AssetId
        {
            get
            {
                return m_assetId;
            }

            set
            {
                if (!Object.ReferenceEquals(m_assetId, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_assetId = value;
            }
        }

        /// <remarks />
        public PropertyState<LocalizedText> ComponentName
        {
            get
            {
                return m_componentName;
            }

            set
            {
                if (!Object.ReferenceEquals(m_componentName, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_componentName = value;
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
            if (m_manufacturer != null)
            {
                children.Add(m_manufacturer);
            }

            if (m_manufacturerUri != null)
            {
                children.Add(m_manufacturerUri);
            }

            if (m_model != null)
            {
                children.Add(m_model);
            }

            if (m_hardwareRevision != null)
            {
                children.Add(m_hardwareRevision);
            }

            if (m_softwareRevision != null)
            {
                children.Add(m_softwareRevision);
            }

            if (m_deviceRevision != null)
            {
                children.Add(m_deviceRevision);
            }

            if (m_productCode != null)
            {
                children.Add(m_productCode);
            }

            if (m_deviceManual != null)
            {
                children.Add(m_deviceManual);
            }

            if (m_deviceClass != null)
            {
                children.Add(m_deviceClass);
            }

            if (m_serialNumber != null)
            {
                children.Add(m_serialNumber);
            }

            if (m_productInstanceUri != null)
            {
                children.Add(m_productInstanceUri);
            }

            if (m_revisionCounter != null)
            {
                children.Add(m_revisionCounter);
            }

            if (m_assetId != null)
            {
                children.Add(m_assetId);
            }

            if (m_componentName != null)
            {
                children.Add(m_componentName);
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
                case Opc.Ua.Di.BrowseNames.Manufacturer:
                {
                    if (createOrReplace)
                    {
                        if (Manufacturer == null)
                        {
                            if (replacement == null)
                            {
                                Manufacturer = new PropertyState<LocalizedText>(this);
                            }
                            else
                            {
                                Manufacturer = (PropertyState<LocalizedText>)replacement;
                            }
                        }
                    }

                    instance = Manufacturer;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ManufacturerUri:
                {
                    if (createOrReplace)
                    {
                        if (ManufacturerUri == null)
                        {
                            if (replacement == null)
                            {
                                ManufacturerUri = new PropertyState<string>(this);
                            }
                            else
                            {
                                ManufacturerUri = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = ManufacturerUri;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Model:
                {
                    if (createOrReplace)
                    {
                        if (Model == null)
                        {
                            if (replacement == null)
                            {
                                Model = new PropertyState<LocalizedText>(this);
                            }
                            else
                            {
                                Model = (PropertyState<LocalizedText>)replacement;
                            }
                        }
                    }

                    instance = Model;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.HardwareRevision:
                {
                    if (createOrReplace)
                    {
                        if (HardwareRevision == null)
                        {
                            if (replacement == null)
                            {
                                HardwareRevision = new PropertyState<string>(this);
                            }
                            else
                            {
                                HardwareRevision = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = HardwareRevision;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.SoftwareRevision:
                {
                    if (createOrReplace)
                    {
                        if (SoftwareRevision == null)
                        {
                            if (replacement == null)
                            {
                                SoftwareRevision = new PropertyState<string>(this);
                            }
                            else
                            {
                                SoftwareRevision = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = SoftwareRevision;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.DeviceRevision:
                {
                    if (createOrReplace)
                    {
                        if (DeviceRevision == null)
                        {
                            if (replacement == null)
                            {
                                DeviceRevision = new PropertyState<string>(this);
                            }
                            else
                            {
                                DeviceRevision = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = DeviceRevision;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ProductCode:
                {
                    if (createOrReplace)
                    {
                        if (ProductCode == null)
                        {
                            if (replacement == null)
                            {
                                ProductCode = new PropertyState<string>(this);
                            }
                            else
                            {
                                ProductCode = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = ProductCode;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.DeviceManual:
                {
                    if (createOrReplace)
                    {
                        if (DeviceManual == null)
                        {
                            if (replacement == null)
                            {
                                DeviceManual = new PropertyState<string>(this);
                            }
                            else
                            {
                                DeviceManual = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = DeviceManual;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.DeviceClass:
                {
                    if (createOrReplace)
                    {
                        if (DeviceClass == null)
                        {
                            if (replacement == null)
                            {
                                DeviceClass = new PropertyState<string>(this);
                            }
                            else
                            {
                                DeviceClass = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = DeviceClass;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.SerialNumber:
                {
                    if (createOrReplace)
                    {
                        if (SerialNumber == null)
                        {
                            if (replacement == null)
                            {
                                SerialNumber = new PropertyState<string>(this);
                            }
                            else
                            {
                                SerialNumber = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = SerialNumber;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ProductInstanceUri:
                {
                    if (createOrReplace)
                    {
                        if (ProductInstanceUri == null)
                        {
                            if (replacement == null)
                            {
                                ProductInstanceUri = new PropertyState<string>(this);
                            }
                            else
                            {
                                ProductInstanceUri = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = ProductInstanceUri;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.RevisionCounter:
                {
                    if (createOrReplace)
                    {
                        if (RevisionCounter == null)
                        {
                            if (replacement == null)
                            {
                                RevisionCounter = new PropertyState<int>(this);
                            }
                            else
                            {
                                RevisionCounter = (PropertyState<int>)replacement;
                            }
                        }
                    }

                    instance = RevisionCounter;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.AssetId:
                {
                    if (createOrReplace)
                    {
                        if (AssetId == null)
                        {
                            if (replacement == null)
                            {
                                AssetId = new PropertyState<string>(this);
                            }
                            else
                            {
                                AssetId = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = AssetId;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ComponentName:
                {
                    if (createOrReplace)
                    {
                        if (ComponentName == null)
                        {
                            if (replacement == null)
                            {
                                ComponentName = new PropertyState<LocalizedText>(this);
                            }
                            else
                            {
                                ComponentName = (PropertyState<LocalizedText>)replacement;
                            }
                        }
                    }

                    instance = ComponentName;
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
        private PropertyState<LocalizedText> m_manufacturer;
        private PropertyState<string> m_manufacturerUri;
        private PropertyState<LocalizedText> m_model;
        private PropertyState<string> m_hardwareRevision;
        private PropertyState<string> m_softwareRevision;
        private PropertyState<string> m_deviceRevision;
        private PropertyState<string> m_productCode;
        private PropertyState<string> m_deviceManual;
        private PropertyState<string> m_deviceClass;
        private PropertyState<string> m_serialNumber;
        private PropertyState<string> m_productInstanceUri;
        private PropertyState<int> m_revisionCounter;
        private PropertyState<string> m_assetId;
        private PropertyState<LocalizedText> m_componentName;
        #endregion
    }
    #endif
    #endregion

    #region DeviceState Class
    #if (!OPCUA_EXCLUDE_DeviceState)
    /// <summary>
    /// Stores an instance of the DeviceType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class DeviceState : ComponentState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public DeviceState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.DeviceType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (DeviceClass != null)
            {
                DeviceClass.Initialize(context, DeviceClass_InitializationString);
            }

            if (ManufacturerUri != null)
            {
                ManufacturerUri.Initialize(context, ManufacturerUri_InitializationString);
            }

            if (ProductCode != null)
            {
                ProductCode.Initialize(context, ProductCode_InitializationString);
            }

            if (ProductInstanceUri != null)
            {
                ProductInstanceUri.Initialize(context, ProductInstanceUri_InitializationString);
            }

            if (DeviceHealth != null)
            {
                DeviceHealth.Initialize(context, DeviceHealth_InitializationString);
            }

            if (DeviceHealthAlarms != null)
            {
                DeviceHealthAlarms.Initialize(context, DeviceHealthAlarms_InitializationString);
            }

            if (DeviceTypeImage != null)
            {
                DeviceTypeImage.Initialize(context, DeviceTypeImage_InitializationString);
            }

            if (Documentation != null)
            {
                Documentation.Initialize(context, Documentation_InitializationString);
            }

            if (ProtocolSupport != null)
            {
                ProtocolSupport.Initialize(context, ProtocolSupport_InitializationString);
            }

            if (ImageSet != null)
            {
                ImageSet.Initialize(context, ImageSet_InitializationString);
            }
        }

        #region Initialization String
        private const string DeviceClass_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgALAAAARGV2aWNlQ2xhc3MB" +
           "AjY7AC4ARDY7AAAADP////8BAf////8AAAAA";

        private const string ManufacturerUri_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAPAAAATWFudWZhY3R1cmVy" +
           "VXJpAQIvOwAuAEQvOwAAAAz/////AQH/////AAAAAA==";

        private const string ProductCode_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgALAAAAUHJvZHVjdENvZGUB" +
           "AjQ7AC4ARDQ7AAAADP////8BAf////8AAAAA";

        private const string ProductInstanceUri_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgASAAAAUHJvZHVjdEluc3Rh" +
           "bmNlVXJpAQI4OwAuAEQ4OwAAAAz/////AQH/////AAAAAA==";

        private const string DeviceHealth_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAMAAAARGV2aWNlSGVhbHRo" +
           "AQJSOwAvAD9SOwAAAQKMPv////8BAf////8AAAAA";

        private const string DeviceHealthAlarms_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgASAAAARGV2aWNlSGVhbHRo" +
           "QWxhcm1zAQJTOwAvAD1TOwAA/////wAAAAA=";

        private const string DeviceTypeImage_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAgAPAAAARGV2aWNlVHlwZUlt" +
           "YWdlAQJUOwMAAAAAIQAAAE9yZ2FuaXplcyBwaWN0dXJlcyBvZiB0aGUgZGV2aWNlLgAvAD1UOwAA////" +
           "/wAAAAA=";

        private const string Documentation_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAgANAAAARG9jdW1lbnRhdGlv" +
           "bgECVjsDAAAAACMAAABPcmdhbml6ZXMgZG9jdW1lbnRzIGZvciB0aGUgZGV2aWNlLgAvAD1WOwAA////" +
           "/wAAAAA=";

        private const string ProtocolSupport_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAgAPAAAAUHJvdG9jb2xTdXBw" +
           "b3J0AQJYOwMAAAAAJwAAAFByb3RvY29sLXNwZWNpZmljIGZpbGVzIGZvciB0aGUgZGV2aWNlLgAvAD1Y" +
           "OwAA/////wAAAAA=";

        private const string ImageSet_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAgAIAAAASW1hZ2VTZXQBAlo7" +
           "AwAAAAAxAAAAT3JnYW5pemVzIGltYWdlcyB0aGF0IGFyZSB1c2VkIHdpdGhpbiBVSUVsZW1lbnRzLgAv" +
           "AD1aOwAA/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgASAAAARGV2aWNlVHlwZUlu" +
           "c3RhbmNlAQIYOwECGDsYOwAAAgAAAAEAw0QAAQLrOgEAw0QAAQLoOhIAAAA1YIkKAgAAAAIADAAAAE1h" +
           "bnVmYWN0dXJlcgECLjsDAAAAADAAAABOYW1lIG9mIHRoZSBjb21wYW55IHRoYXQgbWFudWZhY3R1cmVk" +
           "IHRoZSBkZXZpY2UALgBELjsAAAAV/////wEB/////wAAAAAVYIkKAgAAAAIADwAAAE1hbnVmYWN0dXJl" +
           "clVyaQECLzsALgBELzsAAAAM/////wEB/////wAAAAA1YIkKAgAAAAIABQAAAE1vZGVsAQIwOwMAAAAA" +
           "GAAAAE1vZGVsIG5hbWUgb2YgdGhlIGRldmljZQAuAEQwOwAAABX/////AQH/////AAAAADVgiQoCAAAA" +
           "AgAQAAAASGFyZHdhcmVSZXZpc2lvbgECMTsDAAAAACwAAABSZXZpc2lvbiBsZXZlbCBvZiB0aGUgaGFy" +
           "ZHdhcmUgb2YgdGhlIGRldmljZQAuAEQxOwAAAAz/////AQH/////AAAAADVgiQoCAAAAAgAQAAAAU29m" +
           "dHdhcmVSZXZpc2lvbgECMjsDAAAAADUAAABSZXZpc2lvbiBsZXZlbCBvZiB0aGUgc29mdHdhcmUvZmly" +
           "bXdhcmUgb2YgdGhlIGRldmljZQAuAEQyOwAAAAz/////AQH/////AAAAADVgiQoCAAAAAgAOAAAARGV2" +
           "aWNlUmV2aXNpb24BAjM7AwAAAAAkAAAAT3ZlcmFsbCByZXZpc2lvbiBsZXZlbCBvZiB0aGUgZGV2aWNl" +
           "AC4ARDM7AAAADP////8BAf////8AAAAAFWCJCgIAAAACAAsAAABQcm9kdWN0Q29kZQECNDsALgBENDsA" +
           "AAAM/////wEB/////wAAAAA1YIkKAgAAAAIADAAAAERldmljZU1hbnVhbAECNTsDAAAAAFoAAABBZGRy" +
           "ZXNzIChwYXRobmFtZSBpbiB0aGUgZmlsZSBzeXN0ZW0gb3IgYSBVUkwgfCBXZWIgYWRkcmVzcykgb2Yg" +
           "dXNlciBtYW51YWwgZm9yIHRoZSBkZXZpY2UALgBENTsAAAAM/////wEB/////wAAAAAVYIkKAgAAAAIA" +
           "CwAAAERldmljZUNsYXNzAQI2OwAuAEQ2OwAAAAz/////AQH/////AAAAADVgiQoCAAAAAgAMAAAAU2Vy" +
           "aWFsTnVtYmVyAQI3OwMAAAAATQAAAElkZW50aWZpZXIgdGhhdCB1bmlxdWVseSBpZGVudGlmaWVzLCB3" +
           "aXRoaW4gYSBtYW51ZmFjdHVyZXIsIGEgZGV2aWNlIGluc3RhbmNlAC4ARDc7AAAADP////8BAf////8A" +
           "AAAAFWCJCgIAAAACABIAAABQcm9kdWN0SW5zdGFuY2VVcmkBAjg7AC4ARDg7AAAADP////8BAf////8A" +
           "AAAANWCJCgIAAAACAA8AAABSZXZpc2lvbkNvdW50ZXIBAjk7AwAAAABpAAAAQW4gaW5jcmVtZW50YWwg" +
           "Y291bnRlciBpbmRpY2F0aW5nIHRoZSBudW1iZXIgb2YgdGltZXMgdGhlIHN0YXRpYyBkYXRhIHdpdGhp" +
           "biB0aGUgRGV2aWNlIGhhcyBiZWVuIG1vZGlmaWVkAC4ARDk7AAAABv////8BAf////8AAAAAFWCJCgIA" +
           "AAACAAwAAABEZXZpY2VIZWFsdGgBAlI7AC8AP1I7AAABAow+/////wEB/////wAAAAAEYIAKAQAAAAIA" +
           "EgAAAERldmljZUhlYWx0aEFsYXJtcwECUzsALwA9UzsAAP////8AAAAAJGCACgEAAAACAA8AAABEZXZp" +
           "Y2VUeXBlSW1hZ2UBAlQ7AwAAAAAhAAAAT3JnYW5pemVzIHBpY3R1cmVzIG9mIHRoZSBkZXZpY2UuAC8A" +
           "PVQ7AAD/////AAAAACRggAoBAAAAAgANAAAARG9jdW1lbnRhdGlvbgECVjsDAAAAACMAAABPcmdhbml6" +
           "ZXMgZG9jdW1lbnRzIGZvciB0aGUgZGV2aWNlLgAvAD1WOwAA/////wAAAAAkYIAKAQAAAAIADwAAAFBy" +
           "b3RvY29sU3VwcG9ydAECWDsDAAAAACcAAABQcm90b2NvbC1zcGVjaWZpYyBmaWxlcyBmb3IgdGhlIGRl" +
           "dmljZS4ALwA9WDsAAP////8AAAAAJGCACgEAAAACAAgAAABJbWFnZVNldAECWjsDAAAAADEAAABPcmdh" +
           "bml6ZXMgaW1hZ2VzIHRoYXQgYXJlIHVzZWQgd2l0aGluIFVJRWxlbWVudHMuAC8APVo7AAD/////AAAA" +
           "AA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public BaseDataVariableState<DeviceHealthEnumeration> DeviceHealth
        {
            get
            {
                return m_deviceHealth;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceHealth, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceHealth = value;
            }
        }

        /// <remarks />
        public FolderState DeviceHealthAlarms
        {
            get
            {
                return m_deviceHealthAlarms;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceHealthAlarms, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceHealthAlarms = value;
            }
        }

        /// <remarks />
        public FolderState DeviceTypeImage
        {
            get
            {
                return m_deviceTypeImage;
            }

            set
            {
                if (!Object.ReferenceEquals(m_deviceTypeImage, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_deviceTypeImage = value;
            }
        }

        /// <remarks />
        public FolderState Documentation
        {
            get
            {
                return m_documentation;
            }

            set
            {
                if (!Object.ReferenceEquals(m_documentation, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_documentation = value;
            }
        }

        /// <remarks />
        public FolderState ProtocolSupport
        {
            get
            {
                return m_protocolSupport;
            }

            set
            {
                if (!Object.ReferenceEquals(m_protocolSupport, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_protocolSupport = value;
            }
        }

        /// <remarks />
        public FolderState ImageSet
        {
            get
            {
                return m_imageSet;
            }

            set
            {
                if (!Object.ReferenceEquals(m_imageSet, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_imageSet = value;
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
            if (m_deviceHealth != null)
            {
                children.Add(m_deviceHealth);
            }

            if (m_deviceHealthAlarms != null)
            {
                children.Add(m_deviceHealthAlarms);
            }

            if (m_deviceTypeImage != null)
            {
                children.Add(m_deviceTypeImage);
            }

            if (m_documentation != null)
            {
                children.Add(m_documentation);
            }

            if (m_protocolSupport != null)
            {
                children.Add(m_protocolSupport);
            }

            if (m_imageSet != null)
            {
                children.Add(m_imageSet);
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
                case Opc.Ua.Di.BrowseNames.DeviceHealth:
                {
                    if (createOrReplace)
                    {
                        if (DeviceHealth == null)
                        {
                            if (replacement == null)
                            {
                                DeviceHealth = new BaseDataVariableState<DeviceHealthEnumeration>(this);
                            }
                            else
                            {
                                DeviceHealth = (BaseDataVariableState<DeviceHealthEnumeration>)replacement;
                            }
                        }
                    }

                    instance = DeviceHealth;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.DeviceHealthAlarms:
                {
                    if (createOrReplace)
                    {
                        if (DeviceHealthAlarms == null)
                        {
                            if (replacement == null)
                            {
                                DeviceHealthAlarms = new FolderState(this);
                            }
                            else
                            {
                                DeviceHealthAlarms = (FolderState)replacement;
                            }
                        }
                    }

                    instance = DeviceHealthAlarms;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.DeviceTypeImage:
                {
                    if (createOrReplace)
                    {
                        if (DeviceTypeImage == null)
                        {
                            if (replacement == null)
                            {
                                DeviceTypeImage = new FolderState(this);
                            }
                            else
                            {
                                DeviceTypeImage = (FolderState)replacement;
                            }
                        }
                    }

                    instance = DeviceTypeImage;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Documentation:
                {
                    if (createOrReplace)
                    {
                        if (Documentation == null)
                        {
                            if (replacement == null)
                            {
                                Documentation = new FolderState(this);
                            }
                            else
                            {
                                Documentation = (FolderState)replacement;
                            }
                        }
                    }

                    instance = Documentation;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ProtocolSupport:
                {
                    if (createOrReplace)
                    {
                        if (ProtocolSupport == null)
                        {
                            if (replacement == null)
                            {
                                ProtocolSupport = new FolderState(this);
                            }
                            else
                            {
                                ProtocolSupport = (FolderState)replacement;
                            }
                        }
                    }

                    instance = ProtocolSupport;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ImageSet:
                {
                    if (createOrReplace)
                    {
                        if (ImageSet == null)
                        {
                            if (replacement == null)
                            {
                                ImageSet = new FolderState(this);
                            }
                            else
                            {
                                ImageSet = (FolderState)replacement;
                            }
                        }
                    }

                    instance = ImageSet;
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
        private BaseDataVariableState<DeviceHealthEnumeration> m_deviceHealth;
        private FolderState m_deviceHealthAlarms;
        private FolderState m_deviceTypeImage;
        private FolderState m_documentation;
        private FolderState m_protocolSupport;
        private FolderState m_imageSet;
        #endregion
    }
    #endif
    #endregion

    #region SoftwareState Class
    #if (!OPCUA_EXCLUDE_SoftwareState)
    /// <summary>
    /// Stores an instance of the SoftwareType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class SoftwareState : ComponentState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public SoftwareState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.SoftwareType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAUAAAAU29mdHdhcmVUeXBl" +
           "SW5zdGFuY2UBAlw7AQJcO1w7AAD/////AwAAABVgiQoCAAAAAgAMAAAATWFudWZhY3R1cmVyAQJyOwAu" +
           "AERyOwAAABX/////AQH/////AAAAABVgiQoCAAAAAgAFAAAATW9kZWwBAnQ7AC4ARHQ7AAAAFf////8B" +
           "Af////8AAAAAFWCJCgIAAAACABAAAABTb2Z0d2FyZVJldmlzaW9uAQJ2OwAuAER2OwAAAAz/////AQH/" +
           "////AAAAAA==";
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

    #region BlockState Class
    #if (!OPCUA_EXCLUDE_BlockState)
    /// <summary>
    /// Stores an instance of the BlockType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class BlockState : TopologyElementState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public BlockState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.BlockType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (RevisionCounter != null)
            {
                RevisionCounter.Initialize(context, RevisionCounter_InitializationString);
            }

            if (ActualMode != null)
            {
                ActualMode.Initialize(context, ActualMode_InitializationString);
            }

            if (PermittedMode != null)
            {
                PermittedMode.Initialize(context, PermittedMode_InitializationString);
            }

            if (NormalMode != null)
            {
                NormalMode.Initialize(context, NormalMode_InitializationString);
            }

            if (TargetMode != null)
            {
                TargetMode.Initialize(context, TargetMode_InitializationString);
            }
        }

        #region Initialization String
        private const string RevisionCounter_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////zVgiQoCAAAAAgAPAAAAUmV2aXNpb25Db3Vu" +
           "dGVyAQKWOwMAAAAAZQAAAEluY3JlbWVudGFsIGNvdW50ZXIgaW5kaWNhdGluZyB0aGUgbnVtYmVyIG9m" +
           "IHRpbWVzIHRoZSBzdGF0aWMgZGF0YSB3aXRoaW4gdGhlIEJsb2NrIGhhcyBiZWVuIG1vZGlmaWVkAC4A" +
           "RJY7AAAABv////8BAf////8AAAAA";

        private const string ActualMode_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////zVgiQoCAAAAAgAKAAAAQWN0dWFsTW9kZQEC" +
           "lzsDAAAAADYAAABDdXJyZW50IG1vZGUgb2Ygb3BlcmF0aW9uIHRoZSBCbG9jayBpcyBhYmxlIHRvIGFj" +
           "aGlldmUALgBElzsAAAAV/////wEB/////wAAAAA=";

        private const string PermittedMode_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////zdgiQoCAAAAAgANAAAAUGVybWl0dGVkTW9k" +
           "ZQECmDsDAAAAAFMAAABNb2RlcyBvZiBvcGVyYXRpb24gdGhhdCBhcmUgYWxsb3dlZCBmb3IgdGhlIEJs" +
           "b2NrIGJhc2VkIG9uIGFwcGxpY2F0aW9uIHJlcXVpcmVtZW50cwAuAESYOwAAABUBAAAAAQAAAAAAAAAB" +
           "Af////8AAAAA";

        private const string NormalMode_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////zdgiQoCAAAAAgAKAAAATm9ybWFsTW9kZQEC" +
           "mTsDAAAAAEIAAABNb2RlIHRoZSBCbG9jayBzaG91bGQgYmUgc2V0IHRvIGR1cmluZyBub3JtYWwgb3Bl" +
           "cmF0aW5nIGNvbmRpdGlvbnMALgBEmTsAAAAVAQAAAAEAAAAAAAAAAQH/////AAAAAA==";

        private const string TargetMode_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////zdgiQoCAAAAAgAKAAAAVGFyZ2V0TW9kZQEC" +
           "mjsDAAAAAC8AAABNb2RlIG9mIG9wZXJhdGlvbiB0aGF0IGlzIGRlc2lyZWQgZm9yIHRoZSBCbG9jawAu" +
           "AESaOwAAABUBAAAAAQAAAAAAAAABAf////8AAAAA";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgARAAAAQmxvY2tUeXBlSW5z" +
           "dGFuY2UBAoA7AQKAO4A7AAD/////BQAAADVgiQoCAAAAAgAPAAAAUmV2aXNpb25Db3VudGVyAQKWOwMA" +
           "AAAAZQAAAEluY3JlbWVudGFsIGNvdW50ZXIgaW5kaWNhdGluZyB0aGUgbnVtYmVyIG9mIHRpbWVzIHRo" +
           "ZSBzdGF0aWMgZGF0YSB3aXRoaW4gdGhlIEJsb2NrIGhhcyBiZWVuIG1vZGlmaWVkAC4ARJY7AAAABv//" +
           "//8BAf////8AAAAANWCJCgIAAAACAAoAAABBY3R1YWxNb2RlAQKXOwMAAAAANgAAAEN1cnJlbnQgbW9k" +
           "ZSBvZiBvcGVyYXRpb24gdGhlIEJsb2NrIGlzIGFibGUgdG8gYWNoaWV2ZQAuAESXOwAAABX/////AQH/" +
           "////AAAAADdgiQoCAAAAAgANAAAAUGVybWl0dGVkTW9kZQECmDsDAAAAAFMAAABNb2RlcyBvZiBvcGVy" +
           "YXRpb24gdGhhdCBhcmUgYWxsb3dlZCBmb3IgdGhlIEJsb2NrIGJhc2VkIG9uIGFwcGxpY2F0aW9uIHJl" +
           "cXVpcmVtZW50cwAuAESYOwAAABUBAAAAAQAAAAAAAAABAf////8AAAAAN2CJCgIAAAACAAoAAABOb3Jt" +
           "YWxNb2RlAQKZOwMAAAAAQgAAAE1vZGUgdGhlIEJsb2NrIHNob3VsZCBiZSBzZXQgdG8gZHVyaW5nIG5v" +
           "cm1hbCBvcGVyYXRpbmcgY29uZGl0aW9ucwAuAESZOwAAABUBAAAAAQAAAAAAAAABAf////8AAAAAN2CJ" +
           "CgIAAAACAAoAAABUYXJnZXRNb2RlAQKaOwMAAAAALwAAAE1vZGUgb2Ygb3BlcmF0aW9uIHRoYXQgaXMg" +
           "ZGVzaXJlZCBmb3IgdGhlIEJsb2NrAC4ARJo7AAAAFQEAAAABAAAAAAAAAAEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<int> RevisionCounter
        {
            get
            {
                return m_revisionCounter;
            }

            set
            {
                if (!Object.ReferenceEquals(m_revisionCounter, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_revisionCounter = value;
            }
        }

        /// <remarks />
        public PropertyState<LocalizedText> ActualMode
        {
            get
            {
                return m_actualMode;
            }

            set
            {
                if (!Object.ReferenceEquals(m_actualMode, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_actualMode = value;
            }
        }

        /// <remarks />
        public PropertyState<LocalizedText[]> PermittedMode
        {
            get
            {
                return m_permittedMode;
            }

            set
            {
                if (!Object.ReferenceEquals(m_permittedMode, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_permittedMode = value;
            }
        }

        /// <remarks />
        public PropertyState<LocalizedText[]> NormalMode
        {
            get
            {
                return m_normalMode;
            }

            set
            {
                if (!Object.ReferenceEquals(m_normalMode, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_normalMode = value;
            }
        }

        /// <remarks />
        public PropertyState<LocalizedText[]> TargetMode
        {
            get
            {
                return m_targetMode;
            }

            set
            {
                if (!Object.ReferenceEquals(m_targetMode, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_targetMode = value;
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
            if (m_revisionCounter != null)
            {
                children.Add(m_revisionCounter);
            }

            if (m_actualMode != null)
            {
                children.Add(m_actualMode);
            }

            if (m_permittedMode != null)
            {
                children.Add(m_permittedMode);
            }

            if (m_normalMode != null)
            {
                children.Add(m_normalMode);
            }

            if (m_targetMode != null)
            {
                children.Add(m_targetMode);
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
                case Opc.Ua.Di.BrowseNames.RevisionCounter:
                {
                    if (createOrReplace)
                    {
                        if (RevisionCounter == null)
                        {
                            if (replacement == null)
                            {
                                RevisionCounter = new PropertyState<int>(this);
                            }
                            else
                            {
                                RevisionCounter = (PropertyState<int>)replacement;
                            }
                        }
                    }

                    instance = RevisionCounter;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ActualMode:
                {
                    if (createOrReplace)
                    {
                        if (ActualMode == null)
                        {
                            if (replacement == null)
                            {
                                ActualMode = new PropertyState<LocalizedText>(this);
                            }
                            else
                            {
                                ActualMode = (PropertyState<LocalizedText>)replacement;
                            }
                        }
                    }

                    instance = ActualMode;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.PermittedMode:
                {
                    if (createOrReplace)
                    {
                        if (PermittedMode == null)
                        {
                            if (replacement == null)
                            {
                                PermittedMode = new PropertyState<LocalizedText[]>(this);
                            }
                            else
                            {
                                PermittedMode = (PropertyState<LocalizedText[]>)replacement;
                            }
                        }
                    }

                    instance = PermittedMode;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.NormalMode:
                {
                    if (createOrReplace)
                    {
                        if (NormalMode == null)
                        {
                            if (replacement == null)
                            {
                                NormalMode = new PropertyState<LocalizedText[]>(this);
                            }
                            else
                            {
                                NormalMode = (PropertyState<LocalizedText[]>)replacement;
                            }
                        }
                    }

                    instance = NormalMode;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.TargetMode:
                {
                    if (createOrReplace)
                    {
                        if (TargetMode == null)
                        {
                            if (replacement == null)
                            {
                                TargetMode = new PropertyState<LocalizedText[]>(this);
                            }
                            else
                            {
                                TargetMode = (PropertyState<LocalizedText[]>)replacement;
                            }
                        }
                    }

                    instance = TargetMode;
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
        private PropertyState<int> m_revisionCounter;
        private PropertyState<LocalizedText> m_actualMode;
        private PropertyState<LocalizedText[]> m_permittedMode;
        private PropertyState<LocalizedText[]> m_normalMode;
        private PropertyState<LocalizedText[]> m_targetMode;
        #endregion
    }
    #endif
    #endregion

    #region DeviceHealthDiagnosticAlarmState Class
    #if (!OPCUA_EXCLUDE_DeviceHealthDiagnosticAlarmState)
    /// <summary>
    /// Stores an instance of the DeviceHealthDiagnosticAlarmType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class DeviceHealthDiagnosticAlarmState : InstrumentDiagnosticAlarmState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public DeviceHealthDiagnosticAlarmState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.DeviceHealthDiagnosticAlarmType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAnAAAARGV2aWNlSGVhbHRo" +
           "RGlhZ25vc3RpY0FsYXJtVHlwZUluc3RhbmNlAQKbOwECmzubOwAA/////xsAAAAVYIkKAgAAAAAABwAA" +
           "AEV2ZW50SWQBApw7AC4ARJw7AAAAD/////8BAf////8AAAAAFWCJCgIAAAAAAAkAAABFdmVudFR5cGUB" +
           "Ap07AC4ARJ07AAAAEf////8BAf////8AAAAAFWCJCgIAAAAAAAoAAABTb3VyY2VOb2RlAQKeOwAuAESe" +
           "OwAAABH/////AQH/////AAAAABVgiQoCAAAAAAAKAAAAU291cmNlTmFtZQECnzsALgBEnzsAAAAM////" +
           "/wEB/////wAAAAAVYIkKAgAAAAAABAAAAFRpbWUBAqA7AC4ARKA7AAABACYB/////wEB/////wAAAAAV" +
           "YIkKAgAAAAAACwAAAFJlY2VpdmVUaW1lAQKhOwAuAEShOwAAAQAmAf////8BAf////8AAAAAFWCJCgIA" +
           "AAAAAAcAAABNZXNzYWdlAQKjOwAuAESjOwAAABX/////AQH/////AAAAABVgiQoCAAAAAAAIAAAAU2V2" +
           "ZXJpdHkBAqQ7AC4ARKQ7AAAABf////8BAf////8AAAAAFWCJCgIAAAAAABAAAABDb25kaXRpb25DbGFz" +
           "c0lkAQKlOwAuAESlOwAAABH/////AQH/////AAAAABVgiQoCAAAAAAASAAAAQ29uZGl0aW9uQ2xhc3NO" +
           "YW1lAQKmOwAuAESmOwAAABX/////AQH/////AAAAABVgiQoCAAAAAAANAAAAQ29uZGl0aW9uTmFtZQEC" +
           "qTsALgBEqTsAAAAM/////wEB/////wAAAAAVYIkKAgAAAAAACAAAAEJyYW5jaElkAQKqOwAuAESqOwAA" +
           "ABH/////AQH/////AAAAABVgiQoCAAAAAAAGAAAAUmV0YWluAQKrOwAuAESrOwAAAAH/////AQH/////" +
           "AAAAABVgiQoCAAAAAAAMAAAARW5hYmxlZFN0YXRlAQKsOwAvAQAjI6w7AAAAFf////8BAQUAAAABACwj" +
           "AAECxDsBACwjAAECzTsBACwjAAEC2jsBACwjAAEC5DsBACwjAAEC9jsBAAAAFWCJCgIAAAAAAAIAAABJ" +
           "ZAECrTsALgBErTsAAAAB/////wEB/////wAAAAAVYIkKAgAAAAAABwAAAFF1YWxpdHkBArU7AC8BACoj" +
           "tTsAAAAT/////wEB/////wEAAAAVYIkKAgAAAAAADwAAAFNvdXJjZVRpbWVzdGFtcAECtjsALgBEtjsA" +
           "AAEAJgH/////AQH/////AAAAABVgiQoCAAAAAAAMAAAATGFzdFNldmVyaXR5AQK3OwAvAQAqI7c7AAAA" +
           "Bf////8BAf////8BAAAAFWCJCgIAAAAAAA8AAABTb3VyY2VUaW1lc3RhbXABArg7AC4ARLg7AAABACYB" +
           "/////wEB/////wAAAAAVYIkKAgAAAAAABwAAAENvbW1lbnQBArk7AC8BACojuTsAAAAV/////wEB////" +
           "/wEAAAAVYIkKAgAAAAAADwAAAFNvdXJjZVRpbWVzdGFtcAECujsALgBEujsAAAEAJgH/////AQH/////" +
           "AAAAABVgiQoCAAAAAAAMAAAAQ2xpZW50VXNlcklkAQK7OwAuAES7OwAAAAz/////AQH/////AAAAAARh" +
           "ggoEAAAAAAAHAAAARGlzYWJsZQECvDsALwEARCO8OwAAAQEBAAAAAQD5CwABAPMKAAAAAARhggoEAAAA" +
           "AAAGAAAARW5hYmxlAQK9OwAvAQBDI707AAABAQEAAAABAPkLAAEA8woAAAAABGGCCgQAAAAAAAoAAABB" +
           "ZGRDb21tZW50AQK+OwAvAQBFI747AAABAQEAAAABAPkLAAEADQsBAAAAF2CpCgIAAAAAAA4AAABJbnB1" +
           "dEFyZ3VtZW50cwECvzsALgBEvzsAAJYCAAAAAQAqAQFGAAAABwAAAEV2ZW50SWQAD/////8AAAAAAwAA" +
           "AAAoAAAAVGhlIGlkZW50aWZpZXIgZm9yIHRoZSBldmVudCB0byBjb21tZW50LgEAKgEBQgAAAAcAAABD" +
           "b21tZW50ABX/////AAAAAAMAAAAAJAAAAFRoZSBjb21tZW50IHRvIGFkZCB0byB0aGUgY29uZGl0aW9u" +
           "LgEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAFWCJCgIAAAAAAAoAAABBY2tlZFN0YXRlAQLEOwAvAQAj" +
           "I8Q7AAAAFf////8BAQEAAAABACwjAQECrDsBAAAAFWCJCgIAAAAAAAIAAABJZAECxTsALgBExTsAAAAB" +
           "/////wEB/////wAAAAAEYYIKBAAAAAAACwAAAEFja25vd2xlZGdlAQLWOwAvAQCXI9Y7AAABAQEAAAAB" +
           "APkLAAEA8CIBAAAAF2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwEC1zsALgBE1zsAAJYCAAAAAQAq" +
           "AQFGAAAABwAAAEV2ZW50SWQAD/////8AAAAAAwAAAAAoAAAAVGhlIGlkZW50aWZpZXIgZm9yIHRoZSBl" +
           "dmVudCB0byBjb21tZW50LgEAKgEBQgAAAAcAAABDb21tZW50ABX/////AAAAAAMAAAAAJAAAAFRoZSBj" +
           "b21tZW50IHRvIGFkZCB0byB0aGUgY29uZGl0aW9uLgEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAFWCJ" +
           "CgIAAAAAAAsAAABBY3RpdmVTdGF0ZQEC2jsALwEAIyPaOwAAABX/////AQEBAAAAAQAsIwEBAqw7AQAA" +
           "ABVgiQoCAAAAAAACAAAASWQBAts7AC4ARNs7AAAAAf////8BAf////8AAAAAFWCJCgIAAAAAAAkAAABJ" +
           "bnB1dE5vZGUBAuM7AC4AROM7AAAAEf////8BAf////8AAAAAFWCJCgIAAAAAABMAAABTdXBwcmVzc2Vk" +
           "T3JTaGVsdmVkAQIJPAAuAEQJPAAAAAH/////AQH/////AAAAABVgiQoCAAAAAAALAAAATm9ybWFsU3Rh" +
           "dGUBAi88AC4ARC88AAAAEf////8BAf////8AAAAA";
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

    #region FailureAlarmState Class
    #if (!OPCUA_EXCLUDE_FailureAlarmState)
    /// <summary>
    /// Stores an instance of the FailureAlarmType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class FailureAlarmState : DeviceHealthDiagnosticAlarmState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public FailureAlarmState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.FailureAlarmType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAYAAAARmFpbHVyZUFsYXJt" +
           "VHlwZUluc3RhbmNlAQIwPAECMDwwPAAA/////xsAAAAVYIkKAgAAAAAABwAAAEV2ZW50SWQBAjE8AC4A" +
           "RDE8AAAAD/////8BAf////8AAAAAFWCJCgIAAAAAAAkAAABFdmVudFR5cGUBAjI8AC4ARDI8AAAAEf//" +
           "//8BAf////8AAAAAFWCJCgIAAAAAAAoAAABTb3VyY2VOb2RlAQIzPAAuAEQzPAAAABH/////AQH/////" +
           "AAAAABVgiQoCAAAAAAAKAAAAU291cmNlTmFtZQECNDwALgBENDwAAAAM/////wEB/////wAAAAAVYIkK" +
           "AgAAAAAABAAAAFRpbWUBAjU8AC4ARDU8AAABACYB/////wEB/////wAAAAAVYIkKAgAAAAAACwAAAFJl" +
           "Y2VpdmVUaW1lAQI2PAAuAEQ2PAAAAQAmAf////8BAf////8AAAAAFWCJCgIAAAAAAAcAAABNZXNzYWdl" +
           "AQI4PAAuAEQ4PAAAABX/////AQH/////AAAAABVgiQoCAAAAAAAIAAAAU2V2ZXJpdHkBAjk8AC4ARDk8" +
           "AAAABf////8BAf////8AAAAAFWCJCgIAAAAAABAAAABDb25kaXRpb25DbGFzc0lkAQI6PAAuAEQ6PAAA" +
           "ABH/////AQH/////AAAAABVgiQoCAAAAAAASAAAAQ29uZGl0aW9uQ2xhc3NOYW1lAQI7PAAuAEQ7PAAA" +
           "ABX/////AQH/////AAAAABVgiQoCAAAAAAANAAAAQ29uZGl0aW9uTmFtZQECPjwALgBEPjwAAAAM////" +
           "/wEB/////wAAAAAVYIkKAgAAAAAACAAAAEJyYW5jaElkAQI/PAAuAEQ/PAAAABH/////AQH/////AAAA" +
           "ABVgiQoCAAAAAAAGAAAAUmV0YWluAQJAPAAuAERAPAAAAAH/////AQH/////AAAAABVgiQoCAAAAAAAM" +
           "AAAARW5hYmxlZFN0YXRlAQJBPAAvAQAjI0E8AAAAFf////8BAQUAAAABACwjAAECWTwBACwjAAECYjwB" +
           "ACwjAAECbzwBACwjAAECeTwBACwjAAECizwBAAAAFWCJCgIAAAAAAAIAAABJZAECQjwALgBEQjwAAAAB" +
           "/////wEB/////wAAAAAVYIkKAgAAAAAABwAAAFF1YWxpdHkBAko8AC8BACojSjwAAAAT/////wEB////" +
           "/wEAAAAVYIkKAgAAAAAADwAAAFNvdXJjZVRpbWVzdGFtcAECSzwALgBESzwAAAEAJgH/////AQH/////" +
           "AAAAABVgiQoCAAAAAAAMAAAATGFzdFNldmVyaXR5AQJMPAAvAQAqI0w8AAAABf////8BAf////8BAAAA" +
           "FWCJCgIAAAAAAA8AAABTb3VyY2VUaW1lc3RhbXABAk08AC4ARE08AAABACYB/////wEB/////wAAAAAV" +
           "YIkKAgAAAAAABwAAAENvbW1lbnQBAk48AC8BACojTjwAAAAV/////wEB/////wEAAAAVYIkKAgAAAAAA" +
           "DwAAAFNvdXJjZVRpbWVzdGFtcAECTzwALgBETzwAAAEAJgH/////AQH/////AAAAABVgiQoCAAAAAAAM" +
           "AAAAQ2xpZW50VXNlcklkAQJQPAAuAERQPAAAAAz/////AQH/////AAAAAARhggoEAAAAAAAHAAAARGlz" +
           "YWJsZQECUTwALwEARCNRPAAAAQEBAAAAAQD5CwABAPMKAAAAAARhggoEAAAAAAAGAAAARW5hYmxlAQJS" +
           "PAAvAQBDI1I8AAABAQEAAAABAPkLAAEA8woAAAAABGGCCgQAAAAAAAoAAABBZGRDb21tZW50AQJTPAAv" +
           "AQBFI1M8AAABAQEAAAABAPkLAAEADQsBAAAAF2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECVDwA" +
           "LgBEVDwAAJYCAAAAAQAqAQFGAAAABwAAAEV2ZW50SWQAD/////8AAAAAAwAAAAAoAAAAVGhlIGlkZW50" +
           "aWZpZXIgZm9yIHRoZSBldmVudCB0byBjb21tZW50LgEAKgEBQgAAAAcAAABDb21tZW50ABX/////AAAA" +
           "AAMAAAAAJAAAAFRoZSBjb21tZW50IHRvIGFkZCB0byB0aGUgY29uZGl0aW9uLgEAKAEBAAAAAQAAAAAA" +
           "AAABAf////8AAAAAFWCJCgIAAAAAAAoAAABBY2tlZFN0YXRlAQJZPAAvAQAjI1k8AAAAFf////8BAQEA" +
           "AAABACwjAQECQTwBAAAAFWCJCgIAAAAAAAIAAABJZAECWjwALgBEWjwAAAAB/////wEB/////wAAAAAE" +
           "YYIKBAAAAAAACwAAAEFja25vd2xlZGdlAQJrPAAvAQCXI2s8AAABAQEAAAABAPkLAAEA8CIBAAAAF2Cp" +
           "CgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECbDwALgBEbDwAAJYCAAAAAQAqAQFGAAAABwAAAEV2ZW50" +
           "SWQAD/////8AAAAAAwAAAAAoAAAAVGhlIGlkZW50aWZpZXIgZm9yIHRoZSBldmVudCB0byBjb21tZW50" +
           "LgEAKgEBQgAAAAcAAABDb21tZW50ABX/////AAAAAAMAAAAAJAAAAFRoZSBjb21tZW50IHRvIGFkZCB0" +
           "byB0aGUgY29uZGl0aW9uLgEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAFWCJCgIAAAAAAAsAAABBY3Rp" +
           "dmVTdGF0ZQECbzwALwEAIyNvPAAAABX/////AQEBAAAAAQAsIwEBAkE8AQAAABVgiQoCAAAAAAACAAAA" +
           "SWQBAnA8AC4ARHA8AAAAAf////8BAf////8AAAAAFWCJCgIAAAAAAAkAAABJbnB1dE5vZGUBAng8AC4A" +
           "RHg8AAAAEf////8BAf////8AAAAAFWCJCgIAAAAAABMAAABTdXBwcmVzc2VkT3JTaGVsdmVkAQKePAAu" +
           "AESePAAAAAH/////AQH/////AAAAABVgiQoCAAAAAAALAAAATm9ybWFsU3RhdGUBAsQ8AC4ARMQ8AAAA" +
           "Ef////8BAf////8AAAAA";
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

    #region CheckFunctionAlarmState Class
    #if (!OPCUA_EXCLUDE_CheckFunctionAlarmState)
    /// <summary>
    /// Stores an instance of the CheckFunctionAlarmType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class CheckFunctionAlarmState : DeviceHealthDiagnosticAlarmState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public CheckFunctionAlarmState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.CheckFunctionAlarmType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAeAAAAQ2hlY2tGdW5jdGlv" +
           "bkFsYXJtVHlwZUluc3RhbmNlAQLFPAECxTzFPAAA/////xsAAAAVYIkKAgAAAAAABwAAAEV2ZW50SWQB" +
           "AsY8AC4ARMY8AAAAD/////8BAf////8AAAAAFWCJCgIAAAAAAAkAAABFdmVudFR5cGUBAsc8AC4ARMc8" +
           "AAAAEf////8BAf////8AAAAAFWCJCgIAAAAAAAoAAABTb3VyY2VOb2RlAQLIPAAuAETIPAAAABH/////" +
           "AQH/////AAAAABVgiQoCAAAAAAAKAAAAU291cmNlTmFtZQECyTwALgBEyTwAAAAM/////wEB/////wAA" +
           "AAAVYIkKAgAAAAAABAAAAFRpbWUBAso8AC4ARMo8AAABACYB/////wEB/////wAAAAAVYIkKAgAAAAAA" +
           "CwAAAFJlY2VpdmVUaW1lAQLLPAAuAETLPAAAAQAmAf////8BAf////8AAAAAFWCJCgIAAAAAAAcAAABN" +
           "ZXNzYWdlAQLNPAAuAETNPAAAABX/////AQH/////AAAAABVgiQoCAAAAAAAIAAAAU2V2ZXJpdHkBAs48" +
           "AC4ARM48AAAABf////8BAf////8AAAAAFWCJCgIAAAAAABAAAABDb25kaXRpb25DbGFzc0lkAQLPPAAu" +
           "AETPPAAAABH/////AQH/////AAAAABVgiQoCAAAAAAASAAAAQ29uZGl0aW9uQ2xhc3NOYW1lAQLQPAAu" +
           "AETQPAAAABX/////AQH/////AAAAABVgiQoCAAAAAAANAAAAQ29uZGl0aW9uTmFtZQEC0zwALgBE0zwA" +
           "AAAM/////wEB/////wAAAAAVYIkKAgAAAAAACAAAAEJyYW5jaElkAQLUPAAuAETUPAAAABH/////AQH/" +
           "////AAAAABVgiQoCAAAAAAAGAAAAUmV0YWluAQLVPAAuAETVPAAAAAH/////AQH/////AAAAABVgiQoC" +
           "AAAAAAAMAAAARW5hYmxlZFN0YXRlAQLWPAAvAQAjI9Y8AAAAFf////8BAQUAAAABACwjAAEC7jwBACwj" +
           "AAEC9zwBACwjAAECBD0BACwjAAECDj0BACwjAAECID0BAAAAFWCJCgIAAAAAAAIAAABJZAEC1zwALgBE" +
           "1zwAAAAB/////wEB/////wAAAAAVYIkKAgAAAAAABwAAAFF1YWxpdHkBAt88AC8BACoj3zwAAAAT////" +
           "/wEB/////wEAAAAVYIkKAgAAAAAADwAAAFNvdXJjZVRpbWVzdGFtcAEC4DwALgBE4DwAAAEAJgH/////" +
           "AQH/////AAAAABVgiQoCAAAAAAAMAAAATGFzdFNldmVyaXR5AQLhPAAvAQAqI+E8AAAABf////8BAf//" +
           "//8BAAAAFWCJCgIAAAAAAA8AAABTb3VyY2VUaW1lc3RhbXABAuI8AC4AROI8AAABACYB/////wEB////" +
           "/wAAAAAVYIkKAgAAAAAABwAAAENvbW1lbnQBAuM8AC8BACoj4zwAAAAV/////wEB/////wEAAAAVYIkK" +
           "AgAAAAAADwAAAFNvdXJjZVRpbWVzdGFtcAEC5DwALgBE5DwAAAEAJgH/////AQH/////AAAAABVgiQoC" +
           "AAAAAAAMAAAAQ2xpZW50VXNlcklkAQLlPAAuAETlPAAAAAz/////AQH/////AAAAAARhggoEAAAAAAAH" +
           "AAAARGlzYWJsZQEC5jwALwEARCPmPAAAAQEBAAAAAQD5CwABAPMKAAAAAARhggoEAAAAAAAGAAAARW5h" +
           "YmxlAQLnPAAvAQBDI+c8AAABAQEAAAABAPkLAAEA8woAAAAABGGCCgQAAAAAAAoAAABBZGRDb21tZW50" +
           "AQLoPAAvAQBFI+g8AAABAQEAAAABAPkLAAEADQsBAAAAF2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50" +
           "cwEC6TwALgBE6TwAAJYCAAAAAQAqAQFGAAAABwAAAEV2ZW50SWQAD/////8AAAAAAwAAAAAoAAAAVGhl" +
           "IGlkZW50aWZpZXIgZm9yIHRoZSBldmVudCB0byBjb21tZW50LgEAKgEBQgAAAAcAAABDb21tZW50ABX/" +
           "////AAAAAAMAAAAAJAAAAFRoZSBjb21tZW50IHRvIGFkZCB0byB0aGUgY29uZGl0aW9uLgEAKAEBAAAA" +
           "AQAAAAAAAAABAf////8AAAAAFWCJCgIAAAAAAAoAAABBY2tlZFN0YXRlAQLuPAAvAQAjI+48AAAAFf//" +
           "//8BAQEAAAABACwjAQEC1jwBAAAAFWCJCgIAAAAAAAIAAABJZAEC7zwALgBE7zwAAAAB/////wEB////" +
           "/wAAAAAEYYIKBAAAAAAACwAAAEFja25vd2xlZGdlAQIAPQAvAQCXIwA9AAABAQEAAAABAPkLAAEA8CIB" +
           "AAAAF2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECAT0ALgBEAT0AAJYCAAAAAQAqAQFGAAAABwAA" +
           "AEV2ZW50SWQAD/////8AAAAAAwAAAAAoAAAAVGhlIGlkZW50aWZpZXIgZm9yIHRoZSBldmVudCB0byBj" +
           "b21tZW50LgEAKgEBQgAAAAcAAABDb21tZW50ABX/////AAAAAAMAAAAAJAAAAFRoZSBjb21tZW50IHRv" +
           "IGFkZCB0byB0aGUgY29uZGl0aW9uLgEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAFWCJCgIAAAAAAAsA" +
           "AABBY3RpdmVTdGF0ZQECBD0ALwEAIyMEPQAAABX/////AQEBAAAAAQAsIwEBAtY8AQAAABVgiQoCAAAA" +
           "AAACAAAASWQBAgU9AC4ARAU9AAAAAf////8BAf////8AAAAAFWCJCgIAAAAAAAkAAABJbnB1dE5vZGUB" +
           "Ag09AC4ARA09AAAAEf////8BAf////8AAAAAFWCJCgIAAAAAABMAAABTdXBwcmVzc2VkT3JTaGVsdmVk" +
           "AQIzPQAuAEQzPQAAAAH/////AQH/////AAAAABVgiQoCAAAAAAALAAAATm9ybWFsU3RhdGUBAlk9AC4A" +
           "RFk9AAAAEf////8BAf////8AAAAA";
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

    #region OffSpecAlarmState Class
    #if (!OPCUA_EXCLUDE_OffSpecAlarmState)
    /// <summary>
    /// Stores an instance of the OffSpecAlarmType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class OffSpecAlarmState : DeviceHealthDiagnosticAlarmState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public OffSpecAlarmState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.OffSpecAlarmType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAYAAAAT2ZmU3BlY0FsYXJt" +
           "VHlwZUluc3RhbmNlAQJaPQECWj1aPQAA/////xsAAAAVYIkKAgAAAAAABwAAAEV2ZW50SWQBAls9AC4A" +
           "RFs9AAAAD/////8BAf////8AAAAAFWCJCgIAAAAAAAkAAABFdmVudFR5cGUBAlw9AC4ARFw9AAAAEf//" +
           "//8BAf////8AAAAAFWCJCgIAAAAAAAoAAABTb3VyY2VOb2RlAQJdPQAuAERdPQAAABH/////AQH/////" +
           "AAAAABVgiQoCAAAAAAAKAAAAU291cmNlTmFtZQECXj0ALgBEXj0AAAAM/////wEB/////wAAAAAVYIkK" +
           "AgAAAAAABAAAAFRpbWUBAl89AC4ARF89AAABACYB/////wEB/////wAAAAAVYIkKAgAAAAAACwAAAFJl" +
           "Y2VpdmVUaW1lAQJgPQAuAERgPQAAAQAmAf////8BAf////8AAAAAFWCJCgIAAAAAAAcAAABNZXNzYWdl" +
           "AQJiPQAuAERiPQAAABX/////AQH/////AAAAABVgiQoCAAAAAAAIAAAAU2V2ZXJpdHkBAmM9AC4ARGM9" +
           "AAAABf////8BAf////8AAAAAFWCJCgIAAAAAABAAAABDb25kaXRpb25DbGFzc0lkAQJkPQAuAERkPQAA" +
           "ABH/////AQH/////AAAAABVgiQoCAAAAAAASAAAAQ29uZGl0aW9uQ2xhc3NOYW1lAQJlPQAuAERlPQAA" +
           "ABX/////AQH/////AAAAABVgiQoCAAAAAAANAAAAQ29uZGl0aW9uTmFtZQECaD0ALgBEaD0AAAAM////" +
           "/wEB/////wAAAAAVYIkKAgAAAAAACAAAAEJyYW5jaElkAQJpPQAuAERpPQAAABH/////AQH/////AAAA" +
           "ABVgiQoCAAAAAAAGAAAAUmV0YWluAQJqPQAuAERqPQAAAAH/////AQH/////AAAAABVgiQoCAAAAAAAM" +
           "AAAARW5hYmxlZFN0YXRlAQJrPQAvAQAjI2s9AAAAFf////8BAQUAAAABACwjAAECgz0BACwjAAECjD0B" +
           "ACwjAAECmT0BACwjAAECoz0BACwjAAECtT0BAAAAFWCJCgIAAAAAAAIAAABJZAECbD0ALgBEbD0AAAAB" +
           "/////wEB/////wAAAAAVYIkKAgAAAAAABwAAAFF1YWxpdHkBAnQ9AC8BACojdD0AAAAT/////wEB////" +
           "/wEAAAAVYIkKAgAAAAAADwAAAFNvdXJjZVRpbWVzdGFtcAECdT0ALgBEdT0AAAEAJgH/////AQH/////" +
           "AAAAABVgiQoCAAAAAAAMAAAATGFzdFNldmVyaXR5AQJ2PQAvAQAqI3Y9AAAABf////8BAf////8BAAAA" +
           "FWCJCgIAAAAAAA8AAABTb3VyY2VUaW1lc3RhbXABAnc9AC4ARHc9AAABACYB/////wEB/////wAAAAAV" +
           "YIkKAgAAAAAABwAAAENvbW1lbnQBAng9AC8BACojeD0AAAAV/////wEB/////wEAAAAVYIkKAgAAAAAA" +
           "DwAAAFNvdXJjZVRpbWVzdGFtcAECeT0ALgBEeT0AAAEAJgH/////AQH/////AAAAABVgiQoCAAAAAAAM" +
           "AAAAQ2xpZW50VXNlcklkAQJ6PQAuAER6PQAAAAz/////AQH/////AAAAAARhggoEAAAAAAAHAAAARGlz" +
           "YWJsZQECez0ALwEARCN7PQAAAQEBAAAAAQD5CwABAPMKAAAAAARhggoEAAAAAAAGAAAARW5hYmxlAQJ8" +
           "PQAvAQBDI3w9AAABAQEAAAABAPkLAAEA8woAAAAABGGCCgQAAAAAAAoAAABBZGRDb21tZW50AQJ9PQAv" +
           "AQBFI309AAABAQEAAAABAPkLAAEADQsBAAAAF2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECfj0A" +
           "LgBEfj0AAJYCAAAAAQAqAQFGAAAABwAAAEV2ZW50SWQAD/////8AAAAAAwAAAAAoAAAAVGhlIGlkZW50" +
           "aWZpZXIgZm9yIHRoZSBldmVudCB0byBjb21tZW50LgEAKgEBQgAAAAcAAABDb21tZW50ABX/////AAAA" +
           "AAMAAAAAJAAAAFRoZSBjb21tZW50IHRvIGFkZCB0byB0aGUgY29uZGl0aW9uLgEAKAEBAAAAAQAAAAAA" +
           "AAABAf////8AAAAAFWCJCgIAAAAAAAoAAABBY2tlZFN0YXRlAQKDPQAvAQAjI4M9AAAAFf////8BAQEA" +
           "AAABACwjAQECaz0BAAAAFWCJCgIAAAAAAAIAAABJZAEChD0ALgBEhD0AAAAB/////wEB/////wAAAAAE" +
           "YYIKBAAAAAAACwAAAEFja25vd2xlZGdlAQKVPQAvAQCXI5U9AAABAQEAAAABAPkLAAEA8CIBAAAAF2Cp" +
           "CgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwEClj0ALgBElj0AAJYCAAAAAQAqAQFGAAAABwAAAEV2ZW50" +
           "SWQAD/////8AAAAAAwAAAAAoAAAAVGhlIGlkZW50aWZpZXIgZm9yIHRoZSBldmVudCB0byBjb21tZW50" +
           "LgEAKgEBQgAAAAcAAABDb21tZW50ABX/////AAAAAAMAAAAAJAAAAFRoZSBjb21tZW50IHRvIGFkZCB0" +
           "byB0aGUgY29uZGl0aW9uLgEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAFWCJCgIAAAAAAAsAAABBY3Rp" +
           "dmVTdGF0ZQECmT0ALwEAIyOZPQAAABX/////AQEBAAAAAQAsIwEBAms9AQAAABVgiQoCAAAAAAACAAAA" +
           "SWQBApo9AC4ARJo9AAAAAf////8BAf////8AAAAAFWCJCgIAAAAAAAkAAABJbnB1dE5vZGUBAqI9AC4A" +
           "RKI9AAAAEf////8BAf////8AAAAAFWCJCgIAAAAAABMAAABTdXBwcmVzc2VkT3JTaGVsdmVkAQLIPQAu" +
           "AETIPQAAAAH/////AQH/////AAAAABVgiQoCAAAAAAALAAAATm9ybWFsU3RhdGUBAu49AC4ARO49AAAA" +
           "Ef////8BAf////8AAAAA";
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

    #region MaintenanceRequiredAlarmState Class
    #if (!OPCUA_EXCLUDE_MaintenanceRequiredAlarmState)
    /// <summary>
    /// Stores an instance of the MaintenanceRequiredAlarmType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class MaintenanceRequiredAlarmState : DeviceHealthDiagnosticAlarmState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public MaintenanceRequiredAlarmState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.MaintenanceRequiredAlarmType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAkAAAATWFpbnRlbmFuY2VS" +
           "ZXF1aXJlZEFsYXJtVHlwZUluc3RhbmNlAQLvPQEC7z3vPQAA/////xsAAAAVYIkKAgAAAAAABwAAAEV2" +
           "ZW50SWQBAvA9AC4ARPA9AAAAD/////8BAf////8AAAAAFWCJCgIAAAAAAAkAAABFdmVudFR5cGUBAvE9" +
           "AC4ARPE9AAAAEf////8BAf////8AAAAAFWCJCgIAAAAAAAoAAABTb3VyY2VOb2RlAQLyPQAuAETyPQAA" +
           "ABH/////AQH/////AAAAABVgiQoCAAAAAAAKAAAAU291cmNlTmFtZQEC8z0ALgBE8z0AAAAM/////wEB" +
           "/////wAAAAAVYIkKAgAAAAAABAAAAFRpbWUBAvQ9AC4ARPQ9AAABACYB/////wEB/////wAAAAAVYIkK" +
           "AgAAAAAACwAAAFJlY2VpdmVUaW1lAQL1PQAuAET1PQAAAQAmAf////8BAf////8AAAAAFWCJCgIAAAAA" +
           "AAcAAABNZXNzYWdlAQL3PQAuAET3PQAAABX/////AQH/////AAAAABVgiQoCAAAAAAAIAAAAU2V2ZXJp" +
           "dHkBAvg9AC4ARPg9AAAABf////8BAf////8AAAAAFWCJCgIAAAAAABAAAABDb25kaXRpb25DbGFzc0lk" +
           "AQL5PQAuAET5PQAAABH/////AQH/////AAAAABVgiQoCAAAAAAASAAAAQ29uZGl0aW9uQ2xhc3NOYW1l" +
           "AQL6PQAuAET6PQAAABX/////AQH/////AAAAABVgiQoCAAAAAAANAAAAQ29uZGl0aW9uTmFtZQEC/T0A" +
           "LgBE/T0AAAAM/////wEB/////wAAAAAVYIkKAgAAAAAACAAAAEJyYW5jaElkAQL+PQAuAET+PQAAABH/" +
           "////AQH/////AAAAABVgiQoCAAAAAAAGAAAAUmV0YWluAQL/PQAuAET/PQAAAAH/////AQH/////AAAA" +
           "ABVgiQoCAAAAAAAMAAAARW5hYmxlZFN0YXRlAQIAPgAvAQAjIwA+AAAAFf////8BAQUAAAABACwjAAEC" +
           "GD4BACwjAAECIT4BACwjAAECLj4BACwjAAECOD4BACwjAAECSj4BAAAAFWCJCgIAAAAAAAIAAABJZAEC" +
           "AT4ALgBEAT4AAAAB/////wEB/////wAAAAAVYIkKAgAAAAAABwAAAFF1YWxpdHkBAgk+AC8BACojCT4A" +
           "AAAT/////wEB/////wEAAAAVYIkKAgAAAAAADwAAAFNvdXJjZVRpbWVzdGFtcAECCj4ALgBECj4AAAEA" +
           "JgH/////AQH/////AAAAABVgiQoCAAAAAAAMAAAATGFzdFNldmVyaXR5AQILPgAvAQAqIws+AAAABf//" +
           "//8BAf////8BAAAAFWCJCgIAAAAAAA8AAABTb3VyY2VUaW1lc3RhbXABAgw+AC4ARAw+AAABACYB////" +
           "/wEB/////wAAAAAVYIkKAgAAAAAABwAAAENvbW1lbnQBAg0+AC8BACojDT4AAAAV/////wEB/////wEA" +
           "AAAVYIkKAgAAAAAADwAAAFNvdXJjZVRpbWVzdGFtcAECDj4ALgBEDj4AAAEAJgH/////AQH/////AAAA" +
           "ABVgiQoCAAAAAAAMAAAAQ2xpZW50VXNlcklkAQIPPgAuAEQPPgAAAAz/////AQH/////AAAAAARhggoE" +
           "AAAAAAAHAAAARGlzYWJsZQECED4ALwEARCMQPgAAAQEBAAAAAQD5CwABAPMKAAAAAARhggoEAAAAAAAG" +
           "AAAARW5hYmxlAQIRPgAvAQBDIxE+AAABAQEAAAABAPkLAAEA8woAAAAABGGCCgQAAAAAAAoAAABBZGRD" +
           "b21tZW50AQISPgAvAQBFIxI+AAABAQEAAAABAPkLAAEADQsBAAAAF2CpCgIAAAAAAA4AAABJbnB1dEFy" +
           "Z3VtZW50cwECEz4ALgBEEz4AAJYCAAAAAQAqAQFGAAAABwAAAEV2ZW50SWQAD/////8AAAAAAwAAAAAo" +
           "AAAAVGhlIGlkZW50aWZpZXIgZm9yIHRoZSBldmVudCB0byBjb21tZW50LgEAKgEBQgAAAAcAAABDb21t" +
           "ZW50ABX/////AAAAAAMAAAAAJAAAAFRoZSBjb21tZW50IHRvIGFkZCB0byB0aGUgY29uZGl0aW9uLgEA" +
           "KAEBAAAAAQAAAAAAAAABAf////8AAAAAFWCJCgIAAAAAAAoAAABBY2tlZFN0YXRlAQIYPgAvAQAjIxg+" +
           "AAAAFf////8BAQEAAAABACwjAQECAD4BAAAAFWCJCgIAAAAAAAIAAABJZAECGT4ALgBEGT4AAAAB////" +
           "/wEB/////wAAAAAEYYIKBAAAAAAACwAAAEFja25vd2xlZGdlAQIqPgAvAQCXIyo+AAABAQEAAAABAPkL" +
           "AAEA8CIBAAAAF2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECKz4ALgBEKz4AAJYCAAAAAQAqAQFG" +
           "AAAABwAAAEV2ZW50SWQAD/////8AAAAAAwAAAAAoAAAAVGhlIGlkZW50aWZpZXIgZm9yIHRoZSBldmVu" +
           "dCB0byBjb21tZW50LgEAKgEBQgAAAAcAAABDb21tZW50ABX/////AAAAAAMAAAAAJAAAAFRoZSBjb21t" +
           "ZW50IHRvIGFkZCB0byB0aGUgY29uZGl0aW9uLgEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAFWCJCgIA" +
           "AAAAAAsAAABBY3RpdmVTdGF0ZQECLj4ALwEAIyMuPgAAABX/////AQEBAAAAAQAsIwEBAgA+AQAAABVg" +
           "iQoCAAAAAAACAAAASWQBAi8+AC4ARC8+AAAAAf////8BAf////8AAAAAFWCJCgIAAAAAAAkAAABJbnB1" +
           "dE5vZGUBAjc+AC4ARDc+AAAAEf////8BAf////8AAAAAFWCJCgIAAAAAABMAAABTdXBwcmVzc2VkT3JT" +
           "aGVsdmVkAQJdPgAuAERdPgAAAAH/////AQH/////AAAAABVgiQoCAAAAAAALAAAATm9ybWFsU3RhdGUB" +
           "AoM+AC4ARIM+AAAAEf////8BAf////8AAAAA";
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

    #region ConfigurableObjectState Class
    #if (!OPCUA_EXCLUDE_ConfigurableObjectState)
    /// <summary>
    /// Stores an instance of the ConfigurableObjectType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ConfigurableObjectState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ConfigurableObjectState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.ConfigurableObjectType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAeAAAAQ29uZmlndXJhYmxl" +
           "T2JqZWN0VHlwZUluc3RhbmNlAQKEPgEChD6EPgAA/////wEAAAAkYIAKAQAAAAIADgAAAFN1cHBvcnRl" +
           "ZFR5cGVzAQKFPgMAAAAAcgAAAEZvbGRlciBtYWludGFpbmluZyB0aGUgc2V0IG9mIChzdWItdHlwZXMg" +
           "b2YpIEJhc2VPYmplY3RUeXBlcyB0aGF0IGNhbiBiZSBpbnN0YW50aWF0ZWQgaW4gdGhlIENvbmZpZ3Vy" +
           "YWJsZUNvbXBvbmVudAAvAD2FPgAA/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public FolderState SupportedTypes
        {
            get
            {
                return m_supportedTypes;
            }

            set
            {
                if (!Object.ReferenceEquals(m_supportedTypes, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_supportedTypes = value;
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
            if (m_supportedTypes != null)
            {
                children.Add(m_supportedTypes);
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
                case Opc.Ua.Di.BrowseNames.SupportedTypes:
                {
                    if (createOrReplace)
                    {
                        if (SupportedTypes == null)
                        {
                            if (replacement == null)
                            {
                                SupportedTypes = new FolderState(this);
                            }
                            else
                            {
                                SupportedTypes = (FolderState)replacement;
                            }
                        }
                    }

                    instance = SupportedTypes;
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
        private FolderState m_supportedTypes;
        #endregion
    }
    #endif
    #endregion

    #region FunctionalGroupState Class
    #if (!OPCUA_EXCLUDE_FunctionalGroupState)
    /// <summary>
    /// Stores an instance of the FunctionalGroupType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class FunctionalGroupState : FolderState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public FunctionalGroupState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.FunctionalGroupType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (UIElement != null)
            {
                UIElement.Initialize(context, UIElement_InitializationString);
            }
        }

        #region Initialization String
        private const string UIElement_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////zVgiQoCAAAAAgAJAAAAVUlFbGVtZW50AQKK" +
           "PgMAAAAAMAAAAEEgdXNlciBpbnRlcmZhY2UgZWxlbWVudCBhc3NpZ25lZCB0byB0aGlzIGdyb3VwLgAv" +
           "AQKOPoo+AAAAGP////8BAf////8AAAAA";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAbAAAARnVuY3Rpb25hbEdy" +
           "b3VwVHlwZUluc3RhbmNlAQKHPgEChz6HPgAA/////wEAAAA1YIkKAgAAAAIACQAAAFVJRWxlbWVudAEC" +
           "ij4DAAAAADAAAABBIHVzZXIgaW50ZXJmYWNlIGVsZW1lbnQgYXNzaWduZWQgdG8gdGhpcyBncm91cC4A" +
           "LwECjj6KPgAAABj/////AQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public UIElementState UIElement
        {
            get
            {
                return m_uIElement;
            }

            set
            {
                if (!Object.ReferenceEquals(m_uIElement, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_uIElement = value;
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
            if (m_uIElement != null)
            {
                children.Add(m_uIElement);
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
                case Opc.Ua.Di.BrowseNames.UIElement:
                {
                    if (createOrReplace)
                    {
                        if (UIElement == null)
                        {
                            if (replacement == null)
                            {
                                UIElement = new UIElementState(this);
                            }
                            else
                            {
                                UIElement = (UIElementState)replacement;
                            }
                        }
                    }

                    instance = UIElement;
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
        private UIElementState m_uIElement;
        #endregion
    }
    #endif
    #endregion

    #region ProtocolState Class
    #if (!OPCUA_EXCLUDE_ProtocolState)
    /// <summary>
    /// Stores an instance of the ProtocolType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ProtocolState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ProtocolState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.ProtocolType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAUAAAAUHJvdG9jb2xUeXBl" +
           "SW5zdGFuY2UBAos+AQKLPos+AAD/////AAAAAA==";
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

    #region UIElementState Class
    #if (!OPCUA_EXCLUDE_UIElementState)
    /// <summary>
    /// Stores an instance of the UIElementType VariableType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class UIElementState : BaseDataVariableState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public UIElementState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.VariableTypes.UIElementType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
        }

        /// <summary>
        /// Returns the id of the default data type node for the instance.
        /// </summary>
        protected override NodeId GetDefaultDataTypeId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.DataTypes.BaseDataType, Opc.Ua.Namespaces.OpcUa, namespaceUris);
        }

        /// <summary>
        /// Returns the id of the default value rank for the instance.
        /// </summary>
        protected override int GetDefaultValueRank()
        {
            return ValueRanks.Scalar;
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQICAAAAAgAVAAAAVUlFbGVtZW50VHlw" +
           "ZUluc3RhbmNlAQKOPgECjj6OPgAAABj/////AQH/////AAAAAA==";
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

    #region UIElementState<T> Class
    /// <summary>
    /// A typed version of the UIElementType variable.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public class UIElementState<T> : UIElementState
    {
        #region Constructors
        /// <summary>
        /// Initializes the instance with its defalt attribute values.
        /// </summary>
        public UIElementState(NodeState parent) : base(parent)
        {
            Value = default(T);
        }

        /// <summary>
        /// Initializes the instance with the default values.
        /// </summary>
        protected override void Initialize(ISystemContext context)
        {
            base.Initialize(context);

            Value = default(T);
            DataType = TypeInfo.GetDataTypeId(typeof(T));
            ValueRank = TypeInfo.GetValueRank(typeof(T));
        }

        /// <summary>
        /// Initializes the instance with a node.
        /// </summary>
        protected override void Initialize(ISystemContext context, NodeState source)
        {
            InitializeOptionalChildren(context);
            base.Initialize(context, source);
        }
        #endregion

        #region Public Members
        /// <summary>
        /// The value of the variable.
        /// </summary>
        public new T Value
        {
            get
            {
                return CheckTypeBeforeCast<T>(base.Value, true);
            }

            set
            {
                base.Value = value;
            }
        }
        #endregion
    }
    #endregion
    #endif
    #endregion

    #region NetworkState Class
    #if (!OPCUA_EXCLUDE_NetworkState)
    /// <summary>
    /// Stores an instance of the NetworkType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class NetworkState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public NetworkState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.NetworkType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (Lock != null)
            {
                Lock.Initialize(context, Lock_InitializationString);
            }
        }

        #region Initialization String
        private const string Lock_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAgAEAAAATG9jawECpz4DAAAA" +
           "ABkAAABVc2VkIHRvIGxvY2sgdGhlIE5ldHdvcmsuAC8BAvo+pz4AAP////8IAAAAFWCJCgIAAAACAAYA" +
           "AABMb2NrZWQBAqg+AC4ARKg+AAAAAf////8BAf////8AAAAAFWCJCgIAAAACAA0AAABMb2NraW5nQ2xp" +
           "ZW50AQKpPgAuAESpPgAAAAz/////AQH/////AAAAABVgiQoCAAAAAgALAAAATG9ja2luZ1VzZXIBAqo+" +
           "AC4ARKo+AAAADP////8BAf////8AAAAAFWCJCgIAAAACABEAAABSZW1haW5pbmdMb2NrVGltZQECqz4A" +
           "LgBEqz4AAAEAIgH/////AQH/////AAAAAARhggoEAAAAAgAIAAAASW5pdExvY2sBAqw+AC8BAgA/rD4A" +
           "AAEB/////wIAAAAXYKkKAgAAAAAADgAAAElucHV0QXJndW1lbnRzAQKtPgAuAEStPgAAlgEAAAABACoB" +
           "ARYAAAAHAAAAQ29udGV4dAAM/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAAXYKkKAgAA" +
           "AAAADwAAAE91dHB1dEFyZ3VtZW50cwECrj4ALgBErj4AAJYBAAAAAQAqAQEdAAAADgAAAEluaXRMb2Nr" +
           "U3RhdHVzAAb/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAAARhggoEAAAAAgAJAAAAUmVu" +
           "ZXdMb2NrAQKvPgAvAQIDP68+AAABAf////8BAAAAF2CpCgIAAAAAAA8AAABPdXRwdXRBcmd1bWVudHMB" +
           "ArA+AC4ARLA+AACWAQAAAAEAKgEBHgAAAA8AAABSZW5ld0xvY2tTdGF0dXMABv////8AAAAAAAEAKAEB" +
           "AAAAAQAAAAAAAAABAf////8AAAAABGGCCgQAAAACAAgAAABFeGl0TG9jawECsT4ALwECBT+xPgAAAQH/" +
           "////AQAAABdgqQoCAAAAAAAPAAAAT3V0cHV0QXJndW1lbnRzAQKyPgAuAESyPgAAlgEAAAABACoBAR0A" +
           "AAAOAAAARXhpdExvY2tTdGF0dXMABv////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAABGGC" +
           "CgQAAAACAAkAAABCcmVha0xvY2sBArM+AC8BAgc/sz4AAAEB/////wEAAAAXYKkKAgAAAAAADwAAAE91" +
           "dHB1dEFyZ3VtZW50cwECtD4ALgBEtD4AAJYBAAAAAQAqAQEeAAAADwAAAEJyZWFrTG9ja1N0YXR1cwAG" +
           "/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgATAAAATmV0d29ya1R5cGVJ" +
           "bnN0YW5jZQECjz4BAo8+jz4AAP////8BAAAAJGCACgEAAAACAAQAAABMb2NrAQKnPgMAAAAAGQAAAFVz" +
           "ZWQgdG8gbG9jayB0aGUgTmV0d29yay4ALwEC+j6nPgAA/////wgAAAAVYIkKAgAAAAIABgAAAExvY2tl" +
           "ZAECqD4ALgBEqD4AAAAB/////wEB/////wAAAAAVYIkKAgAAAAIADQAAAExvY2tpbmdDbGllbnQBAqk+" +
           "AC4ARKk+AAAADP////8BAf////8AAAAAFWCJCgIAAAACAAsAAABMb2NraW5nVXNlcgECqj4ALgBEqj4A" +
           "AAAM/////wEB/////wAAAAAVYIkKAgAAAAIAEQAAAFJlbWFpbmluZ0xvY2tUaW1lAQKrPgAuAESrPgAA" +
           "AQAiAf////8BAf////8AAAAABGGCCgQAAAACAAgAAABJbml0TG9jawECrD4ALwECAD+sPgAAAQH/////" +
           "AgAAABdgqQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAq0+AC4ARK0+AACWAQAAAAEAKgEBFgAAAAcA" +
           "AABDb250ZXh0AAz/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAABdgqQoCAAAAAAAPAAAA" +
           "T3V0cHV0QXJndW1lbnRzAQKuPgAuAESuPgAAlgEAAAABACoBAR0AAAAOAAAASW5pdExvY2tTdGF0dXMA" +
           "Bv////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAABGGCCgQAAAACAAkAAABSZW5ld0xvY2sB" +
           "Aq8+AC8BAgM/rz4AAAEB/////wEAAAAXYKkKAgAAAAAADwAAAE91dHB1dEFyZ3VtZW50cwECsD4ALgBE" +
           "sD4AAJYBAAAAAQAqAQEeAAAADwAAAFJlbmV3TG9ja1N0YXR1cwAG/////wAAAAAAAQAoAQEAAAABAAAA" +
           "AAAAAAEB/////wAAAAAEYYIKBAAAAAIACAAAAEV4aXRMb2NrAQKxPgAvAQIFP7E+AAABAf////8BAAAA" +
           "F2CpCgIAAAAAAA8AAABPdXRwdXRBcmd1bWVudHMBArI+AC4ARLI+AACWAQAAAAEAKgEBHQAAAA4AAABF" +
           "eGl0TG9ja1N0YXR1cwAG/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAAEYYIKBAAAAAIA" +
           "CQAAAEJyZWFrTG9jawECsz4ALwECBz+zPgAAAQH/////AQAAABdgqQoCAAAAAAAPAAAAT3V0cHV0QXJn" +
           "dW1lbnRzAQK0PgAuAES0PgAAlgEAAAABACoBAR4AAAAPAAAAQnJlYWtMb2NrU3RhdHVzAAb/////AAAA" +
           "AAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public LockingServicesState Lock
        {
            get
            {
                return m_lock;
            }

            set
            {
                if (!Object.ReferenceEquals(m_lock, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_lock = value;
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
            if (m_lock != null)
            {
                children.Add(m_lock);
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
                case Opc.Ua.Di.BrowseNames.Lock:
                {
                    if (createOrReplace)
                    {
                        if (Lock == null)
                        {
                            if (replacement == null)
                            {
                                Lock = new LockingServicesState(this);
                            }
                            else
                            {
                                Lock = (LockingServicesState)replacement;
                            }
                        }
                    }

                    instance = Lock;
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
        private LockingServicesState m_lock;
        #endregion
    }
    #endif
    #endregion

    #region ConnectionPointState Class
    #if (!OPCUA_EXCLUDE_ConnectionPointState)
    /// <summary>
    /// Stores an instance of the ConnectionPointType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ConnectionPointState : TopologyElementState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ConnectionPointState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.ConnectionPointType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAbAAAAQ29ubmVjdGlvblBv" +
           "aW50VHlwZUluc3RhbmNlAQK1PgECtT61PgAA/////wEAAAAkYIAKAQAAAAIADgAAAE5ldHdvcmtBZGRy" +
           "ZXNzAQLLPgMAAAAAKgAAAFRoZSBhZGRyZXNzIG9mIHRoZSBkZXZpY2Ugb24gdGhpcyBuZXR3b3JrLgAv" +
           "AQKHPss+AAD/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public FunctionalGroupState NetworkAddress
        {
            get
            {
                return m_networkAddress;
            }

            set
            {
                if (!Object.ReferenceEquals(m_networkAddress, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_networkAddress = value;
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
            if (m_networkAddress != null)
            {
                children.Add(m_networkAddress);
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
                case Opc.Ua.Di.BrowseNames.NetworkAddress:
                {
                    if (createOrReplace)
                    {
                        if (NetworkAddress == null)
                        {
                            if (replacement == null)
                            {
                                NetworkAddress = new FunctionalGroupState(this);
                            }
                            else
                            {
                                NetworkAddress = (FunctionalGroupState)replacement;
                            }
                        }
                    }

                    instance = NetworkAddress;
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
        private FunctionalGroupState m_networkAddress;
        #endregion
    }
    #endif
    #endregion

    #region TransferToDeviceMethodState Class
    #if (!OPCUA_EXCLUDE_TransferToDeviceMethodState)
    /// <summary>
    /// Stores an instance of the TransferToDeviceMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class TransferToDeviceMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public TransferToDeviceMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new TransferToDeviceMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgAaAAAAVHJhbnNmZXJUb0Rl" +
           "dmljZU1ldGhvZFR5cGUBAt0+AC8BAt0+3T4AAAEB/////wEAAAAXYKkKAgAAAAAADwAAAE91dHB1dEFy" +
           "Z3VtZW50cwEC3j4ALgBE3j4AAJYCAAAAAQAqAQEZAAAACgAAAFRyYW5zZmVySUQABv////8AAAAAAAEA" +
           "KgEBIQAAABIAAABJbml0VHJhbnNmZXJTdGF0dXMABv////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf//" +
           "//8AAAAA";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public TransferToDeviceMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            int transferID = (int)_outputArguments[0];
            int initTransferStatus = (int)_outputArguments[1];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    ref transferID,
                    ref initTransferStatus);
            }

            _outputArguments[0] = transferID;
            _outputArguments[1] = initTransferStatus;

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult TransferToDeviceMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        ref int transferID,
        ref int initTransferStatus);
    #endif
    #endregion

    #region TransferFromDeviceMethodState Class
    #if (!OPCUA_EXCLUDE_TransferFromDeviceMethodState)
    /// <summary>
    /// Stores an instance of the TransferFromDeviceMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class TransferFromDeviceMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public TransferFromDeviceMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new TransferFromDeviceMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgAcAAAAVHJhbnNmZXJGcm9t" +
           "RGV2aWNlTWV0aG9kVHlwZQEC3z4ALwEC3z7fPgAAAQH/////AQAAABdgqQoCAAAAAAAPAAAAT3V0cHV0" +
           "QXJndW1lbnRzAQLgPgAuAETgPgAAlgIAAAABACoBARkAAAAKAAAAVHJhbnNmZXJJRAAG/////wAAAAAA" +
           "AQAqAQEhAAAAEgAAAEluaXRUcmFuc2ZlclN0YXR1cwAG/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB" +
           "/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public TransferFromDeviceMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            int transferID = (int)_outputArguments[0];
            int initTransferStatus = (int)_outputArguments[1];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    ref transferID,
                    ref initTransferStatus);
            }

            _outputArguments[0] = transferID;
            _outputArguments[1] = initTransferStatus;

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult TransferFromDeviceMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        ref int transferID,
        ref int initTransferStatus);
    #endif
    #endregion

    #region FetchTransferResultDataMethodState Class
    #if (!OPCUA_EXCLUDE_FetchTransferResultDataMethodState)
    /// <summary>
    /// Stores an instance of the FetchTransferResultDataMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class FetchTransferResultDataMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public FetchTransferResultDataMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new FetchTransferResultDataMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgAhAAAARmV0Y2hUcmFuc2Zl" +
           "clJlc3VsdERhdGFNZXRob2RUeXBlAQLhPgAvAQLhPuE+AAABAf////8CAAAAF2CpCgIAAAAAAA4AAABJ" +
           "bnB1dEFyZ3VtZW50cwEC4j4ALgBE4j4AAJYEAAAAAQAqAQEZAAAACgAAAFRyYW5zZmVySUQABv////8A" +
           "AAAAAAEAKgEBHQAAAA4AAABTZXF1ZW5jZU51bWJlcgAG/////wAAAAAAAQAqAQEqAAAAGwAAAE1heFBh" +
           "cmFtZXRlclJlc3VsdHNUb1JldHVybgAG/////wAAAAAAAQAqAQEeAAAADwAAAE9taXRHb29kUmVzdWx0" +
           "cwAB/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAAXYKkKAgAAAAAADwAAAE91dHB1dEFy" +
           "Z3VtZW50cwEC4z4ALgBE4z4AAJYBAAAAAQAqAQEeAAAADwAAAEZldGNoUmVzdWx0RGF0YQAW/////wAA" +
           "AAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public FetchTransferResultDataMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            int transferID = (int)_inputArguments[0];
            int sequenceNumber = (int)_inputArguments[1];
            int maxParameterResultsToReturn = (int)_inputArguments[2];
            bool omitGoodResults = (bool)_inputArguments[3];

            ExtensionObject fetchResultData = (ExtensionObject)_outputArguments[0];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    transferID,
                    sequenceNumber,
                    maxParameterResultsToReturn,
                    omitGoodResults,
                    ref fetchResultData);
            }

            _outputArguments[0] = fetchResultData;

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult FetchTransferResultDataMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        int transferID,
        int sequenceNumber,
        int maxParameterResultsToReturn,
        bool omitGoodResults,
        ref ExtensionObject fetchResultData);
    #endif
    #endregion

    #region TransferServicesState Class
    #if (!OPCUA_EXCLUDE_TransferServicesState)
    /// <summary>
    /// Stores an instance of the TransferServicesType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class TransferServicesState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public TransferServicesState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.TransferServicesType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAcAAAAVHJhbnNmZXJTZXJ2" +
           "aWNlc1R5cGVJbnN0YW5jZQEC6D4BAug+6D4AAP////8DAAAABGGCCgQAAAACABAAAABUcmFuc2ZlclRv" +
           "RGV2aWNlAQLpPgAvAQLpPuk+AAABAf////8BAAAAF2CpCgIAAAAAAA8AAABPdXRwdXRBcmd1bWVudHMB" +
           "Auo+AC4AROo+AACWAgAAAAEAKgEBGQAAAAoAAABUcmFuc2ZlcklEAAb/////AAAAAAABACoBASEAAAAS" +
           "AAAASW5pdFRyYW5zZmVyU3RhdHVzAAb/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAAARh" +
           "ggoEAAAAAgASAAAAVHJhbnNmZXJGcm9tRGV2aWNlAQLrPgAvAQLrPus+AAABAf////8BAAAAF2CpCgIA" +
           "AAAAAA8AAABPdXRwdXRBcmd1bWVudHMBAuw+AC4AROw+AACWAgAAAAEAKgEBGQAAAAoAAABUcmFuc2Zl" +
           "cklEAAb/////AAAAAAABACoBASEAAAASAAAASW5pdFRyYW5zZmVyU3RhdHVzAAb/////AAAAAAABACgB" +
           "AQAAAAEAAAAAAAAAAQH/////AAAAAARhggoEAAAAAgAXAAAARmV0Y2hUcmFuc2ZlclJlc3VsdERhdGEB" +
           "Au0+AC8BAu0+7T4AAAEB/////wIAAAAXYKkKAgAAAAAADgAAAElucHV0QXJndW1lbnRzAQLuPgAuAETu" +
           "PgAAlgQAAAABACoBARkAAAAKAAAAVHJhbnNmZXJJRAAG/////wAAAAAAAQAqAQEdAAAADgAAAFNlcXVl" +
           "bmNlTnVtYmVyAAb/////AAAAAAABACoBASoAAAAbAAAATWF4UGFyYW1ldGVyUmVzdWx0c1RvUmV0dXJu" +
           "AAb/////AAAAAAABACoBAR4AAAAPAAAAT21pdEdvb2RSZXN1bHRzAAH/////AAAAAAABACgBAQAAAAEA" +
           "AAAAAAAAAQH/////AAAAABdgqQoCAAAAAAAPAAAAT3V0cHV0QXJndW1lbnRzAQLvPgAuAETvPgAAlgEA" +
           "AAABACoBAR4AAAAPAAAARmV0Y2hSZXN1bHREYXRhABb/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/" +
           "////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public TransferToDeviceMethodState TransferToDevice
        {
            get
            {
                return m_transferToDeviceMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_transferToDeviceMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_transferToDeviceMethod = value;
            }
        }

        /// <remarks />
        public TransferFromDeviceMethodState TransferFromDevice
        {
            get
            {
                return m_transferFromDeviceMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_transferFromDeviceMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_transferFromDeviceMethod = value;
            }
        }

        /// <remarks />
        public FetchTransferResultDataMethodState FetchTransferResultData
        {
            get
            {
                return m_fetchTransferResultDataMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_fetchTransferResultDataMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_fetchTransferResultDataMethod = value;
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
            if (m_transferToDeviceMethod != null)
            {
                children.Add(m_transferToDeviceMethod);
            }

            if (m_transferFromDeviceMethod != null)
            {
                children.Add(m_transferFromDeviceMethod);
            }

            if (m_fetchTransferResultDataMethod != null)
            {
                children.Add(m_fetchTransferResultDataMethod);
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
                case Opc.Ua.Di.BrowseNames.TransferToDevice:
                {
                    if (createOrReplace)
                    {
                        if (TransferToDevice == null)
                        {
                            if (replacement == null)
                            {
                                TransferToDevice = new TransferToDeviceMethodState(this);
                            }
                            else
                            {
                                TransferToDevice = (TransferToDeviceMethodState)replacement;
                            }
                        }
                    }

                    instance = TransferToDevice;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.TransferFromDevice:
                {
                    if (createOrReplace)
                    {
                        if (TransferFromDevice == null)
                        {
                            if (replacement == null)
                            {
                                TransferFromDevice = new TransferFromDeviceMethodState(this);
                            }
                            else
                            {
                                TransferFromDevice = (TransferFromDeviceMethodState)replacement;
                            }
                        }
                    }

                    instance = TransferFromDevice;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.FetchTransferResultData:
                {
                    if (createOrReplace)
                    {
                        if (FetchTransferResultData == null)
                        {
                            if (replacement == null)
                            {
                                FetchTransferResultData = new FetchTransferResultDataMethodState(this);
                            }
                            else
                            {
                                FetchTransferResultData = (FetchTransferResultDataMethodState)replacement;
                            }
                        }
                    }

                    instance = FetchTransferResultData;
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
        private TransferToDeviceMethodState m_transferToDeviceMethod;
        private TransferFromDeviceMethodState m_transferFromDeviceMethod;
        private FetchTransferResultDataMethodState m_fetchTransferResultDataMethod;
        #endregion
    }
    #endif
    #endregion

    #region InitLockMethodState Class
    #if (!OPCUA_EXCLUDE_InitLockMethodState)
    /// <summary>
    /// Stores an instance of the InitLockMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class InitLockMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public InitLockMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new InitLockMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgASAAAASW5pdExvY2tNZXRo" +
           "b2RUeXBlAQLxPgAvAQLxPvE+AAABAf////8CAAAAF2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwEC" +
           "8j4ALgBE8j4AAJYBAAAAAQAqAQEWAAAABwAAAENvbnRleHQADP////8AAAAAAAEAKAEBAAAAAQAAAAAA" +
           "AAABAf////8AAAAAF2CpCgIAAAAAAA8AAABPdXRwdXRBcmd1bWVudHMBAvM+AC4ARPM+AACWAQAAAAEA" +
           "KgEBHQAAAA4AAABJbml0TG9ja1N0YXR1cwAG/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAA" +
           "AAA=";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public InitLockMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            string context = (string)_inputArguments[0];

            int initLockStatus = (int)_outputArguments[0];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    context,
                    ref initLockStatus);
            }

            _outputArguments[0] = initLockStatus;

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult InitLockMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        string context,
        ref int initLockStatus);
    #endif
    #endregion

    #region RenewLockMethodState Class
    #if (!OPCUA_EXCLUDE_RenewLockMethodState)
    /// <summary>
    /// Stores an instance of the RenewLockMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class RenewLockMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public RenewLockMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new RenewLockMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgATAAAAUmVuZXdMb2NrTWV0" +
           "aG9kVHlwZQEC9D4ALwEC9D70PgAAAQH/////AQAAABdgqQoCAAAAAAAPAAAAT3V0cHV0QXJndW1lbnRz" +
           "AQL1PgAuAET1PgAAlgEAAAABACoBAR4AAAAPAAAAUmVuZXdMb2NrU3RhdHVzAAb/////AAAAAAABACgB" +
           "AQAAAAEAAAAAAAAAAQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public RenewLockMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            int renewLockStatus = (int)_outputArguments[0];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    ref renewLockStatus);
            }

            _outputArguments[0] = renewLockStatus;

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult RenewLockMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        ref int renewLockStatus);
    #endif
    #endregion

    #region ExitLockMethodState Class
    #if (!OPCUA_EXCLUDE_ExitLockMethodState)
    /// <summary>
    /// Stores an instance of the ExitLockMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ExitLockMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ExitLockMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new ExitLockMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgASAAAARXhpdExvY2tNZXRo" +
           "b2RUeXBlAQL2PgAvAQL2PvY+AAABAf////8BAAAAF2CpCgIAAAAAAA8AAABPdXRwdXRBcmd1bWVudHMB" +
           "Avc+AC4ARPc+AACWAQAAAAEAKgEBHQAAAA4AAABFeGl0TG9ja1N0YXR1cwAG/////wAAAAAAAQAoAQEA" +
           "AAABAAAAAAAAAAEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public ExitLockMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            int exitLockStatus = (int)_outputArguments[0];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    ref exitLockStatus);
            }

            _outputArguments[0] = exitLockStatus;

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult ExitLockMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        ref int exitLockStatus);
    #endif
    #endregion

    #region BreakLockMethodState Class
    #if (!OPCUA_EXCLUDE_BreakLockMethodState)
    /// <summary>
    /// Stores an instance of the BreakLockMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class BreakLockMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public BreakLockMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new BreakLockMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgATAAAAQnJlYWtMb2NrTWV0" +
           "aG9kVHlwZQEC+D4ALwEC+D74PgAAAQH/////AQAAABdgqQoCAAAAAAAPAAAAT3V0cHV0QXJndW1lbnRz" +
           "AQL5PgAuAET5PgAAlgEAAAABACoBAR4AAAAPAAAAQnJlYWtMb2NrU3RhdHVzAAb/////AAAAAAABACgB" +
           "AQAAAAEAAAAAAAAAAQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public BreakLockMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            int breakLockStatus = (int)_outputArguments[0];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    ref breakLockStatus);
            }

            _outputArguments[0] = breakLockStatus;

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult BreakLockMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        ref int breakLockStatus);
    #endif
    #endregion

    #region LockingServicesState Class
    #if (!OPCUA_EXCLUDE_LockingServicesState)
    /// <summary>
    /// Stores an instance of the LockingServicesType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class LockingServicesState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public LockingServicesState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.LockingServicesType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAbAAAATG9ja2luZ1NlcnZp" +
           "Y2VzVHlwZUluc3RhbmNlAQL6PgEC+j76PgAA/////wgAAAAVYIkKAgAAAAIABgAAAExvY2tlZAEC/D4A" +
           "LgBE/D4AAAAB/////wEB/////wAAAAAVYIkKAgAAAAIADQAAAExvY2tpbmdDbGllbnQBAv0+AC4ARP0+" +
           "AAAADP////8BAf////8AAAAAFWCJCgIAAAACAAsAAABMb2NraW5nVXNlcgEC/j4ALgBE/j4AAAAM////" +
           "/wEB/////wAAAAAVYIkKAgAAAAIAEQAAAFJlbWFpbmluZ0xvY2tUaW1lAQL/PgAuAET/PgAAAQAiAf//" +
           "//8BAf////8AAAAABGGCCgQAAAACAAgAAABJbml0TG9jawECAD8ALwECAD8APwAAAQH/////AgAAABdg" +
           "qQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAgE/AC4ARAE/AACWAQAAAAEAKgEBFgAAAAcAAABDb250" +
           "ZXh0AAz/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAABdgqQoCAAAAAAAPAAAAT3V0cHV0" +
           "QXJndW1lbnRzAQICPwAuAEQCPwAAlgEAAAABACoBAR0AAAAOAAAASW5pdExvY2tTdGF0dXMABv////8A" +
           "AAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAABGGCCgQAAAACAAkAAABSZW5ld0xvY2sBAgM/AC8B" +
           "AgM/Az8AAAEB/////wEAAAAXYKkKAgAAAAAADwAAAE91dHB1dEFyZ3VtZW50cwECBD8ALgBEBD8AAJYB" +
           "AAAAAQAqAQEeAAAADwAAAFJlbmV3TG9ja1N0YXR1cwAG/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB" +
           "/////wAAAAAEYYIKBAAAAAIACAAAAEV4aXRMb2NrAQIFPwAvAQIFPwU/AAABAf////8BAAAAF2CpCgIA" +
           "AAAAAA8AAABPdXRwdXRBcmd1bWVudHMBAgY/AC4ARAY/AACWAQAAAAEAKgEBHQAAAA4AAABFeGl0TG9j" +
           "a1N0YXR1cwAG/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAAEYYIKBAAAAAIACQAAAEJy" +
           "ZWFrTG9jawECBz8ALwECBz8HPwAAAQH/////AQAAABdgqQoCAAAAAAAPAAAAT3V0cHV0QXJndW1lbnRz" +
           "AQIIPwAuAEQIPwAAlgEAAAABACoBAR4AAAAPAAAAQnJlYWtMb2NrU3RhdHVzAAb/////AAAAAAABACgB" +
           "AQAAAAEAAAAAAAAAAQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<bool> Locked
        {
            get
            {
                return m_locked;
            }

            set
            {
                if (!Object.ReferenceEquals(m_locked, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_locked = value;
            }
        }

        /// <remarks />
        public PropertyState<string> LockingClient
        {
            get
            {
                return m_lockingClient;
            }

            set
            {
                if (!Object.ReferenceEquals(m_lockingClient, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_lockingClient = value;
            }
        }

        /// <remarks />
        public PropertyState<string> LockingUser
        {
            get
            {
                return m_lockingUser;
            }

            set
            {
                if (!Object.ReferenceEquals(m_lockingUser, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_lockingUser = value;
            }
        }

        /// <remarks />
        public PropertyState<double> RemainingLockTime
        {
            get
            {
                return m_remainingLockTime;
            }

            set
            {
                if (!Object.ReferenceEquals(m_remainingLockTime, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_remainingLockTime = value;
            }
        }

        /// <remarks />
        public InitLockMethodState InitLock
        {
            get
            {
                return m_initLockMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_initLockMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_initLockMethod = value;
            }
        }

        /// <remarks />
        public RenewLockMethodState RenewLock
        {
            get
            {
                return m_renewLockMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_renewLockMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_renewLockMethod = value;
            }
        }

        /// <remarks />
        public ExitLockMethodState ExitLock
        {
            get
            {
                return m_exitLockMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_exitLockMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_exitLockMethod = value;
            }
        }

        /// <remarks />
        public BreakLockMethodState BreakLock
        {
            get
            {
                return m_breakLockMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_breakLockMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_breakLockMethod = value;
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
            if (m_locked != null)
            {
                children.Add(m_locked);
            }

            if (m_lockingClient != null)
            {
                children.Add(m_lockingClient);
            }

            if (m_lockingUser != null)
            {
                children.Add(m_lockingUser);
            }

            if (m_remainingLockTime != null)
            {
                children.Add(m_remainingLockTime);
            }

            if (m_initLockMethod != null)
            {
                children.Add(m_initLockMethod);
            }

            if (m_renewLockMethod != null)
            {
                children.Add(m_renewLockMethod);
            }

            if (m_exitLockMethod != null)
            {
                children.Add(m_exitLockMethod);
            }

            if (m_breakLockMethod != null)
            {
                children.Add(m_breakLockMethod);
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
                case Opc.Ua.Di.BrowseNames.Locked:
                {
                    if (createOrReplace)
                    {
                        if (Locked == null)
                        {
                            if (replacement == null)
                            {
                                Locked = new PropertyState<bool>(this);
                            }
                            else
                            {
                                Locked = (PropertyState<bool>)replacement;
                            }
                        }
                    }

                    instance = Locked;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.LockingClient:
                {
                    if (createOrReplace)
                    {
                        if (LockingClient == null)
                        {
                            if (replacement == null)
                            {
                                LockingClient = new PropertyState<string>(this);
                            }
                            else
                            {
                                LockingClient = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = LockingClient;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.LockingUser:
                {
                    if (createOrReplace)
                    {
                        if (LockingUser == null)
                        {
                            if (replacement == null)
                            {
                                LockingUser = new PropertyState<string>(this);
                            }
                            else
                            {
                                LockingUser = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = LockingUser;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.RemainingLockTime:
                {
                    if (createOrReplace)
                    {
                        if (RemainingLockTime == null)
                        {
                            if (replacement == null)
                            {
                                RemainingLockTime = new PropertyState<double>(this);
                            }
                            else
                            {
                                RemainingLockTime = (PropertyState<double>)replacement;
                            }
                        }
                    }

                    instance = RemainingLockTime;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.InitLock:
                {
                    if (createOrReplace)
                    {
                        if (InitLock == null)
                        {
                            if (replacement == null)
                            {
                                InitLock = new InitLockMethodState(this);
                            }
                            else
                            {
                                InitLock = (InitLockMethodState)replacement;
                            }
                        }
                    }

                    instance = InitLock;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.RenewLock:
                {
                    if (createOrReplace)
                    {
                        if (RenewLock == null)
                        {
                            if (replacement == null)
                            {
                                RenewLock = new RenewLockMethodState(this);
                            }
                            else
                            {
                                RenewLock = (RenewLockMethodState)replacement;
                            }
                        }
                    }

                    instance = RenewLock;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ExitLock:
                {
                    if (createOrReplace)
                    {
                        if (ExitLock == null)
                        {
                            if (replacement == null)
                            {
                                ExitLock = new ExitLockMethodState(this);
                            }
                            else
                            {
                                ExitLock = (ExitLockMethodState)replacement;
                            }
                        }
                    }

                    instance = ExitLock;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.BreakLock:
                {
                    if (createOrReplace)
                    {
                        if (BreakLock == null)
                        {
                            if (replacement == null)
                            {
                                BreakLock = new BreakLockMethodState(this);
                            }
                            else
                            {
                                BreakLock = (BreakLockMethodState)replacement;
                            }
                        }
                    }

                    instance = BreakLock;
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
        private PropertyState<bool> m_locked;
        private PropertyState<string> m_lockingClient;
        private PropertyState<string> m_lockingUser;
        private PropertyState<double> m_remainingLockTime;
        private InitLockMethodState m_initLockMethod;
        private RenewLockMethodState m_renewLockMethod;
        private ExitLockMethodState m_exitLockMethod;
        private BreakLockMethodState m_breakLockMethod;
        #endregion
    }
    #endif
    #endregion

    #region SoftwareUpdateState Class
    #if (!OPCUA_EXCLUDE_SoftwareUpdateState)
    /// <summary>
    /// Stores an instance of the SoftwareUpdateType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class SoftwareUpdateState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public SoftwareUpdateState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.SoftwareUpdateType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (Loading != null)
            {
                Loading.Initialize(context, Loading_InitializationString);
            }

            if (PrepareForUpdate != null)
            {
                PrepareForUpdate.Initialize(context, PrepareForUpdate_InitializationString);
            }

            if (Installation != null)
            {
                Installation.Initialize(context, Installation_InitializationString);
            }

            if (PowerCycle != null)
            {
                PowerCycle.Initialize(context, PowerCycle_InitializationString);
            }

            if (Confirmation != null)
            {
                Confirmation.Initialize(context, Confirmation_InitializationString);
            }

            if (Parameters != null)
            {
                Parameters.Initialize(context, Parameters_InitializationString);
            }

            if (UpdateStatus != null)
            {
                UpdateStatus.Initialize(context, UpdateStatus_InitializationString);
            }

            if (VendorErrorCode != null)
            {
                VendorErrorCode.Initialize(context, VendorErrorCode_InitializationString);
            }
        }

        #region Initialization String
        private const string Loading_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgAHAAAATG9hZGluZwECCj8A" +
           "LwECYD8KPwAA/////wAAAAA=";

        private const string PrepareForUpdate_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgAQAAAAUHJlcGFyZUZvclVw" +
           "ZGF0ZQECDD8ALwEC2D8MPwAA/////wMAAAAVYIkKAgAAAAAADAAAAEN1cnJlbnRTdGF0ZQECDT8ALwEA" +
           "yAoNPwAAABX/////AQH/////AQAAABVgiQoCAAAAAAACAAAASWQBAg4/AC4ARA4/AAAAEf////8BAf//" +
           "//8AAAAABGGCCgQAAAACAAcAAABQcmVwYXJlAQIbPwAvAQLnPxs/AAABAf////8AAAAABGGCCgQAAAAC" +
           "AAUAAABBYm9ydAECHD8ALwEC6D8cPwAAAQH/////AAAAAA==";

        private const string Installation_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgAMAAAASW5zdGFsbGF0aW9u" +
           "AQIePwAvAQL8Px4/AAD/////AgAAABVgiQoCAAAAAAAMAAAAQ3VycmVudFN0YXRlAQIfPwAvAQDICh8/" +
           "AAAAFf////8BAf////8BAAAAFWCJCgIAAAAAAAIAAABJZAECID8ALgBEID8AAAAR/////wEB/////wAA" +
           "AAAEYYIKBAAAAAIABgAAAFJlc3VtZQECMz8ALwECEUAzPwAAAQH/////AAAAAA==";

        private const string PowerCycle_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgAKAAAAUG93ZXJDeWNsZQEC" +
           "ND8ALwECIEA0PwAA/////wEAAAAVYIkKAgAAAAAADAAAAEN1cnJlbnRTdGF0ZQECNT8ALwEAyAo1PwAA" +
           "ABX/////AQH/////AQAAABVgiQoCAAAAAAACAAAASWQBAjY/AC4ARDY/AAAAEf////8BAf////8AAAAA";

        private const string Confirmation_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgAMAAAAQ29uZmlybWF0aW9u" +
           "AQJCPwAvAQI2QEI/AAD/////AwAAABVgiQoCAAAAAAAMAAAAQ3VycmVudFN0YXRlAQJDPwAvAQDICkM/" +
           "AAAAFf////8BAf////8BAAAAFWCJCgIAAAAAAAIAAABJZAECRD8ALgBERD8AAAAR/////wEB/////wAA" +
           "AAAEYYIKBAAAAAIABwAAAENvbmZpcm0BAlA/AC8BAkRAUD8AAAEB/////wAAAAAVYIkKAgAAAAIAEwAA" +
           "AENvbmZpcm1hdGlvblRpbWVvdXQBAlE/AC8AP1E/AAABACIB/////wEB/////wAAAAA=";

        private const string Parameters_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgAKAAAAUGFyYW1ldGVycwEC" +
           "Uj8ALwEAgD1SPwAA/////wQAAAAVYIkKAgAAAAAAFwAAAENsaWVudFByb2Nlc3NpbmdUaW1lb3V0AQJT" +
           "PwAuAERTPwAAAQAiAf////8BAf////8AAAAABGGCCgQAAAAAABMAAABHZW5lcmF0ZUZpbGVGb3JSZWFk" +
           "AQJUPwAvAQCCPVQ/AAABAf////8CAAAAF2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECVT8ALgBE" +
           "VT8AAJYBAAAAAQAqAQEeAAAADwAAAEdlbmVyYXRlT3B0aW9ucwAY/////wAAAAAAAQAoAQEAAAABAAAA" +
           "AAAAAAEB/////wAAAAAXYKkKAgAAAAAADwAAAE91dHB1dEFyZ3VtZW50cwECVj8ALgBEVj8AAJYDAAAA" +
           "AQAqAQEZAAAACgAAAEZpbGVOb2RlSWQAEf////8AAAAAAAEAKgEBGQAAAAoAAABGaWxlSGFuZGxlAAf/" +
           "////AAAAAAABACoBASUAAAAWAAAAQ29tcGxldGlvblN0YXRlTWFjaGluZQAR/////wAAAAAAAQAoAQEA" +
           "AAABAAAAAAAAAAEB/////wAAAAAEYYIKBAAAAAAAFAAAAEdlbmVyYXRlRmlsZUZvcldyaXRlAQJXPwAv" +
           "AQCFPVc/AAABAf////8CAAAAF2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECWD8ALgBEWD8AAJYB" +
           "AAAAAQAqAQEeAAAADwAAAEdlbmVyYXRlT3B0aW9ucwAY/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB" +
           "/////wAAAAAXYKkKAgAAAAAADwAAAE91dHB1dEFyZ3VtZW50cwECWT8ALgBEWT8AAJYCAAAAAQAqAQEZ" +
           "AAAACgAAAEZpbGVOb2RlSWQAEf////8AAAAAAAEAKgEBGQAAAAoAAABGaWxlSGFuZGxlAAf/////AAAA" +
           "AAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAAARhggoEAAAAAAAOAAAAQ2xvc2VBbmRDb21taXQBAlo/" +
           "AC8BAIc9Wj8AAAEB/////wIAAAAXYKkKAgAAAAAADgAAAElucHV0QXJndW1lbnRzAQJbPwAuAERbPwAA" +
           "lgEAAAABACoBARkAAAAKAAAARmlsZUhhbmRsZQAH/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB////" +
           "/wAAAAAXYKkKAgAAAAAADwAAAE91dHB1dEFyZ3VtZW50cwECXD8ALgBEXD8AAJYBAAAAAQAqAQElAAAA" +
           "FgAAAENvbXBsZXRpb25TdGF0ZU1hY2hpbmUAEf////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8A" +
           "AAAA";

        private const string UpdateStatus_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAMAAAAVXBkYXRlU3RhdHVz" +
           "AQJdPwAvAD9dPwAAABX/////AQH/////AAAAAA==";

        private const string VendorErrorCode_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAPAAAAVmVuZG9yRXJyb3JD" +
           "b2RlAQJePwAvAD9ePwAAAAb/////AQH/////AAAAAA==";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAaAAAAU29mdHdhcmVVcGRh" +
           "dGVUeXBlSW5zdGFuY2UBAgk/AQIJPwk/AAD/////CAAAAARggAoBAAAAAgAHAAAATG9hZGluZwECCj8A" +
           "LwECYD8KPwAA/////wAAAAAEYIAKAQAAAAIAEAAAAFByZXBhcmVGb3JVcGRhdGUBAgw/AC8BAtg/DD8A" +
           "AP////8DAAAAFWCJCgIAAAAAAAwAAABDdXJyZW50U3RhdGUBAg0/AC8BAMgKDT8AAAAV/////wEB////" +
           "/wEAAAAVYIkKAgAAAAAAAgAAAElkAQIOPwAuAEQOPwAAABH/////AQH/////AAAAAARhggoEAAAAAgAH" +
           "AAAAUHJlcGFyZQECGz8ALwEC5z8bPwAAAQH/////AAAAAARhggoEAAAAAgAFAAAAQWJvcnQBAhw/AC8B" +
           "Aug/HD8AAAEB/////wAAAAAEYIAKAQAAAAIADAAAAEluc3RhbGxhdGlvbgECHj8ALwEC/D8ePwAA////" +
           "/wIAAAAVYIkKAgAAAAAADAAAAEN1cnJlbnRTdGF0ZQECHz8ALwEAyAofPwAAABX/////AQH/////AQAA" +
           "ABVgiQoCAAAAAAACAAAASWQBAiA/AC4ARCA/AAAAEf////8BAf////8AAAAABGGCCgQAAAACAAYAAABS" +
           "ZXN1bWUBAjM/AC8BAhFAMz8AAAEB/////wAAAAAEYIAKAQAAAAIACgAAAFBvd2VyQ3ljbGUBAjQ/AC8B" +
           "AiBAND8AAP////8BAAAAFWCJCgIAAAAAAAwAAABDdXJyZW50U3RhdGUBAjU/AC8BAMgKNT8AAAAV////" +
           "/wEB/////wEAAAAVYIkKAgAAAAAAAgAAAElkAQI2PwAuAEQ2PwAAABH/////AQH/////AAAAAARggAoB" +
           "AAAAAgAMAAAAQ29uZmlybWF0aW9uAQJCPwAvAQI2QEI/AAD/////AwAAABVgiQoCAAAAAAAMAAAAQ3Vy" +
           "cmVudFN0YXRlAQJDPwAvAQDICkM/AAAAFf////8BAf////8BAAAAFWCJCgIAAAAAAAIAAABJZAECRD8A" +
           "LgBERD8AAAAR/////wEB/////wAAAAAEYYIKBAAAAAIABwAAAENvbmZpcm0BAlA/AC8BAkRAUD8AAAEB" +
           "/////wAAAAAVYIkKAgAAAAIAEwAAAENvbmZpcm1hdGlvblRpbWVvdXQBAlE/AC8AP1E/AAABACIB////" +
           "/wEB/////wAAAAAEYIAKAQAAAAIACgAAAFBhcmFtZXRlcnMBAlI/AC8BAIA9Uj8AAP////8EAAAAFWCJ" +
           "CgIAAAAAABcAAABDbGllbnRQcm9jZXNzaW5nVGltZW91dAECUz8ALgBEUz8AAAEAIgH/////AQH/////" +
           "AAAAAARhggoEAAAAAAATAAAAR2VuZXJhdGVGaWxlRm9yUmVhZAECVD8ALwEAgj1UPwAAAQH/////AgAA" +
           "ABdgqQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAlU/AC4ARFU/AACWAQAAAAEAKgEBHgAAAA8AAABH" +
           "ZW5lcmF0ZU9wdGlvbnMAGP////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAF2CpCgIAAAAA" +
           "AA8AAABPdXRwdXRBcmd1bWVudHMBAlY/AC4ARFY/AACWAwAAAAEAKgEBGQAAAAoAAABGaWxlTm9kZUlk" +
           "ABH/////AAAAAAABACoBARkAAAAKAAAARmlsZUhhbmRsZQAH/////wAAAAAAAQAqAQElAAAAFgAAAENv" +
           "bXBsZXRpb25TdGF0ZU1hY2hpbmUAEf////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAABGGC" +
           "CgQAAAAAABQAAABHZW5lcmF0ZUZpbGVGb3JXcml0ZQECVz8ALwEAhT1XPwAAAQH/////AgAAABdgqQoC" +
           "AAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAlg/AC4ARFg/AACWAQAAAAEAKgEBHgAAAA8AAABHZW5lcmF0" +
           "ZU9wdGlvbnMAGP////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAF2CpCgIAAAAAAA8AAABP" +
           "dXRwdXRBcmd1bWVudHMBAlk/AC4ARFk/AACWAgAAAAEAKgEBGQAAAAoAAABGaWxlTm9kZUlkABH/////" +
           "AAAAAAABACoBARkAAAAKAAAARmlsZUhhbmRsZQAH/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB////" +
           "/wAAAAAEYYIKBAAAAAAADgAAAENsb3NlQW5kQ29tbWl0AQJaPwAvAQCHPVo/AAABAf////8CAAAAF2Cp" +
           "CgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECWz8ALgBEWz8AAJYBAAAAAQAqAQEZAAAACgAAAEZpbGVI" +
           "YW5kbGUAB/////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAF2CpCgIAAAAAAA8AAABPdXRw" +
           "dXRBcmd1bWVudHMBAlw/AC4ARFw/AACWAQAAAAEAKgEBJQAAABYAAABDb21wbGV0aW9uU3RhdGVNYWNo" +
           "aW5lABH/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAABVgiQoCAAAAAgAMAAAAVXBkYXRl" +
           "U3RhdHVzAQJdPwAvAD9dPwAAABX/////AQH/////AAAAABVgiQoCAAAAAgAPAAAAVmVuZG9yRXJyb3JD" +
           "b2RlAQJePwAvAD9ePwAAAAb/////AQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public SoftwareLoadingState Loading
        {
            get
            {
                return m_loading;
            }

            set
            {
                if (!Object.ReferenceEquals(m_loading, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_loading = value;
            }
        }

        /// <remarks />
        public PrepareForUpdateStateMachineState PrepareForUpdate
        {
            get
            {
                return m_prepareForUpdate;
            }

            set
            {
                if (!Object.ReferenceEquals(m_prepareForUpdate, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_prepareForUpdate = value;
            }
        }

        /// <remarks />
        public InstallationStateMachineState Installation
        {
            get
            {
                return m_installation;
            }

            set
            {
                if (!Object.ReferenceEquals(m_installation, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_installation = value;
            }
        }

        /// <remarks />
        public PowerCycleStateMachineState PowerCycle
        {
            get
            {
                return m_powerCycle;
            }

            set
            {
                if (!Object.ReferenceEquals(m_powerCycle, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_powerCycle = value;
            }
        }

        /// <remarks />
        public ConfirmationStateMachineState Confirmation
        {
            get
            {
                return m_confirmation;
            }

            set
            {
                if (!Object.ReferenceEquals(m_confirmation, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_confirmation = value;
            }
        }

        /// <remarks />
        public TemporaryFileTransferState Parameters
        {
            get
            {
                return m_parameters;
            }

            set
            {
                if (!Object.ReferenceEquals(m_parameters, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_parameters = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<LocalizedText> UpdateStatus
        {
            get
            {
                return m_updateStatus;
            }

            set
            {
                if (!Object.ReferenceEquals(m_updateStatus, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_updateStatus = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<int> VendorErrorCode
        {
            get
            {
                return m_vendorErrorCode;
            }

            set
            {
                if (!Object.ReferenceEquals(m_vendorErrorCode, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_vendorErrorCode = value;
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
            if (m_loading != null)
            {
                children.Add(m_loading);
            }

            if (m_prepareForUpdate != null)
            {
                children.Add(m_prepareForUpdate);
            }

            if (m_installation != null)
            {
                children.Add(m_installation);
            }

            if (m_powerCycle != null)
            {
                children.Add(m_powerCycle);
            }

            if (m_confirmation != null)
            {
                children.Add(m_confirmation);
            }

            if (m_parameters != null)
            {
                children.Add(m_parameters);
            }

            if (m_updateStatus != null)
            {
                children.Add(m_updateStatus);
            }

            if (m_vendorErrorCode != null)
            {
                children.Add(m_vendorErrorCode);
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
                case Opc.Ua.Di.BrowseNames.Loading:
                {
                    if (createOrReplace)
                    {
                        if (Loading == null)
                        {
                            if (replacement == null)
                            {
                                Loading = new SoftwareLoadingState(this);
                            }
                            else
                            {
                                Loading = (SoftwareLoadingState)replacement;
                            }
                        }
                    }

                    instance = Loading;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.PrepareForUpdate:
                {
                    if (createOrReplace)
                    {
                        if (PrepareForUpdate == null)
                        {
                            if (replacement == null)
                            {
                                PrepareForUpdate = new PrepareForUpdateStateMachineState(this);
                            }
                            else
                            {
                                PrepareForUpdate = (PrepareForUpdateStateMachineState)replacement;
                            }
                        }
                    }

                    instance = PrepareForUpdate;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Installation:
                {
                    if (createOrReplace)
                    {
                        if (Installation == null)
                        {
                            if (replacement == null)
                            {
                                Installation = new InstallationStateMachineState(this);
                            }
                            else
                            {
                                Installation = (InstallationStateMachineState)replacement;
                            }
                        }
                    }

                    instance = Installation;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.PowerCycle:
                {
                    if (createOrReplace)
                    {
                        if (PowerCycle == null)
                        {
                            if (replacement == null)
                            {
                                PowerCycle = new PowerCycleStateMachineState(this);
                            }
                            else
                            {
                                PowerCycle = (PowerCycleStateMachineState)replacement;
                            }
                        }
                    }

                    instance = PowerCycle;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Confirmation:
                {
                    if (createOrReplace)
                    {
                        if (Confirmation == null)
                        {
                            if (replacement == null)
                            {
                                Confirmation = new ConfirmationStateMachineState(this);
                            }
                            else
                            {
                                Confirmation = (ConfirmationStateMachineState)replacement;
                            }
                        }
                    }

                    instance = Confirmation;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Parameters:
                {
                    if (createOrReplace)
                    {
                        if (Parameters == null)
                        {
                            if (replacement == null)
                            {
                                Parameters = new TemporaryFileTransferState(this);
                            }
                            else
                            {
                                Parameters = (TemporaryFileTransferState)replacement;
                            }
                        }
                    }

                    instance = Parameters;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.UpdateStatus:
                {
                    if (createOrReplace)
                    {
                        if (UpdateStatus == null)
                        {
                            if (replacement == null)
                            {
                                UpdateStatus = new BaseDataVariableState<LocalizedText>(this);
                            }
                            else
                            {
                                UpdateStatus = (BaseDataVariableState<LocalizedText>)replacement;
                            }
                        }
                    }

                    instance = UpdateStatus;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.VendorErrorCode:
                {
                    if (createOrReplace)
                    {
                        if (VendorErrorCode == null)
                        {
                            if (replacement == null)
                            {
                                VendorErrorCode = new BaseDataVariableState<int>(this);
                            }
                            else
                            {
                                VendorErrorCode = (BaseDataVariableState<int>)replacement;
                            }
                        }
                    }

                    instance = VendorErrorCode;
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
        private SoftwareLoadingState m_loading;
        private PrepareForUpdateStateMachineState m_prepareForUpdate;
        private InstallationStateMachineState m_installation;
        private PowerCycleStateMachineState m_powerCycle;
        private ConfirmationStateMachineState m_confirmation;
        private TemporaryFileTransferState m_parameters;
        private BaseDataVariableState<LocalizedText> m_updateStatus;
        private BaseDataVariableState<int> m_vendorErrorCode;
        #endregion
    }
    #endif
    #endregion

    #region SoftwareLoadingState Class
    #if (!OPCUA_EXCLUDE_SoftwareLoadingState)
    /// <summary>
    /// Stores an instance of the SoftwareLoadingType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class SoftwareLoadingState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public SoftwareLoadingState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.SoftwareLoadingType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (UpdateKey != null)
            {
                UpdateKey.Initialize(context, UpdateKey_InitializationString);
            }
        }

        #region Initialization String
        private const string UpdateKey_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAJAAAAVXBkYXRlS2V5AQJh" +
           "PwAvAD9hPwAAAAz/////AQH/////AAAAAA==";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAbAAAAU29mdHdhcmVMb2Fk" +
           "aW5nVHlwZUluc3RhbmNlAQJgPwECYD9gPwAA/////wEAAAAVYIkKAgAAAAIACQAAAFVwZGF0ZUtleQEC" +
           "YT8ALwA/YT8AAAAM/////wEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public BaseDataVariableState<string> UpdateKey
        {
            get
            {
                return m_updateKey;
            }

            set
            {
                if (!Object.ReferenceEquals(m_updateKey, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_updateKey = value;
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
            if (m_updateKey != null)
            {
                children.Add(m_updateKey);
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
                case Opc.Ua.Di.BrowseNames.UpdateKey:
                {
                    if (createOrReplace)
                    {
                        if (UpdateKey == null)
                        {
                            if (replacement == null)
                            {
                                UpdateKey = new BaseDataVariableState<string>(this);
                            }
                            else
                            {
                                UpdateKey = (BaseDataVariableState<string>)replacement;
                            }
                        }
                    }

                    instance = UpdateKey;
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
        private BaseDataVariableState<string> m_updateKey;
        #endregion
    }
    #endif
    #endregion

    #region PackageLoadingState Class
    #if (!OPCUA_EXCLUDE_PackageLoadingState)
    /// <summary>
    /// Stores an instance of the PackageLoadingType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class PackageLoadingState : SoftwareLoadingState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public PackageLoadingState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.PackageLoadingType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (WriteBlockSize != null)
            {
                WriteBlockSize.Initialize(context, WriteBlockSize_InitializationString);
            }
        }

        #region Initialization String
        private const string WriteBlockSize_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAOAAAAV3JpdGVCbG9ja1Np" +
           "emUBAng/AC4ARHg/AAAAB/////8BAf////8AAAAA";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAaAAAAUGFja2FnZUxvYWRp" +
           "bmdUeXBlSW5zdGFuY2UBAmI/AQJiP2I/AAD/////BAAAAARggAoBAAAAAgAOAAAAQ3VycmVudFZlcnNp" +
           "b24BAmQ/AC8BAtA/ZD8AAP////8DAAAAFWCJCgIAAAACAAwAAABNYW51ZmFjdHVyZXIBAmU/AC4ARGU/" +
           "AAAAFf////8BAf////8AAAAAFWCJCgIAAAACAA8AAABNYW51ZmFjdHVyZXJVcmkBAmY/AC4ARGY/AAAA" +
           "DP////8BAf////8AAAAAFWCJCgIAAAACABAAAABTb2Z0d2FyZVJldmlzaW9uAQJnPwAuAERnPwAAAAz/" +
           "////AQH/////AAAAAARggAoBAAAAAgAMAAAARmlsZVRyYW5zZmVyAQJsPwAvAQCAPWw/AAD/////BAAA" +
           "ABVgiQoCAAAAAAAXAAAAQ2xpZW50UHJvY2Vzc2luZ1RpbWVvdXQBAm0/AC4ARG0/AAABACIB/////wEB" +
           "/////wAAAAAEYYIKBAAAAAAAEwAAAEdlbmVyYXRlRmlsZUZvclJlYWQBAm4/AC8BAII9bj8AAAEB////" +
           "/wIAAAAXYKkKAgAAAAAADgAAAElucHV0QXJndW1lbnRzAQJvPwAuAERvPwAAlgEAAAABACoBAR4AAAAP" +
           "AAAAR2VuZXJhdGVPcHRpb25zABj/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAABdgqQoC" +
           "AAAAAAAPAAAAT3V0cHV0QXJndW1lbnRzAQJwPwAuAERwPwAAlgMAAAABACoBARkAAAAKAAAARmlsZU5v" +
           "ZGVJZAAR/////wAAAAAAAQAqAQEZAAAACgAAAEZpbGVIYW5kbGUAB/////8AAAAAAAEAKgEBJQAAABYA" +
           "AABDb21wbGV0aW9uU3RhdGVNYWNoaW5lABH/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAA" +
           "AARhggoEAAAAAAAUAAAAR2VuZXJhdGVGaWxlRm9yV3JpdGUBAnE/AC8BAIU9cT8AAAEB/////wIAAAAX" +
           "YKkKAgAAAAAADgAAAElucHV0QXJndW1lbnRzAQJyPwAuAERyPwAAlgEAAAABACoBAR4AAAAPAAAAR2Vu" +
           "ZXJhdGVPcHRpb25zABj/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAABdgqQoCAAAAAAAP" +
           "AAAAT3V0cHV0QXJndW1lbnRzAQJzPwAuAERzPwAAlgIAAAABACoBARkAAAAKAAAARmlsZU5vZGVJZAAR" +
           "/////wAAAAAAAQAqAQEZAAAACgAAAEZpbGVIYW5kbGUAB/////8AAAAAAAEAKAEBAAAAAQAAAAAAAAAB" +
           "Af////8AAAAABGGCCgQAAAAAAA4AAABDbG9zZUFuZENvbW1pdAECdD8ALwEAhz10PwAAAQH/////AgAA" +
           "ABdgqQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAnU/AC4ARHU/AACWAQAAAAEAKgEBGQAAAAoAAABG" +
           "aWxlSGFuZGxlAAf/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAABdgqQoCAAAAAAAPAAAA" +
           "T3V0cHV0QXJndW1lbnRzAQJ2PwAuAER2PwAAlgEAAAABACoBASUAAAAWAAAAQ29tcGxldGlvblN0YXRl" +
           "TWFjaGluZQAR/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAAVYIkKAgAAAAIADAAAAEVy" +
           "cm9yTWVzc2FnZQECdz8ALwA/dz8AAAAV/////wEB/////wAAAAAVYIkKAgAAAAIADgAAAFdyaXRlQmxv" +
           "Y2tTaXplAQJ4PwAuAER4PwAAAAf/////AQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public SoftwareVersionState CurrentVersion
        {
            get
            {
                return m_currentVersion;
            }

            set
            {
                if (!Object.ReferenceEquals(m_currentVersion, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_currentVersion = value;
            }
        }

        /// <remarks />
        public TemporaryFileTransferState FileTransfer
        {
            get
            {
                return m_fileTransfer;
            }

            set
            {
                if (!Object.ReferenceEquals(m_fileTransfer, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_fileTransfer = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<LocalizedText> ErrorMessage
        {
            get
            {
                return m_errorMessage;
            }

            set
            {
                if (!Object.ReferenceEquals(m_errorMessage, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_errorMessage = value;
            }
        }

        /// <remarks />
        public PropertyState<uint> WriteBlockSize
        {
            get
            {
                return m_writeBlockSize;
            }

            set
            {
                if (!Object.ReferenceEquals(m_writeBlockSize, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_writeBlockSize = value;
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
            if (m_currentVersion != null)
            {
                children.Add(m_currentVersion);
            }

            if (m_fileTransfer != null)
            {
                children.Add(m_fileTransfer);
            }

            if (m_errorMessage != null)
            {
                children.Add(m_errorMessage);
            }

            if (m_writeBlockSize != null)
            {
                children.Add(m_writeBlockSize);
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
                case Opc.Ua.Di.BrowseNames.CurrentVersion:
                {
                    if (createOrReplace)
                    {
                        if (CurrentVersion == null)
                        {
                            if (replacement == null)
                            {
                                CurrentVersion = new SoftwareVersionState(this);
                            }
                            else
                            {
                                CurrentVersion = (SoftwareVersionState)replacement;
                            }
                        }
                    }

                    instance = CurrentVersion;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.FileTransfer:
                {
                    if (createOrReplace)
                    {
                        if (FileTransfer == null)
                        {
                            if (replacement == null)
                            {
                                FileTransfer = new TemporaryFileTransferState(this);
                            }
                            else
                            {
                                FileTransfer = (TemporaryFileTransferState)replacement;
                            }
                        }
                    }

                    instance = FileTransfer;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ErrorMessage:
                {
                    if (createOrReplace)
                    {
                        if (ErrorMessage == null)
                        {
                            if (replacement == null)
                            {
                                ErrorMessage = new BaseDataVariableState<LocalizedText>(this);
                            }
                            else
                            {
                                ErrorMessage = (BaseDataVariableState<LocalizedText>)replacement;
                            }
                        }
                    }

                    instance = ErrorMessage;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.WriteBlockSize:
                {
                    if (createOrReplace)
                    {
                        if (WriteBlockSize == null)
                        {
                            if (replacement == null)
                            {
                                WriteBlockSize = new PropertyState<uint>(this);
                            }
                            else
                            {
                                WriteBlockSize = (PropertyState<uint>)replacement;
                            }
                        }
                    }

                    instance = WriteBlockSize;
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
        private SoftwareVersionState m_currentVersion;
        private TemporaryFileTransferState m_fileTransfer;
        private BaseDataVariableState<LocalizedText> m_errorMessage;
        private PropertyState<uint> m_writeBlockSize;
        #endregion
    }
    #endif
    #endregion

    #region DirectLoadingState Class
    #if (!OPCUA_EXCLUDE_DirectLoadingState)
    /// <summary>
    /// Stores an instance of the DirectLoadingType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class DirectLoadingState : PackageLoadingState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public DirectLoadingState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.DirectLoadingType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (WriteTimeout != null)
            {
                WriteTimeout.Initialize(context, WriteTimeout_InitializationString);
            }
        }

        #region Initialization String
        private const string WriteTimeout_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAMAAAAV3JpdGVUaW1lb3V0" +
           "AQKRPwAuAESRPwAAAQAiAf////8BAf////8AAAAA";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAZAAAARGlyZWN0TG9hZGlu" +
           "Z1R5cGVJbnN0YW5jZQECeT8BAnk/eT8AAP////8FAAAABGCACgEAAAACAA4AAABDdXJyZW50VmVyc2lv" +
           "bgECez8ALwEC0D97PwAA/////wMAAAAVYIkKAgAAAAIADAAAAE1hbnVmYWN0dXJlcgECfD8ALgBEfD8A" +
           "AAAV/////wEB/////wAAAAAVYIkKAgAAAAIADwAAAE1hbnVmYWN0dXJlclVyaQECfT8ALgBEfT8AAAAM" +
           "/////wEB/////wAAAAAVYIkKAgAAAAIAEAAAAFNvZnR3YXJlUmV2aXNpb24BAn4/AC4ARH4/AAAADP//" +
           "//8BAf////8AAAAABGCACgEAAAACAAwAAABGaWxlVHJhbnNmZXIBAoM/AC8BAIA9gz8AAP////8EAAAA" +
           "FWCJCgIAAAAAABcAAABDbGllbnRQcm9jZXNzaW5nVGltZW91dAEChD8ALgBEhD8AAAEAIgH/////AQH/" +
           "////AAAAAARhggoEAAAAAAATAAAAR2VuZXJhdGVGaWxlRm9yUmVhZAEChT8ALwEAgj2FPwAAAQH/////" +
           "AgAAABdgqQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAoY/AC4ARIY/AACWAQAAAAEAKgEBHgAAAA8A" +
           "AABHZW5lcmF0ZU9wdGlvbnMAGP////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAF2CpCgIA" +
           "AAAAAA8AAABPdXRwdXRBcmd1bWVudHMBAoc/AC4ARIc/AACWAwAAAAEAKgEBGQAAAAoAAABGaWxlTm9k" +
           "ZUlkABH/////AAAAAAABACoBARkAAAAKAAAARmlsZUhhbmRsZQAH/////wAAAAAAAQAqAQElAAAAFgAA" +
           "AENvbXBsZXRpb25TdGF0ZU1hY2hpbmUAEf////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAA" +
           "BGGCCgQAAAAAABQAAABHZW5lcmF0ZUZpbGVGb3JXcml0ZQECiD8ALwEAhT2IPwAAAQH/////AgAAABdg" +
           "qQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAok/AC4ARIk/AACWAQAAAAEAKgEBHgAAAA8AAABHZW5l" +
           "cmF0ZU9wdGlvbnMAGP////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAF2CpCgIAAAAAAA8A" +
           "AABPdXRwdXRBcmd1bWVudHMBAoo/AC4ARIo/AACWAgAAAAEAKgEBGQAAAAoAAABGaWxlTm9kZUlkABH/" +
           "////AAAAAAABACoBARkAAAAKAAAARmlsZUhhbmRsZQAH/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB" +
           "/////wAAAAAEYYIKBAAAAAAADgAAAENsb3NlQW5kQ29tbWl0AQKLPwAvAQCHPYs/AAABAf////8CAAAA" +
           "F2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECjD8ALgBEjD8AAJYBAAAAAQAqAQEZAAAACgAAAEZp" +
           "bGVIYW5kbGUAB/////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAF2CpCgIAAAAAAA8AAABP" +
           "dXRwdXRBcmd1bWVudHMBAo0/AC4ARI0/AACWAQAAAAEAKgEBJQAAABYAAABDb21wbGV0aW9uU3RhdGVN" +
           "YWNoaW5lABH/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAABVgiQoCAAAAAgAMAAAARXJy" +
           "b3JNZXNzYWdlAQKOPwAvAD+OPwAAABX/////AQH/////AAAAABVgiQoCAAAAAgAOAAAAVXBkYXRlQmVo" +
           "YXZpb3IBApA/AC8AP5A/AAABAlBA/////wEB/////wAAAAAVYIkKAgAAAAIADAAAAFdyaXRlVGltZW91" +
           "dAECkT8ALgBEkT8AAAEAIgH/////AQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public BaseDataVariableState<uint> UpdateBehavior
        {
            get
            {
                return m_updateBehavior;
            }

            set
            {
                if (!Object.ReferenceEquals(m_updateBehavior, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_updateBehavior = value;
            }
        }

        /// <remarks />
        public PropertyState<double> WriteTimeout
        {
            get
            {
                return m_writeTimeout;
            }

            set
            {
                if (!Object.ReferenceEquals(m_writeTimeout, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_writeTimeout = value;
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
            if (m_updateBehavior != null)
            {
                children.Add(m_updateBehavior);
            }

            if (m_writeTimeout != null)
            {
                children.Add(m_writeTimeout);
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
                case Opc.Ua.Di.BrowseNames.UpdateBehavior:
                {
                    if (createOrReplace)
                    {
                        if (UpdateBehavior == null)
                        {
                            if (replacement == null)
                            {
                                UpdateBehavior = new BaseDataVariableState<uint>(this);
                            }
                            else
                            {
                                UpdateBehavior = (BaseDataVariableState<uint>)replacement;
                            }
                        }
                    }

                    instance = UpdateBehavior;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.WriteTimeout:
                {
                    if (createOrReplace)
                    {
                        if (WriteTimeout == null)
                        {
                            if (replacement == null)
                            {
                                WriteTimeout = new PropertyState<double>(this);
                            }
                            else
                            {
                                WriteTimeout = (PropertyState<double>)replacement;
                            }
                        }
                    }

                    instance = WriteTimeout;
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
        private BaseDataVariableState<uint> m_updateBehavior;
        private PropertyState<double> m_writeTimeout;
        #endregion
    }
    #endif
    #endregion

    #region CachedLoadingState Class
    #if (!OPCUA_EXCLUDE_CachedLoadingState)
    /// <summary>
    /// Stores an instance of the CachedLoadingType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class CachedLoadingState : PackageLoadingState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public CachedLoadingState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.CachedLoadingType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (FallbackVersion != null)
            {
                FallbackVersion.Initialize(context, FallbackVersion_InitializationString);
            }
        }

        #region Initialization String
        private const string FallbackVersion_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAAAgAPAAAARmFsbGJhY2tWZXJz" +
           "aW9uAQKxPwAvAQLQP7E/AAD/////AwAAABVgiQoCAAAAAgAMAAAATWFudWZhY3R1cmVyAQKyPwAuAESy" +
           "PwAAABX/////AQH/////AAAAABVgiQoCAAAAAgAPAAAATWFudWZhY3R1cmVyVXJpAQKzPwAuAESzPwAA" +
           "AAz/////AQH/////AAAAABVgiQoCAAAAAgAQAAAAU29mdHdhcmVSZXZpc2lvbgECtD8ALgBEtD8AAAAM" +
           "/////wEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAZAAAAQ2FjaGVkTG9hZGlu" +
           "Z1R5cGVJbnN0YW5jZQECkj8BApI/kj8AAP////8GAAAABGCACgEAAAACAA4AAABDdXJyZW50VmVyc2lv" +
           "bgEClD8ALwEC0D+UPwAA/////wMAAAAVYIkKAgAAAAIADAAAAE1hbnVmYWN0dXJlcgEClT8ALgBElT8A" +
           "AAAV/////wEB/////wAAAAAVYIkKAgAAAAIADwAAAE1hbnVmYWN0dXJlclVyaQEClj8ALgBElj8AAAAM" +
           "/////wEB/////wAAAAAVYIkKAgAAAAIAEAAAAFNvZnR3YXJlUmV2aXNpb24BApc/AC4ARJc/AAAADP//" +
           "//8BAf////8AAAAABGCACgEAAAACAAwAAABGaWxlVHJhbnNmZXIBApw/AC8BAIA9nD8AAP////8EAAAA" +
           "FWCJCgIAAAAAABcAAABDbGllbnRQcm9jZXNzaW5nVGltZW91dAECnT8ALgBEnT8AAAEAIgH/////AQH/" +
           "////AAAAAARhggoEAAAAAAATAAAAR2VuZXJhdGVGaWxlRm9yUmVhZAECnj8ALwEAgj2ePwAAAQH/////" +
           "AgAAABdgqQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAp8/AC4ARJ8/AACWAQAAAAEAKgEBHgAAAA8A" +
           "AABHZW5lcmF0ZU9wdGlvbnMAGP////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAF2CpCgIA" +
           "AAAAAA8AAABPdXRwdXRBcmd1bWVudHMBAqA/AC4ARKA/AACWAwAAAAEAKgEBGQAAAAoAAABGaWxlTm9k" +
           "ZUlkABH/////AAAAAAABACoBARkAAAAKAAAARmlsZUhhbmRsZQAH/////wAAAAAAAQAqAQElAAAAFgAA" +
           "AENvbXBsZXRpb25TdGF0ZU1hY2hpbmUAEf////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAA" +
           "BGGCCgQAAAAAABQAAABHZW5lcmF0ZUZpbGVGb3JXcml0ZQECoT8ALwEAhT2hPwAAAQH/////AgAAABdg" +
           "qQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAqI/AC4ARKI/AACWAQAAAAEAKgEBHgAAAA8AAABHZW5l" +
           "cmF0ZU9wdGlvbnMAGP////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAF2CpCgIAAAAAAA8A" +
           "AABPdXRwdXRBcmd1bWVudHMBAqM/AC4ARKM/AACWAgAAAAEAKgEBGQAAAAoAAABGaWxlTm9kZUlkABH/" +
           "////AAAAAAABACoBARkAAAAKAAAARmlsZUhhbmRsZQAH/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB" +
           "/////wAAAAAEYYIKBAAAAAAADgAAAENsb3NlQW5kQ29tbWl0AQKkPwAvAQCHPaQ/AAABAf////8CAAAA" +
           "F2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECpT8ALgBEpT8AAJYBAAAAAQAqAQEZAAAACgAAAEZp" +
           "bGVIYW5kbGUAB/////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAAF2CpCgIAAAAAAA8AAABP" +
           "dXRwdXRBcmd1bWVudHMBAqY/AC4ARKY/AACWAQAAAAEAKgEBJQAAABYAAABDb21wbGV0aW9uU3RhdGVN" +
           "YWNoaW5lABH/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAABVgiQoCAAAAAgAMAAAARXJy" +
           "b3JNZXNzYWdlAQKnPwAvAD+nPwAAABX/////AQH/////AAAAAARggAoBAAAAAgAOAAAAUGVuZGluZ1Zl" +
           "cnNpb24BAqk/AC8BAtA/qT8AAP////8DAAAAFWCJCgIAAAACAAwAAABNYW51ZmFjdHVyZXIBAqo/AC4A" +
           "RKo/AAAAFf////8BAf////8AAAAAFWCJCgIAAAACAA8AAABNYW51ZmFjdHVyZXJVcmkBAqs/AC4ARKs/" +
           "AAAADP////8BAf////8AAAAAFWCJCgIAAAACABAAAABTb2Z0d2FyZVJldmlzaW9uAQKsPwAuAESsPwAA" +
           "AAz/////AQH/////AAAAAARggAoBAAAAAgAPAAAARmFsbGJhY2tWZXJzaW9uAQKxPwAvAQLQP7E/AAD/" +
           "////AwAAABVgiQoCAAAAAgAMAAAATWFudWZhY3R1cmVyAQKyPwAuAESyPwAAABX/////AQH/////AAAA" +
           "ABVgiQoCAAAAAgAPAAAATWFudWZhY3R1cmVyVXJpAQKzPwAuAESzPwAAAAz/////AQH/////AAAAABVg" +
           "iQoCAAAAAgAQAAAAU29mdHdhcmVSZXZpc2lvbgECtD8ALgBEtD8AAAAM/////wEB/////wAAAAAEYYIK" +
           "BAAAAAIAEQAAAEdldFVwZGF0ZUJlaGF2aW9yAQK5PwAvAQK5P7k/AAABAf////8CAAAAF2CpCgIAAAAA" +
           "AA4AAABJbnB1dEFyZ3VtZW50cwECuj8ALgBEuj8AAJYDAAAAAQAqAQEeAAAADwAAAE1hbnVmYWN0dXJl" +
           "clVyaQAM/////wAAAAAAAQAqAQEfAAAAEAAAAFNvZnR3YXJlUmV2aXNpb24ADP////8AAAAAAAEAKgEB" +
           "IwAAABAAAABQYXRjaElkZW50aWZpZXJzAAwBAAAAAQAAAAAAAAAAAQAoAQEAAAABAAAAAAAAAAEB////" +
           "/wAAAAAXYKkKAgAAAAAADwAAAE91dHB1dEFyZ3VtZW50cwECuz8ALgBEuz8AAJYBAAAAAQAqAQEfAAAA" +
           "DgAAAFVwZGF0ZUJlaGF2aW9yAQJQQP////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public SoftwareVersionState PendingVersion
        {
            get
            {
                return m_pendingVersion;
            }

            set
            {
                if (!Object.ReferenceEquals(m_pendingVersion, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_pendingVersion = value;
            }
        }

        /// <remarks />
        public SoftwareVersionState FallbackVersion
        {
            get
            {
                return m_fallbackVersion;
            }

            set
            {
                if (!Object.ReferenceEquals(m_fallbackVersion, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_fallbackVersion = value;
            }
        }

        /// <remarks />
        public GetUpdateBehaviorCachedLoadingMethodState GetUpdateBehavior
        {
            get
            {
                return m_getUpdateBehaviorMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_getUpdateBehaviorMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_getUpdateBehaviorMethod = value;
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
            if (m_pendingVersion != null)
            {
                children.Add(m_pendingVersion);
            }

            if (m_fallbackVersion != null)
            {
                children.Add(m_fallbackVersion);
            }

            if (m_getUpdateBehaviorMethod != null)
            {
                children.Add(m_getUpdateBehaviorMethod);
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
                case Opc.Ua.Di.BrowseNames.PendingVersion:
                {
                    if (createOrReplace)
                    {
                        if (PendingVersion == null)
                        {
                            if (replacement == null)
                            {
                                PendingVersion = new SoftwareVersionState(this);
                            }
                            else
                            {
                                PendingVersion = (SoftwareVersionState)replacement;
                            }
                        }
                    }

                    instance = PendingVersion;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.FallbackVersion:
                {
                    if (createOrReplace)
                    {
                        if (FallbackVersion == null)
                        {
                            if (replacement == null)
                            {
                                FallbackVersion = new SoftwareVersionState(this);
                            }
                            else
                            {
                                FallbackVersion = (SoftwareVersionState)replacement;
                            }
                        }
                    }

                    instance = FallbackVersion;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.GetUpdateBehavior:
                {
                    if (createOrReplace)
                    {
                        if (GetUpdateBehavior == null)
                        {
                            if (replacement == null)
                            {
                                GetUpdateBehavior = new GetUpdateBehaviorCachedLoadingMethodState(this);
                            }
                            else
                            {
                                GetUpdateBehavior = (GetUpdateBehaviorCachedLoadingMethodState)replacement;
                            }
                        }
                    }

                    instance = GetUpdateBehavior;
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
        private SoftwareVersionState m_pendingVersion;
        private SoftwareVersionState m_fallbackVersion;
        private GetUpdateBehaviorCachedLoadingMethodState m_getUpdateBehaviorMethod;
        #endregion
    }
    #endif
    #endregion

    #region FileSystemLoadingState Class
    #if (!OPCUA_EXCLUDE_FileSystemLoadingState)
    /// <summary>
    /// Stores an instance of the FileSystemLoadingType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class FileSystemLoadingState : SoftwareLoadingState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public FileSystemLoadingState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.FileSystemLoadingType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (ValidateFiles != null)
            {
                ValidateFiles.Initialize(context, ValidateFiles_InitializationString);
            }
        }

        #region Initialization String
        private const string ValidateFiles_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgANAAAAVmFsaWRhdGVGaWxl" +
           "cwECzT8ALwECzT/NPwAAAQH/////AgAAABdgqQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAs4/AC4A" +
           "RM4/AACWAQAAAAEAKgEBGgAAAAcAAABOb2RlSWRzABEBAAAAAQAAAAAAAAAAAQAoAQEAAAABAAAAAAAA" +
           "AAEB/////wAAAAAXYKkKAgAAAAAADwAAAE91dHB1dEFyZ3VtZW50cwECzz8ALgBEzz8AAJYCAAAAAQAq" +
           "AQEYAAAACQAAAEVycm9yQ29kZQAG/////wAAAAAAAQAqAQEbAAAADAAAAEVycm9yTWVzc2FnZQAV////" +
           "/wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAdAAAARmlsZVN5c3RlbUxv" +
           "YWRpbmdUeXBlSW5zdGFuY2UBArw/AQK8P7w/AAD/////AwAAAARggAoBAAAAAAAKAAAARmlsZVN5c3Rl" +
           "bQECvj8ALwEAKTS+PwAA/////wQAAAAEYYIKBAAAAAAADwAAAENyZWF0ZURpcmVjdG9yeQECvz8ALwEA" +
           "SzS/PwAAAQH/////AgAAABdgqQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAsA/AC4ARMA/AACWAQAA" +
           "AAEAKgEBHAAAAA0AAABEaXJlY3RvcnlOYW1lAAz/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////" +
           "AAAAABdgqQoCAAAAAAAPAAAAT3V0cHV0QXJndW1lbnRzAQLBPwAuAETBPwAAlgEAAAABACoBAR4AAAAP" +
           "AAAARGlyZWN0b3J5Tm9kZUlkABH/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAAARhggoE" +
           "AAAAAAAKAAAAQ3JlYXRlRmlsZQECwj8ALwEATjTCPwAAAQH/////AgAAABdgqQoCAAAAAAAOAAAASW5w" +
           "dXRBcmd1bWVudHMBAsM/AC4ARMM/AACWAgAAAAEAKgEBFwAAAAgAAABGaWxlTmFtZQAM/////wAAAAAA" +
           "AQAqAQEeAAAADwAAAFJlcXVlc3RGaWxlT3BlbgAB/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB////" +
           "/wAAAAAXYKkKAgAAAAAADwAAAE91dHB1dEFyZ3VtZW50cwECxD8ALgBExD8AAJYCAAAAAQAqAQEZAAAA" +
           "CgAAAEZpbGVOb2RlSWQAEf////8AAAAAAAEAKgEBGQAAAAoAAABGaWxlSGFuZGxlAAf/////AAAAAAAB" +
           "ACgBAQAAAAEAAAAAAAAAAQH/////AAAAAARhwgoEAAAAFgAAAERlbGV0ZUZpbGVTeXN0ZW1PYmplY3QA" +
           "AAYAAABEZWxldGUBAsU/AC8BAFE0xT8AAAEB/////wEAAAAXYKkKAgAAAAAADgAAAElucHV0QXJndW1l" +
           "bnRzAQLGPwAuAETGPwAAlgEAAAABACoBAR0AAAAOAAAAT2JqZWN0VG9EZWxldGUAEf////8AAAAAAAEA" +
           "KAEBAAAAAQAAAAAAAAABAf////8AAAAABGGCCgQAAAAAAAoAAABNb3ZlT3JDb3B5AQLHPwAvAQBTNMc/" +
           "AAABAf////8CAAAAF2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECyD8ALgBEyD8AAJYEAAAAAQAq" +
           "AQEhAAAAEgAAAE9iamVjdFRvTW92ZU9yQ29weQAR/////wAAAAAAAQAqAQEeAAAADwAAAFRhcmdldERp" +
           "cmVjdG9yeQAR/////wAAAAAAAQAqAQEZAAAACgAAAENyZWF0ZUNvcHkAAf////8AAAAAAAEAKgEBFgAA" +
           "AAcAAABOZXdOYW1lAAz/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAABdgqQoCAAAAAAAP" +
           "AAAAT3V0cHV0QXJndW1lbnRzAQLJPwAuAETJPwAAlgEAAAABACoBARgAAAAJAAAATmV3Tm9kZUlkABH/" +
           "////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAAARhggoEAAAAAgARAAAAR2V0VXBkYXRlQmVo" +
           "YXZpb3IBAso/AC8BAso/yj8AAAEB/////wIAAAAXYKkKAgAAAAAADgAAAElucHV0QXJndW1lbnRzAQLL" +
           "PwAuAETLPwAAlgEAAAABACoBARoAAAAHAAAATm9kZUlkcwARAQAAAAEAAAAAAAAAAAEAKAEBAAAAAQAA" +
           "AAAAAAABAf////8AAAAAF2CpCgIAAAAAAA8AAABPdXRwdXRBcmd1bWVudHMBAsw/AC4ARMw/AACWAQAA" +
           "AAEAKgEBHwAAAA4AAABVcGRhdGVCZWhhdmlvcgECUED/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/" +
           "////AAAAAARhggoEAAAAAgANAAAAVmFsaWRhdGVGaWxlcwECzT8ALwECzT/NPwAAAQH/////AgAAABdg" +
           "qQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAs4/AC4ARM4/AACWAQAAAAEAKgEBGgAAAAcAAABOb2Rl" +
           "SWRzABEBAAAAAQAAAAAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAAXYKkKAgAAAAAADwAAAE91" +
           "dHB1dEFyZ3VtZW50cwECzz8ALgBEzz8AAJYCAAAAAQAqAQEYAAAACQAAAEVycm9yQ29kZQAG/////wAA" +
           "AAAAAQAqAQEbAAAADAAAAEVycm9yTWVzc2FnZQAV/////wAAAAAAAQAoAQEAAAABAAAAAAAAAAEB////" +
           "/wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public FileDirectoryState FileSystem
        {
            get
            {
                return m_fileSystem;
            }

            set
            {
                if (!Object.ReferenceEquals(m_fileSystem, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_fileSystem = value;
            }
        }

        /// <remarks />
        public GetUpdateBehaviorFileSystemMethodState GetUpdateBehavior
        {
            get
            {
                return m_getUpdateBehaviorMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_getUpdateBehaviorMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_getUpdateBehaviorMethod = value;
            }
        }

        /// <remarks />
        public ValidateFilesMethodState ValidateFiles
        {
            get
            {
                return m_validateFilesMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_validateFilesMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_validateFilesMethod = value;
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
            if (m_fileSystem != null)
            {
                children.Add(m_fileSystem);
            }

            if (m_getUpdateBehaviorMethod != null)
            {
                children.Add(m_getUpdateBehaviorMethod);
            }

            if (m_validateFilesMethod != null)
            {
                children.Add(m_validateFilesMethod);
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
                case Opc.Ua.BrowseNames.FileSystem:
                {
                    if (createOrReplace)
                    {
                        if (FileSystem == null)
                        {
                            if (replacement == null)
                            {
                                FileSystem = new FileDirectoryState(this);
                            }
                            else
                            {
                                FileSystem = (FileDirectoryState)replacement;
                            }
                        }
                    }

                    instance = FileSystem;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.GetUpdateBehavior:
                {
                    if (createOrReplace)
                    {
                        if (GetUpdateBehavior == null)
                        {
                            if (replacement == null)
                            {
                                GetUpdateBehavior = new GetUpdateBehaviorFileSystemMethodState(this);
                            }
                            else
                            {
                                GetUpdateBehavior = (GetUpdateBehaviorFileSystemMethodState)replacement;
                            }
                        }
                    }

                    instance = GetUpdateBehavior;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ValidateFiles:
                {
                    if (createOrReplace)
                    {
                        if (ValidateFiles == null)
                        {
                            if (replacement == null)
                            {
                                ValidateFiles = new ValidateFilesMethodState(this);
                            }
                            else
                            {
                                ValidateFiles = (ValidateFilesMethodState)replacement;
                            }
                        }
                    }

                    instance = ValidateFiles;
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
        private FileDirectoryState m_fileSystem;
        private GetUpdateBehaviorFileSystemMethodState m_getUpdateBehaviorMethod;
        private ValidateFilesMethodState m_validateFilesMethod;
        #endregion
    }
    #endif
    #endregion

    #region SoftwareVersionState Class
    #if (!OPCUA_EXCLUDE_SoftwareVersionState)
    /// <summary>
    /// Stores an instance of the SoftwareVersionType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class SoftwareVersionState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public SoftwareVersionState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.SoftwareVersionType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (PatchIdentifiers != null)
            {
                PatchIdentifiers.Initialize(context, PatchIdentifiers_InitializationString);
            }

            if (ReleaseDate != null)
            {
                ReleaseDate.Initialize(context, ReleaseDate_InitializationString);
            }

            if (ChangeLogReference != null)
            {
                ChangeLogReference.Initialize(context, ChangeLogReference_InitializationString);
            }

            if (Hash != null)
            {
                Hash.Initialize(context, Hash_InitializationString);
            }
        }

        #region Initialization String
        private const string PatchIdentifiers_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xdgiQoCAAAAAgAQAAAAUGF0Y2hJZGVudGlm" +
           "aWVycwEC1D8ALgBE1D8AAAAMAQAAAAEAAAAAAAAAAQH/////AAAAAA==";

        private const string ReleaseDate_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgALAAAAUmVsZWFzZURhdGUB" +
           "AtU/AC4ARNU/AAAADf////8BAf////8AAAAA";

        private const string ChangeLogReference_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgASAAAAQ2hhbmdlTG9nUmVm" +
           "ZXJlbmNlAQLWPwAuAETWPwAAAAz/////AQH/////AAAAAA==";

        private const string Hash_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAEAAAASGFzaAEC1z8ALgBE" +
           "1z8AAAAP/////wEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAbAAAAU29mdHdhcmVWZXJz" +
           "aW9uVHlwZUluc3RhbmNlAQLQPwEC0D/QPwAA/////wcAAAAVYIkKAgAAAAIADAAAAE1hbnVmYWN0dXJl" +
           "cgEC0T8ALgBE0T8AAAAV/////wEB/////wAAAAAVYIkKAgAAAAIADwAAAE1hbnVmYWN0dXJlclVyaQEC" +
           "0j8ALgBE0j8AAAAM/////wEB/////wAAAAAVYIkKAgAAAAIAEAAAAFNvZnR3YXJlUmV2aXNpb24BAtM/" +
           "AC4ARNM/AAAADP////8BAf////8AAAAAF2CJCgIAAAACABAAAABQYXRjaElkZW50aWZpZXJzAQLUPwAu" +
           "AETUPwAAAAwBAAAAAQAAAAAAAAABAf////8AAAAAFWCJCgIAAAACAAsAAABSZWxlYXNlRGF0ZQEC1T8A" +
           "LgBE1T8AAAAN/////wEB/////wAAAAAVYIkKAgAAAAIAEgAAAENoYW5nZUxvZ1JlZmVyZW5jZQEC1j8A" +
           "LgBE1j8AAAAM/////wEB/////wAAAAAVYIkKAgAAAAIABAAAAEhhc2gBAtc/AC4ARNc/AAAAD/////8B" +
           "Af////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<LocalizedText> Manufacturer
        {
            get
            {
                return m_manufacturer;
            }

            set
            {
                if (!Object.ReferenceEquals(m_manufacturer, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_manufacturer = value;
            }
        }

        /// <remarks />
        public PropertyState<string> ManufacturerUri
        {
            get
            {
                return m_manufacturerUri;
            }

            set
            {
                if (!Object.ReferenceEquals(m_manufacturerUri, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_manufacturerUri = value;
            }
        }

        /// <remarks />
        public PropertyState<string> SoftwareRevision
        {
            get
            {
                return m_softwareRevision;
            }

            set
            {
                if (!Object.ReferenceEquals(m_softwareRevision, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_softwareRevision = value;
            }
        }

        /// <remarks />
        public PropertyState<string[]> PatchIdentifiers
        {
            get
            {
                return m_patchIdentifiers;
            }

            set
            {
                if (!Object.ReferenceEquals(m_patchIdentifiers, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_patchIdentifiers = value;
            }
        }

        /// <remarks />
        public PropertyState<DateTime> ReleaseDate
        {
            get
            {
                return m_releaseDate;
            }

            set
            {
                if (!Object.ReferenceEquals(m_releaseDate, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_releaseDate = value;
            }
        }

        /// <remarks />
        public PropertyState<string> ChangeLogReference
        {
            get
            {
                return m_changeLogReference;
            }

            set
            {
                if (!Object.ReferenceEquals(m_changeLogReference, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_changeLogReference = value;
            }
        }

        /// <remarks />
        public PropertyState<byte[]> Hash
        {
            get
            {
                return m_hash;
            }

            set
            {
                if (!Object.ReferenceEquals(m_hash, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_hash = value;
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
            if (m_manufacturer != null)
            {
                children.Add(m_manufacturer);
            }

            if (m_manufacturerUri != null)
            {
                children.Add(m_manufacturerUri);
            }

            if (m_softwareRevision != null)
            {
                children.Add(m_softwareRevision);
            }

            if (m_patchIdentifiers != null)
            {
                children.Add(m_patchIdentifiers);
            }

            if (m_releaseDate != null)
            {
                children.Add(m_releaseDate);
            }

            if (m_changeLogReference != null)
            {
                children.Add(m_changeLogReference);
            }

            if (m_hash != null)
            {
                children.Add(m_hash);
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
                case Opc.Ua.Di.BrowseNames.Manufacturer:
                {
                    if (createOrReplace)
                    {
                        if (Manufacturer == null)
                        {
                            if (replacement == null)
                            {
                                Manufacturer = new PropertyState<LocalizedText>(this);
                            }
                            else
                            {
                                Manufacturer = (PropertyState<LocalizedText>)replacement;
                            }
                        }
                    }

                    instance = Manufacturer;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ManufacturerUri:
                {
                    if (createOrReplace)
                    {
                        if (ManufacturerUri == null)
                        {
                            if (replacement == null)
                            {
                                ManufacturerUri = new PropertyState<string>(this);
                            }
                            else
                            {
                                ManufacturerUri = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = ManufacturerUri;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.SoftwareRevision:
                {
                    if (createOrReplace)
                    {
                        if (SoftwareRevision == null)
                        {
                            if (replacement == null)
                            {
                                SoftwareRevision = new PropertyState<string>(this);
                            }
                            else
                            {
                                SoftwareRevision = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = SoftwareRevision;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.PatchIdentifiers:
                {
                    if (createOrReplace)
                    {
                        if (PatchIdentifiers == null)
                        {
                            if (replacement == null)
                            {
                                PatchIdentifiers = new PropertyState<string[]>(this);
                            }
                            else
                            {
                                PatchIdentifiers = (PropertyState<string[]>)replacement;
                            }
                        }
                    }

                    instance = PatchIdentifiers;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ReleaseDate:
                {
                    if (createOrReplace)
                    {
                        if (ReleaseDate == null)
                        {
                            if (replacement == null)
                            {
                                ReleaseDate = new PropertyState<DateTime>(this);
                            }
                            else
                            {
                                ReleaseDate = (PropertyState<DateTime>)replacement;
                            }
                        }
                    }

                    instance = ReleaseDate;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ChangeLogReference:
                {
                    if (createOrReplace)
                    {
                        if (ChangeLogReference == null)
                        {
                            if (replacement == null)
                            {
                                ChangeLogReference = new PropertyState<string>(this);
                            }
                            else
                            {
                                ChangeLogReference = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = ChangeLogReference;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Hash:
                {
                    if (createOrReplace)
                    {
                        if (Hash == null)
                        {
                            if (replacement == null)
                            {
                                Hash = new PropertyState<byte[]>(this);
                            }
                            else
                            {
                                Hash = (PropertyState<byte[]>)replacement;
                            }
                        }
                    }

                    instance = Hash;
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
        private PropertyState<LocalizedText> m_manufacturer;
        private PropertyState<string> m_manufacturerUri;
        private PropertyState<string> m_softwareRevision;
        private PropertyState<string[]> m_patchIdentifiers;
        private PropertyState<DateTime> m_releaseDate;
        private PropertyState<string> m_changeLogReference;
        private PropertyState<byte[]> m_hash;
        #endregion
    }
    #endif
    #endregion

    #region PrepareForUpdateStateMachineState Class
    #if (!OPCUA_EXCLUDE_PrepareForUpdateStateMachineState)
    /// <summary>
    /// Stores an instance of the PrepareForUpdateStateMachineType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class PrepareForUpdateStateMachineState : FiniteStateMachineState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public PrepareForUpdateStateMachineState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.PrepareForUpdateStateMachineType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (PercentComplete != null)
            {
                PercentComplete.Initialize(context, PercentComplete_InitializationString);
            }

            if (Resume != null)
            {
                Resume.Initialize(context, Resume_InitializationString);
            }
        }

        #region Initialization String
        private const string PercentComplete_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAPAAAAUGVyY2VudENvbXBs" +
           "ZXRlAQLmPwAvAD/mPwAAAAP/////AQH/////AAAAAA==";

        private const string Resume_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgAGAAAAUmVzdW1lAQLpPwAv" +
           "AQLpP+k/AAABAf////8AAAAA";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAoAAAAUHJlcGFyZUZvclVw" +
           "ZGF0ZVN0YXRlTWFjaGluZVR5cGVJbnN0YW5jZQEC2D8BAtg/2D8AAP////8FAAAAFWCJCgIAAAAAAAwA" +
           "AABDdXJyZW50U3RhdGUBAtk/AC8BAMgK2T8AAAAV/////wEB/////wEAAAAVYIkKAgAAAAAAAgAAAElk" +
           "AQLaPwAuAETaPwAAABH/////AQH/////AAAAABVgiQoCAAAAAgAPAAAAUGVyY2VudENvbXBsZXRlAQLm" +
           "PwAvAD/mPwAAAAP/////AQH/////AAAAAARhggoEAAAAAgAHAAAAUHJlcGFyZQEC5z8ALwEC5z/nPwAA" +
           "AQH/////AAAAAARhggoEAAAAAgAFAAAAQWJvcnQBAug/AC8BAug/6D8AAAEB/////wAAAAAEYYIKBAAA" +
           "AAIABgAAAFJlc3VtZQEC6T8ALwEC6T/pPwAAAQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public BaseDataVariableState<byte> PercentComplete
        {
            get
            {
                return m_percentComplete;
            }

            set
            {
                if (!Object.ReferenceEquals(m_percentComplete, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_percentComplete = value;
            }
        }

        /// <remarks />
        public MethodState Prepare
        {
            get
            {
                return m_prepareMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_prepareMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_prepareMethod = value;
            }
        }

        /// <remarks />
        public MethodState Abort
        {
            get
            {
                return m_abortMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_abortMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_abortMethod = value;
            }
        }

        /// <remarks />
        public MethodState Resume
        {
            get
            {
                return m_resumeMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_resumeMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_resumeMethod = value;
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
            if (m_percentComplete != null)
            {
                children.Add(m_percentComplete);
            }

            if (m_prepareMethod != null)
            {
                children.Add(m_prepareMethod);
            }

            if (m_abortMethod != null)
            {
                children.Add(m_abortMethod);
            }

            if (m_resumeMethod != null)
            {
                children.Add(m_resumeMethod);
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
                case Opc.Ua.Di.BrowseNames.PercentComplete:
                {
                    if (createOrReplace)
                    {
                        if (PercentComplete == null)
                        {
                            if (replacement == null)
                            {
                                PercentComplete = new BaseDataVariableState<byte>(this);
                            }
                            else
                            {
                                PercentComplete = (BaseDataVariableState<byte>)replacement;
                            }
                        }
                    }

                    instance = PercentComplete;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Prepare:
                {
                    if (createOrReplace)
                    {
                        if (Prepare == null)
                        {
                            if (replacement == null)
                            {
                                Prepare = new MethodState(this);
                            }
                            else
                            {
                                Prepare = (MethodState)replacement;
                            }
                        }
                    }

                    instance = Prepare;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Abort:
                {
                    if (createOrReplace)
                    {
                        if (Abort == null)
                        {
                            if (replacement == null)
                            {
                                Abort = new MethodState(this);
                            }
                            else
                            {
                                Abort = (MethodState)replacement;
                            }
                        }
                    }

                    instance = Abort;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Resume:
                {
                    if (createOrReplace)
                    {
                        if (Resume == null)
                        {
                            if (replacement == null)
                            {
                                Resume = new MethodState(this);
                            }
                            else
                            {
                                Resume = (MethodState)replacement;
                            }
                        }
                    }

                    instance = Resume;
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
        private BaseDataVariableState<byte> m_percentComplete;
        private MethodState m_prepareMethod;
        private MethodState m_abortMethod;
        private MethodState m_resumeMethod;
        #endregion
    }
    #endif
    #endregion

    #region InstallationStateMachineState Class
    #if (!OPCUA_EXCLUDE_InstallationStateMachineState)
    /// <summary>
    /// Stores an instance of the InstallationStateMachineType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class InstallationStateMachineState : FiniteStateMachineState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public InstallationStateMachineState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.InstallationStateMachineType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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

            if (PercentComplete != null)
            {
                PercentComplete.Initialize(context, PercentComplete_InitializationString);
            }

            if (InstallationDelay != null)
            {
                InstallationDelay.Initialize(context, InstallationDelay_InitializationString);
            }

            if (InstallSoftwarePackage != null)
            {
                InstallSoftwarePackage.Initialize(context, InstallSoftwarePackage_InitializationString);
            }

            if (InstallFiles != null)
            {
                InstallFiles.Initialize(context, InstallFiles_InitializationString);
            }
        }

        #region Initialization String
        private const string PercentComplete_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgAPAAAAUGVyY2VudENvbXBs" +
           "ZXRlAQIKQAAvAD8KQAAAAAP/////AQH/////AAAAAA==";

        private const string InstallationDelay_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAAAgARAAAASW5zdGFsbGF0aW9u" +
           "RGVsYXkBAgtAAC8APwtAAAABACIB/////wEB/////wAAAAA=";

        private const string InstallSoftwarePackage_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgAWAAAASW5zdGFsbFNvZnR3" +
           "YXJlUGFja2FnZQECDEAALwECDEAMQAAAAQH/////AQAAABdgqQoCAAAAAAAOAAAASW5wdXRBcmd1bWVu" +
           "dHMBAg1AAC4ARA1AAACWBAAAAAEAKgEBHgAAAA8AAABNYW51ZmFjdHVyZXJVcmkADP////8AAAAAAAEA" +
           "KgEBHwAAABAAAABTb2Z0d2FyZVJldmlzaW9uAAz/////AAAAAAABACoBASMAAAAQAAAAUGF0Y2hJZGVu" +
           "dGlmaWVycwAMAQAAAAEAAAAAAAAAAAEAKgEBEwAAAAQAAABIYXNoAA//////AAAAAAABACgBAQAAAAEA" +
           "AAAAAAAAAQH/////AAAAAA==";

        private const string InstallFiles_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgAMAAAASW5zdGFsbEZpbGVz" +
           "AQIPQAAvAQIPQA9AAAABAf////8BAAAAF2CpCgIAAAAAAA4AAABJbnB1dEFyZ3VtZW50cwECEEAALgBE" +
           "EEAAAJYBAAAAAQAqAQEaAAAABwAAAE5vZGVJZHMAEQEAAAABAAAAAAAAAAABACgBAQAAAAEAAAAAAAAA" +
           "AQH/////AAAAAA==";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAkAAAASW5zdGFsbGF0aW9u" +
           "U3RhdGVNYWNoaW5lVHlwZUluc3RhbmNlAQL8PwEC/D/8PwAA/////wYAAAAVYIkKAgAAAAAADAAAAEN1" +
           "cnJlbnRTdGF0ZQEC/T8ALwEAyAr9PwAAABX/////AQH/////AQAAABVgiQoCAAAAAAACAAAASWQBAv4/" +
           "AC4ARP4/AAAAEf////8BAf////8AAAAAFWCJCgIAAAACAA8AAABQZXJjZW50Q29tcGxldGUBAgpAAC8A" +
           "PwpAAAAAA/////8BAf////8AAAAAFWCJCgIAAAACABEAAABJbnN0YWxsYXRpb25EZWxheQECC0AALwA/" +
           "C0AAAAEAIgH/////AQH/////AAAAAARhggoEAAAAAgAWAAAASW5zdGFsbFNvZnR3YXJlUGFja2FnZQEC" +
           "DEAALwECDEAMQAAAAQH/////AQAAABdgqQoCAAAAAAAOAAAASW5wdXRBcmd1bWVudHMBAg1AAC4ARA1A" +
           "AACWBAAAAAEAKgEBHgAAAA8AAABNYW51ZmFjdHVyZXJVcmkADP////8AAAAAAAEAKgEBHwAAABAAAABT" +
           "b2Z0d2FyZVJldmlzaW9uAAz/////AAAAAAABACoBASMAAAAQAAAAUGF0Y2hJZGVudGlmaWVycwAMAQAA" +
           "AAEAAAAAAAAAAAEAKgEBEwAAAAQAAABIYXNoAA//////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////" +
           "AAAAAARhggoEAAAAAgAMAAAASW5zdGFsbEZpbGVzAQIPQAAvAQIPQA9AAAABAf////8BAAAAF2CpCgIA" +
           "AAAAAA4AAABJbnB1dEFyZ3VtZW50cwECEEAALgBEEEAAAJYBAAAAAQAqAQEaAAAABwAAAE5vZGVJZHMA" +
           "EQEAAAABAAAAAAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAAARhggoEAAAAAgAGAAAAUmVzdW1l" +
           "AQIRQAAvAQIRQBFAAAABAf////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public BaseDataVariableState<byte> PercentComplete
        {
            get
            {
                return m_percentComplete;
            }

            set
            {
                if (!Object.ReferenceEquals(m_percentComplete, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_percentComplete = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<double> InstallationDelay
        {
            get
            {
                return m_installationDelay;
            }

            set
            {
                if (!Object.ReferenceEquals(m_installationDelay, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_installationDelay = value;
            }
        }

        /// <remarks />
        public InstallSoftwarePackageMethodState InstallSoftwarePackage
        {
            get
            {
                return m_installSoftwarePackageMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_installSoftwarePackageMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_installSoftwarePackageMethod = value;
            }
        }

        /// <remarks />
        public InstallFilesMethodState InstallFiles
        {
            get
            {
                return m_installFilesMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_installFilesMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_installFilesMethod = value;
            }
        }

        /// <remarks />
        public MethodState Resume
        {
            get
            {
                return m_resumeMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_resumeMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_resumeMethod = value;
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
            if (m_percentComplete != null)
            {
                children.Add(m_percentComplete);
            }

            if (m_installationDelay != null)
            {
                children.Add(m_installationDelay);
            }

            if (m_installSoftwarePackageMethod != null)
            {
                children.Add(m_installSoftwarePackageMethod);
            }

            if (m_installFilesMethod != null)
            {
                children.Add(m_installFilesMethod);
            }

            if (m_resumeMethod != null)
            {
                children.Add(m_resumeMethod);
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
                case Opc.Ua.Di.BrowseNames.PercentComplete:
                {
                    if (createOrReplace)
                    {
                        if (PercentComplete == null)
                        {
                            if (replacement == null)
                            {
                                PercentComplete = new BaseDataVariableState<byte>(this);
                            }
                            else
                            {
                                PercentComplete = (BaseDataVariableState<byte>)replacement;
                            }
                        }
                    }

                    instance = PercentComplete;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.InstallationDelay:
                {
                    if (createOrReplace)
                    {
                        if (InstallationDelay == null)
                        {
                            if (replacement == null)
                            {
                                InstallationDelay = new BaseDataVariableState<double>(this);
                            }
                            else
                            {
                                InstallationDelay = (BaseDataVariableState<double>)replacement;
                            }
                        }
                    }

                    instance = InstallationDelay;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.InstallSoftwarePackage:
                {
                    if (createOrReplace)
                    {
                        if (InstallSoftwarePackage == null)
                        {
                            if (replacement == null)
                            {
                                InstallSoftwarePackage = new InstallSoftwarePackageMethodState(this);
                            }
                            else
                            {
                                InstallSoftwarePackage = (InstallSoftwarePackageMethodState)replacement;
                            }
                        }
                    }

                    instance = InstallSoftwarePackage;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.InstallFiles:
                {
                    if (createOrReplace)
                    {
                        if (InstallFiles == null)
                        {
                            if (replacement == null)
                            {
                                InstallFiles = new InstallFilesMethodState(this);
                            }
                            else
                            {
                                InstallFiles = (InstallFilesMethodState)replacement;
                            }
                        }
                    }

                    instance = InstallFiles;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.Resume:
                {
                    if (createOrReplace)
                    {
                        if (Resume == null)
                        {
                            if (replacement == null)
                            {
                                Resume = new MethodState(this);
                            }
                            else
                            {
                                Resume = (MethodState)replacement;
                            }
                        }
                    }

                    instance = Resume;
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
        private BaseDataVariableState<byte> m_percentComplete;
        private BaseDataVariableState<double> m_installationDelay;
        private InstallSoftwarePackageMethodState m_installSoftwarePackageMethod;
        private InstallFilesMethodState m_installFilesMethod;
        private MethodState m_resumeMethod;
        #endregion
    }
    #endif
    #endregion

    #region PowerCycleStateMachineState Class
    #if (!OPCUA_EXCLUDE_PowerCycleStateMachineState)
    /// <summary>
    /// Stores an instance of the PowerCycleStateMachineType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class PowerCycleStateMachineState : FiniteStateMachineState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public PowerCycleStateMachineState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.PowerCycleStateMachineType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAiAAAAUG93ZXJDeWNsZVN0" +
           "YXRlTWFjaGluZVR5cGVJbnN0YW5jZQECIEABAiBAIEAAAP////8BAAAAFWCJCgIAAAAAAAwAAABDdXJy" +
           "ZW50U3RhdGUBAiFAAC8BAMgKIUAAAAAV/////wEB/////wEAAAAVYIkKAgAAAAAAAgAAAElkAQIiQAAu" +
           "AEQiQAAAABH/////AQH/////AAAAAA==";
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

    #region ConfirmationStateMachineState Class
    #if (!OPCUA_EXCLUDE_ConfirmationStateMachineState)
    /// <summary>
    /// Stores an instance of the ConfirmationStateMachineType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ConfirmationStateMachineState : FiniteStateMachineState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ConfirmationStateMachineState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Di.ObjectTypes.ConfirmationStateMachineType, Opc.Ua.Di.Namespaces.DI, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAgAkAAAAQ29uZmlybWF0aW9u" +
           "U3RhdGVNYWNoaW5lVHlwZUluc3RhbmNlAQI2QAECNkA2QAAA/////wMAAAAVYIkKAgAAAAAADAAAAEN1" +
           "cnJlbnRTdGF0ZQECN0AALwEAyAo3QAAAABX/////AQH/////AQAAABVgiQoCAAAAAAACAAAASWQBAjhA" +
           "AC4ARDhAAAAAEf////8BAf////8AAAAABGGCCgQAAAACAAcAAABDb25maXJtAQJEQAAvAQJEQERAAAAB" +
           "Af////8AAAAAFWCJCgIAAAACABMAAABDb25maXJtYXRpb25UaW1lb3V0AQJFQAAvAD9FQAAAAQAiAf//" +
           "//8BAf////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public MethodState Confirm
        {
            get
            {
                return m_confirmMethod;
            }

            set
            {
                if (!Object.ReferenceEquals(m_confirmMethod, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_confirmMethod = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<double> ConfirmationTimeout
        {
            get
            {
                return m_confirmationTimeout;
            }

            set
            {
                if (!Object.ReferenceEquals(m_confirmationTimeout, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_confirmationTimeout = value;
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
            if (m_confirmMethod != null)
            {
                children.Add(m_confirmMethod);
            }

            if (m_confirmationTimeout != null)
            {
                children.Add(m_confirmationTimeout);
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
                case Opc.Ua.Di.BrowseNames.Confirm:
                {
                    if (createOrReplace)
                    {
                        if (Confirm == null)
                        {
                            if (replacement == null)
                            {
                                Confirm = new MethodState(this);
                            }
                            else
                            {
                                Confirm = (MethodState)replacement;
                            }
                        }
                    }

                    instance = Confirm;
                    break;
                }

                case Opc.Ua.Di.BrowseNames.ConfirmationTimeout:
                {
                    if (createOrReplace)
                    {
                        if (ConfirmationTimeout == null)
                        {
                            if (replacement == null)
                            {
                                ConfirmationTimeout = new BaseDataVariableState<double>(this);
                            }
                            else
                            {
                                ConfirmationTimeout = (BaseDataVariableState<double>)replacement;
                            }
                        }
                    }

                    instance = ConfirmationTimeout;
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
        private MethodState m_confirmMethod;
        private BaseDataVariableState<double> m_confirmationTimeout;
        #endregion
    }
    #endif
    #endregion

    #region InstallSoftwarePackageMethodState Class
    #if (!OPCUA_EXCLUDE_InstallSoftwarePackageMethodState)
    /// <summary>
    /// Stores an instance of the InstallSoftwarePackageMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class InstallSoftwarePackageMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public InstallSoftwarePackageMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new InstallSoftwarePackageMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgAgAAAASW5zdGFsbFNvZnR3" +
           "YXJlUGFja2FnZU1ldGhvZFR5cGUBAlJAAC8BAlJAUkAAAAEB/////wEAAAAXYKkKAgAAAAAADgAAAElu" +
           "cHV0QXJndW1lbnRzAQJTQAAuAERTQAAAlgQAAAABACoBAR4AAAAPAAAATWFudWZhY3R1cmVyVXJpAAz/" +
           "////AAAAAAABACoBAR8AAAAQAAAAU29mdHdhcmVSZXZpc2lvbgAM/////wAAAAAAAQAqAQEjAAAAEAAA" +
           "AFBhdGNoSWRlbnRpZmllcnMADAEAAAABAAAAAAAAAAABACoBARMAAAAEAAAASGFzaAAP/////wAAAAAA" +
           "AQAoAQEAAAABAAAAAAAAAAEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public InstallSoftwarePackageMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            string manufacturerUri = (string)_inputArguments[0];
            string softwareRevision = (string)_inputArguments[1];
            string[] patchIdentifiers = (string[])_inputArguments[2];
            byte[] hash = (byte[])_inputArguments[3];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    manufacturerUri,
                    softwareRevision,
                    patchIdentifiers,
                    hash);
            }

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult InstallSoftwarePackageMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        string manufacturerUri,
        string softwareRevision,
        string[] patchIdentifiers,
        byte[] hash);
    #endif
    #endregion

    #region InstallFilesMethodState Class
    #if (!OPCUA_EXCLUDE_InstallFilesMethodState)
    /// <summary>
    /// Stores an instance of the InstallFilesMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class InstallFilesMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public InstallFilesMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new InstallFilesMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgAWAAAASW5zdGFsbEZpbGVz" +
           "TWV0aG9kVHlwZQECVEAALwECVEBUQAAAAQH/////AQAAABdgqQoCAAAAAAAOAAAASW5wdXRBcmd1bWVu" +
           "dHMBAlVAAC4ARFVAAACWAQAAAAEAKgEBGgAAAAcAAABOb2RlSWRzABEBAAAAAQAAAAAAAAAAAQAoAQEA" +
           "AAABAAAAAAAAAAEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public InstallFilesMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            NodeId[] nodeIds = (NodeId[])_inputArguments[0];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    nodeIds);
            }

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult InstallFilesMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        NodeId[] nodeIds);
    #endif
    #endregion

    #region GetUpdateBehaviorFileSystemMethodState Class
    #if (!OPCUA_EXCLUDE_GetUpdateBehaviorFileSystemMethodState)
    /// <summary>
    /// Stores an instance of the GetUpdateBehaviorFileSystemMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class GetUpdateBehaviorFileSystemMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public GetUpdateBehaviorFileSystemMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new GetUpdateBehaviorFileSystemMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgAlAAAAR2V0VXBkYXRlQmVo" +
           "YXZpb3JGaWxlU3lzdGVtTWV0aG9kVHlwZQECVkAALwECVkBWQAAAAQH/////AgAAABdgqQoCAAAAAAAO" +
           "AAAASW5wdXRBcmd1bWVudHMBAldAAC4ARFdAAACWAQAAAAEAKgEBGgAAAAcAAABOb2RlSWRzABEBAAAA" +
           "AQAAAAAAAAAAAQAoAQEAAAABAAAAAAAAAAEB/////wAAAAAXYKkKAgAAAAAADwAAAE91dHB1dEFyZ3Vt" +
           "ZW50cwECWEAALgBEWEAAAJYBAAAAAQAqAQEfAAAADgAAAFVwZGF0ZUJlaGF2aW9yAQJQQP////8AAAAA" +
           "AAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public GetUpdateBehaviorFileSystemMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            NodeId[] nodeIds = (NodeId[])_inputArguments[0];

            uint updateBehavior = (uint)_outputArguments[0];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    nodeIds,
                    ref updateBehavior);
            }

            _outputArguments[0] = updateBehavior;

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult GetUpdateBehaviorFileSystemMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        NodeId[] nodeIds,
        ref uint updateBehavior);
    #endif
    #endregion

    #region ValidateFilesMethodState Class
    #if (!OPCUA_EXCLUDE_ValidateFilesMethodState)
    /// <summary>
    /// Stores an instance of the ValidateFilesMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ValidateFilesMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ValidateFilesMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new ValidateFilesMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgAXAAAAVmFsaWRhdGVGaWxl" +
           "c01ldGhvZFR5cGUBAllAAC8BAllAWUAAAAEB/////wIAAAAXYKkKAgAAAAAADgAAAElucHV0QXJndW1l" +
           "bnRzAQJaQAAuAERaQAAAlgEAAAABACoBARoAAAAHAAAATm9kZUlkcwARAQAAAAEAAAAAAAAAAAEAKAEB" +
           "AAAAAQAAAAAAAAABAf////8AAAAAF2CpCgIAAAAAAA8AAABPdXRwdXRBcmd1bWVudHMBAltAAC4ARFtA" +
           "AACWAgAAAAEAKgEBGAAAAAkAAABFcnJvckNvZGUABv////8AAAAAAAEAKgEBGwAAAAwAAABFcnJvck1l" +
           "c3NhZ2UAFf////8AAAAAAAEAKAEBAAAAAQAAAAAAAAABAf////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public ValidateFilesMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            NodeId[] nodeIds = (NodeId[])_inputArguments[0];

            int errorCode = (int)_outputArguments[0];
            LocalizedText errorMessage = (LocalizedText)_outputArguments[1];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    nodeIds,
                    ref errorCode,
                    ref errorMessage);
            }

            _outputArguments[0] = errorCode;
            _outputArguments[1] = errorMessage;

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult ValidateFilesMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        NodeId[] nodeIds,
        ref int errorCode,
        ref LocalizedText errorMessage);
    #endif
    #endregion

    #region GetUpdateBehaviorCachedLoadingMethodState Class
    #if (!OPCUA_EXCLUDE_GetUpdateBehaviorCachedLoadingMethodState)
    /// <summary>
    /// Stores an instance of the GetUpdateBehaviorCachedLoadingMethodType Method.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class GetUpdateBehaviorCachedLoadingMethodState : MethodState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public GetUpdateBehaviorCachedLoadingMethodState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Constructs an instance of a node.
        /// </summary>
        /// <param name="parent">The parent.</param>
        /// <returns>The new node.</returns>
        public new static NodeState Construct(NodeState parent)
        {
            return new GetUpdateBehaviorCachedLoadingMethodState(parent);
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
        /// Initializes the any option children defined for the instance.
        /// </summary>
        protected override void InitializeOptionalChildren(ISystemContext context)
        {
            base.InitializeOptionalChildren(context);
        }

        #region Initialization String
        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRhggoEAAAAAgAoAAAAR2V0VXBkYXRlQmVo" +
           "YXZpb3JDYWNoZWRMb2FkaW5nTWV0aG9kVHlwZQECXEAALwECXEBcQAAAAQH/////AgAAABdgqQoCAAAA" +
           "AAAOAAAASW5wdXRBcmd1bWVudHMBAl1AAC4ARF1AAACWAwAAAAEAKgEBHgAAAA8AAABNYW51ZmFjdHVy" +
           "ZXJVcmkADP////8AAAAAAAEAKgEBHwAAABAAAABTb2Z0d2FyZVJldmlzaW9uAAz/////AAAAAAABACoB" +
           "ASMAAAAQAAAAUGF0Y2hJZGVudGlmaWVycwAMAQAAAAEAAAAAAAAAAAEAKAEBAAAAAQAAAAAAAAABAf//" +
           "//8AAAAAF2CpCgIAAAAAAA8AAABPdXRwdXRBcmd1bWVudHMBAl5AAC4ARF5AAACWAQAAAAEAKgEBHwAA" +
           "AA4AAABVcGRhdGVCZWhhdmlvcgECUED/////AAAAAAABACgBAQAAAAEAAAAAAAAAAQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Event Callbacks
        /// <summary>
        /// Raised when the the method is called.
        /// </summary>
        public GetUpdateBehaviorCachedLoadingMethodStateMethodCallHandler OnCall;
        #endregion

        #region Public Properties
        #endregion

        #region Overridden Methods
        /// <summary>
        /// Invokes the method, returns the result and output argument.
        /// </summary>
        protected override ServiceResult Call(
            ISystemContext _context,
            NodeId _objectId,
            IList<object> _inputArguments,
            IList<object> _outputArguments)
        {
            if (OnCall == null)
            {
                return base.Call(_context, _objectId, _inputArguments, _outputArguments);
            }

            ServiceResult result = null;

            string manufacturerUri = (string)_inputArguments[0];
            string softwareRevision = (string)_inputArguments[1];
            string[] patchIdentifiers = (string[])_inputArguments[2];

            uint updateBehavior = (uint)_outputArguments[0];

            if (OnCall != null)
            {
                result = OnCall(
                    _context,
                    this,
                    _objectId,
                    manufacturerUri,
                    softwareRevision,
                    patchIdentifiers,
                    ref updateBehavior);
            }

            _outputArguments[0] = updateBehavior;

            return result;
        }
        #endregion

        #region Private Fields
        #endregion
    }

    /// <summary>
    /// Used to receive notifications when the method is called.
    /// </summary>
    /// <exclude />
    public delegate ServiceResult GetUpdateBehaviorCachedLoadingMethodStateMethodCallHandler(
        ISystemContext context,
        MethodState method,
        NodeId objectId,
        string manufacturerUri,
        string softwareRevision,
        string[] patchIdentifiers,
        ref uint updateBehavior);
    #endif
    #endregion

    #region MotionDeviceSystemState Class
    #if (!OPCUA_EXCLUDE_MotionDeviceSystemState)
    /// <summary>
    /// Stores an instance of the MotionDeviceSystemType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class MotionDeviceSystemState : ComponentState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public MotionDeviceSystemState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.MotionDeviceSystemType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////4RggAIBAAAAAwAeAAAATW90aW9uRGV2aWNl" +
           "U3lzdGVtVHlwZUluc3RhbmNlAQOAQAEDgECAQAAAAf////8DAAAAJGCACgEAAAADAA0AAABNb3Rpb25E" +
           "ZXZpY2VzAQOkQAMAAAAAUgAAAENvbnRhaW5zIGFueSBraW5lbWF0aWMgb3IgbW90aW9uIGRldmljZSB3" +
           "aGljaCBpcyBwYXJ0IG9mIHRoZSBtb3Rpb24gZGV2aWNlIHN5c3RlbS4ALwA9pEAAAP////8AAAAAJGCA" +
           "CgEAAAADAAsAAABDb250cm9sbGVycwEDe0EDAAAAADwAAABDb250YWlucyB0aGUgc2V0IG9mIGNvbnRy" +
           "b2xsZXJzIGluIHRoZSBtb3Rpb24gZGV2aWNlIHN5c3RlbS4ALwA9e0EAAP////8AAAAAJGCACgEAAAAD" +
           "AAwAAABTYWZldHlTdGF0ZXMBAy5CAwAAAAA3AAAAQ29udGFpbnMgc2FmZXR5LXJlbGF0ZWQgZGF0YSBm" +
           "cm9tIG1vdGlvbiBkZXZpY2Ugc3lzdGVtLgAvAD0uQgAA/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public FolderState MotionDevices
        {
            get
            {
                return m_motionDevices;
            }

            set
            {
                if (!Object.ReferenceEquals(m_motionDevices, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_motionDevices = value;
            }
        }

        /// <remarks />
        public FolderState Controllers
        {
            get
            {
                return m_controllers;
            }

            set
            {
                if (!Object.ReferenceEquals(m_controllers, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_controllers = value;
            }
        }

        /// <remarks />
        public FolderState SafetyStates
        {
            get
            {
                return m_safetyStates;
            }

            set
            {
                if (!Object.ReferenceEquals(m_safetyStates, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_safetyStates = value;
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
            if (m_motionDevices != null)
            {
                children.Add(m_motionDevices);
            }

            if (m_controllers != null)
            {
                children.Add(m_controllers);
            }

            if (m_safetyStates != null)
            {
                children.Add(m_safetyStates);
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
                case Opc.Ua.Robotics.BrowseNames.MotionDevices:
                {
                    if (createOrReplace)
                    {
                        if (MotionDevices == null)
                        {
                            if (replacement == null)
                            {
                                MotionDevices = new FolderState(this);
                            }
                            else
                            {
                                MotionDevices = (FolderState)replacement;
                            }
                        }
                    }

                    instance = MotionDevices;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.Controllers:
                {
                    if (createOrReplace)
                    {
                        if (Controllers == null)
                        {
                            if (replacement == null)
                            {
                                Controllers = new FolderState(this);
                            }
                            else
                            {
                                Controllers = (FolderState)replacement;
                            }
                        }
                    }

                    instance = Controllers;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.SafetyStates:
                {
                    if (createOrReplace)
                    {
                        if (SafetyStates == null)
                        {
                            if (replacement == null)
                            {
                                SafetyStates = new FolderState(this);
                            }
                            else
                            {
                                SafetyStates = (FolderState)replacement;
                            }
                        }
                    }

                    instance = SafetyStates;
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
        private FolderState m_motionDevices;
        private FolderState m_controllers;
        private FolderState m_safetyStates;
        #endregion
    }
    #endif
    #endregion

    #region MotionDeviceState Class
    #if (!OPCUA_EXCLUDE_MotionDeviceState)
    /// <summary>
    /// Stores an instance of the MotionDeviceType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class MotionDeviceState : ComponentState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public MotionDeviceState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.MotionDeviceType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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

            if (FlangeLoad != null)
            {
                FlangeLoad.Initialize(context, FlangeLoad_InitializationString);
            }

            if (AdditionalComponents != null)
            {
                AdditionalComponents.Initialize(context, AdditionalComponents_InitializationString);
            }
        }

        #region Initialization String
        private const string FlangeLoad_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAwAKAAAARmxhbmdlTG9hZAED" +
           "+EIDAAAAAIgAAABUaGUgRmxhbmdlTG9hZCBpcyB0aGUgbG9hZCBvbiB0aGUgZmxhbmdlIG9yIGF0IHRo" +
           "ZSBtb3VudGluZyBwb2ludCBvZiB0aGUgTW90aW9uRGV2aWNlLiBUaGlzIGNhbiBiZSB0aGUgbWF4aW11" +
           "bSBsb2FkIG9mIHRoZSBNb3Rpb25EZXZpY2UuAC8BA1ZI+EIAAP////8BAAAANWCJCgIAAAADAAQAAABN" +
           "YXNzAQP5QgMAAAAANQAAAFRoZSB3ZWlnaHQgb2YgdGhlIGxvYWQgbW91bnRlZCBvbiBvbmUgbW91bnRp" +
           "bmcgcG9pbnQuAC8BAFlE+UIAAAAL/////wEB/////wEAAAAVYIkKAgAAAAAAEAAAAEVuZ2luZWVyaW5n" +
           "VW5pdHMBA/5CAC4ARP5CAAABAHcD/////wEB/////wAAAAA=";

        private const string AdditionalComponents_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAwAUAAAAQWRkaXRpb25hbENv" +
           "bXBvbmVudHMBAxJDAwAAAAC8AAAAQWRkaXRpb25hbENvbXBvbmVudHMgaXMgYSBjb250YWluZXIgZm9y" +
           "IG9uZSBvciBtb3JlIGluc3RhbmNlcyBvZiBzdWJ0eXBlcyBvZiBDb21wb25lbnRUeXBlIGRlZmluZWQg" +
           "aW4gT1BDIFVBIERJLiBUaGUgbGlzdGVkIGNvbXBvbmVudHMgYXJlIGluc3RhbGxlZCBhdCB0aGUgbW90" +
           "aW9uIGRldmljZSwgZS5nLiBhbiBJTy1ib2FyZC4ALwA9EkMAAP////8AAAAA";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwAYAAAATW90aW9uRGV2aWNl" +
           "VHlwZUluc3RhbmNlAQNdQgEDXUJdQgAA/////woAAAAkYIAKAQAAAAIADAAAAFBhcmFtZXRlclNldAED" +
           "XkIDAAAAABcAAABGbGF0IGxpc3Qgb2YgUGFyYW1ldGVycwAvADpeQgAA/////wMAAAA1YIkKAgAAAAMA" +
           "BgAAAE9uUGF0aAEDgkIDAAAAAEsBAABPblBhdGggaXMgdHJ1ZSBpZiB0aGUgbW90aW9uIGRldmljZSBp" +
           "cyBvbiBvciBuZWFyIGVub3VnaCB0aGUgcGxhbm5lZCBwcm9ncmFtIHBhdGggc3VjaCB0aGF0IHByb2dy" +
           "YW0gZXhlY3V0aW9uIGNhbiBjb250aW51ZS4gSWYgdGhlIE1vdGlvbkRldmljZSBkZXZpYXRlcyB0b28g" +
           "bXVjaCBmcm9tIHRoaXMgcGF0aCBpbiBjYXNlIG9mIGVycm9ycyBvciBhbiBlbWVyZ2VuY3kgc3RvcCwg" +
           "dGhpcyB2YWx1ZSBiZWNvbWVzIGZhbHNlLiBJZiBPblBhdGggaXMgZmFsc2UsIHRoZSBtb3Rpb24gZGV2" +
           "aWNlIG5lZWRzIHJlcG9zaXRpb25pbmcgdG8gY29udGludWUgcHJvZ3JhbSBleGVjdXRpb24uAC8AP4JC" +
           "AAAAAf////8BAf////8AAAAANWCJCgIAAAADAAkAAABJbkNvbnRyb2wBA4NCAwAAAACzAAAASW5Db250" +
           "cm9sIHByb3ZpZGVzIHRoZSBpbmZvcm1hdGlvbiBpZiB0aGUgYWN0dWF0b3JzIChpbiBtb3N0IGNhc2Vz" +
           "IGEgbW90b3IpIG9mIHRoZSBtb3Rpb24gZGV2aWNlIGFyZSBwb3dlcmVkIHVwIGFuZCBpbiBjb250cm9s" +
           "OiAidHJ1ZSIuIFRoZSBtb3Rpb24gZGV2aWNlIG1pZ2h0IGJlIGluIGEgc3RhbmRzdGlsbC4ALwA/g0IA" +
           "AAAB/////wEB/////wAAAAA1YIkKAgAAAAMADQAAAFNwZWVkT3ZlcnJpZGUBA4RCAwAAAABbAAAAU3Bl" +
           "ZWRPdmVycmlkZSBwcm92aWRlcyB0aGUgY3VycmVudCBzcGVlZCBzZXR0aW5nIGluIHBlcmNlbnQgb2Yg" +
           "cHJvZ3JhbW1lZCBzcGVlZCAoMCAtIDEwMCUpLgAvAD+EQgAAAAv/////AQH/////AAAAABVgiQoCAAAA" +
           "AgAMAAAATWFudWZhY3R1cmVyAQNzQgAuAERzQgAAABX/////AQH/////AAAAABVgiQoCAAAAAgAFAAAA" +
           "TW9kZWwBA3VCAC4ARHVCAAAAFf////8BAf////8AAAAAFWCJCgIAAAACAAsAAABQcm9kdWN0Q29kZQED" +
           "eUIALgBEeUIAAAAM/////wEB/////wAAAAAVYIkKAgAAAAIADAAAAFNlcmlhbE51bWJlcgEDfEIALgBE" +
           "fEIAAAAM/////wEB/////wAAAAA1YIkKAgAAAAMAFAAAAE1vdGlvbkRldmljZUNhdGVnb3J5AQOBQgMA" +
           "AAAAggAAAFRoZSB2YXJpYWJsZSBNb3Rpb25EZXZpY2VDYXRlZ29yeSBwcm92aWRlcyB0aGUga2luZCBv" +
           "ZiBtb3Rpb24gZGV2aWNlIGRlZmluZWQgYnkgTW90aW9uRGV2aWNlQ2F0ZWdvcnlFbnVtZXJhdGlvbiBi" +
           "YXNlZCBvbiBJU08gODM3My4ALgBEgUIAAAEDfEj/////AQH/////AAAAACRggAoBAAAAAwAEAAAAQXhl" +
           "cwEDhUIDAAAAAD4AAABBeGVzIGlzIGEgY29udGFpbmVyIGZvciBvbmUgb3IgbW9yZSBpbnN0YW5jZXMg" +
           "b2YgdGhlIEF4aXNUeXBlLgAvAD2FQgAA/////wAAAAAkYIAKAQAAAAMACwAAAFBvd2VyVHJhaW5zAQPV" +
           "QgMAAAAASwAAAFBvd2VyVHJhaW5zIGlzIGEgY29udGFpbmVyIGZvciBvbmUgb3IgbW9yZSBpbnN0YW5j" +
           "ZXMgb2YgdGhlIFBvd2VyVHJhaW5UeXBlLgAvAD3VQgAA/////wAAAAAkYIAKAQAAAAMACgAAAEZsYW5n" +
           "ZUxvYWQBA/hCAwAAAACIAAAAVGhlIEZsYW5nZUxvYWQgaXMgdGhlIGxvYWQgb24gdGhlIGZsYW5nZSBv" +
           "ciBhdCB0aGUgbW91bnRpbmcgcG9pbnQgb2YgdGhlIE1vdGlvbkRldmljZS4gVGhpcyBjYW4gYmUgdGhl" +
           "IG1heGltdW0gbG9hZCBvZiB0aGUgTW90aW9uRGV2aWNlLgAvAQNWSPhCAAD/////AQAAADVgiQoCAAAA" +
           "AwAEAAAATWFzcwED+UIDAAAAADUAAABUaGUgd2VpZ2h0IG9mIHRoZSBsb2FkIG1vdW50ZWQgb24gb25l" +
           "IG1vdW50aW5nIHBvaW50LgAvAQBZRPlCAAAAC/////8BAf////8BAAAAFWCJCgIAAAAAABAAAABFbmdp" +
           "bmVlcmluZ1VuaXRzAQP+QgAuAET+QgAAAQB3A/////8BAf////8AAAAAJGCACgEAAAADABQAAABBZGRp" +
           "dGlvbmFsQ29tcG9uZW50cwEDEkMDAAAAALwAAABBZGRpdGlvbmFsQ29tcG9uZW50cyBpcyBhIGNvbnRh" +
           "aW5lciBmb3Igb25lIG9yIG1vcmUgaW5zdGFuY2VzIG9mIHN1YnR5cGVzIG9mIENvbXBvbmVudFR5cGUg" +
           "ZGVmaW5lZCBpbiBPUEMgVUEgREkuIFRoZSBsaXN0ZWQgY29tcG9uZW50cyBhcmUgaW5zdGFsbGVkIGF0" +
           "IHRoZSBtb3Rpb24gZGV2aWNlLCBlLmcuIGFuIElPLWJvYXJkLgAvAD0SQwAA/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<MotionDeviceCategoryEnumeration> MotionDeviceCategory
        {
            get
            {
                return m_motionDeviceCategory;
            }

            set
            {
                if (!Object.ReferenceEquals(m_motionDeviceCategory, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_motionDeviceCategory = value;
            }
        }

        /// <remarks />
        public FolderState Axes
        {
            get
            {
                return m_axes;
            }

            set
            {
                if (!Object.ReferenceEquals(m_axes, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_axes = value;
            }
        }

        /// <remarks />
        public FolderState PowerTrains
        {
            get
            {
                return m_powerTrains;
            }

            set
            {
                if (!Object.ReferenceEquals(m_powerTrains, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_powerTrains = value;
            }
        }

        /// <remarks />
        public LoadState FlangeLoad
        {
            get
            {
                return m_flangeLoad;
            }

            set
            {
                if (!Object.ReferenceEquals(m_flangeLoad, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_flangeLoad = value;
            }
        }

        /// <remarks />
        public FolderState AdditionalComponents
        {
            get
            {
                return m_additionalComponents;
            }

            set
            {
                if (!Object.ReferenceEquals(m_additionalComponents, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_additionalComponents = value;
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
            if (m_motionDeviceCategory != null)
            {
                children.Add(m_motionDeviceCategory);
            }

            if (m_axes != null)
            {
                children.Add(m_axes);
            }

            if (m_powerTrains != null)
            {
                children.Add(m_powerTrains);
            }

            if (m_flangeLoad != null)
            {
                children.Add(m_flangeLoad);
            }

            if (m_additionalComponents != null)
            {
                children.Add(m_additionalComponents);
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
                case Opc.Ua.Robotics.BrowseNames.MotionDeviceCategory:
                {
                    if (createOrReplace)
                    {
                        if (MotionDeviceCategory == null)
                        {
                            if (replacement == null)
                            {
                                MotionDeviceCategory = new PropertyState<MotionDeviceCategoryEnumeration>(this);
                            }
                            else
                            {
                                MotionDeviceCategory = (PropertyState<MotionDeviceCategoryEnumeration>)replacement;
                            }
                        }
                    }

                    instance = MotionDeviceCategory;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.Axes:
                {
                    if (createOrReplace)
                    {
                        if (Axes == null)
                        {
                            if (replacement == null)
                            {
                                Axes = new FolderState(this);
                            }
                            else
                            {
                                Axes = (FolderState)replacement;
                            }
                        }
                    }

                    instance = Axes;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.PowerTrains:
                {
                    if (createOrReplace)
                    {
                        if (PowerTrains == null)
                        {
                            if (replacement == null)
                            {
                                PowerTrains = new FolderState(this);
                            }
                            else
                            {
                                PowerTrains = (FolderState)replacement;
                            }
                        }
                    }

                    instance = PowerTrains;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.FlangeLoad:
                {
                    if (createOrReplace)
                    {
                        if (FlangeLoad == null)
                        {
                            if (replacement == null)
                            {
                                FlangeLoad = new LoadState(this);
                            }
                            else
                            {
                                FlangeLoad = (LoadState)replacement;
                            }
                        }
                    }

                    instance = FlangeLoad;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.AdditionalComponents:
                {
                    if (createOrReplace)
                    {
                        if (AdditionalComponents == null)
                        {
                            if (replacement == null)
                            {
                                AdditionalComponents = new FolderState(this);
                            }
                            else
                            {
                                AdditionalComponents = (FolderState)replacement;
                            }
                        }
                    }

                    instance = AdditionalComponents;
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
        private PropertyState<MotionDeviceCategoryEnumeration> m_motionDeviceCategory;
        private FolderState m_axes;
        private FolderState m_powerTrains;
        private LoadState m_flangeLoad;
        private FolderState m_additionalComponents;
        #endregion
    }
    #endif
    #endregion

    #region AxisState Class
    #if (!OPCUA_EXCLUDE_AxisState)
    /// <summary>
    /// Stores an instance of the AxisType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class AxisState : ComponentState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public AxisState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.AxisType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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

            if (AdditionalLoad != null)
            {
                AdditionalLoad.Initialize(context, AdditionalLoad_InitializationString);
            }
        }

        #region Initialization String
        private const string AdditionalLoad_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAwAOAAAAQWRkaXRpb25hbExv" +
           "YWQBA1pDAwAAAABjAAAAVGhlIGFkZGl0aW9uYWwgbG9hZCB3aGljaCBpcyBtb3VudGVkIG9uIHRoaXMg" +
           "YXhpcy4gRS5nLiBmb3IgcHJvY2Vzcy1uZWVkIGEgdHJhbnNmb3JtZXIgZm9yIHdlbGRpbmcuAC8BA1ZI" +
           "WkMAAP////8BAAAANWCJCgIAAAADAAQAAABNYXNzAQNbQwMAAAAANQAAAFRoZSB3ZWlnaHQgb2YgdGhl" +
           "IGxvYWQgbW91bnRlZCBvbiBvbmUgbW91bnRpbmcgcG9pbnQuAC8BAFlEW0MAAAAL/////wEB/////wEA" +
           "AAAVYIkKAgAAAAAAEAAAAEVuZ2luZWVyaW5nVW5pdHMBA2BDAC4ARGBDAAABAHcD/////wEB/////wAA" +
           "AAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwAQAAAAQXhpc1R5cGVJbnN0" +
           "YW5jZQEDNUMBAzVDNUMAAP////8DAAAAJGCACgEAAAACAAwAAABQYXJhbWV0ZXJTZXQBAzZDAwAAAAAX" +
           "AAAARmxhdCBsaXN0IG9mIFBhcmFtZXRlcnMALwA6NkMAAP////8DAAAANWCJCgIAAAADAA4AAABBY3R1" +
           "YWxQb3NpdGlvbgEDdEMDAAAAADMAAABUaGUgYXhpcyBwb3NpdGlvbiBpbmNsdXNpdmUgVW5pdCBhbmQg" +
           "UmFuZ2VPZk1vdGlvbi4ALwEAWUR0QwAAAAv/////AQH/////AQAAABVgiQoCAAAAAAAQAAAARW5naW5l" +
           "ZXJpbmdVbml0cwEDeUMALgBEeUMAAAEAdwP/////AQH/////AAAAADVgiQoCAAAAAwALAAAAQWN0dWFs" +
           "U3BlZWQBA3pDAwAAAABAAAAAVGhlIGF4aXMgc3BlZWQgb24gbG9hZCBzaWRlIChhZnRlciBnZWFyL3Nw" +
           "aW5kbGUpIGluY2x1c2l2ZSBVbml0LgAvAQBZRHpDAAAAC/////8BAf////8BAAAAFWCJCgIAAAAAABAA" +
           "AABFbmdpbmVlcmluZ1VuaXRzAQN/QwAuAER/QwAAAQB3A/////8BAf////8AAAAANWCJCgIAAAADABIA" +
           "AABBY3R1YWxBY2NlbGVyYXRpb24BA4BDAwAAAACtAAAAOiBUaGUgQWN0dWFsQWNjZWxlcmF0aW9uIHZh" +
           "cmlhYmxlIHByb3ZpZGVzIHRoZSBheGlzIGFjY2VsZXJhdGlvbi4gQXBwbGljYWJsZSBhY2NlbGVyYXRp" +
           "b24gbGltaXRzIG9mIHRoZSBheGlzIHNoYWxsIGJlIHByb3ZpZGVkIGJ5IHRoZSBFVVJhbmdlIHByb3Bl" +
           "cnR5IG9mIHRoZSBBbmFsb2dVbml0VHlwZS4ALwEAWUSAQwAAAAv/////AQH/////AQAAABVgiQoCAAAA" +
           "AAAQAAAARW5naW5lZXJpbmdVbml0cwEDhUMALgBEhUMAAAEAdwP/////AQH/////AAAAADVgiQoCAAAA" +
           "AwANAAAATW90aW9uUHJvZmlsZQEDWUMDAAAAAEkAAABUaGUga2luZCBvZiBheGlzIG1vdGlvbiBhcyBk" +
           "ZWZpbmVkIHdpdGggdGhlIEF4aXNNb3Rpb25Qcm9maWxlRW51bWVyYXRpb24uAC4ARFlDAAABA35I////" +
           "/wEB/////wAAAAAkYIAKAQAAAAMADgAAAEFkZGl0aW9uYWxMb2FkAQNaQwMAAAAAYwAAAFRoZSBhZGRp" +
           "dGlvbmFsIGxvYWQgd2hpY2ggaXMgbW91bnRlZCBvbiB0aGlzIGF4aXMuIEUuZy4gZm9yIHByb2Nlc3Mt" +
           "bmVlZCBhIHRyYW5zZm9ybWVyIGZvciB3ZWxkaW5nLgAvAQNWSFpDAAD/////AQAAADVgiQoCAAAAAwAE" +
           "AAAATWFzcwEDW0MDAAAAADUAAABUaGUgd2VpZ2h0IG9mIHRoZSBsb2FkIG1vdW50ZWQgb24gb25lIG1v" +
           "dW50aW5nIHBvaW50LgAvAQBZRFtDAAAAC/////8BAf////8BAAAAFWCJCgIAAAAAABAAAABFbmdpbmVl" +
           "cmluZ1VuaXRzAQNgQwAuAERgQwAAAQB3A/////8BAf////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<AxisMotionProfileEnumeration> MotionProfile
        {
            get
            {
                return m_motionProfile;
            }

            set
            {
                if (!Object.ReferenceEquals(m_motionProfile, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_motionProfile = value;
            }
        }

        /// <remarks />
        public LoadState AdditionalLoad
        {
            get
            {
                return m_additionalLoad;
            }

            set
            {
                if (!Object.ReferenceEquals(m_additionalLoad, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_additionalLoad = value;
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
            if (m_motionProfile != null)
            {
                children.Add(m_motionProfile);
            }

            if (m_additionalLoad != null)
            {
                children.Add(m_additionalLoad);
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
                case Opc.Ua.Robotics.BrowseNames.MotionProfile:
                {
                    if (createOrReplace)
                    {
                        if (MotionProfile == null)
                        {
                            if (replacement == null)
                            {
                                MotionProfile = new PropertyState<AxisMotionProfileEnumeration>(this);
                            }
                            else
                            {
                                MotionProfile = (PropertyState<AxisMotionProfileEnumeration>)replacement;
                            }
                        }
                    }

                    instance = MotionProfile;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.AdditionalLoad:
                {
                    if (createOrReplace)
                    {
                        if (AdditionalLoad == null)
                        {
                            if (replacement == null)
                            {
                                AdditionalLoad = new LoadState(this);
                            }
                            else
                            {
                                AdditionalLoad = (LoadState)replacement;
                            }
                        }
                    }

                    instance = AdditionalLoad;
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
        private PropertyState<AxisMotionProfileEnumeration> m_motionProfile;
        private LoadState m_additionalLoad;
        #endregion
    }
    #endif
    #endregion

    #region PowerTrainState Class
    #if (!OPCUA_EXCLUDE_PowerTrainState)
    /// <summary>
    /// Stores an instance of the PowerTrainType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class PowerTrainState : ComponentState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public PowerTrainState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.PowerTrainType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwAWAAAAUG93ZXJUcmFpblR5" +
           "cGVJbnN0YW5jZQEDqEMBA6hDqEMAAP////8AAAAA";
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

    #region MotorState Class
    #if (!OPCUA_EXCLUDE_MotorState)
    /// <summary>
    /// Stores an instance of the MotorType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class MotorState : ComponentState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public MotorState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.MotorType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwARAAAATW90b3JUeXBlSW5z" +
           "dGFuY2UBA41EAQONRI1EAAD/////BQAAACRggAoBAAAAAgAMAAAAUGFyYW1ldGVyU2V0AQOORAMAAAAA" +
           "FwAAAEZsYXQgbGlzdCBvZiBQYXJhbWV0ZXJzAC8AOo5EAAD/////AwAAADVgiQoCAAAAAwANAAAAQnJh" +
           "a2VSZWxlYXNlZAEDsUQDAAAAAKwAAABJbmRpY2F0ZXMgYW4gb3B0aW9uYWwgdmFyaWFibGUgdXNlZCBv" +
           "bmx5IGZvciBtb3RvcnMgd2l0aCBicmFrZXMuIElmIEJyYWtlUmVsZWFzZWQgaXMgVFJVRSB0aGUgbW90" +
           "b3IgaXMgZnJlZSB0byBydW4uIEZBTFNFIG1lYW5zIHRoYXQgdGhlIG1vdG9yIHNoYWZ0IGlzIGxvY2tl" +
           "ZCBieSB0aGUgYnJha2UuAC8AP7FEAAAAAf////8BAf////8AAAAANWCJCgIAAAADABAAAABNb3RvclRl" +
           "bXBlcmF0dXJlAQOyRAMAAAAAfAAAAFRoZSBtb3RvciB0ZW1wZXJhdHVyZSBwcm92aWRlcyB0aGUgdGVt" +
           "cGVyYXR1cmUgb2YgdGhlIG1vdG9yLiBJZiB0aGVyZSBpcyBubyB0ZW1wZXJhdHVyZSBzZW5zb3IgdGhl" +
           "IHZhbHVlIGlzIHNldCB0byBcIm51bGxcIi4ALwEAWUSyRAAAAAv/////AQH/////AQAAABVgiQoCAAAA" +
           "AAAQAAAARW5naW5lZXJpbmdVbml0cwEDt0QALgBEt0QAAAEAdwP/////AQH/////AAAAADVgiQoCAAAA" +
           "AwARAAAARWZmZWN0aXZlTG9hZFJhdGUBA7hEAwAAAADHAAAARWZmZWN0aXZlTG9hZFJhdGUgaXMgZXhw" +
           "cmVzc2VkIGFzIGEgcGVyY2VudGFnZSBvZiBtYXhpbXVtIGNvbnRpbnVvdXMgbG9hZC4gVGhlIEpvdWxl" +
           "IGludGVncmFsIGlzIHR5cGljYWxseSB1c2VkIHRvIGNhbGN1bGF0ZSB0aGUgY3VycmVudCBsb2FkLiBE" +
           "dXJhdGlvbiBzaG91bGQgYmUgZGVmaW5lZCBhbmQgZG9jdW1lbnRlZCBieSB0aGUgdmVuZG9yLgAvAD+4" +
           "RAAAAAX/////AQH/////AAAAABVgiQoCAAAAAgAMAAAATWFudWZhY3R1cmVyAQOjRAAuAESjRAAAABX/" +
           "////AQH/////AAAAABVgiQoCAAAAAgAFAAAATW9kZWwBA6VEAC4ARKVEAAAAFf////8BAf////8AAAAA" +
           "FWCJCgIAAAACAAsAAABQcm9kdWN0Q29kZQEDqUQALgBEqUQAAAAM/////wEB/////wAAAAAVYIkKAgAA" +
           "AAIADAAAAFNlcmlhbE51bWJlcgEDrEQALgBErEQAAAAM/////wEB/////wAAAAA=";
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

    #region GearState Class
    #if (!OPCUA_EXCLUDE_GearState)
    /// <summary>
    /// Stores an instance of the GearType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class GearState : ComponentState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public GearState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.GearType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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

            if (Pitch != null)
            {
                Pitch.Initialize(context, Pitch_InitializationString);
            }
        }

        #region Initialization String
        private const string Pitch_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////zVgiQoCAAAAAwAFAAAAUGl0Y2gBA+FEAwAA" +
           "AAD4AAAAUGl0Y2ggZGVzY3JpYmVzIHRoZSBkaXN0YW5jZSBjb3ZlcmVkIGluIG1pbGxpbWV0ZXJzICht" +
           "bSkgZm9yIGxpbmVhciBtb3Rpb24gcGVyIG9uZSByZXZvbHV0aW9uIG9mIHRoZSBvdXRwdXQgc2lkZSBv" +
           "ZiB0aGUgZHJpdmluZyB1bml0LiBQaXRjaCBpcyB1c2VkIGluIGNvbWJpbmF0aW9uIHdpdGggR2VhclJh" +
           "dGlvIHRvIGRlc2NyaWJlIHRoZSBvdmVyYWxsIHRyYW5zbWlzc2lvbiBmcm9tIGlucHV0IHRvIG91dHB1" +
           "dCBvZiB0aGUgZ2Vhci4ALwA/4UQAAAAL/////wEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwAQAAAAR2VhclR5cGVJbnN0" +
           "YW5jZQEDukQBA7pEukQAAP////8GAAAAFWCJCgIAAAACAAwAAABNYW51ZmFjdHVyZXIBA9BEAC4ARNBE" +
           "AAAAFf////8BAf////8AAAAAFWCJCgIAAAACAAUAAABNb2RlbAED0kQALgBE0kQAAAAV/////wEB////" +
           "/wAAAAAVYIkKAgAAAAIACwAAAFByb2R1Y3RDb2RlAQPWRAAuAETWRAAAAAz/////AQH/////AAAAABVg" +
           "iQoCAAAAAgAMAAAAU2VyaWFsTnVtYmVyAQPZRAAuAETZRAAAAAz/////AQH/////AAAAADVgiQoCAAAA" +
           "AwAJAAAAR2VhclJhdGlvAQPeRAMAAAAAeQAAAFRoZSB0cmFuc21pc3Npb24gcmF0aW8gb2YgdGhlIGdl" +
           "YXIgZXhwcmVzc2VkIGFzIGEgZnJhY3Rpb24gYXMgaW5wdXQgdmVsb2NpdHkgKG1vdG9yIHNpZGUpIGJ5" +
           "IG91dHB1dCB2ZWxvY2l0eSAobG9hZCBzaWRlKS4ALwEALUXeRAAAAQB2Sf////8BAf////8CAAAAFWCJ" +
           "CgIAAAAAAAkAAABOdW1lcmF0b3IBA99EAC8AP99EAAAABv////8BAf////8AAAAAFWCJCgIAAAAAAAsA" +
           "AABEZW5vbWluYXRvcgED4EQALwA/4EQAAAAH/////wEB/////wAAAAA1YIkKAgAAAAMABQAAAFBpdGNo" +
           "AQPhRAMAAAAA+AAAAFBpdGNoIGRlc2NyaWJlcyB0aGUgZGlzdGFuY2UgY292ZXJlZCBpbiBtaWxsaW1l" +
           "dGVycyAobW0pIGZvciBsaW5lYXIgbW90aW9uIHBlciBvbmUgcmV2b2x1dGlvbiBvZiB0aGUgb3V0cHV0" +
           "IHNpZGUgb2YgdGhlIGRyaXZpbmcgdW5pdC4gUGl0Y2ggaXMgdXNlZCBpbiBjb21iaW5hdGlvbiB3aXRo" +
           "IEdlYXJSYXRpbyB0byBkZXNjcmliZSB0aGUgb3ZlcmFsbCB0cmFuc21pc3Npb24gZnJvbSBpbnB1dCB0" +
           "byBvdXRwdXQgb2YgdGhlIGdlYXIuAC8AP+FEAAAAC/////8BAf////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public RationalNumberState GearRatio
        {
            get
            {
                return m_gearRatio;
            }

            set
            {
                if (!Object.ReferenceEquals(m_gearRatio, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_gearRatio = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<double> Pitch
        {
            get
            {
                return m_pitch;
            }

            set
            {
                if (!Object.ReferenceEquals(m_pitch, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_pitch = value;
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
            if (m_gearRatio != null)
            {
                children.Add(m_gearRatio);
            }

            if (m_pitch != null)
            {
                children.Add(m_pitch);
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
                case Opc.Ua.Robotics.BrowseNames.GearRatio:
                {
                    if (createOrReplace)
                    {
                        if (GearRatio == null)
                        {
                            if (replacement == null)
                            {
                                GearRatio = new RationalNumberState(this);
                            }
                            else
                            {
                                GearRatio = (RationalNumberState)replacement;
                            }
                        }
                    }

                    instance = GearRatio;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.Pitch:
                {
                    if (createOrReplace)
                    {
                        if (Pitch == null)
                        {
                            if (replacement == null)
                            {
                                Pitch = new BaseDataVariableState<double>(this);
                            }
                            else
                            {
                                Pitch = (BaseDataVariableState<double>)replacement;
                            }
                        }
                    }

                    instance = Pitch;
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
        private RationalNumberState m_gearRatio;
        private BaseDataVariableState<double> m_pitch;
        #endregion
    }
    #endif
    #endregion

    #region SafetyStateState Class
    #if (!OPCUA_EXCLUDE_SafetyStateState)
    /// <summary>
    /// Stores an instance of the SafetyStateType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class SafetyStateState : ComponentState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public SafetyStateState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.SafetyStateType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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

            if (EmergencyStopFunctions != null)
            {
                EmergencyStopFunctions.Initialize(context, EmergencyStopFunctions_InitializationString);
            }

            if (ProtectiveStopFunctions != null)
            {
                ProtectiveStopFunctions.Initialize(context, ProtectiveStopFunctions_InitializationString);
            }
        }

        #region Initialization String
        private const string EmergencyStopFunctions_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAwAWAAAARW1lcmdlbmN5U3Rv" +
           "cEZ1bmN0aW9ucwEDBkUDAAAAAGEAAABFbWVyZ2VuY3lTdG9wRnVuY3Rpb25zIGlzIGEgY29udGFpbmVy" +
           "IGZvciBvbmUgb3IgbW9yZSBpbnN0YW5jZXMgb2YgdGhlIEVtZXJnZW5jeVN0b3BGdW5jdGlvblR5cGUu" +
           "AC8APQZFAAD/////AAAAAA==";

        private const string ProtectiveStopFunctions_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAwAXAAAAUHJvdGVjdGl2ZVN0" +
           "b3BGdW5jdGlvbnMBAwpFAwAAAABjAAAAUHJvdGVjdGl2ZVN0b3BGdW5jdGlvbnMgaXMgYSBjb250YWlu" +
           "ZXIgZm9yIG9uZSBvciBtb3JlIGluc3RhbmNlcyBvZiB0aGUgUHJvdGVjdGl2ZVN0b3BGdW5jdGlvblR5" +
           "cGUuAC8APQpFAAD/////AAAAAA==";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwAXAAAAU2FmZXR5U3RhdGVU" +
           "eXBlSW5zdGFuY2UBA+JEAQPiROJEAAD/////AwAAACRggAoBAAAAAgAMAAAAUGFyYW1ldGVyU2V0AQPj" +
           "RAMAAAAAFwAAAEZsYXQgbGlzdCBvZiBQYXJhbWV0ZXJzAC8AOuNEAAD/////AwAAADVgiQoCAAAAAwAP" +
           "AAAAT3BlcmF0aW9uYWxNb2RlAQMPRQMAAAAAwAAAAFRoZSBPcGVyYXRpb25hbE1vZGUgdmFyaWFibGUg" +
           "cHJvdmlkZXMgaW5mb3JtYXRpb24gYWJvdXQgdGhlIGN1cnJlbnQgb3BlcmF0aW9uYWwgbW9kZS4gQWxs" +
           "b3dlZCB2YWx1ZXMgYXJlIGRlc2NyaWJlZCBpbiBPcGVyYXRpb25hbE1vZGVFbnVtZXJhdGlvbiwgc2Vl" +
           "IElTTyAxMDIxOC0xOjIwMTEgQ2guNS43IE9wZXJhdGlvbmFsIE1vZGVzLgAvAD8PRQAAAQOASP////8B" +
           "Af////8AAAAANWCJCgIAAAADAA0AAABFbWVyZ2VuY3lTdG9wAQMQRQMAAAAAHgEAAFRoZSBFbWVyZ2Vu" +
           "Y3lTdG9wIHZhcmlhYmxlIGlzIFRSVUUgaWYgb25lIG9yIG1vcmUgb2YgdGhlIGVtZXJnZW5jeSBzdG9w" +
           "IGZ1bmN0aW9ucyBpbiB0aGUgcm9ib3Qgc3lzdGVtIGFyZSBhY3RpdmUsIEZBTFNFIG90aGVyd2lzZS4g" +
           "SWYgdGhlIEVtZXJnZW5jeVN0b3BGdW5jdGlvbnMgb2JqZWN0IGlzIHByb3ZpZGVkLCB0aGVuIHRoZSB2" +
           "YWx1ZSBvZiB0aGlzIHZhcmlhYmxlIGlzIFRSVUUgaWYgb25lIG9yIG1vcmUgb2YgdGhlIGxpc3RlZCBl" +
           "bWVyZ2VuY3kgc3RvcCBmdW5jdGlvbnMgYXJlIGFjdGl2ZS4ALwA/EEUAAAAB/////wEB/////wAAAAA1" +
           "YIkKAgAAAAMADgAAAFByb3RlY3RpdmVTdG9wAQMRRQMAAAAAMAEAAFRoZSBQcm90ZWN0aXZlU3RvcCB2" +
           "YXJpYWJsZSBpcyBUUlVFIGlmIG9uZSBvciBtb3JlIG9mIHRoZSBlbmFibGVkIHByb3RlY3RpdmUgc3Rv" +
           "cCBmdW5jdGlvbnMgaW4gdGhlIHN5c3RlbSBhcmUgYWN0aXZlLCBGQUxTRSBvdGhlcndpc2UuIElmIHRo" +
           "ZSBQcm90ZWN0aXZlU3RvcEZ1bmN0aW9ucyBvYmplY3QgaXMgcHJvdmlkZWQsIHRoZW4gdGhlIHZhbHVl" +
           "IG9mIHRoaXMgdmFyaWFibGUgaXMgVFJVRSBpZiBvbmUgb3IgbW9yZSBvZiB0aGUgbGlzdGVkIHByb3Rl" +
           "Y3RpdmUgc3RvcCBmdW5jdGlvbnMgYXJlIGVuYWJsZWQgYW5kIGFjdGl2ZS4ALwA/EUUAAAAB/////wEB" +
           "/////wAAAAAkYIAKAQAAAAMAFgAAAEVtZXJnZW5jeVN0b3BGdW5jdGlvbnMBAwZFAwAAAABhAAAARW1l" +
           "cmdlbmN5U3RvcEZ1bmN0aW9ucyBpcyBhIGNvbnRhaW5lciBmb3Igb25lIG9yIG1vcmUgaW5zdGFuY2Vz" +
           "IG9mIHRoZSBFbWVyZ2VuY3lTdG9wRnVuY3Rpb25UeXBlLgAvAD0GRQAA/////wAAAAAkYIAKAQAAAAMA" +
           "FwAAAFByb3RlY3RpdmVTdG9wRnVuY3Rpb25zAQMKRQMAAAAAYwAAAFByb3RlY3RpdmVTdG9wRnVuY3Rp" +
           "b25zIGlzIGEgY29udGFpbmVyIGZvciBvbmUgb3IgbW9yZSBpbnN0YW5jZXMgb2YgdGhlIFByb3RlY3Rp" +
           "dmVTdG9wRnVuY3Rpb25UeXBlLgAvAD0KRQAA/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public FolderState EmergencyStopFunctions
        {
            get
            {
                return m_emergencyStopFunctions;
            }

            set
            {
                if (!Object.ReferenceEquals(m_emergencyStopFunctions, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_emergencyStopFunctions = value;
            }
        }

        /// <remarks />
        public FolderState ProtectiveStopFunctions
        {
            get
            {
                return m_protectiveStopFunctions;
            }

            set
            {
                if (!Object.ReferenceEquals(m_protectiveStopFunctions, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_protectiveStopFunctions = value;
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
            if (m_emergencyStopFunctions != null)
            {
                children.Add(m_emergencyStopFunctions);
            }

            if (m_protectiveStopFunctions != null)
            {
                children.Add(m_protectiveStopFunctions);
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
                case Opc.Ua.Robotics.BrowseNames.EmergencyStopFunctions:
                {
                    if (createOrReplace)
                    {
                        if (EmergencyStopFunctions == null)
                        {
                            if (replacement == null)
                            {
                                EmergencyStopFunctions = new FolderState(this);
                            }
                            else
                            {
                                EmergencyStopFunctions = (FolderState)replacement;
                            }
                        }
                    }

                    instance = EmergencyStopFunctions;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.ProtectiveStopFunctions:
                {
                    if (createOrReplace)
                    {
                        if (ProtectiveStopFunctions == null)
                        {
                            if (replacement == null)
                            {
                                ProtectiveStopFunctions = new FolderState(this);
                            }
                            else
                            {
                                ProtectiveStopFunctions = (FolderState)replacement;
                            }
                        }
                    }

                    instance = ProtectiveStopFunctions;
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
        private FolderState m_emergencyStopFunctions;
        private FolderState m_protectiveStopFunctions;
        #endregion
    }
    #endif
    #endregion

    #region EmergencyStopFunctionState Class
    #if (!OPCUA_EXCLUDE_EmergencyStopFunctionState)
    /// <summary>
    /// Stores an instance of the EmergencyStopFunctionType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class EmergencyStopFunctionState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public EmergencyStopFunctionState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.EmergencyStopFunctionType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwAhAAAARW1lcmdlbmN5U3Rv" +
           "cEZ1bmN0aW9uVHlwZUluc3RhbmNlAQMSRQEDEkUSRQAA/////wIAAAA1YIkKAgAAAAMABAAAAE5hbWUB" +
           "AxNFAwAAAACHAAAAVGhlIE5hbWUgb2YgdGhlIEVtZXJnZW5jeVN0b3BGdW5jdGlvblR5cGUgcHJvdmlk" +
           "ZXMgYSBtYW51ZmFjdHVyZXItc3BlY2lmaWMgZW1lcmdlbmN5IHN0b3AgZnVuY3Rpb24gaWRlbnRpZmll" +
           "ciB3aXRoaW4gdGhlIHNhZmV0eSBzeXN0ZW0uAC4ARBNFAAAADP////8BAf////8AAAAANWCJCgIAAAAD" +
           "AAYAAABBY3RpdmUBAxRFAwAAAACSAAAAVGhlIEFjdGl2ZSB2YXJpYWJsZSBpcyBUUlVFIGlmIHRoaXMg" +
           "cGFydGljdWxhciBlbWVyZ2VuY3kgc3RvcCBmdW5jdGlvbiBpcyBhY3RpdmUsIGUuZy4gdGhhdCB0aGUg" +
           "ZW1lcmdlbmN5IHN0b3AgYnV0dG9uIGlzIHByZXNzZWQsIEZBTFNFIG90aGVyd2lzZS4ALwA/FEUAAAAB" +
           "/////wEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<string> Name
        {
            get
            {
                return m_name;
            }

            set
            {
                if (!Object.ReferenceEquals(m_name, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_name = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<bool> Active
        {
            get
            {
                return m_active;
            }

            set
            {
                if (!Object.ReferenceEquals(m_active, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_active = value;
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
            if (m_name != null)
            {
                children.Add(m_name);
            }

            if (m_active != null)
            {
                children.Add(m_active);
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
                case Opc.Ua.Robotics.BrowseNames.Name:
                {
                    if (createOrReplace)
                    {
                        if (Name == null)
                        {
                            if (replacement == null)
                            {
                                Name = new PropertyState<string>(this);
                            }
                            else
                            {
                                Name = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = Name;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.Active:
                {
                    if (createOrReplace)
                    {
                        if (Active == null)
                        {
                            if (replacement == null)
                            {
                                Active = new BaseDataVariableState<bool>(this);
                            }
                            else
                            {
                                Active = (BaseDataVariableState<bool>)replacement;
                            }
                        }
                    }

                    instance = Active;
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
        private PropertyState<string> m_name;
        private BaseDataVariableState<bool> m_active;
        #endregion
    }
    #endif
    #endregion

    #region ProtectiveStopFunctionState Class
    #if (!OPCUA_EXCLUDE_ProtectiveStopFunctionState)
    /// <summary>
    /// Stores an instance of the ProtectiveStopFunctionType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ProtectiveStopFunctionState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ProtectiveStopFunctionState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.ProtectiveStopFunctionType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwAiAAAAUHJvdGVjdGl2ZVN0" +
           "b3BGdW5jdGlvblR5cGVJbnN0YW5jZQEDFUUBAxVFFUUAAP////8DAAAANWCJCgIAAAADAAQAAABOYW1l" +
           "AQMWRQMAAAAAiQAAAFRoZSBOYW1lIG9mIHRoZSBQcm90ZWN0aXZlU3RvcEZ1bmN0aW9uVHlwZSBwcm92" +
           "aWRlcyBhIG1hbnVmYWN0dXJlci1zcGVjaWZpYyBwcm90ZWN0aXZlIHN0b3AgZnVuY3Rpb24gaWRlbnRp" +
           "ZmllciB3aXRoaW4gdGhlIHNhZmV0eSBzeXN0ZW0uAC4ARBZFAAAADP////8BAf////8AAAAANWCJCgIA" +
           "AAADAAcAAABFbmFibGVkAQMXRQMAAAAA3gEAAOKAkwlUaGUgRW5hYmxlZCB2YXJpYWJsZSBpcyBUUlVF" +
           "IGlmIHRoaXMgcHJvdGVjdGl2ZSBzdG9wIGZ1bmN0aW9uIGlzIGN1cnJlbnRseSBzdXBlcnZpc2luZyB0" +
           "aGUgc3lzdGVtLCBGQUxTRSBvdGhlcndpc2UuIEEgcHJvdGVjdGl2ZSBzdG9wIGZ1bmN0aW9uIG1heSBv" +
           "ciBtYXkgbm90IGJlIGVuYWJsZWQgYXQgYWxsIHRpbWVzLCBlLmcuIHRoZSBwcm90ZWN0aXZlIHN0b3Ag" +
           "ZnVuY3Rpb24gb2YgdGhlIHNhZmV0eSBkb29ycyBhcmUgdHlwaWNhbGx5IGVuYWJsZWQgaW4gYXV0b21h" +
           "dGljIG9wZXJhdGlvbmFsIG1vZGUgYW5kIGRpc2FibGVkIGluIG1hbnVhbCBtb2RlLiBPbiB0aGUgb3Ro" +
           "ZXIgaGFuZCBmb3IgZXhhbXBsZSwgdGhlIHByb3RlY3RpdmUgc3RvcCBmdW5jdGlvbiBvZiB0aGUgdGVh" +
           "Y2ggcGVuZGFudCBlbmFibGluZyBkZXZpY2UgaXMgZW5hYmxlZCBpbiBtYW51YWwgbW9kZXMgYW5kIGRp" +
           "c2FibGVkIGluIGF1dG9tYXRpYyBtb2Rlcy4ALwA/F0UAAAAB/////wEB/////wAAAAA1YIkKAgAAAAMA" +
           "BgAAAEFjdGl2ZQEDGEUDAAAAALYAAADigJMJVGhlIEFjdGl2ZSB2YXJpYWJsZSBpcyBUUlVFIGlmIHRo" +
           "aXMgcGFydGljdWxhciBwcm90ZWN0aXZlIHN0b3AgZnVuY3Rpb24gaXMgYWN0aXZlLCBpLmUuIHRoYXQg" +
           "YSBzdG9wIGlzIGluaXRpYXRlZCwgRkFMU0Ugb3RoZXJ3aXNlLiBJZiBFbmFibGVkIGlzIEZBTFNFIHRo" +
           "ZW4gQWN0aXZlIHNoYWxsIGJlIEZBTFNFLgAvAD8YRQAAAAH/////AQH/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<string> Name
        {
            get
            {
                return m_name;
            }

            set
            {
                if (!Object.ReferenceEquals(m_name, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_name = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<bool> Enabled
        {
            get
            {
                return m_enabled;
            }

            set
            {
                if (!Object.ReferenceEquals(m_enabled, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_enabled = value;
            }
        }

        /// <remarks />
        public BaseDataVariableState<bool> Active
        {
            get
            {
                return m_active;
            }

            set
            {
                if (!Object.ReferenceEquals(m_active, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_active = value;
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
            if (m_name != null)
            {
                children.Add(m_name);
            }

            if (m_enabled != null)
            {
                children.Add(m_enabled);
            }

            if (m_active != null)
            {
                children.Add(m_active);
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
                case Opc.Ua.Robotics.BrowseNames.Name:
                {
                    if (createOrReplace)
                    {
                        if (Name == null)
                        {
                            if (replacement == null)
                            {
                                Name = new PropertyState<string>(this);
                            }
                            else
                            {
                                Name = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = Name;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.Enabled:
                {
                    if (createOrReplace)
                    {
                        if (Enabled == null)
                        {
                            if (replacement == null)
                            {
                                Enabled = new BaseDataVariableState<bool>(this);
                            }
                            else
                            {
                                Enabled = (BaseDataVariableState<bool>)replacement;
                            }
                        }
                    }

                    instance = Enabled;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.Active:
                {
                    if (createOrReplace)
                    {
                        if (Active == null)
                        {
                            if (replacement == null)
                            {
                                Active = new BaseDataVariableState<bool>(this);
                            }
                            else
                            {
                                Active = (BaseDataVariableState<bool>)replacement;
                            }
                        }
                    }

                    instance = Active;
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
        private PropertyState<string> m_name;
        private BaseDataVariableState<bool> m_enabled;
        private BaseDataVariableState<bool> m_active;
        #endregion
    }
    #endif
    #endregion

    #region ControllerState Class
    #if (!OPCUA_EXCLUDE_ControllerState)
    /// <summary>
    /// Stores an instance of the ControllerType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ControllerState : ComponentState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ControllerState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.ControllerType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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

            if (Components != null)
            {
                Components.Initialize(context, Components_InitializationString);
            }

            if (ParameterSet != null)
            {
                ParameterSet.Initialize(context, ParameterSet_InitializationString);
            }
        }

        #region Initialization String
        private const string Components_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAwAKAAAAQ29tcG9uZW50cwED" +
           "QEUDAAAAABsBAABDb21wb25lbnRzIGlzIGEgY29udGFpbmVyIGZvciBvbmUgb3IgbW9yZSBpbnN0YW5j" +
           "ZXMgb2Ygc3VidHlwZXMgb2YgQ29tcG9uZW50VHlwZSBkZWZpbmVkIGluIE9QQyBVQSBESS4gVGhlIGxp" +
           "c3RlZCBjb21wb25lbnRzIGFyZSBpbnN0YWxsZWQgaW4gdGhlIG1vdGlvbiBkZXZpY2Ugc3lzdGVtLCBl" +
           "LmcuIGEgcHJvY2Vzc2luZy11bml0LCBhIHBvd2VyLXN1cHBseSwgYW4gSU8tYm9hcmQgb3IgYSBkcml2" +
           "ZSwgYW5kIGhhdmUgYW4gZWxlY3RyaWNhbCBpbnRlcmZhY2UgdG8gdGhlIGNvbnRyb2xsZXIuAC8APUBF" +
           "AAD/////AAAAAA==";

        private const string ParameterSet_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAAAgAMAAAAUGFyYW1ldGVyU2V0" +
           "AQMaRQMAAAAAFwAAAEZsYXQgbGlzdCBvZiBQYXJhbWV0ZXJzAC8AOhpFAAD/////CAAAADVgiQoCAAAA" +
           "AwAQAAAAVG90YWxQb3dlck9uVGltZQEDrEUDAAAAADkAAABUaGUgdG90YWwgYWNjdW11bGF0ZWQgdGlt" +
           "ZSB0aGUgY29udHJvbGxlciB3YXMgcG93ZXJlZCBvbi4ALwA/rEUAAAEATzL/////AQH/////AAAAADVg" +
           "iQoCAAAAAwALAAAAU3RhcnRVcFRpbWUBA61FAwAAAAA5AAAAVGhlIGRhdGUgYW5kIHRpbWUgb2YgdGhl" +
           "IGxhc3Qgc3RhcnQtdXAgb2YgdGhlIGNvbnRyb2xsZXIuAC8AP61FAAAADf////8BAf////8AAAAANWCJ" +
           "CgIAAAADAAgAAABVcHNTdGF0ZQEDrkUDAAAAAEYAAABUaGUgdmVuZG9yIHNwZWNpZmljIHN0YXR1cyBv" +
           "ZiBhbiBpbnRlZ3JhdGVkIFVQUyBvciBhY2N1bXVsYXRvciBzeXN0ZW0uAC8AP65FAAAADP////8BAf//" +
           "//8AAAAANWCJCgIAAAADABYAAABUb3RhbEVuZXJneUNvbnN1bXB0aW9uAQOvRQMAAAAAYgAAAFRoZSB0" +
           "b3RhbCBhY2N1bXVsYXRlZCBlbmVyZ3kgY29uc3VtZWQgYnkgdGhlIG1vdGlvbiBkZXZpY2VzIHJlbGF0" +
           "ZWQgd2l0aCB0aGlzIGNvbnRyb2xsZXIgaW5zdGFuY2UuAC8BAFlEr0UAAAAL/////wEB/////wEAAAAV" +
           "YIkKAgAAAAAAEAAAAEVuZ2luZWVyaW5nVW5pdHMBA7RFAC4ARLRFAAABAHcD/////wEB/////wAAAAA1" +
           "YIkKAgAAAAMADwAAAENhYmluZXRGYW5TcGVlZAEDtUUDAAAAAB0AAABUaGUgc3BlZWQgb2YgdGhlIGNh" +
           "YmluZXQgZmFuLgAvAQBZRLVFAAAAC/////8BAf////8BAAAAFWCJCgIAAAAAABAAAABFbmdpbmVlcmlu" +
           "Z1VuaXRzAQO6RQAuAES6RQAAAQB3A/////8BAf////8AAAAANWCJCgIAAAADAAsAAABDUFVGYW5TcGVl" +
           "ZAEDu0UDAAAAABkAAABUaGUgc3BlZWQgb2YgdGhlIENQVSBmYW4uAC8BAFlEu0UAAAAL/////wEB////" +
           "/wEAAAAVYIkKAgAAAAAAEAAAAEVuZ2luZWVyaW5nVW5pdHMBA8BFAC4ARMBFAAABAHcD/////wEB////" +
           "/wAAAAA1YIkKAgAAAAMADAAAAElucHV0Vm9sdGFnZQEDwUUDAAAAALwAAABUaGUgaW5wdXQgdm9sdGFn" +
           "ZSBvZiB0aGUgY29udHJvbGxlciB3aGljaCBjYW4gYmUgYSBjb25maWd1cmVkIHZhbHVlLiBUbyBkaXN0" +
           "aW5ndWlzaCBiZXR3ZWVuIGFuIEFDIG9yIERDIHN1cHBseSB0aGUgb3B0aW9uYWwgcHJvcGVydHkgRGVm" +
           "aW5pdGlvbiBvZiB0aGUgYmFzZSB0eXBlIERhdGFJdGVtVHlwZSBzaGFsbCBiZSB1c2VkLgAvAQBZRMFF" +
           "AAAAC/////8BAf////8BAAAAFWCJCgIAAAAAABAAAABFbmdpbmVlcmluZ1VuaXRzAQPGRQAuAETGRQAA" +
           "AQB3A/////8BAf////8AAAAANWCJCgIAAAADAAsAAABUZW1wZXJhdHVyZQEDx0UDAAAAAFIAAABUaGUg" +
           "Y29udHJvbGxlciB0ZW1wZXJhdHVyZSBnaXZlbiBieSBhIHRlbXBlcmF0dXJlIHNlbnNvciBpbnNpZGUg" +
           "b2YgdGhlIGNvbnRyb2xsZXIuAC8BAFlEx0UAAAAL/////wEB/////wEAAAAVYIkKAgAAAAAAEAAAAEVu" +
           "Z2luZWVyaW5nVW5pdHMBA8xFAC4ARMxFAAABAHcD/////wEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////4RggAIBAAAAAwAWAAAAQ29udHJvbGxlclR5" +
           "cGVJbnN0YW5jZQEDGUUBAxlFGUUAAAH/////CQAAACRggAoBAAAAAgAMAAAAUGFyYW1ldGVyU2V0AQMa" +
           "RQMAAAAAFwAAAEZsYXQgbGlzdCBvZiBQYXJhbWV0ZXJzAC8AOhpFAAD/////CAAAADVgiQoCAAAAAwAQ" +
           "AAAAVG90YWxQb3dlck9uVGltZQEDrEUDAAAAADkAAABUaGUgdG90YWwgYWNjdW11bGF0ZWQgdGltZSB0" +
           "aGUgY29udHJvbGxlciB3YXMgcG93ZXJlZCBvbi4ALwA/rEUAAAEATzL/////AQH/////AAAAADVgiQoC" +
           "AAAAAwALAAAAU3RhcnRVcFRpbWUBA61FAwAAAAA5AAAAVGhlIGRhdGUgYW5kIHRpbWUgb2YgdGhlIGxh" +
           "c3Qgc3RhcnQtdXAgb2YgdGhlIGNvbnRyb2xsZXIuAC8AP61FAAAADf////8BAf////8AAAAANWCJCgIA" +
           "AAADAAgAAABVcHNTdGF0ZQEDrkUDAAAAAEYAAABUaGUgdmVuZG9yIHNwZWNpZmljIHN0YXR1cyBvZiBh" +
           "biBpbnRlZ3JhdGVkIFVQUyBvciBhY2N1bXVsYXRvciBzeXN0ZW0uAC8AP65FAAAADP////8BAf////8A" +
           "AAAANWCJCgIAAAADABYAAABUb3RhbEVuZXJneUNvbnN1bXB0aW9uAQOvRQMAAAAAYgAAAFRoZSB0b3Rh" +
           "bCBhY2N1bXVsYXRlZCBlbmVyZ3kgY29uc3VtZWQgYnkgdGhlIG1vdGlvbiBkZXZpY2VzIHJlbGF0ZWQg" +
           "d2l0aCB0aGlzIGNvbnRyb2xsZXIgaW5zdGFuY2UuAC8BAFlEr0UAAAAL/////wEB/////wEAAAAVYIkK" +
           "AgAAAAAAEAAAAEVuZ2luZWVyaW5nVW5pdHMBA7RFAC4ARLRFAAABAHcD/////wEB/////wAAAAA1YIkK" +
           "AgAAAAMADwAAAENhYmluZXRGYW5TcGVlZAEDtUUDAAAAAB0AAABUaGUgc3BlZWQgb2YgdGhlIGNhYmlu" +
           "ZXQgZmFuLgAvAQBZRLVFAAAAC/////8BAf////8BAAAAFWCJCgIAAAAAABAAAABFbmdpbmVlcmluZ1Vu" +
           "aXRzAQO6RQAuAES6RQAAAQB3A/////8BAf////8AAAAANWCJCgIAAAADAAsAAABDUFVGYW5TcGVlZAED" +
           "u0UDAAAAABkAAABUaGUgc3BlZWQgb2YgdGhlIENQVSBmYW4uAC8BAFlEu0UAAAAL/////wEB/////wEA" +
           "AAAVYIkKAgAAAAAAEAAAAEVuZ2luZWVyaW5nVW5pdHMBA8BFAC4ARMBFAAABAHcD/////wEB/////wAA" +
           "AAA1YIkKAgAAAAMADAAAAElucHV0Vm9sdGFnZQEDwUUDAAAAALwAAABUaGUgaW5wdXQgdm9sdGFnZSBv" +
           "ZiB0aGUgY29udHJvbGxlciB3aGljaCBjYW4gYmUgYSBjb25maWd1cmVkIHZhbHVlLiBUbyBkaXN0aW5n" +
           "dWlzaCBiZXR3ZWVuIGFuIEFDIG9yIERDIHN1cHBseSB0aGUgb3B0aW9uYWwgcHJvcGVydHkgRGVmaW5p" +
           "dGlvbiBvZiB0aGUgYmFzZSB0eXBlIERhdGFJdGVtVHlwZSBzaGFsbCBiZSB1c2VkLgAvAQBZRMFFAAAA" +
           "C/////8BAf////8BAAAAFWCJCgIAAAAAABAAAABFbmdpbmVlcmluZ1VuaXRzAQPGRQAuAETGRQAAAQB3" +
           "A/////8BAf////8AAAAANWCJCgIAAAADAAsAAABUZW1wZXJhdHVyZQEDx0UDAAAAAFIAAABUaGUgY29u" +
           "dHJvbGxlciB0ZW1wZXJhdHVyZSBnaXZlbiBieSBhIHRlbXBlcmF0dXJlIHNlbnNvciBpbnNpZGUgb2Yg" +
           "dGhlIGNvbnRyb2xsZXIuAC8BAFlEx0UAAAAL/////wEB/////wEAAAAVYIkKAgAAAAAAEAAAAEVuZ2lu" +
           "ZWVyaW5nVW5pdHMBA8xFAC4ARMxFAAABAHcD/////wEB/////wAAAAAVYIkKAgAAAAIADAAAAE1hbnVm" +
           "YWN0dXJlcgEDL0UALgBEL0UAAAAV/////wEB/////wAAAAAVYIkKAgAAAAIABQAAAE1vZGVsAQMxRQAu" +
           "AEQxRQAAABX/////AQH/////AAAAABVgiQoCAAAAAgALAAAAUHJvZHVjdENvZGUBAzVFAC4ARDVFAAAA" +
           "DP////8BAf////8AAAAAFWCJCgIAAAACAAwAAABTZXJpYWxOdW1iZXIBAzhFAC4ARDhFAAAADP////8B" +
           "Af////8AAAAAJGCACgEAAAADAAsAAABDdXJyZW50VXNlcgEDPUUDAAAAAB0AAABUaGUgZ2l2ZW4gbmFt" +
           "ZSBvZiB0aGUgZGV2aWNlLgAvAQNwSD1FAAD/////AQAAADVgiQoCAAAAAwAFAAAATGV2ZWwBAz5FAwAA" +
           "AAA1AAAAVGhlIHdlaWdodCBvZiB0aGUgbG9hZCBtb3VudGVkIG9uIG9uZSBtb3VudGluZyBwb2ludC4A" +
           "LgBEPkUAAAAM/////wEB/////wAAAAAkYIAKAQAAAAMACgAAAENvbXBvbmVudHMBA0BFAwAAAAAbAQAA" +
           "Q29tcG9uZW50cyBpcyBhIGNvbnRhaW5lciBmb3Igb25lIG9yIG1vcmUgaW5zdGFuY2VzIG9mIHN1YnR5" +
           "cGVzIG9mIENvbXBvbmVudFR5cGUgZGVmaW5lZCBpbiBPUEMgVUEgREkuIFRoZSBsaXN0ZWQgY29tcG9u" +
           "ZW50cyBhcmUgaW5zdGFsbGVkIGluIHRoZSBtb3Rpb24gZGV2aWNlIHN5c3RlbSwgZS5nLiBhIHByb2Nl" +
           "c3NpbmctdW5pdCwgYSBwb3dlci1zdXBwbHksIGFuIElPLWJvYXJkIG9yIGEgZHJpdmUsIGFuZCBoYXZl" +
           "IGFuIGVsZWN0cmljYWwgaW50ZXJmYWNlIHRvIHRoZSBjb250cm9sbGVyLgAvAD1ARQAA/////wAAAAAk" +
           "YIAKAQAAAAMACAAAAFNvZnR3YXJlAQNjRQMAAAAAVwAAAFNvZnR3YXJlIGlzIGEgY29udGFpbmVyIGZv" +
           "ciBvbmUgb3IgbW9yZSBpbnN0YW5jZXMgb2YgU29mdHdhcmVUeXBlIGRlZmluZWQgaW4gT1BDIFVBIERJ" +
           "LgAvAD1jRQAA/////wAAAAAkYIAKAQAAAAMADAAAAFRhc2tDb250cm9scwEDhkUDAAAAAEkAAABUYXNr" +
           "Q29udHJvbHMgaXMgYSBjb250YWluZXIgZm9yIG9uZSBvciBtb3JlIGluc3RhbmNlcyBvZiBUYXNrQ29u" +
           "dHJvbFR5cGUuAC8APYZFAAD/////AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public UserState CurrentUser
        {
            get
            {
                return m_currentUser;
            }

            set
            {
                if (!Object.ReferenceEquals(m_currentUser, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_currentUser = value;
            }
        }

        /// <remarks />
        public FolderState Components
        {
            get
            {
                return m_components;
            }

            set
            {
                if (!Object.ReferenceEquals(m_components, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_components = value;
            }
        }

        /// <remarks />
        public FolderState Software
        {
            get
            {
                return m_software;
            }

            set
            {
                if (!Object.ReferenceEquals(m_software, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_software = value;
            }
        }

        /// <remarks />
        public FolderState TaskControls
        {
            get
            {
                return m_taskControls;
            }

            set
            {
                if (!Object.ReferenceEquals(m_taskControls, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_taskControls = value;
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
            if (m_currentUser != null)
            {
                children.Add(m_currentUser);
            }

            if (m_components != null)
            {
                children.Add(m_components);
            }

            if (m_software != null)
            {
                children.Add(m_software);
            }

            if (m_taskControls != null)
            {
                children.Add(m_taskControls);
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
                case Opc.Ua.Robotics.BrowseNames.CurrentUser:
                {
                    if (createOrReplace)
                    {
                        if (CurrentUser == null)
                        {
                            if (replacement == null)
                            {
                                CurrentUser = new UserState(this);
                            }
                            else
                            {
                                CurrentUser = (UserState)replacement;
                            }
                        }
                    }

                    instance = CurrentUser;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.Components:
                {
                    if (createOrReplace)
                    {
                        if (Components == null)
                        {
                            if (replacement == null)
                            {
                                Components = new FolderState(this);
                            }
                            else
                            {
                                Components = (FolderState)replacement;
                            }
                        }
                    }

                    instance = Components;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.Software:
                {
                    if (createOrReplace)
                    {
                        if (Software == null)
                        {
                            if (replacement == null)
                            {
                                Software = new FolderState(this);
                            }
                            else
                            {
                                Software = (FolderState)replacement;
                            }
                        }
                    }

                    instance = Software;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.TaskControls:
                {
                    if (createOrReplace)
                    {
                        if (TaskControls == null)
                        {
                            if (replacement == null)
                            {
                                TaskControls = new FolderState(this);
                            }
                            else
                            {
                                TaskControls = (FolderState)replacement;
                            }
                        }
                    }

                    instance = TaskControls;
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
        private UserState m_currentUser;
        private FolderState m_components;
        private FolderState m_software;
        private FolderState m_taskControls;
        #endregion
    }
    #endif
    #endregion

    #region AuxiliaryComponentState Class
    #if (!OPCUA_EXCLUDE_AuxiliaryComponentState)
    /// <summary>
    /// Stores an instance of the AuxiliaryComponentType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class AuxiliaryComponentState : DeviceState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public AuxiliaryComponentState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.AuxiliaryComponentType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwAeAAAAQXV4aWxpYXJ5Q29t" +
           "cG9uZW50VHlwZUluc3RhbmNlAQPRRgED0UbRRgAA/////wkAAAA1YIkKAgAAAAIADAAAAE1hbnVmYWN0" +
           "dXJlcgED50YDAAAAADAAAABOYW1lIG9mIHRoZSBjb21wYW55IHRoYXQgbWFudWZhY3R1cmVkIHRoZSBk" +
           "ZXZpY2UALgBE50YAAAAV/////wEB/////wAAAAA1YIkKAgAAAAIABQAAAE1vZGVsAQPpRgMAAAAAGAAA" +
           "AE1vZGVsIG5hbWUgb2YgdGhlIGRldmljZQAuAETpRgAAABX/////AQH/////AAAAADVgiQoCAAAAAgAQ" +
           "AAAASGFyZHdhcmVSZXZpc2lvbgED6kYDAAAAACwAAABSZXZpc2lvbiBsZXZlbCBvZiB0aGUgaGFyZHdh" +
           "cmUgb2YgdGhlIGRldmljZQAuAETqRgAAAAz/////AQH/////AAAAADVgiQoCAAAAAgAQAAAAU29mdHdh" +
           "cmVSZXZpc2lvbgED60YDAAAAADUAAABSZXZpc2lvbiBsZXZlbCBvZiB0aGUgc29mdHdhcmUvZmlybXdh" +
           "cmUgb2YgdGhlIGRldmljZQAuAETrRgAAAAz/////AQH/////AAAAADVgiQoCAAAAAgAOAAAARGV2aWNl" +
           "UmV2aXNpb24BA+xGAwAAAAAkAAAAT3ZlcmFsbCByZXZpc2lvbiBsZXZlbCBvZiB0aGUgZGV2aWNlAC4A" +
           "ROxGAAAADP////8BAf////8AAAAANWCJCgIAAAACAAsAAABQcm9kdWN0Q29kZQED7UYDAAAAALgAAABU" +
           "aGUgUHJvZHVjdENvZGUgcHJvcGVydHkgcHJvdmlkZXMgYSB1bmlxdWUgY29tYmluYXRpb24gb2YgbnVt" +
           "YmVycyBhbmQgbGV0dGVycyB1c2VkIHRvIGlkZW50aWZ5IHRoZSBwcm9kdWN0LiBJdCBtYXkgYmUgdGhl" +
           "IG9yZGVyIGluZm9ybWF0aW9uIGRpc3BsYXllZCBvbiB0eXBlIHNoaWVsZHMgb3IgaW4gRVJQIHN5c3Rl" +
           "bXMuAC4ARO1GAAAADP////8BAf////8AAAAANWCJCgIAAAACAAwAAABEZXZpY2VNYW51YWwBA+5GAwAA" +
           "AABaAAAAQWRkcmVzcyAocGF0aG5hbWUgaW4gdGhlIGZpbGUgc3lzdGVtIG9yIGEgVVJMIHwgV2ViIGFk" +
           "ZHJlc3MpIG9mIHVzZXIgbWFudWFsIGZvciB0aGUgZGV2aWNlAC4ARO5GAAAADP////8BAf////8AAAAA" +
           "NWCJCgIAAAACAAwAAABTZXJpYWxOdW1iZXIBA/BGAwAAAABNAAAASWRlbnRpZmllciB0aGF0IHVuaXF1" +
           "ZWx5IGlkZW50aWZpZXMsIHdpdGhpbiBhIG1hbnVmYWN0dXJlciwgYSBkZXZpY2UgaW5zdGFuY2UALgBE" +
           "8EYAAAAM/////wEB/////wAAAAA1YIkKAgAAAAIADwAAAFJldmlzaW9uQ291bnRlcgED8kYDAAAAAGkA" +
           "AABBbiBpbmNyZW1lbnRhbCBjb3VudGVyIGluZGljYXRpbmcgdGhlIG51bWJlciBvZiB0aW1lcyB0aGUg" +
           "c3RhdGljIGRhdGEgd2l0aGluIHRoZSBEZXZpY2UgaGFzIGJlZW4gbW9kaWZpZWQALgBE8kYAAAAG////" +
           "/wEB/////wAAAAA=";
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

    #region DriveState Class
    #if (!OPCUA_EXCLUDE_DriveState)
    /// <summary>
    /// Stores an instance of the DriveType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class DriveState : DeviceState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public DriveState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.DriveType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwARAAAARHJpdmVUeXBlSW5z" +
           "dGFuY2UBAxVHAQMVRxVHAAD/////CQAAADVgiQoCAAAAAgAMAAAATWFudWZhY3R1cmVyAQMrRwMAAAAA" +
           "MAAAAE5hbWUgb2YgdGhlIGNvbXBhbnkgdGhhdCBtYW51ZmFjdHVyZWQgdGhlIGRldmljZQAuAEQrRwAA" +
           "ABX/////AQH/////AAAAADVgiQoCAAAAAgAFAAAATW9kZWwBAy1HAwAAAAAYAAAATW9kZWwgbmFtZSBv" +
           "ZiB0aGUgZGV2aWNlAC4ARC1HAAAAFf////8BAf////8AAAAANWCJCgIAAAACABAAAABIYXJkd2FyZVJl" +
           "dmlzaW9uAQMuRwMAAAAALAAAAFJldmlzaW9uIGxldmVsIG9mIHRoZSBoYXJkd2FyZSBvZiB0aGUgZGV2" +
           "aWNlAC4ARC5HAAAADP////8BAf////8AAAAANWCJCgIAAAACABAAAABTb2Z0d2FyZVJldmlzaW9uAQMv" +
           "RwMAAAAANQAAAFJldmlzaW9uIGxldmVsIG9mIHRoZSBzb2Z0d2FyZS9maXJtd2FyZSBvZiB0aGUgZGV2" +
           "aWNlAC4ARC9HAAAADP////8BAf////8AAAAANWCJCgIAAAACAA4AAABEZXZpY2VSZXZpc2lvbgEDMEcD" +
           "AAAAACQAAABPdmVyYWxsIHJldmlzaW9uIGxldmVsIG9mIHRoZSBkZXZpY2UALgBEMEcAAAAM/////wEB" +
           "/////wAAAAA1YIkKAgAAAAIACwAAAFByb2R1Y3RDb2RlAQMxRwMAAAAAuAAAAFRoZSBQcm9kdWN0Q29k" +
           "ZSBwcm9wZXJ0eSBwcm92aWRlcyBhIHVuaXF1ZSBjb21iaW5hdGlvbiBvZiBudW1iZXJzIGFuZCBsZXR0" +
           "ZXJzIHVzZWQgdG8gaWRlbnRpZnkgdGhlIHByb2R1Y3QuIEl0IG1heSBiZSB0aGUgb3JkZXIgaW5mb3Jt" +
           "YXRpb24gZGlzcGxheWVkIG9uIHR5cGUgc2hpZWxkcyBvciBpbiBFUlAgc3lzdGVtcy4ALgBEMUcAAAAM" +
           "/////wEB/////wAAAAA1YIkKAgAAAAIADAAAAERldmljZU1hbnVhbAEDMkcDAAAAAFoAAABBZGRyZXNz" +
           "IChwYXRobmFtZSBpbiB0aGUgZmlsZSBzeXN0ZW0gb3IgYSBVUkwgfCBXZWIgYWRkcmVzcykgb2YgdXNl" +
           "ciBtYW51YWwgZm9yIHRoZSBkZXZpY2UALgBEMkcAAAAM/////wEB/////wAAAAA1YIkKAgAAAAIADAAA" +
           "AFNlcmlhbE51bWJlcgEDNEcDAAAAAE0AAABJZGVudGlmaWVyIHRoYXQgdW5pcXVlbHkgaWRlbnRpZmll" +
           "cywgd2l0aGluIGEgbWFudWZhY3R1cmVyLCBhIGRldmljZSBpbnN0YW5jZQAuAEQ0RwAAAAz/////AQH/" +
           "////AAAAADVgiQoCAAAAAgAPAAAAUmV2aXNpb25Db3VudGVyAQM2RwMAAAAAaQAAAEFuIGluY3JlbWVu" +
           "dGFsIGNvdW50ZXIgaW5kaWNhdGluZyB0aGUgbnVtYmVyIG9mIHRpbWVzIHRoZSBzdGF0aWMgZGF0YSB3" +
           "aXRoaW4gdGhlIERldmljZSBoYXMgYmVlbiBtb2RpZmllZAAuAEQ2RwAAAAb/////AQH/////AAAAAA==";
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

    #region TaskControlState Class
    #if (!OPCUA_EXCLUDE_TaskControlState)
    /// <summary>
    /// Stores an instance of the TaskControlType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class TaskControlState : ComponentState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public TaskControlState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.TaskControlType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwAXAAAAVGFza0NvbnRyb2xU" +
           "eXBlSW5zdGFuY2UBA1lHAQNZR1lHAAD/////AgAAACRggAoBAAAAAgAMAAAAUGFyYW1ldGVyU2V0AQNa" +
           "RwMAAAAAFwAAAEZsYXQgbGlzdCBvZiBQYXJhbWV0ZXJzAC8AOlpHAAD/////AwAAADVgiQoCAAAAAwAP" +
           "AAAAVGFza1Byb2dyYW1OYW1lAQN9RwMAAAAAMQAAAEEgY3VzdG9tZXIgZ2l2ZW4gaWRlbnRpZmllciBm" +
           "b3IgdGhlIHRhc2sgcHJvZ3JhbS4ALwA/fUcAAAAM/////wEB/////wAAAAA1YIkKAgAAAAMAEQAAAFRh" +
           "c2tQcm9ncmFtTG9hZGVkAQN+RwMAAAAAaAAAAFRoZSBUYXNrUHJvZ3JhbUxvYWRlZCB2YXJpYWJsZSBp" +
           "cyBUUlVFIGlmIGEgdGFzayBwcm9ncmFtIGlzIGxvYWRlZCBpbiB0aGUgdGFzayBjb250cm9sLCBGQUxT" +
           "RSBvdGhlcndpc2UuAC8AP35HAAAAAf////8BAf////8AAAAANWCJCgIAAAADAA0AAABFeGVjdXRpb25N" +
           "b2RlAQN/RwMAAAAAPQAAAEV4ZWN1dGlvbiBtb2RlIG9mIHRoZSB0YXNrIGNvbnRyb2wgKGNvbnRpbnVv" +
           "dXMgb3Igc3RlcC13aXNlKS4ALwA/f0cAAAEDekj/////AQH/////AAAAADVgiQoCAAAAAgANAAAAQ29t" +
           "cG9uZW50TmFtZQEDfEcDAAAAAE4AAABBIHVzZXIgd3JpdGFibGUgbmFtZSBwcm92aWRlZCBieSB0aGUg" +
           "dmVuZG9yLCBpbnRlZ3JhdG9yIG9yIHVzZXIgb2YgdGhlIGRldmljZS4ALgBEfEcAAAAV/////wEB////" +
           "/wAAAAA=";
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

    #region LoadState Class
    #if (!OPCUA_EXCLUDE_LoadState)
    /// <summary>
    /// Stores an instance of the LoadType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class LoadState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public LoadState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.LoadType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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

            if (CenterOfMass != null)
            {
                CenterOfMass.Initialize(context, CenterOfMass_InitializationString);
            }

            if (Inertia != null)
            {
                Inertia.Initialize(context, Inertia_InitializationString);
            }
        }

        #region Initialization String
        private const string CenterOfMass_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////zVgiQoCAAAAAwAMAAAAQ2VudGVyT2ZNYXNz" +
           "AQNdSAMAAAAAjAEAAFRoZSBwb3NpdGlvbiBhbmQgb3JpZW50YXRpb24gb2YgdGhlIGNlbnRlciBvZiB0" +
           "aGUgbWFzcyByZWxhdGVkIHRvIHRoZSBtb3VudGluZyBwb2ludCB1c2luZyBhIEZyYW1lVHlwZS4gWCwg" +
           "WSwgWiBkZWZpbmUgdGhlIHBvc2l0aW9uIG9mIHRoZSBjZW50ZXIgb2YgZ3Jhdml0eSByZWxhdGl2ZSB0" +
           "byB0aGUgbW91bnRpbmcgcG9pbnQgY29vcmRpbmF0ZSBzeXN0ZW0uIEEsIEIsIEMgZGVmaW5lIHRoZSBv" +
           "cmllbnRhdGlvbiBvZiB0aGUgcHJpbmNpcGFsIGF4ZXMgb2YgaW5lcnRpYSByZWxhdGl2ZSB0byB0aGUg" +
           "bW91bnRpbmcgcG9pbnQgY29vcmRpbmF0ZSBzeXN0ZW0uIE9yaWVudGF0aW9uIEEsIEIsIEMgY2FuIGJl" +
           "ICIwIiBmb3Igc3lzdGVtcyB3aGljaCBkbyBub3QgbmVlZCB0aGVzZSAgdmFsdWVzLgAvAQBnSV1IAAAB" +
           "AH5J/////wEB/////wIAAAAVYIkKAgAAAAAAFAAAAENhcnRlc2lhbkNvb3JkaW5hdGVzAQNeSAAvAQBW" +
           "SV5IAAABAHpJ/////wEB/////wMAAAAVYIkKAgAAAAAAAQAAAFgBA2VIAC8AP2VIAAAAC/////8BAf//" +
           "//8AAAAAFWCJCgIAAAAAAAEAAABZAQNmSAAvAD9mSAAAAAv/////AQH/////AAAAABVgiQoCAAAAAAAB" +
           "AAAAWgEDZ0gALwA/Z0gAAAAL/////wEB/////wAAAAAVYIkKAgAAAAAACwAAAE9yaWVudGF0aW9uAQNg" +
           "SAAvAQBdSWBIAAABAHxJ/////wEB/////wMAAAAVYIkKAgAAAAAAAQAAAEEBA2hIAC8AP2hIAAAAC///" +
           "//8BAf////8AAAAAFWCJCgIAAAAAAAEAAABCAQNpSAAvAD9pSAAAAAv/////AQH/////AAAAABVgiQoC" +
           "AAAAAAABAAAAQwEDakgALwA/akgAAAAL/////wEB/////wAAAAA=";

        private const string Inertia_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////zVgiQoCAAAAAwAHAAAASW5lcnRpYQEDa0gD" +
           "AAAAAPoAAABUaGUgSW5lcnRpYSB1c2VzIHRoZSBWZWN0b3JUeXBlIHRvIGRlc2NyaWJlIHRoZSB0aHJl" +
           "ZSB2YWx1ZXMgb2YgdGhlIHByaW5jaXBhbCBtb21lbnRzIG9mIGluZXJ0aWEgd2l0aCByZXNwZWN0IHRv" +
           "IHRoZSBtb3VudGluZyBwb2ludCBjb29yZGluYXRlIHN5c3RlbS4gSWYgaW5lcnRpYSB2YWx1ZXMgYXJl" +
           "IHByb3ZpZGVkIGZvciByb3RhcnkgYXhpcyB0aGUgQ2VudGVyT2ZNYXNzIHNoYWxsIGJlIGNvbXBsZXRl" +
           "bHkgZmlsbGVkIGFzIHdlbGwuAC8BADRFa0gAAAEAeEn/////AQH/////AwAAABVgiQoCAAAAAAABAAAA" +
           "WAEDbUgALwA/bUgAAAAL/////wEB/////wAAAAAVYIkKAgAAAAAAAQAAAFkBA25IAC8AP25IAAAAC///" +
           "//8BAf////8AAAAAFWCJCgIAAAAAAAEAAABaAQNvSAAvAD9vSAAAAAv/////AQH/////AAAAAA==";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwAQAAAATG9hZFR5cGVJbnN0" +
           "YW5jZQEDVkgBA1ZIVkgAAP////8DAAAANWCJCgIAAAADAAQAAABNYXNzAQNXSAMAAAAANQAAAFRoZSB3" +
           "ZWlnaHQgb2YgdGhlIGxvYWQgbW91bnRlZCBvbiBvbmUgbW91bnRpbmcgcG9pbnQuAC8BAFlEV0gAAAAL" +
           "/////wEB/////wEAAAAVYIkKAgAAAAAAEAAAAEVuZ2luZWVyaW5nVW5pdHMBA1xIAC4ARFxIAAABAHcD" +
           "/////wEB/////wAAAAA1YIkKAgAAAAMADAAAAENlbnRlck9mTWFzcwEDXUgDAAAAAIwBAABUaGUgcG9z" +
           "aXRpb24gYW5kIG9yaWVudGF0aW9uIG9mIHRoZSBjZW50ZXIgb2YgdGhlIG1hc3MgcmVsYXRlZCB0byB0" +
           "aGUgbW91bnRpbmcgcG9pbnQgdXNpbmcgYSBGcmFtZVR5cGUuIFgsIFksIFogZGVmaW5lIHRoZSBwb3Np" +
           "dGlvbiBvZiB0aGUgY2VudGVyIG9mIGdyYXZpdHkgcmVsYXRpdmUgdG8gdGhlIG1vdW50aW5nIHBvaW50" +
           "IGNvb3JkaW5hdGUgc3lzdGVtLiBBLCBCLCBDIGRlZmluZSB0aGUgb3JpZW50YXRpb24gb2YgdGhlIHBy" +
           "aW5jaXBhbCBheGVzIG9mIGluZXJ0aWEgcmVsYXRpdmUgdG8gdGhlIG1vdW50aW5nIHBvaW50IGNvb3Jk" +
           "aW5hdGUgc3lzdGVtLiBPcmllbnRhdGlvbiBBLCBCLCBDIGNhbiBiZSAiMCIgZm9yIHN5c3RlbXMgd2hp" +
           "Y2ggZG8gbm90IG5lZWQgdGhlc2UgIHZhbHVlcy4ALwEAZ0ldSAAAAQB+Sf////8BAf////8CAAAAFWCJ" +
           "CgIAAAAAABQAAABDYXJ0ZXNpYW5Db29yZGluYXRlcwEDXkgALwEAVkleSAAAAQB6Sf////8BAf////8D" +
           "AAAAFWCJCgIAAAAAAAEAAABYAQNlSAAvAD9lSAAAAAv/////AQH/////AAAAABVgiQoCAAAAAAABAAAA" +
           "WQEDZkgALwA/ZkgAAAAL/////wEB/////wAAAAAVYIkKAgAAAAAAAQAAAFoBA2dIAC8AP2dIAAAAC///" +
           "//8BAf////8AAAAAFWCJCgIAAAAAAAsAAABPcmllbnRhdGlvbgEDYEgALwEAXUlgSAAAAQB8Sf////8B" +
           "Af////8DAAAAFWCJCgIAAAAAAAEAAABBAQNoSAAvAD9oSAAAAAv/////AQH/////AAAAABVgiQoCAAAA" +
           "AAABAAAAQgEDaUgALwA/aUgAAAAL/////wEB/////wAAAAAVYIkKAgAAAAAAAQAAAEMBA2pIAC8AP2pI" +
           "AAAAC/////8BAf////8AAAAANWCJCgIAAAADAAcAAABJbmVydGlhAQNrSAMAAAAA+gAAAFRoZSBJbmVy" +
           "dGlhIHVzZXMgdGhlIFZlY3RvclR5cGUgdG8gZGVzY3JpYmUgdGhlIHRocmVlIHZhbHVlcyBvZiB0aGUg" +
           "cHJpbmNpcGFsIG1vbWVudHMgb2YgaW5lcnRpYSB3aXRoIHJlc3BlY3QgdG8gdGhlIG1vdW50aW5nIHBv" +
           "aW50IGNvb3JkaW5hdGUgc3lzdGVtLiBJZiBpbmVydGlhIHZhbHVlcyBhcmUgcHJvdmlkZWQgZm9yIHJv" +
           "dGFyeSBheGlzIHRoZSBDZW50ZXJPZk1hc3Mgc2hhbGwgYmUgY29tcGxldGVseSBmaWxsZWQgYXMgd2Vs" +
           "bC4ALwEANEVrSAAAAQB4Sf////8BAf////8DAAAAFWCJCgIAAAAAAAEAAABYAQNtSAAvAD9tSAAAAAv/" +
           "////AQH/////AAAAABVgiQoCAAAAAAABAAAAWQEDbkgALwA/bkgAAAAL/////wEB/////wAAAAAVYIkK" +
           "AgAAAAAAAQAAAFoBA29IAC8AP29IAAAAC/////8BAf////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public AnalogUnitState<double> Mass
        {
            get
            {
                return m_mass;
            }

            set
            {
                if (!Object.ReferenceEquals(m_mass, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_mass = value;
            }
        }

        /// <remarks />
        public ThreeDFrameState CenterOfMass
        {
            get
            {
                return m_centerOfMass;
            }

            set
            {
                if (!Object.ReferenceEquals(m_centerOfMass, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_centerOfMass = value;
            }
        }

        /// <remarks />
        public ThreeDVectorState Inertia
        {
            get
            {
                return m_inertia;
            }

            set
            {
                if (!Object.ReferenceEquals(m_inertia, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_inertia = value;
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
            if (m_mass != null)
            {
                children.Add(m_mass);
            }

            if (m_centerOfMass != null)
            {
                children.Add(m_centerOfMass);
            }

            if (m_inertia != null)
            {
                children.Add(m_inertia);
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
                case Opc.Ua.Robotics.BrowseNames.Mass:
                {
                    if (createOrReplace)
                    {
                        if (Mass == null)
                        {
                            if (replacement == null)
                            {
                                Mass = new AnalogUnitState<double>(this);
                            }
                            else
                            {
                                Mass = (AnalogUnitState<double>)replacement;
                            }
                        }
                    }

                    instance = Mass;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.CenterOfMass:
                {
                    if (createOrReplace)
                    {
                        if (CenterOfMass == null)
                        {
                            if (replacement == null)
                            {
                                CenterOfMass = new ThreeDFrameState(this);
                            }
                            else
                            {
                                CenterOfMass = (ThreeDFrameState)replacement;
                            }
                        }
                    }

                    instance = CenterOfMass;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.Inertia:
                {
                    if (createOrReplace)
                    {
                        if (Inertia == null)
                        {
                            if (replacement == null)
                            {
                                Inertia = new ThreeDVectorState(this);
                            }
                            else
                            {
                                Inertia = (ThreeDVectorState)replacement;
                            }
                        }
                    }

                    instance = Inertia;
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
        private AnalogUnitState<double> m_mass;
        private ThreeDFrameState m_centerOfMass;
        private ThreeDVectorState m_inertia;
        #endregion
    }
    #endif
    #endregion

    #region UserState Class
    #if (!OPCUA_EXCLUDE_UserState)
    /// <summary>
    /// Stores an instance of the UserType ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class UserState : BaseObjectState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public UserState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Robotics.ObjectTypes.UserType, Opc.Ua.Robotics.Namespaces.OpcUaRobotics, namespaceUris);
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

            if (Name != null)
            {
                Name.Initialize(context, Name_InitializationString);
            }
        }

        #region Initialization String
        private const string Name_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////zVgiQoCAAAAAwAEAAAATmFtZQEDckgDAAAA" +
           "ADgAAABUaGUgbmFtZSBmb3IgdGhlIGN1cnJlbnQgdXNlciB3aXRoaW4gdGhlIGNvbnRyb2wgc3lzdGVt" +
           "LgAuAERySAAAAAz/////AQH/////AAAAAA==";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAwAQAAAAVXNlclR5cGVJbnN0" +
           "YW5jZQEDcEgBA3BIcEgAAP////8CAAAANWCJCgIAAAADAAUAAABMZXZlbAEDcUgDAAAAADUAAABUaGUg" +
           "d2VpZ2h0IG9mIHRoZSBsb2FkIG1vdW50ZWQgb24gb25lIG1vdW50aW5nIHBvaW50LgAuAERxSAAAAAz/" +
           "////AQH/////AAAAADVgiQoCAAAAAwAEAAAATmFtZQEDckgDAAAAADgAAABUaGUgbmFtZSBmb3IgdGhl" +
           "IGN1cnJlbnQgdXNlciB3aXRoaW4gdGhlIGNvbnRyb2wgc3lzdGVtLgAuAERySAAAAAz/////AQH/////" +
           "AAAAAA==";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public PropertyState<string> Level
        {
            get
            {
                return m_level;
            }

            set
            {
                if (!Object.ReferenceEquals(m_level, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_level = value;
            }
        }

        /// <remarks />
        public PropertyState<string> Name
        {
            get
            {
                return m_name;
            }

            set
            {
                if (!Object.ReferenceEquals(m_name, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_name = value;
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
            if (m_level != null)
            {
                children.Add(m_level);
            }

            if (m_name != null)
            {
                children.Add(m_name);
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
                case Opc.Ua.Robotics.BrowseNames.Level:
                {
                    if (createOrReplace)
                    {
                        if (Level == null)
                        {
                            if (replacement == null)
                            {
                                Level = new PropertyState<string>(this);
                            }
                            else
                            {
                                Level = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = Level;
                    break;
                }

                case Opc.Ua.Robotics.BrowseNames.Name:
                {
                    if (createOrReplace)
                    {
                        if (Name == null)
                        {
                            if (replacement == null)
                            {
                                Name = new PropertyState<string>(this);
                            }
                            else
                            {
                                Name = (PropertyState<string>)replacement;
                            }
                        }
                    }

                    instance = Name;
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
        private PropertyState<string> m_level;
        private PropertyState<string> m_name;
        #endregion
    }
    #endif
    #endregion

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
            return Opc.Ua.NodeId.Create(Opc.Ua.Plc.ObjectTypes.CtrlConfigurationType, Opc.Ua.Plc.Namespaces.OpcUaPlc, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAABAAdAAAAQ3RybENvbmZpZ3Vy" +
           "YXRpb25UeXBlSW5zdGFuY2UBBOVoAQTlaOVoAAD/////DwAAACRggAoBAAAABAAJAAAATWV0aG9kU2V0" +
           "AQToaAMAAAAAFAAAAEZsYXQgbGlzdCBvZiBNZXRob2RzAC8AOuhoAAD/////AgAAAARhggoEAAAABAAF" +
           "AAAAU3RhcnQBBClpAC8BBClpKWkAAAEB/////wAAAAAEYYIKBAAAAAQABAAAAFN0b3ABBCppAC8BBCpp" +
           "KmkAAAEB/////wAAAAA1YIkKAgAAAAIADAAAAE1hbnVmYWN0dXJlcgEE+2gDAAAAADAAAABOYW1lIG9m" +
           "IHRoZSBjb21wYW55IHRoYXQgbWFudWZhY3R1cmVkIHRoZSBkZXZpY2UALgBE+2gAAAAV/////wEB////" +
           "/wAAAAA1YIkKAgAAAAIABQAAAE1vZGVsAQT9aAMAAAAAGAAAAE1vZGVsIG5hbWUgb2YgdGhlIGRldmlj" +
           "ZQAuAET9aAAAABX/////AQH/////AAAAADVgiQoCAAAAAgAQAAAASGFyZHdhcmVSZXZpc2lvbgEE/mgD" +
           "AAAAACwAAABSZXZpc2lvbiBsZXZlbCBvZiB0aGUgaGFyZHdhcmUgb2YgdGhlIGRldmljZQAuAET+aAAA" +
           "AAz/////AQH/////AAAAADVgiQoCAAAAAgAQAAAAU29mdHdhcmVSZXZpc2lvbgEE/2gDAAAAADUAAABS" +
           "ZXZpc2lvbiBsZXZlbCBvZiB0aGUgc29mdHdhcmUvZmlybXdhcmUgb2YgdGhlIGRldmljZQAuAET/aAAA" +
           "AAz/////AQH/////AAAAADVgiQoCAAAAAgAOAAAARGV2aWNlUmV2aXNpb24BBABpAwAAAAAkAAAAT3Zl" +
           "cmFsbCByZXZpc2lvbiBsZXZlbCBvZiB0aGUgZGV2aWNlAC4ARABpAAAADP////8BAf////8AAAAANWCJ" +
           "CgIAAAACAAwAAABEZXZpY2VNYW51YWwBBAJpAwAAAABaAAAAQWRkcmVzcyAocGF0aG5hbWUgaW4gdGhl" +
           "IGZpbGUgc3lzdGVtIG9yIGEgVVJMIHwgV2ViIGFkZHJlc3MpIG9mIHVzZXIgbWFudWFsIGZvciB0aGUg" +
           "ZGV2aWNlAC4ARAJpAAAADP////8BAf////8AAAAANWCJCgIAAAACAAwAAABTZXJpYWxOdW1iZXIBBARp" +
           "AwAAAABNAAAASWRlbnRpZmllciB0aGF0IHVuaXF1ZWx5IGlkZW50aWZpZXMsIHdpdGhpbiBhIG1hbnVm" +
           "YWN0dXJlciwgYSBkZXZpY2UgaW5zdGFuY2UALgBEBGkAAAAM/////wEB/////wAAAAA1YIkKAgAAAAIA" +
           "DwAAAFJldmlzaW9uQ291bnRlcgEEBmkDAAAAAGkAAABBbiBpbmNyZW1lbnRhbCBjb3VudGVyIGluZGlj" +
           "YXRpbmcgdGhlIG51bWJlciBvZiB0aW1lcyB0aGUgc3RhdGljIGRhdGEgd2l0aGluIHRoZSBEZXZpY2Ug" +
           "aGFzIGJlZW4gbW9kaWZpZWQALgBEBmkAAAAG/////wEB/////wAAAAAEYIAKAQAAAAQACQAAAFJlc291" +
           "cmNlcwEEK2kALwEChD4raQAA/////wEAAAAkYIAKAQAAAAIADgAAAFN1cHBvcnRlZFR5cGVzAQQsaQMA" +
           "AAAAcgAAAEZvbGRlciBtYWludGFpbmluZyB0aGUgc2V0IG9mIChzdWItdHlwZXMgb2YpIEJhc2VPYmpl" +
           "Y3RUeXBlcyB0aGF0IGNhbiBiZSBpbnN0YW50aWF0ZWQgaW4gdGhlIENvbmZpZ3VyYWJsZUNvbXBvbmVu" +
           "dAAvAD0saQAA/////wAAAAAEYIAKAQAAAAQACgAAAEdsb2JhbFZhcnMBBC1pAC8BAoc+LWkAAP////8A" +
           "AAAABGCACgEAAAAEAAoAAABBY2Nlc3NWYXJzAQQvaQAvAQKHPi9pAAD/////AAAAAARggAoBAAAABAAK" +
           "AAAAQ29uZmlnVmFycwEEMWkALwEChz4xaQAA/////wAAAAAEYIAKAQAAAAQADQAAAENvbmZpZ3VyYXRp" +
           "b24BBDNpAC8BAoc+M2kAAP////8AAAAABGCACgEAAAAEAAoAAABEaWFnbm9zdGljAQQ1aQAvAQKHPjVp" +
           "AAD/////AAAAAA==";
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
                case Opc.Ua.Plc.BrowseNames.Resources:
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

                case Opc.Ua.Plc.BrowseNames.GlobalVars:
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

                case Opc.Ua.Plc.BrowseNames.AccessVars:
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

                case Opc.Ua.Plc.BrowseNames.ConfigVars:
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

                case Opc.Ua.Plc.BrowseNames.Configuration:
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

                case Opc.Ua.Plc.BrowseNames.Diagnostic:
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
            return Opc.Ua.NodeId.Create(Opc.Ua.Plc.ObjectTypes.CtrlResourceType, Opc.Ua.Plc.Namespaces.OpcUaPlc, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////yRggAoBAAAABAAJAAAATWV0aG9kU2V0AQQ6" +
           "aQMAAAAAFAAAAEZsYXQgbGlzdCBvZiBNZXRob2RzAC8AOjppAAD/////AgAAAARhggoEAAAABAAFAAAA" +
           "U3RhcnQBBHtpAC8BBHtpe2kAAAEB/////wAAAAAEYYIKBAAAAAQABAAAAFN0b3ABBHxpAC8BBHxpfGkA" +
           "AAEB/////wAAAAA=";

        private const string GlobalVars_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAABAAKAAAAR2xvYmFsVmFycwEE" +
           "gWkALwEChz6BaQAA/////wAAAAA=";

        private const string Configuration_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAABAANAAAAQ29uZmlndXJhdGlv" +
           "bgEEg2kALwEChz6DaQAA/////wAAAAA=";

        private const string Diagnostic_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAoBAAAABAAKAAAARGlhZ25vc3RpYwEE" +
           "hWkALwEChz6FaQAA/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAABAAYAAAAQ3RybFJlc291cmNl" +
           "VHlwZUluc3RhbmNlAQQ3aQEEN2k3aQAA/////w4AAAAkYIAKAQAAAAQACQAAAE1ldGhvZFNldAEEOmkD" +
           "AAAAABQAAABGbGF0IGxpc3Qgb2YgTWV0aG9kcwAvADo6aQAA/////wIAAAAEYYIKBAAAAAQABQAAAFN0" +
           "YXJ0AQR7aQAvAQR7aXtpAAABAf////8AAAAABGGCCgQAAAAEAAQAAABTdG9wAQR8aQAvAQR8aXxpAAAB" +
           "Af////8AAAAANWCJCgIAAAACAAwAAABNYW51ZmFjdHVyZXIBBE1pAwAAAAAwAAAATmFtZSBvZiB0aGUg" +
           "Y29tcGFueSB0aGF0IG1hbnVmYWN0dXJlZCB0aGUgZGV2aWNlAC4ARE1pAAAAFf////8BAf////8AAAAA" +
           "NWCJCgIAAAACAAUAAABNb2RlbAEET2kDAAAAABgAAABNb2RlbCBuYW1lIG9mIHRoZSBkZXZpY2UALgBE" +
           "T2kAAAAV/////wEB/////wAAAAA1YIkKAgAAAAIAEAAAAEhhcmR3YXJlUmV2aXNpb24BBFBpAwAAAAAs" +
           "AAAAUmV2aXNpb24gbGV2ZWwgb2YgdGhlIGhhcmR3YXJlIG9mIHRoZSBkZXZpY2UALgBEUGkAAAAM////" +
           "/wEB/////wAAAAA1YIkKAgAAAAIAEAAAAFNvZnR3YXJlUmV2aXNpb24BBFFpAwAAAAA1AAAAUmV2aXNp" +
           "b24gbGV2ZWwgb2YgdGhlIHNvZnR3YXJlL2Zpcm13YXJlIG9mIHRoZSBkZXZpY2UALgBEUWkAAAAM////" +
           "/wEB/////wAAAAA1YIkKAgAAAAIADgAAAERldmljZVJldmlzaW9uAQRSaQMAAAAAJAAAAE92ZXJhbGwg" +
           "cmV2aXNpb24gbGV2ZWwgb2YgdGhlIGRldmljZQAuAERSaQAAAAz/////AQH/////AAAAADVgiQoCAAAA" +
           "AgAMAAAARGV2aWNlTWFudWFsAQRUaQMAAAAAWgAAAEFkZHJlc3MgKHBhdGhuYW1lIGluIHRoZSBmaWxl" +
           "IHN5c3RlbSBvciBhIFVSTCB8IFdlYiBhZGRyZXNzKSBvZiB1c2VyIG1hbnVhbCBmb3IgdGhlIGRldmlj" +
           "ZQAuAERUaQAAAAz/////AQH/////AAAAADVgiQoCAAAAAgAMAAAAU2VyaWFsTnVtYmVyAQRWaQMAAAAA" +
           "TQAAAElkZW50aWZpZXIgdGhhdCB1bmlxdWVseSBpZGVudGlmaWVzLCB3aXRoaW4gYSBtYW51ZmFjdHVy" +
           "ZXIsIGEgZGV2aWNlIGluc3RhbmNlAC4ARFZpAAAADP////8BAf////8AAAAANWCJCgIAAAACAA8AAABS" +
           "ZXZpc2lvbkNvdW50ZXIBBFhpAwAAAABpAAAAQW4gaW5jcmVtZW50YWwgY291bnRlciBpbmRpY2F0aW5n" +
           "IHRoZSBudW1iZXIgb2YgdGltZXMgdGhlIHN0YXRpYyBkYXRhIHdpdGhpbiB0aGUgRGV2aWNlIGhhcyBi" +
           "ZWVuIG1vZGlmaWVkAC4ARFhpAAAABv////8BAf////8AAAAABGCACgEAAAAEAAUAAABUYXNrcwEEfWkA" +
           "LwEChD59aQAA/////wEAAAAkYIAKAQAAAAIADgAAAFN1cHBvcnRlZFR5cGVzAQR+aQMAAAAAcgAAAEZv" +
           "bGRlciBtYWludGFpbmluZyB0aGUgc2V0IG9mIChzdWItdHlwZXMgb2YpIEJhc2VPYmplY3RUeXBlcyB0" +
           "aGF0IGNhbiBiZSBpbnN0YW50aWF0ZWQgaW4gdGhlIENvbmZpZ3VyYWJsZUNvbXBvbmVudAAvAD1+aQAA" +
           "/////wAAAAAEYIAKAQAAAAQACAAAAFByb2dyYW1zAQR/aQAvAQKEPn9pAAD/////AQAAACRggAoBAAAA" +
           "AgAOAAAAU3VwcG9ydGVkVHlwZXMBBIBpAwAAAAByAAAARm9sZGVyIG1haW50YWluaW5nIHRoZSBzZXQg" +
           "b2YgKHN1Yi10eXBlcyBvZikgQmFzZU9iamVjdFR5cGVzIHRoYXQgY2FuIGJlIGluc3RhbnRpYXRlZCBp" +
           "biB0aGUgQ29uZmlndXJhYmxlQ29tcG9uZW50AC8APYBpAAD/////AAAAAARggAoBAAAABAAKAAAAR2xv" +
           "YmFsVmFycwEEgWkALwEChz6BaQAA/////wAAAAAEYIAKAQAAAAQADQAAAENvbmZpZ3VyYXRpb24BBINp" +
           "AC8BAoc+g2kAAP////8AAAAABGCACgEAAAAEAAoAAABEaWFnbm9zdGljAQSFaQAvAQKHPoVpAAD/////" +
           "AAAAAA==";
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
                case Opc.Ua.Plc.BrowseNames.Tasks:
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

                case Opc.Ua.Plc.BrowseNames.Programs:
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

                case Opc.Ua.Plc.BrowseNames.GlobalVars:
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

                case Opc.Ua.Plc.BrowseNames.Configuration:
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

                case Opc.Ua.Plc.BrowseNames.Diagnostic:
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
            return Opc.Ua.NodeId.Create(Opc.Ua.Plc.ObjectTypes.CtrlProgramOrganizationUnitType, Opc.Ua.Plc.Namespaces.OpcUaPlc, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAABAAEAAAAQm9keQEEomkALwA/" +
           "omkAAAAQ/////wEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAABAAnAAAAQ3RybFByb2dyYW1P" +
           "cmdhbml6YXRpb25Vbml0VHlwZUluc3RhbmNlAQSHaQEEh2mHaQAA/////wEAAAAVYIkKAgAAAAQABAAA" +
           "AEJvZHkBBKJpAC8AP6JpAAAAEP////8BAf////8AAAAA";
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
                case Opc.Ua.Plc.BrowseNames.Body:
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
            return Opc.Ua.NodeId.Create(Opc.Ua.Plc.ObjectTypes.CtrlProgramType, Opc.Ua.Plc.Namespaces.OpcUaPlc, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAABAAHAAAAUHJvZ3JhbQEEv2kA" +
           "LwA/v2kAAAAW/////wEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAABAAXAAAAQ3RybFByb2dyYW1U" +
           "eXBlSW5zdGFuY2UBBKNpAQSjaaNpAAD/////AQAAABVgiQoCAAAABAAHAAAAUHJvZ3JhbQEEv2kALwA/" +
           "v2kAAAAW/////wEB/////wAAAAA=";
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
                case Opc.Ua.Plc.BrowseNames.Program:
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
            return Opc.Ua.NodeId.Create(Opc.Ua.Plc.ObjectTypes.CtrlFunctionBlockType, Opc.Ua.Plc.Namespaces.OpcUaPlc, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAABAANAAAARnVuY3Rpb25CbG9j" +
           "awEE3GkALwA/3GkAAAAY/////wEB/////wAAAAA=";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAABAAdAAAAQ3RybEZ1bmN0aW9u" +
           "QmxvY2tUeXBlSW5zdGFuY2UBBMBpAQTAacBpAAD/////AQAAABVgiQoCAAAABAANAAAARnVuY3Rpb25C" +
           "bG9jawEE3GkALwA/3GkAAAAY/////wEB/////wAAAAA=";
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
                case Opc.Ua.Plc.BrowseNames.FunctionBlock:
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
            return Opc.Ua.NodeId.Create(Opc.Ua.Plc.ObjectTypes.CtrlTaskType, Opc.Ua.Plc.Namespaces.OpcUaPlc, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAABAAIAAAASW50ZXJ2YWwBBN9p" +
           "AC4ARN9pAAAADP////8BAf////8AAAAA";

        private const string Single_InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////xVgiQoCAAAABAAGAAAAU2luZ2xlAQTgaQAu" +
           "AETgaQAAAAz/////AQH/////AAAAAA==";

        private const string InitializationString =
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAABAAUAAAAQ3RybFRhc2tUeXBl" +
           "SW5zdGFuY2UBBN1pAQTdad1pAAD/////AwAAABVgiQoCAAAABAAIAAAAUHJpb3JpdHkBBN5pAC4ARN5p" +
           "AAAAB/////8BAf////8AAAAAFWCJCgIAAAAEAAgAAABJbnRlcnZhbAEE32kALgBE32kAAAAM/////wEB" +
           "/////wAAAAAVYIkKAgAAAAQABgAAAFNpbmdsZQEE4GkALgBE4GkAAAAM/////wEB/////wAAAAA=";
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
                case Opc.Ua.Plc.BrowseNames.Priority:
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

                case Opc.Ua.Plc.BrowseNames.Interval:
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

                case Opc.Ua.Plc.BrowseNames.Single:
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
            return Opc.Ua.NodeId.Create(Opc.Ua.Plc.ObjectTypes.SFCType, Opc.Ua.Plc.Namespaces.OpcUaPlc, namespaceUris);
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAABAAPAAAAU0ZDVHlwZUluc3Rh" +
           "bmNlAQThaQEE4WnhaQAA/////wAAAAA=";
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAQAMAAAASEMxMEluc3RhbmNl" +
           "AQGjSAEBo0ijSAAA/////wgAAAAkYIAKAQAAAAIADAAAAFBhcmFtZXRlclNldAEBpEgDAAAAABcAAABG" +
           "bGF0IGxpc3Qgb2YgUGFyYW1ldGVycwAvADqkSAAA/////wEAAAA1YIkKAgAAAAMADQAAAFNwZWVkT3Zl" +
           "cnJpZGUBAcpIAwAAAABbAAAAU3BlZWRPdmVycmlkZSBwcm92aWRlcyB0aGUgY3VycmVudCBzcGVlZCBz" +
           "ZXR0aW5nIGluIHBlcmNlbnQgb2YgcHJvZ3JhbW1lZCBzcGVlZCAoMCAtIDEwMCUpLgAvAD/KSAAAAAv/" +
           "////AQH/////AAAAABVgiQoCAAAAAgAMAAAATWFudWZhY3R1cmVyAQG5SAAuAES5SAAAABX/////AQH/" +
           "////AAAAABVgiQoCAAAAAgAFAAAATW9kZWwBAbtIAC4ARLtIAAAAFf////8BAf////8AAAAAFWCJCgIA" +
           "AAACAAsAAABQcm9kdWN0Q29kZQEBv0gALgBEv0gAAAAM/////wEB/////wAAAAAVYIkKAgAAAAIADAAA" +
           "AFNlcmlhbE51bWJlcgEBwkgALgBEwkgAAAAM/////wEB/////wAAAAA1YIkKAgAAAAMAFAAAAE1vdGlv" +
           "bkRldmljZUNhdGVnb3J5AQHHSAMAAAAAggAAAFRoZSB2YXJpYWJsZSBNb3Rpb25EZXZpY2VDYXRlZ29y" +
           "eSBwcm92aWRlcyB0aGUga2luZCBvZiBtb3Rpb24gZGV2aWNlIGRlZmluZWQgYnkgTW90aW9uRGV2aWNl" +
           "Q2F0ZWdvcnlFbnVtZXJhdGlvbiBiYXNlZCBvbiBJU08gODM3My4ALgBEx0gAAAEDfEj/////AQH/////" +
           "AAAAACRggAoBAAAAAwAEAAAAQXhlcwEBy0gDAAAAAD4AAABBeGVzIGlzIGEgY29udGFpbmVyIGZvciBv" +
           "bmUgb3IgbW9yZSBpbnN0YW5jZXMgb2YgdGhlIEF4aXNUeXBlLgAvAD3LSAAA/////wAAAAAkYIAKAQAA" +
           "AAMACwAAAFBvd2VyVHJhaW5zAQEbSQMAAAAASwAAAFBvd2VyVHJhaW5zIGlzIGEgY29udGFpbmVyIGZv" +
           "ciBvbmUgb3IgbW9yZSBpbnN0YW5jZXMgb2YgdGhlIFBvd2VyVHJhaW5UeXBlLgAvAD0bSQAA/////wAA" +
           "AAA=";
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////wRggAIBAAAAAQALAAAAR1A4SW5zdGFuY2UB" +
           "AXtJAQF7SXtJAAD/////CAAAACRggAoBAAAAAgAMAAAAUGFyYW1ldGVyU2V0AQF8SQMAAAAAFwAAAEZs" +
           "YXQgbGlzdCBvZiBQYXJhbWV0ZXJzAC8AOnxJAAD/////AQAAADVgiQoCAAAAAwANAAAAU3BlZWRPdmVy" +
           "cmlkZQEBokkDAAAAAFsAAABTcGVlZE92ZXJyaWRlIHByb3ZpZGVzIHRoZSBjdXJyZW50IHNwZWVkIHNl" +
           "dHRpbmcgaW4gcGVyY2VudCBvZiBwcm9ncmFtbWVkIHNwZWVkICgwIC0gMTAwJSkuAC8AP6JJAAAAC///" +
           "//8BAf////8AAAAAFWCJCgIAAAACAAwAAABNYW51ZmFjdHVyZXIBAZFJAC4ARJFJAAAAFf////8BAf//" +
           "//8AAAAAFWCJCgIAAAACAAUAAABNb2RlbAEBk0kALgBEk0kAAAAV/////wEB/////wAAAAAVYIkKAgAA" +
           "AAIACwAAAFByb2R1Y3RDb2RlAQGXSQAuAESXSQAAAAz/////AQH/////AAAAABVgiQoCAAAAAgAMAAAA" +
           "U2VyaWFsTnVtYmVyAQGaSQAuAESaSQAAAAz/////AQH/////AAAAADVgiQoCAAAAAwAUAAAATW90aW9u" +
           "RGV2aWNlQ2F0ZWdvcnkBAZ9JAwAAAACCAAAAVGhlIHZhcmlhYmxlIE1vdGlvbkRldmljZUNhdGVnb3J5" +
           "IHByb3ZpZGVzIHRoZSBraW5kIG9mIG1vdGlvbiBkZXZpY2UgZGVmaW5lZCBieSBNb3Rpb25EZXZpY2VD" +
           "YXRlZ29yeUVudW1lcmF0aW9uIGJhc2VkIG9uIElTTyA4MzczLgAuAESfSQAAAQN8SP////8BAf////8A" +
           "AAAAJGCACgEAAAADAAQAAABBeGVzAQGjSQMAAAAAPgAAAEF4ZXMgaXMgYSBjb250YWluZXIgZm9yIG9u" +
           "ZSBvciBtb3JlIGluc3RhbmNlcyBvZiB0aGUgQXhpc1R5cGUuAC8APaNJAAD/////AAAAACRggAoBAAAA" +
           "AwALAAAAUG93ZXJUcmFpbnMBAfNJAwAAAABLAAAAUG93ZXJUcmFpbnMgaXMgYSBjb250YWluZXIgZm9y" +
           "IG9uZSBvciBtb3JlIGluc3RhbmNlcyBvZiB0aGUgUG93ZXJUcmFpblR5cGUuAC8APfNJAAD/////AAAA" +
           "AA==";
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////4RggAIBAAAAAQAPAAAAWVJDMTAwMEluc3Rh" +
           "bmNlAQFTSgEBU0pTSgAAAf////8HAAAAFWCJCgIAAAACAAwAAABNYW51ZmFjdHVyZXIBAWlKAC4ARGlK" +
           "AAAAFf////8BAf////8AAAAAFWCJCgIAAAACAAUAAABNb2RlbAEBa0oALgBEa0oAAAAV/////wEB////" +
           "/wAAAAAVYIkKAgAAAAIACwAAAFByb2R1Y3RDb2RlAQFvSgAuAERvSgAAAAz/////AQH/////AAAAABVg" +
           "iQoCAAAAAgAMAAAAU2VyaWFsTnVtYmVyAQFySgAuAERySgAAAAz/////AQH/////AAAAACRggAoBAAAA" +
           "AwALAAAAQ3VycmVudFVzZXIBAXdKAwAAAAAdAAAAVGhlIGdpdmVuIG5hbWUgb2YgdGhlIGRldmljZS4A" +
           "LwEDcEh3SgAA/////wEAAAA1YIkKAgAAAAMABQAAAExldmVsAQF4SgMAAAAANQAAAFRoZSB3ZWlnaHQg" +
           "b2YgdGhlIGxvYWQgbW91bnRlZCBvbiBvbmUgbW91bnRpbmcgcG9pbnQuAC4ARHhKAAAADP////8BAf//" +
           "//8AAAAAJGCACgEAAAADAAgAAABTb2Z0d2FyZQEBnUoDAAAAAFcAAABTb2Z0d2FyZSBpcyBhIGNvbnRh" +
           "aW5lciBmb3Igb25lIG9yIG1vcmUgaW5zdGFuY2VzIG9mIFNvZnR3YXJlVHlwZSBkZWZpbmVkIGluIE9Q" +
           "QyBVQSBESS4ALwA9nUoAAP////8AAAAAJGCACgEAAAADAAwAAABUYXNrQ29udHJvbHMBAcBKAwAAAABJ" +
           "AAAAVGFza0NvbnRyb2xzIGlzIGEgY29udGFpbmVyIGZvciBvbmUgb3IgbW9yZSBpbnN0YW5jZXMgb2Yg" +
           "VGFza0NvbnRyb2xUeXBlLgAvAD3ASgAA/////wAAAAA=";
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////4RggAIBAAAAAQATAAAAWVJDMTAwMG1pbmlJ" +
           "bnN0YW5jZQEBC0wBAQtMC0wAAAH/////BwAAABVgiQoCAAAAAgAMAAAATWFudWZhY3R1cmVyAQEhTAAu" +
           "AEQhTAAAABX/////AQH/////AAAAABVgiQoCAAAAAgAFAAAATW9kZWwBASNMAC4ARCNMAAAAFf////8B" +
           "Af////8AAAAAFWCJCgIAAAACAAsAAABQcm9kdWN0Q29kZQEBJ0wALgBEJ0wAAAAM/////wEB/////wAA" +
           "AAAVYIkKAgAAAAIADAAAAFNlcmlhbE51bWJlcgEBKkwALgBEKkwAAAAM/////wEB/////wAAAAAkYIAK" +
           "AQAAAAMACwAAAEN1cnJlbnRVc2VyAQEvTAMAAAAAHQAAAFRoZSBnaXZlbiBuYW1lIG9mIHRoZSBkZXZp" +
           "Y2UuAC8BA3BIL0wAAP////8BAAAANWCJCgIAAAADAAUAAABMZXZlbAEBMEwDAAAAADUAAABUaGUgd2Vp" +
           "Z2h0IG9mIHRoZSBsb2FkIG1vdW50ZWQgb24gb25lIG1vdW50aW5nIHBvaW50LgAuAEQwTAAAAAz/////" +
           "AQH/////AAAAACRggAoBAAAAAwAIAAAAU29mdHdhcmUBAVVMAwAAAABXAAAAU29mdHdhcmUgaXMgYSBj" +
           "b250YWluZXIgZm9yIG9uZSBvciBtb3JlIGluc3RhbmNlcyBvZiBTb2Z0d2FyZVR5cGUgZGVmaW5lZCBp" +
           "biBPUEMgVUEgREkuAC8APVVMAAD/////AAAAACRggAoBAAAAAwAMAAAAVGFza0NvbnRyb2xzAQF4TAMA" +
           "AAAASQAAAFRhc2tDb250cm9scyBpcyBhIGNvbnRhaW5lciBmb3Igb25lIG9yIG1vcmUgaW5zdGFuY2Vz" +
           "IG9mIFRhc2tDb250cm9sVHlwZS4ALwA9eEwAAP////8AAAAA";
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
    public partial class SINAMICS_G120CState : ControllerState
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
           "BAAAABoAAABodHRwczovL25leHR1c2MuY29tL1VBL0ZGLx8AAABodHRwOi8vb3BjZm91bmRhdGlvbi5v" +
           "cmcvVUEvREkvJQAAAGh0dHA6Ly9vcGNmb3VuZGF0aW9uLm9yZy9VQS9Sb2JvdGljcy8kAAAAaHR0cDov" +
           "L3BsY29wZW4ub3JnL09wY1VhL0lFQzYxMTMxLTMv/////4RggAIBAAAAAQAWAAAAU0lOQU1JQ1NfRzEy" +
           "MENJbnN0YW5jZQEBw00BAcNNw00AAAH/////BwAAABVgiQoCAAAAAgAMAAAATWFudWZhY3R1cmVyAQHZ" +
           "TQAuAETZTQAAABX/////AQH/////AAAAABVgiQoCAAAAAgAFAAAATW9kZWwBAdtNAC4ARNtNAAAAFf//" +
           "//8BAf////8AAAAAFWCJCgIAAAACAAsAAABQcm9kdWN0Q29kZQEB300ALgBE300AAAAM/////wEB////" +
           "/wAAAAAVYIkKAgAAAAIADAAAAFNlcmlhbE51bWJlcgEB4k0ALgBE4k0AAAAM/////wEB/////wAAAAAk" +
           "YIAKAQAAAAMACwAAAEN1cnJlbnRVc2VyAQHnTQMAAAAAHQAAAFRoZSBnaXZlbiBuYW1lIG9mIHRoZSBk" +
           "ZXZpY2UuAC8BA3BI500AAP////8BAAAANWCJCgIAAAADAAUAAABMZXZlbAEB6E0DAAAAADUAAABUaGUg" +
           "d2VpZ2h0IG9mIHRoZSBsb2FkIG1vdW50ZWQgb24gb25lIG1vdW50aW5nIHBvaW50LgAuAEToTQAAAAz/" +
           "////AQH/////AAAAACRggAoBAAAAAwAIAAAAU29mdHdhcmUBAQ1OAwAAAABXAAAAU29mdHdhcmUgaXMg" +
           "YSBjb250YWluZXIgZm9yIG9uZSBvciBtb3JlIGluc3RhbmNlcyBvZiBTb2Z0d2FyZVR5cGUgZGVmaW5l" +
           "ZCBpbiBPUEMgVUEgREkuAC8APQ1OAAD/////AAAAACRggAoBAAAAAwAMAAAAVGFza0NvbnRyb2xzAQEw" +
           "TgMAAAAASQAAAFRhc2tDb250cm9scyBpcyBhIGNvbnRhaW5lciBmb3Igb25lIG9yIG1vcmUgaW5zdGFu" +
           "Y2VzIG9mIFRhc2tDb250cm9sVHlwZS4ALwA9ME4AAP////8AAAAA";
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