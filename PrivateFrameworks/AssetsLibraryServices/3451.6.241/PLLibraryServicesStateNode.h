//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface PLLibraryServicesStateNode : NSObject
{
    unsigned int _qos;
    long long _state;
    NSOperationQueue *_operationQueue;
}

@property(nonatomic) unsigned int qos; // @synthesize qos=_qos;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)terminate;
- (void)run;
- (id)description;
- (id)initWithLibraryServicesState:(long long)arg1 qualityOfService:(unsigned int)arg2;

@end

