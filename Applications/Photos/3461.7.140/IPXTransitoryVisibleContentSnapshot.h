//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IPXTransitoryVisibleContentSnapshot : NSObject
{
    BOOL _anySelectedVersionVisible;
    NSArray *_visibleVersions;
    NSArray *_selectedVersions;
    long long _type;
}

@property(nonatomic, getter=isAnySelectedVersionVisible) BOOL anySelectedVersionVisible; // @synthesize anySelectedVersionVisible=_anySelectedVersionVisible;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *selectedVersions; // @synthesize selectedVersions=_selectedVersions;
@property(copy, nonatomic) NSArray *visibleVersions; // @synthesize visibleVersions=_visibleVersions;
- (void).cxx_destruct;
- (id)initWithVisibleVersions:(id)arg1 selectedVersions:(id)arg2;
- (id)initWithVisibleVersions:(id)arg1 selectedVersions:(id)arg2 type:(long long)arg3;
- (id)init;

@end

