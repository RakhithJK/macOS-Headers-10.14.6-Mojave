//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BU_TDateFormatterController : NSObject
{
    struct TNSRef<BU_TValidatingDateFormatter, void> _shortDateTimeFormatter;
    struct TNSRef<BU_TValidatingDateFormatter, void> _shortDateTimeFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter, void> _shortDateOnlyFormatter;
    struct TNSRef<BU_TValidatingDateFormatter, void> _shortDateOnlyFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter, void> _mediumDateTimeFormatter;
    struct TNSRef<BU_TValidatingDateFormatter, void> _mediumDateTimeFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter, void> _mediumDateOnlyFormatter;
    struct TNSRef<BU_TValidatingDateFormatter, void> _mediumDateOnlyFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter, void> _longDateTimeFormatter;
    struct TNSRef<BU_TValidatingDateFormatter, void> _longDateTimeFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter, void> _fullDateTimeFormatter;
    struct TNSRef<BU_TValidatingDateFormatter, void> _fullDateTimeFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter, void> _fullDateOnlyFormatter;
    struct TNSRef<BU_TValidatingDateFormatter, void> _fullDateOnlyFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter, void> _timeOnlyFormatter;
    struct TNSRef<BU_TValidatingDateFormatter, void> _fileNameTimeFormatter;
    struct TNSRef<BU_TValidatingDateFormatter, void> _fileNameDateTimeFormatter;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _observers;
}

+ (id)dateFormatterController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (id)fileNameDateTimeFormatter;
- (id)fileNameTimeFormatter;
- (id)timeOnlyFormatter;
- (id)fullDateOnlyFormatter:(_Bool)arg1;
- (id)fullDateTimeFormatter:(_Bool)arg1;
- (id)longDateTimeFormatter:(_Bool)arg1;
- (id)mediumDateOnlyFormatter:(_Bool)arg1;
- (id)mediumDateTimeFormatter:(_Bool)arg1;
- (id)shortDateTimeFormatter:(_Bool)arg1;
- (id)shortDateOnlyFormatter:(_Bool)arg1;
- (id)init;

@end

