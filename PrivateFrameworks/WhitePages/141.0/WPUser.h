//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WhitePages/WPPerson.h>

@interface WPUser : WPPerson
{
}

+ (id)defaultLargeImage;
+ (id)defaultImage;
+ (id)usersWithName:(id)arg1 inNodesWithPaths:(id)arg2 attributesToBeReturned:(id)arg3 session:(id)arg4;
+ (id)usersWithName:(id)arg1 inNodeWithPath:(id)arg2 attributesToBeReturned:(id)arg3 session:(id)arg4;
+ (id)usersWithName:(id)arg1 inNodeWithPath:(id)arg2 attributesToBeReturned:(id)arg3;
+ (id)usersWithName:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3;
+ (id)usersWithName:(id)arg1 attributesToBeReturned:(id)arg2;
+ (id)userWithGUID:(id)arg1 inNodesWithPaths:(id)arg2 attributesToBeReturned:(id)arg3 session:(id)arg4;
+ (id)userWithGUID:(id)arg1 inNodeWithPath:(id)arg2 attributesToBeReturned:(id)arg3 session:(id)arg4;
+ (id)userWithGUID:(id)arg1 inNodeWithPath:(id)arg2 attributesToBeReturned:(id)arg3;
+ (id)userWithGUID:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3;
+ (id)userWithGUID:(id)arg1 attributesToBeReturned:(id)arg2;
+ (id)userWithODRecord:(id)arg1 session:(id)arg2;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (id)reflectedImage;
- (id)badgeImage;
- (id)pluralRecordCategory;
- (id)singularRecordCategory;
- (id)recordType;
- (id)description;
- (void)dealloc;
- (id)initRecordWithODRecord:(id)arg1 session:(id)arg2;

@end

