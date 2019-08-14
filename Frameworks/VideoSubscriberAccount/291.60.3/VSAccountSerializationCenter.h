//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSUndoManager, VSPersistentStorage;

@interface VSAccountSerializationCenter : NSObject
{
    NSOperationQueue *_serializationQueue;
    VSPersistentStorage *_storage;
}

+ (id)defaultSerializationCenter;
@property(retain, nonatomic) VSPersistentStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSOperationQueue *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
- (void).cxx_destruct;
- (id)importData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)exportDataWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSUndoManager *undoManager;
- (id)init;

@end

