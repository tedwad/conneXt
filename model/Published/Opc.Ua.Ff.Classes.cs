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
           "AAADAAwAAABIQzEwSW5zdGFuY2UBA6NIAQOjSKNIAAD/////CQAAACRggAoBAAAAAQAMAAAAUGFyYW1l" +
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
           "blR5cGUuAC8APRtJAAD/////AAAAAARggAoBAAAAAwANAAAASm9pbnRBbmdsZVNldAEDX0YALwA9X0YA" +
           "AP////8GAAAAFWCJCgIAAAADAAsAAABKb2ludEFuZ2xlUwEDYEYALwEAWURgRgAAAAv/////AQH/////" +
           "AQAAABVgiQoCAAAAAAAQAAAARW5naW5lZXJpbmdVbml0cwEDZUYALgBEZUYAAAEAdwP/////AQH/////" +
           "AAAAABVgiQoCAAAAAwALAAAASm9pbnRBbmdsZUwBA2ZGAC8BAFlEZkYAAAAL/////wEB/////wEAAAAV" +
           "YIkKAgAAAAAAEAAAAEVuZ2luZWVyaW5nVW5pdHMBA2tGAC4ARGtGAAABAHcD/////wEB/////wAAAAAV" +
           "YIkKAgAAAAMACwAAAEpvaW50QW5nbGVSAQNsRgAvAQBZRGxGAAAAC/////8BAf////8BAAAAFWCJCgIA" +
           "AAAAABAAAABFbmdpbmVlcmluZ1VuaXRzAQNxRgAuAERxRgAAAQB3A/////8BAf////8AAAAAFWCJCgIA" +
           "AAADAAsAAABKb2ludEFuZ2xlVQEDckYALwEAWURyRgAAAAv/////AQH/////AQAAABVgiQoCAAAAAAAQ" +
           "AAAARW5naW5lZXJpbmdVbml0cwEDd0YALgBEd0YAAAEAdwP/////AQH/////AAAAABVgiQoCAAAAAwAL" +
           "AAAASm9pbnRBbmdsZUIBA3hGAC8BAFlEeEYAAAAL/////wEB/////wEAAAAVYIkKAgAAAAAAEAAAAEVu" +
           "Z2luZWVyaW5nVW5pdHMBA31GAC4ARH1GAAABAHcD/////wEB/////wAAAAAVYIkKAgAAAAMACwAAAEpv" +
           "aW50QW5nbGVUAQN+RgAvAQBZRH5GAAAAC/////8BAf////8BAAAAFWCJCgIAAAAAABAAAABFbmdpbmVl" +
           "cmluZ1VuaXRzAQODRgAuAESDRgAAAQB3A/////8BAf////8AAAAA";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public FolderState JointAngleSet
        {
            get
            {
                return m_jointAngleSet;
            }

            set
            {
                if (!Object.ReferenceEquals(m_jointAngleSet, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_jointAngleSet = value;
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
            if (m_jointAngleSet != null)
            {
                children.Add(m_jointAngleSet);
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
                case Opc.Ua.Ff.BrowseNames.JointAngleSet:
                {
                    if (createOrReplace)
                    {
                        if (JointAngleSet == null)
                        {
                            if (replacement == null)
                            {
                                JointAngleSet = new FolderState(this);
                            }
                            else
                            {
                                JointAngleSet = (FolderState)replacement;
                            }
                        }
                    }

                    instance = JointAngleSet;
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
        private FolderState m_jointAngleSet;
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
           "AAADAAsAAABHUDhJbnN0YW5jZQEDe0kBA3tJe0kAAP////8JAAAAJGCACgEAAAABAAwAAABQYXJhbWV0" +
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
           "VHlwZS4ALwA980kAAP////8AAAAABGCACgEAAAADAA0AAABKb2ludEFuZ2xlU2V0AQPORgAvAD3ORgAA" +
           "/////wYAAAAVYIkKAgAAAAMACwAAAEpvaW50QW5nbGVTAQPPRgAvAQBZRM9GAAAAC/////8BAf////8B" +
           "AAAAFWCJCgIAAAAAABAAAABFbmdpbmVlcmluZ1VuaXRzAQPURgAuAETURgAAAQB3A/////8BAf////8A" +
           "AAAAFWCJCgIAAAADAAsAAABKb2ludEFuZ2xlTAED1UYALwEAWUTVRgAAAAv/////AQH/////AQAAABVg" +
           "iQoCAAAAAAAQAAAARW5naW5lZXJpbmdVbml0cwED2kYALgBE2kYAAAEAdwP/////AQH/////AAAAABVg" +
           "iQoCAAAAAwALAAAASm9pbnRBbmdsZVIBA9tGAC8BAFlE20YAAAAL/////wEB/////wEAAAAVYIkKAgAA" +
           "AAAAEAAAAEVuZ2luZWVyaW5nVW5pdHMBA+BGAC4AROBGAAABAHcD/////wEB/////wAAAAAVYIkKAgAA" +
           "AAMACwAAAEpvaW50QW5nbGVVAQPhRgAvAQBZROFGAAAAC/////8BAf////8BAAAAFWCJCgIAAAAAABAA" +
           "AABFbmdpbmVlcmluZ1VuaXRzAQPmRgAuAETmRgAAAQB3A/////8BAf////8AAAAAFWCJCgIAAAADAAsA" +
           "AABKb2ludEFuZ2xlQgED50YALwEAWUTnRgAAAAv/////AQH/////AQAAABVgiQoCAAAAAAAQAAAARW5n" +
           "aW5lZXJpbmdVbml0cwED7EYALgBE7EYAAAEAdwP/////AQH/////AAAAABVgiQoCAAAAAwALAAAASm9p" +
           "bnRBbmdsZVQBA+1GAC8BAFlE7UYAAAAL/////wEB/////wEAAAAVYIkKAgAAAAAAEAAAAEVuZ2luZWVy" +
           "aW5nVW5pdHMBA/JGAC4ARPJGAAABAHcD/////wEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public FolderState JointAngleSet
        {
            get
            {
                return m_jointAngleSet;
            }

            set
            {
                if (!Object.ReferenceEquals(m_jointAngleSet, value))
                {
                    ChangeMasks |= NodeStateChangeMasks.Children;
                }

                m_jointAngleSet = value;
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
            if (m_jointAngleSet != null)
            {
                children.Add(m_jointAngleSet);
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
                case Opc.Ua.Ff.BrowseNames.JointAngleSet:
                {
                    if (createOrReplace)
                    {
                        if (JointAngleSet == null)
                        {
                            if (replacement == null)
                            {
                                JointAngleSet = new FolderState(this);
                            }
                            else
                            {
                                JointAngleSet = (FolderState)replacement;
                            }
                        }
                    }

                    instance = JointAngleSet;
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
        private FolderState m_jointAngleSet;
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

    #region ConveyorIBMState Class
    #if (!OPCUA_EXCLUDE_ConveyorIBMState)
    /// <summary>
    /// Stores an instance of the ConveyorIBM ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class ConveyorIBMState : MotionDeviceState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public ConveyorIBMState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.ConveyorIBM, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
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
           "AAADABMAAABDb252ZXlvcklCTUluc3RhbmNlAQODRQEDg0WDRQAA/////wgAAAAkYIAKAQAAAAEADAAA" +
           "AFBhcmFtZXRlclNldAEDhEUDAAAAABcAAABGbGF0IGxpc3Qgb2YgUGFyYW1ldGVycwAvADqERQAA////" +
           "/wEAAAA1YIkKAgAAAAIADQAAAFNwZWVkT3ZlcnJpZGUBA6tFAwAAAABbAAAAU3BlZWRPdmVycmlkZSBw" +
           "cm92aWRlcyB0aGUgY3VycmVudCBzcGVlZCBzZXR0aW5nIGluIHBlcmNlbnQgb2YgcHJvZ3JhbW1lZCBz" +
           "cGVlZCAoMCAtIDEwMCUpLgAvAD+rRQAAAAv/////AQH/////AAAAABVgiQoCAAAAAQAMAAAATWFudWZh" +
           "Y3R1cmVyAQOaRQAuAESaRQAAABX/////AQH/////AAAAABVgiQoCAAAAAQAFAAAATW9kZWwBA5xFAC4A" +
           "RJxFAAAAFf////8BAf////8AAAAAFWCJCgIAAAABAAsAAABQcm9kdWN0Q29kZQEDoEUALgBEoEUAAAAM" +
           "/////wEB/////wAAAAAVYIkKAgAAAAEADAAAAFNlcmlhbE51bWJlcgEDo0UALgBEo0UAAAAM/////wEB" +
           "/////wAAAAA1YIkKAgAAAAIAFAAAAE1vdGlvbkRldmljZUNhdGVnb3J5AQOoRQMAAAAAggAAAFRoZSB2" +
           "YXJpYWJsZSBNb3Rpb25EZXZpY2VDYXRlZ29yeSBwcm92aWRlcyB0aGUga2luZCBvZiBtb3Rpb24gZGV2" +
           "aWNlIGRlZmluZWQgYnkgTW90aW9uRGV2aWNlQ2F0ZWdvcnlFbnVtZXJhdGlvbiBiYXNlZCBvbiBJU08g" +
           "ODM3My4ALgBEqEUAAAECEUf/////AQH/////AAAAACRggAoBAAAAAgAEAAAAQXhlcwEDrEUDAAAAAD4A" +
           "AABBeGVzIGlzIGEgY29udGFpbmVyIGZvciBvbmUgb3IgbW9yZSBpbnN0YW5jZXMgb2YgdGhlIEF4aXNU" +
           "eXBlLgAvAD2sRQAA/////wAAAAAkYIAKAQAAAAIACwAAAFBvd2VyVHJhaW5zAQP9RQMAAAAASwAAAFBv" +
           "d2VyVHJhaW5zIGlzIGEgY29udGFpbmVyIGZvciBvbmUgb3IgbW9yZSBpbnN0YW5jZXMgb2YgdGhlIFBv" +
           "d2VyVHJhaW5UeXBlLgAvAD39RQAA/////wAAAAA=";
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

    #region SINAMICSG120CState Class
    #if (!OPCUA_EXCLUDE_SINAMICSG120CState)
    /// <summary>
    /// Stores an instance of the SINAMICSG120C ObjectType.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public partial class SINAMICSG120CState : DriveState
    {
        #region Constructors
        /// <summary>
        /// Initializes the type with its default attribute values.
        /// </summary>
        public SINAMICSG120CState(NodeState parent) : base(parent)
        {
        }

        /// <summary>
        /// Returns the id of the default type definition node for the instance.
        /// </summary>
        protected override NodeId GetDefaultTypeDefinitionId(NamespaceTable namespaceUris)
        {
            return Opc.Ua.NodeId.Create(Opc.Ua.Ff.ObjectTypes.SINAMICSG120C, Opc.Ua.Ff.Namespaces.FutureFactories, namespaceUris);
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
           "AAADABUAAABTSU5BTUlDU0cxMjBDSW5zdGFuY2UBA/E7AQPxO/E7AAD/////CgAAACRggAoBAAAAAQAM" +
           "AAAAUGFyYW1ldGVyU2V0AQPyOwMAAAAAFwAAAEZsYXQgbGlzdCBvZiBQYXJhbWV0ZXJzAC8APfI7AAD/" +
           "////AQAAADVgiQoCAAAAAgALAAAAVGVtcGVyYXR1cmUBAzc8AwAAAABIAAAAVGhlIERyaXZlIHRlbXBl" +
           "cmF0dXJlIGdpdmVuIGJ5IGEgdGVtcGVyYXR1cmUgc2Vuc29yIGluc2lkZSBvZiB0aGUgRHJpdmUuAC8B" +
           "AFlENzwAAAAL/////wEB/////wEAAAAVYIkKAgAAAAAAEAAAAEVuZ2luZWVyaW5nVW5pdHMBAzw8AC4A" +
           "RDw8AAABAHcD/////wEB/////wAAAAA1YIkKAgAAAAEADAAAAE1hbnVmYWN0dXJlcgEDCDwDAAAAADAA" +
           "AABOYW1lIG9mIHRoZSBjb21wYW55IHRoYXQgbWFudWZhY3R1cmVkIHRoZSBkZXZpY2UALgBECDwAAAAV" +
           "/////wEB/////wAAAAA1YIkKAgAAAAEABQAAAE1vZGVsAQMKPAMAAAAAGAAAAE1vZGVsIG5hbWUgb2Yg" +
           "dGhlIGRldmljZQAuAEQKPAAAABX/////AQH/////AAAAADVgiQoCAAAAAQAQAAAASGFyZHdhcmVSZXZp" +
           "c2lvbgEDCzwDAAAAACwAAABSZXZpc2lvbiBsZXZlbCBvZiB0aGUgaGFyZHdhcmUgb2YgdGhlIGRldmlj" +
           "ZQAuAEQLPAAAAAz/////AQH/////AAAAADVgiQoCAAAAAQAQAAAAU29mdHdhcmVSZXZpc2lvbgEDDDwD" +
           "AAAAADUAAABSZXZpc2lvbiBsZXZlbCBvZiB0aGUgc29mdHdhcmUvZmlybXdhcmUgb2YgdGhlIGRldmlj" +
           "ZQAuAEQMPAAAAAz/////AQH/////AAAAADVgiQoCAAAAAQAOAAAARGV2aWNlUmV2aXNpb24BAw08AwAA" +
           "AAAkAAAAT3ZlcmFsbCByZXZpc2lvbiBsZXZlbCBvZiB0aGUgZGV2aWNlAC4ARA08AAAADP////8BAf//" +
           "//8AAAAANWCJCgIAAAABAAsAAABQcm9kdWN0Q29kZQEDDjwDAAAAALgAAABUaGUgUHJvZHVjdENvZGUg" +
           "cHJvcGVydHkgcHJvdmlkZXMgYSB1bmlxdWUgY29tYmluYXRpb24gb2YgbnVtYmVycyBhbmQgbGV0dGVy" +
           "cyB1c2VkIHRvIGlkZW50aWZ5IHRoZSBwcm9kdWN0LiBJdCBtYXkgYmUgdGhlIG9yZGVyIGluZm9ybWF0" +
           "aW9uIGRpc3BsYXllZCBvbiB0eXBlIHNoaWVsZHMgb3IgaW4gRVJQIHN5c3RlbXMuAC4ARA48AAAADP//" +
           "//8BAf////8AAAAANWCJCgIAAAABAAwAAABEZXZpY2VNYW51YWwBAw88AwAAAABaAAAAQWRkcmVzcyAo" +
           "cGF0aG5hbWUgaW4gdGhlIGZpbGUgc3lzdGVtIG9yIGEgVVJMIHwgV2ViIGFkZHJlc3MpIG9mIHVzZXIg" +
           "bWFudWFsIGZvciB0aGUgZGV2aWNlAC4ARA88AAAADP////8BAf////8AAAAANWCJCgIAAAABAAwAAABT" +
           "ZXJpYWxOdW1iZXIBAxE8AwAAAABNAAAASWRlbnRpZmllciB0aGF0IHVuaXF1ZWx5IGlkZW50aWZpZXMs" +
           "IHdpdGhpbiBhIG1hbnVmYWN0dXJlciwgYSBkZXZpY2UgaW5zdGFuY2UALgBEETwAAAAM/////wEB////" +
           "/wAAAAA1YIkKAgAAAAEADwAAAFJldmlzaW9uQ291bnRlcgEDEzwDAAAAAGkAAABBbiBpbmNyZW1lbnRh" +
           "bCBjb3VudGVyIGluZGljYXRpbmcgdGhlIG51bWJlciBvZiB0aW1lcyB0aGUgc3RhdGljIGRhdGEgd2l0" +
           "aGluIHRoZSBEZXZpY2UgaGFzIGJlZW4gbW9kaWZpZWQALgBEEzwAAAAG/////wEB/////wAAAAA=";
        #endregion
        #endif
        #endregion

        #region Public Properties
        /// <remarks />
        public new FolderState ParameterSet
        {
            get { return (FolderState)base.ParameterSet; }
            set { base.ParameterSet = value; }
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
                                ParameterSet = new FolderState(this);
                            }
                            else
                            {
                                ParameterSet = (FolderState)replacement;
                            }
                        }
                    }

                    instance = ParameterSet;
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
        #endregion
    }
    #endif
    #endregion
}