//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ImageCaptureCore/ICScannerFunctionalUnit.h>

@class NSIndexSet;

@interface ICScannerFunctionalUnitFlatbed : ICScannerFunctionalUnit
{
    id _fbProps;
}

- (id)colorSyncProfilePath;
- (id)description;
- (id)currentSettings;
- (id)colorSyncModeForGrayOverview;
- (id)colorSyncModeForRGBOverview;
- (id)initWithDictionary:(id)arg1 andScanner:(id)arg2;
- (void)dealloc;
@property unsigned long long documentType;
@property(readonly) struct CGSize documentSize;
@property(readonly) NSIndexSet *supportedDocumentTypes;
- (id)valueForUndefinedKey:(id)arg1;

@end

