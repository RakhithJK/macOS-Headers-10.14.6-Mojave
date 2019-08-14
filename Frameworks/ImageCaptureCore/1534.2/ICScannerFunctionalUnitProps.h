//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICScannerDevice, ICScannerImageRep, NSArray, NSMutableDictionary, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface ICScannerFunctionalUnitProps : NSObject
{
    unsigned long long _pixelDataType;
    NSMutableIndexSet *_supportedBitDepths;
    unsigned long long _bitDepth;
    NSMutableIndexSet *_supportedMeasurementUnits;
    unsigned long long _measurementUnit;
    unsigned long long _measurementUnitPrivate;
    unsigned long long _nativeXResolution;
    unsigned long long _nativeYResolution;
    NSMutableIndexSet *_supportedResolutions;
    NSMutableIndexSet *_preferredResolutions;
    unsigned long long _resolution;
    NSMutableIndexSet *_supportedScaleFactors;
    NSMutableIndexSet *_preferredScaleFactors;
    unsigned long long _scaleFactor;
    NSArray *_templates;
    NSArray *_vendorFeatures;
    BOOL _acceptsThresholdForBlackAndWhiteScanning;
    BOOL _usesThresholdForBlackAndWhiteScanning;
    unsigned char _defaultThresholdForBlackAndWhiteScanning;
    unsigned char _thresholdForBlackAndWhiteScanning;
    unsigned int _state;
    ICScannerImageRep *_overviewImageBufferRep;
    struct CGDataProvider *_overviewImageDataProvider;
    struct CGImage *_overviewImage;
    struct CGImage *_grayOverviewImage;
    unsigned long long _overviewResolution;
    struct CGColorSpace *_grayColorSpace;
    struct CGSize _physicalSizeInInches;
    struct CGSize _minimumScanSizeInInches;
    struct CGRect _scanArea;
    unsigned long long _scanAreaOrientation;
    double _scanProgressPercentDone;
    ICScannerDevice *_scanner;
    unsigned char _backgroundGrayValue;
    NSMutableDictionary *_scanParams;
    unsigned long long _templateMeasurementUnit;
    BOOL _supportsProgressNotificationsWithScanData;
    BOOL _useOverviewImageAsFinalImage;
}

@property BOOL useOverviewImageAsFinalImage; // @synthesize useOverviewImageAsFinalImage=_useOverviewImageAsFinalImage;
@property BOOL supportsProgressNotificationsWithScanData; // @synthesize supportsProgressNotificationsWithScanData=_supportsProgressNotificationsWithScanData;
@property unsigned long long templateMeasurementUnit; // @synthesize templateMeasurementUnit=_templateMeasurementUnit;
@property(retain) NSMutableDictionary *scanParams; // @synthesize scanParams=_scanParams;
@property unsigned char backgroundGrayValue; // @synthesize backgroundGrayValue=_backgroundGrayValue;
@property ICScannerDevice *scanner; // @synthesize scanner=_scanner;
@property double scanProgressPercentDone; // @synthesize scanProgressPercentDone=_scanProgressPercentDone;
@property unsigned long long scanAreaOrientation; // @synthesize scanAreaOrientation=_scanAreaOrientation;
@property struct CGRect scanArea; // @synthesize scanArea=_scanArea;
@property struct CGSize minimumScanSizeInInches; // @synthesize minimumScanSizeInInches=_minimumScanSizeInInches;
@property struct CGSize physicalSizeInInches; // @synthesize physicalSizeInInches=_physicalSizeInInches;
@property(retain) ICScannerImageRep *overviewImageBufferRep; // @synthesize overviewImageBufferRep=_overviewImageBufferRep;
@property unsigned int state; // @synthesize state=_state;
@property unsigned char thresholdForBlackAndWhiteScanning; // @synthesize thresholdForBlackAndWhiteScanning=_thresholdForBlackAndWhiteScanning;
@property BOOL usesThresholdForBlackAndWhiteScanning; // @synthesize usesThresholdForBlackAndWhiteScanning=_usesThresholdForBlackAndWhiteScanning;
@property unsigned char defaultThresholdForBlackAndWhiteScanning; // @synthesize defaultThresholdForBlackAndWhiteScanning=_defaultThresholdForBlackAndWhiteScanning;
@property BOOL acceptsThresholdForBlackAndWhiteScanning; // @synthesize acceptsThresholdForBlackAndWhiteScanning=_acceptsThresholdForBlackAndWhiteScanning;
@property(retain) NSArray *vendorFeatures; // @synthesize vendorFeatures=_vendorFeatures;
@property(retain) NSArray *templates; // @synthesize templates=_templates;
@property unsigned long long scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain) NSMutableIndexSet *preferredScaleFactors; // @synthesize preferredScaleFactors=_preferredScaleFactors;
@property(retain) NSMutableIndexSet *supportedScaleFactors; // @synthesize supportedScaleFactors=_supportedScaleFactors;
@property unsigned long long resolution; // @synthesize resolution=_resolution;
@property(retain) NSMutableIndexSet *preferredResolutions; // @synthesize preferredResolutions=_preferredResolutions;
@property(retain) NSMutableIndexSet *supportedResolutions; // @synthesize supportedResolutions=_supportedResolutions;
@property unsigned long long nativeYResolution; // @synthesize nativeYResolution=_nativeYResolution;
@property unsigned long long nativeXResolution; // @synthesize nativeXResolution=_nativeXResolution;
@property unsigned long long measurementUnitPrivate; // @synthesize measurementUnitPrivate=_measurementUnitPrivate;
@property unsigned long long measurementUnit; // @synthesize measurementUnit=_measurementUnit;
@property(retain) NSMutableIndexSet *supportedMeasurementUnits; // @synthesize supportedMeasurementUnits=_supportedMeasurementUnits;
@property unsigned long long bitDepth; // @synthesize bitDepth=_bitDepth;
@property(retain) NSMutableIndexSet *supportedBitDepths; // @synthesize supportedBitDepths=_supportedBitDepths;
@property unsigned long long pixelDataType; // @synthesize pixelDataType=_pixelDataType;
@property unsigned long long overviewResolution; // @synthesize overviewResolution=_overviewResolution;
@property struct CGColorSpace *grayColorSpace; // @synthesize grayColorSpace=_grayColorSpace;
@property struct CGImage *grayOverviewImage; // @synthesize grayOverviewImage=_grayOverviewImage;
@property struct CGImage *overviewImage; // @synthesize overviewImage=_overviewImage;
@property(readonly) NSMutableDictionary *currentSettings;
- (id)initWithDictionary:(id)arg1 andScanner:(id)arg2;
- (void)dealloc;

@end

