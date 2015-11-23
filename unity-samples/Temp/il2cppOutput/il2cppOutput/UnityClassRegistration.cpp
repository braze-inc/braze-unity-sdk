struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 72 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//7. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//10. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//13. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//14. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//15. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//16. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//17. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//18. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//19. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//22. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//23. ParticleEmitter
	void RegisterClass_ParticleEmitter();
	RegisterClass_ParticleEmitter();

	//24. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//25. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//26. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//27. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//28. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//29. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//30. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//31. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//32. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//33. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//34. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//35. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//36. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//37. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//38. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//39. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//40. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//41. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//42. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//43. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//44. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//45. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//46. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//47. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//48. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//49. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//50. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//51. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//52. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//53. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//54. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//55. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//56. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//57. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//58. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//59. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//60. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//61. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//62. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//63. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//64. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//65. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//66. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//67. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//68. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//69. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//70. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//71. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
