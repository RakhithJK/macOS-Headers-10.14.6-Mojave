//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UINavigationController.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSArray, NSExtension, NSMutableDictionary, NSObject, NSString, UIView, UIViewController;
@protocol OS_dispatch_queue, UINavigationControllerDelegate><UIImagePickerControllerDelegate;

@interface UIImagePickerController : UINavigationController <NSCoding>
{
    long long _sourceType;
    id _image;
    struct CGRect _cropRect;
    NSArray *_mediaTypes;
    NSMutableDictionary *_properties;
    int _previousStatusBarStyle;
    BOOL _previousStatusBarHidden;
    NSObject<OS_dispatch_queue> *_photosExtensionDiscoveryQueue;
    Class _photoPickerRequestOptionsClass;
    CDUnknownBlockType _photoPickerDisplayCompletion;
    CDUnknownBlockType _photoPickerPreviewDisplayCompletion;
    BOOL _photoPickerDidStartDelayingPresentation;
    BOOL _photoPickerDidEndDelayingPresentation;
    BOOL _photoPickerIsPreheating;
    UIViewController *_photoPickerPreheatedViewController;
    CDStruct_d1897728 _imagePickerFlags;
    unsigned long long _savingOptions;
    NSExtension *_photosExtension;
    id _photosExtensionDiscoveryDriver;
    NSString *_initialViewControllerClassName;
}

+ (BOOL)isFlashAvailableForCameraDevice:(long long)arg1;
+ (id)availableCaptureModesForCameraDevice:(long long)arg1;
+ (BOOL)isCameraDeviceAvailable:(long long)arg1;
+ (id)availableMediaTypesForSourceType:(long long)arg1;
+ (BOOL)_reviewCapturedItems;
+ (BOOL)_isMediaTypeAvailable:(id)arg1 forSource:(long long)arg2;
+ (BOOL)isSourceTypeAvailable:(long long)arg1;
@property(copy, nonatomic) NSString *initialViewControllerClassName; // @synthesize initialViewControllerClassName=_initialViewControllerClassName;
@property(retain, nonatomic) id photosExtensionDiscoveryDriver; // @synthesize photosExtensionDiscoveryDriver=_photosExtensionDiscoveryDriver;
@property(retain, nonatomic) NSExtension *photosExtension; // @synthesize photosExtension=_photosExtension;
- (void).cxx_destruct;
- (void)_imagePickerDidCompleteWithInfoArray:(id)arg1;
- (void)_imagePickerDidCompleteWithInfo:(id)arg1;
- (void)_imagePickerDidCancel;
- (void)_autoDismiss;
- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg1;
- (void)_setupControllersForCurrentMediaTypes;
- (void)_handleTopViewControllerReadyForDisplay:(id)arg1;
- (void)_setupControllersForCurrentSourceTypeWithCompletion:(CDUnknownBlockType)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didDisplayPhotoPickerPreview;
- (void)_handleEndingPhotoPickerPresentationDelay;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)setPhotoPickerViewControllerTitle:(id)arg1;
- (void)_handlePushViewController:(id)arg1;
- (void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)cancelPhotoPicker;
- (void)_testPerformPreviewOfFirstPhoto;
- (BOOL)_isPhotoPickerExtensionEnabled;
- (void)_invalidatePhotoPickerServices;
- (void)_setPhotoPickerPreviewDisplayCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_photoPickerPreviewDisplayCompletion;
- (void)_setPhotoPickerDisplayCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_photoPickerDisplayCompletion;
@property(readonly, nonatomic) Class photoPickerRequestOptionsClass;
- (id)_propertiesForPhotoPickerExtension;
- (void)_handleInstantiatedRemoteViewController:(id)arg1 request:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleMatchingExtensions:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_serializeHandlingMatchingExtensions:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly) NSObject<OS_dispatch_queue> *photosExtensionDiscoveryQueue;
- (void)_createInitialControllerWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_shouldDelayPresentation;
- (void)_removeAllChildren;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(long long)arg1;
- (BOOL)_didRevertStatusBar;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillUnload;
- (void)_viewControllerPresentationDidInitiate;
@property(nonatomic) long long cameraFlashMode;
@property(nonatomic) long long cameraCaptureMode;
- (BOOL)_isCameraCaptureModeValid:(long long)arg1;
@property(nonatomic) long long cameraDevice;
- (void)stopVideoCapture;
- (BOOL)startVideoCapture;
- (void)takePicture;
@property(nonatomic) struct CGAffineTransform cameraViewTransform;
@property(retain, nonatomic) UIView *cameraOverlayView;
@property(nonatomic) BOOL showsCameraControls;
- (id)_cameraViewController;
- (BOOL)_sourceTypeIsCamera;
- (unsigned long long)_imagePickerSavingOptions;
- (void)_setImagePickerSavingOptions:(unsigned long long)arg1;
- (id)_valueForProperty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)_properties;
- (void)_initializeProperties;
- (void)_setProperties:(id)arg1;
- (BOOL)_allowsImageEditing;
- (void)_setAllowsImageEditing:(BOOL)arg1;
@property(copy, nonatomic) NSString *videoExportPreset;
@property(nonatomic) long long videoQuality;
@property(nonatomic) double videoMaximumDuration;
@property(nonatomic) long long imageExportPreset;
@property(nonatomic) BOOL allowsEditing;
@property(nonatomic) BOOL allowsImageEditing;
- (void)_setAllowsIris:(BOOL)arg1;
- (BOOL)_allowsIris;
- (void)_setTargetForPrompt:(id)arg1;
- (id)_targetForPrompt;
- (void)_setStaticPrompt:(id)arg1;
- (id)_staticPrompt;
- (void)_setShowsPrompt:(BOOL)arg1;
- (BOOL)_showsPrompt;
- (void)_setConvertAutoloopsToGIF:(BOOL)arg1;
- (BOOL)_convertAutoloopsToGIF;
- (void)_setOnlyShowAutoloops:(BOOL)arg1;
- (BOOL)_onlyShowAutoloops;
- (void)_setMultipleSelectionLimit:(unsigned long long)arg1;
- (unsigned long long)_multipleSelectionLimit;
- (void)_setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)_allowsMultipleSelection;
@property(copy, nonatomic) NSArray *mediaTypes;
@property(nonatomic) long long sourceType;
- (void)_updateCameraCaptureMode;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (id)_initWithSourceImageData:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <UINavigationControllerDelegate><UIImagePickerControllerDelegate> delegate; // @dynamic delegate;

@end
