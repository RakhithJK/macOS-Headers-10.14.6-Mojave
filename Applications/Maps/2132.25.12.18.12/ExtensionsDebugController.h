//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MapsDebugValuesViewController.h"

@class NSDictionary, _MXExtensionManager;

__attribute__((visibility("hidden")))
@interface ExtensionsDebugController : MapsDebugValuesViewController
{
    NSDictionary *_extensions;
    _MXExtensionManager *_extManager;
}

+ (id)navigationDestinationTitle;
@property(retain, nonatomic) _MXExtensionManager *extManager; // @synthesize extManager=_extManager;
@property(retain, nonatomic) NSDictionary *extensions; // @synthesize extensions=_extensions;
- (void).cxx_destruct;
- (void)_addSectionWithMapsExtensionPointName:(id)arg1;
- (void)prepareContent;

@end

