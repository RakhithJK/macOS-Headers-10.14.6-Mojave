//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet;

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask
{
    BOOL _findAttendees;
    BOOL _findLocations;
    BOOL _findUsers;
    BOOL _findGroups;
    BOOL _findResources;
    unsigned long long _resultLimit;
    NSSet *_searchStrings;
}

+ (BOOL)tokensAreLegal:(id)arg1;
@property(retain, nonatomic) NSSet *searchStrings; // @synthesize searchStrings=_searchStrings;
@property(nonatomic) unsigned long long resultLimit; // @synthesize resultLimit=_resultLimit;
@property BOOL findResources; // @synthesize findResources=_findResources;
@property BOOL findGroups; // @synthesize findGroups=_findGroups;
@property BOOL findUsers; // @synthesize findUsers=_findUsers;
@property(nonatomic) BOOL findLocations; // @synthesize findLocations=_findLocations;
@property(nonatomic) BOOL findAttendees; // @synthesize findAttendees=_findAttendees;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)searchItems;
- (id)extraAttributes;
- (id)httpMethod;
- (id)initWithSearchStrings:(id)arg1 atURL:(id)arg2;

@end

