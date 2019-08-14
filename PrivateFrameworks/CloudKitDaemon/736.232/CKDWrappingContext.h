//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDWrappingContext : NSObject
{
    CKRecordID *_recordID;
    NSString *_fieldName;
    NSData *_fileSignature;
    NSData *_referenceSignature;
}

@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (id)encryptedDataContextString;
- (id)assetContextString;
- (id)initWithRecordID:(id)arg1 fieldName:(id)arg2 fileSignature:(id)arg3 referenceSignature:(id)arg4;

@end

