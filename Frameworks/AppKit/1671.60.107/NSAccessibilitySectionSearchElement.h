//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface NSAccessibilitySectionSearchElement : NSObject
{
    id _element;
    NSMutableSet *_searchKeys;
}

@property(retain, nonatomic) NSMutableSet *searchKeys; // @synthesize searchKeys=_searchKeys;
@property(readonly, nonatomic) id element; // @synthesize element=_element;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithElement:(id)arg1;

@end

