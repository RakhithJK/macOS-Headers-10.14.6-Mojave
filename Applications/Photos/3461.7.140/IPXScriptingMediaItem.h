//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXScriptingObject.h"

@class RDVersion;

@interface IPXScriptingMediaItem : IPXScriptingObject
{
    RDVersion *_representedVersion;
}

@property(retain) RDVersion *representedVersion; // @synthesize representedVersion=_representedVersion;
- (void).cxx_destruct;
- (id)handleSpotlightScriptCommand:(id)arg1;
- (id)handleDuplicateScriptCommand:(id)arg1;
- (id)size;
- (id)altitude;
- (id)filename;
- (id)width;
- (id)height;
- (id)uuid;
- (void)setDate:(id)arg1;
- (id)date;
- (void)setFavorite:(BOOL)arg1;
- (BOOL)favorite;
- (void)setIptcCaption:(id)arg1;
- (id)iptcCaption;
- (void)setName:(id)arg1;
- (id)name;
- (void)setLocation:(id)arg1;
- (id)location;
- (void)setKeywords:(id)arg1;
- (id)keywords;
- (id)objectSpecifier;
- (void)executeAction:(id)arg1;
- (id)initWithVersion:(id)arg1 containerClass:(id)arg2 containerSpecifier:(id)arg3 containerKey:(id)arg4;

@end

