//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUImageWriter : NSObject
{
}

- (id)encodedModelFromAnnotationsController:(id)arg1 encrypt:(BOOL)arg2;
- (BOOL)writeUsingBaseImage:(id)arg1 withAnnotationsFromController:(id)arg2 asImageOfType:(id)arg3 toConsumer:(struct CGDataConsumer *)arg4 embedSourceImageAndAnnotationsAsMetadata:(BOOL)arg5 encryptPrivateMetadata:(BOOL)arg6 error:(id *)arg7;

@end

