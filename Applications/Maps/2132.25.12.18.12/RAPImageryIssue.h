//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RAPLocalizedNameProtocol-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RAPImageryIssue : NSObject <RAPLocalizedNameProtocol>
{
    NSString *_localizedName;
    long long _kind;
}

@property(readonly, nonatomic) long long kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
- (id)_initWithKind:(long long)arg1 localizedName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

