//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSNibExternalObjectEntry : NSObject
{
    NSString *_key;
    NSString *_objectDescription;
    id _object;
}

+ (id)entryWithKey:(id)arg1 forObject:(id)arg2;
@property(readonly, copy) NSString *objectDescription; // @synthesize objectDescription=_objectDescription;
@property(readonly, copy) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly) __weak id object; // @synthesize object=_object;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end

