//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCKRecordFieldSchema : NSObject
{
    BOOL _encrypted;
    BOOL _required;
    NSString *_name;
    Class _valueClass;
}

@property(nonatomic, getter=isRequired) BOOL required; // @synthesize required=_required;
@property(retain, nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;
@property(readonly, nonatomic, getter=isEncrypted) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isValidRecord:(id)arg1;
- (id)initWithName:(id)arg1 valueClass:(Class)arg2 required:(BOOL)arg3 encrypted:(BOOL)arg4;

@end

