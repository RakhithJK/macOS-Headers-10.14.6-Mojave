//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (HomeKitClient)
+ (void)setIdentifierSalt:(id)arg1 assistantSalt:(BOOL)arg2;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;
+ (id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
- (id)convertToData;
@end
