//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface _EARSpeechModelInfo : NSObject
{
    struct SpeechModelInfo _speechModelInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *acousticProfileVersion;
@property(readonly, nonatomic) NSString *phoneSetVersion;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSSet *tasks;
@property(readonly, nonatomic) NSSet *samplingRates;
@property(readonly, nonatomic) NSString *version;
- (id)initWithConfig:(id)arg1;

@end

