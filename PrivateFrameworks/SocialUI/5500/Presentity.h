//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMCore/IMHandle.h>

@class BuddyPicture;

@interface Presentity : IMHandle
{
    BuddyPicture *_customPicture;
    BuddyPicture *_picture;
    BOOL _isCustomPictureChecked;
}

- (void).cxx_destruct;
- (void)setPicture:(id)arg1;
- (void)customPictureDataChanged:(id)arg1 key:(id)arg2;
- (id)picture;
- (id)buddyImage;
- (void)setPictureFromImage:(id)arg1;
- (void)_setPicture:(id)arg1;
- (void)sendNotificationABPersonChanged;
- (void)_imPersonPictureChanged:(id)arg1;
- (void)abPersonChangedPicture;
- (void)forgetCustomPicture;
- (id)customPicture;

@end

