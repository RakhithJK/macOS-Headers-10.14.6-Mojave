//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUJSObject.h>

@class NUIdentifier;

@interface NUJSIdentifier : NUJSObject
{
}

- (id)toString;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (BOOL)hasProperty:(id)arg1;
@property(readonly, nonatomic) NUIdentifier *identifier;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;

@end

