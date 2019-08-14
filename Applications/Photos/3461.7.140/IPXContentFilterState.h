//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IPXContentFilterState : NSObject
{
    BOOL _favorite;
    BOOL _edited;
    BOOL _image;
    BOOL _video;
    BOOL _panaroma;
    BOOL _hidden;
    BOOL _changeMessageSent;
    NSMutableArray *_keywords;
}

@property BOOL changeMessageSent; // @synthesize changeMessageSent=_changeMessageSent;
@property(retain, nonatomic) NSMutableArray *keywords; // @synthesize keywords=_keywords;
@property BOOL hidden; // @synthesize hidden=_hidden;
@property BOOL panaroma; // @synthesize panaroma=_panaroma;
@property BOOL video; // @synthesize video=_video;
@property BOOL image; // @synthesize image=_image;
@property BOOL edited; // @synthesize edited=_edited;
@property BOOL favorite; // @synthesize favorite=_favorite;
- (void).cxx_destruct;
- (id)localizedDescriptionForFilters;
- (long long)ruleCount;
- (BOOL)hasRules;

@end

