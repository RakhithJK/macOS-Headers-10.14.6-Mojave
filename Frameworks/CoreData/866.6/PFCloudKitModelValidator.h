//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectModel, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitModelValidator : NSObject
{
    NSManagedObjectModel *_model;
    NSString *_configurationName;
}

+ (id)stringFromDeleteRule:(unsigned long long)arg1;
- (BOOL)validateEntity:(id)arg1 hasAttributeNamed:(id)arg2 ofType:(unsigned long long)arg3 andReturnFailureReason:(id *)arg4;
- (BOOL)validateEntities:(id)arg1 error:(id *)arg2;
- (BOOL)_validateManagedObjectModel:(id)arg1 error:(id *)arg2;
- (BOOL)validate:(id *)arg1;
- (void)dealloc;
- (id)initWithManagedObjectModel:(id)arg1 configuration:(id)arg2;
- (id)init;

@end
