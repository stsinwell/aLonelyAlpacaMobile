template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_SpriteMask();
	RegisterModule_SpriteMask();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; 
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; 
class SpriteMask; template <> void RegisterUnityClass<SpriteMask>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterUnityClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterUnityClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 83 non stripped classes
	//0. Camera
	RegisterUnityClass<Camera>("Core");
	//1. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//2. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//3. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//4. Material
	RegisterUnityClass<Material>("Core");
	//5. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//6. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//7. Texture
	RegisterUnityClass<Texture>("Core");
	//8. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//9. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//10. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//11. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//12. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//13. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//14. GameObject
	RegisterUnityClass<GameObject>("Core");
	//15. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//16. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//17. GameManager
	RegisterUnityClass<GameManager>("Core");
	//18. Renderer
	RegisterUnityClass<Renderer>("Core");
	//19. Shader
	RegisterUnityClass<Shader>("Core");
	//20. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//21. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//22. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//23. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//24. Mesh
	RegisterUnityClass<Mesh>("Core");
	//25. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//26. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//27. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//28. Transform
	RegisterUnityClass<Transform>("Core");
	//29. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//30. Sprite
	RegisterUnityClass<Sprite>("Core");
	//31. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//32. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//33. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//34. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//35. Collider
	RegisterUnityClass<Collider>("Physics");
	//36. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//37. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//38. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//39. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//40. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//41. Animator
	RegisterUnityClass<Animator>("Animation");
	//42. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//43. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//44. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//45. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//46. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//47. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//48. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//49. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//50. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//51. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//52. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//53. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//54. SpriteMask
	RegisterUnityClass<SpriteMask>("SpriteMask");
	//55. TagManager
	RegisterUnityClass<TagManager>("Core");
	//56. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//57. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//58. InputManager
	RegisterUnityClass<InputManager>("Core");
	//59. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//60. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//61. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//62. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//63. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//64. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//65. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//66. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//67. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//68. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//69. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//70. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//71. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//72. CloudWebServicesManager
	RegisterUnityClass<CloudWebServicesManager>("CloudWebServices");
	//73. UnityAnalyticsManager
	RegisterUnityClass<UnityAnalyticsManager>("UnityAnalytics");
	//74. Motion
	RegisterUnityClass<Motion>("Animation");
	//75. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//76. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//77. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//78. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//79. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//80. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//81. Light
	RegisterUnityClass<Light>("Core");
	//82. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");

}
