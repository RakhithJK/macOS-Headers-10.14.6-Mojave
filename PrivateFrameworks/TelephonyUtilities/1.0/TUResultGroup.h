//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, TUGroupTitle;

@interface TUResultGroup : NSObject <NSCopying>
{
    TUGroupTitle *_title;
    NSMutableArray *_resultsCache;
}

@property(retain, nonatomic) NSMutableArray *resultsCache; // @synthesize resultsCache=_resultsCache;
@property(retain, nonatomic) TUGroupTitle *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly) unsigned long long groupType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeSearchItem:(id)arg1;
@property(readonly) NSArray *results;
- (id)initWithTitle:(id)arg1 results:(id)arg2;

@end

