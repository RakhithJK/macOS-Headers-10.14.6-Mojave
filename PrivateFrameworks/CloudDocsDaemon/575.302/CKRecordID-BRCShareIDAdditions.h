//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKit/CKRecordID.h>

@interface CKRecordID (BRCShareIDAdditions)
+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;
- (id)brc_shareItemID;
- (id)brc_shareZoneName;
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;
- (id)initShareIDWithShareableItem:(id)arg1;
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;
@end

