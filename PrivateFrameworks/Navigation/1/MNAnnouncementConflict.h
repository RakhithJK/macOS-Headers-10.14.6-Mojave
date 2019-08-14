//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNAnnouncementPlanEvent;

__attribute__((visibility("hidden")))
@interface MNAnnouncementConflict : NSObject
{
    BOOL _announcementsAreSimilar;
    MNAnnouncementPlanEvent *_firstEvent;
    MNAnnouncementPlanEvent *_secondEvent;
    double _timeGap;
    double _desiredTimeGap;
}

@property(nonatomic) BOOL announcementsAreSimilar; // @synthesize announcementsAreSimilar=_announcementsAreSimilar;
@property(nonatomic) double desiredTimeGap; // @synthesize desiredTimeGap=_desiredTimeGap;
@property(nonatomic) double timeGap; // @synthesize timeGap=_timeGap;
@property(retain, nonatomic) MNAnnouncementPlanEvent *secondEvent; // @synthesize secondEvent=_secondEvent;
@property(retain, nonatomic) MNAnnouncementPlanEvent *firstEvent; // @synthesize firstEvent=_firstEvent;
- (void).cxx_destruct;
- (id)description;

@end

