//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBWidgetProcess, NSArray, NSDictionary, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_source;

@interface DBWidget : NSObject
{
    unsigned int _window;
    NSURL *_url;
    unsigned int _cid;
    unsigned int _client_port;
    struct __DBEventQueue *_event_queue;
    unsigned int _server_port;
    struct __CFRunLoopSource *_server_source;
    NSObject<OS_dispatch_source> *_event_source;
    struct CGSRegionObject *_region;
    CDStruct_36662d15 *_circles;
    int _circle_count;
    struct CGSRegionObject *_circle_region;
    NSString *_identifier;
    struct CGPoint _close_box_inset;
    unsigned int _tid;
    char _unique_id[17];
    struct CGPoint _position;
    struct CGSize _default_size;
    struct CGSize _position_offset;
    int _pid;
    NSMutableArray *_attached_windows;
    unsigned int _close_window;
    struct __CFArray *_openurl_queue;
    unsigned long long _version;
    struct {
        float x;
        float y;
        struct CGPoint pt;
        int area;
        long long type;
    } _percent_offset;
    NSObject<OS_dispatch_source> *_death_timer;
    unsigned long long _capabilities;
    unsigned int _received_death:1;
    unsigned int _in_dashboard_layer:1;
    unsigned int _has_backgroundevent_mask:1;
    unsigned int _has_event_shape:1;
    unsigned int _has_plugin:1;
    unsigned int _separate_process:1;
    unsigned int _debug_widget:1;
    unsigned int _should_run_32_bit:1;
    unsigned int _user_moved_position:1;
    unsigned int _cgnotification_registered:1;
    DBWidgetProcess *_process;
}

@property(nonatomic) __weak DBWidgetProcess *process; // @synthesize process=_process;
@property(readonly, nonatomic) unsigned int cid; // @synthesize cid=_cid;
@property(nonatomic) _Bool debugWidget; // @synthesize debugWidget=_debug_widget;
@property(readonly, nonatomic) NSArray *attachedWindows; // @synthesize attachedWindows=_attached_windows;
@property(readonly, nonatomic) _Bool separateProcess; // @synthesize separateProcess=_separate_process;
@property(nonatomic) struct CGSize positionOffset; // @synthesize positionOffset=_position_offset;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) _Bool receivedDeath; // @synthesize receivedDeath=_received_death;
@property(readonly, nonatomic) struct __DBEventQueue *eventQueue; // @synthesize eventQueue=_event_queue;
@property(readonly, nonatomic) _Bool shouldRun32Bit; // @synthesize shouldRun32Bit=_should_run_32_bit;
@property(readonly, nonatomic) _Bool hasPlugin; // @synthesize hasPlugin=_has_plugin;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int closeWindow; // @synthesize closeWindow=_close_window;
@property(nonatomic) _Bool inDashboardLayer; // @synthesize inDashboardLayer=_in_dashboard_layer;
@property(readonly, nonatomic) unsigned int window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)_removeAllExternalAttachedWindows;
- (void)_initializeAttachedWindows;
- (void)_transactionComplete:(unsigned int)arg1;
- (void)_handleEvents;
- (_Bool)_intialize:(unsigned int)arg1 url:(id)arg2 size:(struct CGSize)arg3 identifier:(id)arg4 image:(id)arg5 close_inset:(struct CGPoint)arg6 in_layer:(_Bool)arg7 showDefaultBackground:(_Bool)arg8 vers:(unsigned long long)arg9 scaleFactor:(float)arg10;
- (void)addCloseBoxAttachedWindow:(unsigned int)arg1;
- (void)setPosition:(struct CGPoint)arg1 forAttachedWindow:(unsigned int)arg2;
- (unsigned long long)setRect:(struct CGRect)arg1 forAttachedWindow:(unsigned int)arg2;
- (_Bool)orderAttachedWindow:(unsigned int)arg1 op:(int)arg2 other:(unsigned int)arg3;
- (void)removeAttachedWindow:(unsigned int)arg1;
- (void)setEventRegion:(struct CGSRegionObject *)arg1;
- (_Bool)setControlRegions:(char *)arg1 regionCnt:(unsigned int)arg2 circleArray:(CDStruct_36662d15 *)arg3 circleArrayCnt:(unsigned int)arg4;
- (int)setWindowColorSpace:(struct CGColorSpace *)arg1;
- (void)resetClipForTrackingRect:(unsigned long long)arg1;
- (void)setEventMaskForTrackingRect:(unsigned long long)arg1 mask:(unsigned int)arg2;
- (void)setMouseMovedEventsEnabled:(_Bool)arg1;
- (void)reload;
- (void)setOpaqueRegion:(struct CGSRegionObject *)arg1;
- (void)setTrackingRect:(long long)arg1 rect:(struct CGRect)arg2 assumeInside:(_Bool)arg3;
- (void)enableTrackingRect:(long long)arg1 enabled:(_Bool)arg2;
- (void)removeTrackingRect:(long long)arg1;
- (void)addTrackingRect:(struct CGRect)arg1 index:(long long)arg2 assumeInside:(_Bool)arg3 userData:(void *)arg4;
- (void)setCloseBoxOffset:(struct CGPoint)arg1;
- (void)reenableUpdates:(unsigned long long)arg1;
- (unsigned long long)disableUpdates;
- (void)invokeTransition:(unsigned int)arg1 duration:(float)arg2;
- (unsigned int)newTransition:(unsigned int)arg1 flags:(unsigned int)arg2;
- (void)manageFilter:(unsigned int)arg1 add:(_Bool)arg2 options:(unsigned int)arg3;
- (void)runFlipAnimation;
- (void)newFlipAnimation:(_Bool)arg1;
- (unsigned int)createAttachedWindow:(struct CGRect)arg1 tags:(unsigned int [2])arg2 options:(int)arg3;
- (unsigned long long)setRect:(struct CGRect)arg1 newBounds:(struct CGRect *)arg2;
- (unsigned long long)setSize:(struct CGSize)arg1 newBounds:(struct CGRect *)arg2;
- (int)setResolution:(double)arg1;
- (void)messageTrace;
- (void)initializeUniqueString;
- (_Bool)dataForLaunch:(unsigned int)arg1 path:(char *)arg2 window:(unsigned int *)arg3 uniqueid:(char [16])arg4 clientPort:(unsigned int *)arg5 serverPort:(unsigned int *)arg6 url_data:(const char **)arg7 url_dataCnt:(unsigned int *)arg8 url_data_inline:(char [4096])arg9 url_data_inlineCnt:(unsigned int *)arg10;
- (void)urlHelper:(const char **)arg1 url_dataCnt:(unsigned int *)arg2 url_data_inline:(char [4096])arg3 url_data_inlineCnt:(unsigned int *)arg4;
- (struct CGRect)moveOnScreenIfNecessary:(_Bool)arg1;
- (void)removeCloseWindow;
- (void)stopTransitions;
- (void)clearTransform;
- (void)setWindowLevel:(int)arg1;
- (void)updatePosition;
- (void)updateColorSpace:(unsigned int)arg1 colorSpace:(struct CGColorSpace *)arg2;
- (void)handleMouseEnter;
- (void)addDeathTimer:(double)arg1;
- (const char *)dequeueOpenURL;
- (void)enqueueOpenURL:(const char *)arg1;
- (void)clearBackgroundEventMask;
- (void)setPercentOffset;
- (void)move:(struct CGPoint)arg1;
- (void)orderWindows:(unsigned int)arg1 operation:(int)arg2;
- (void)postSimpleEvent:(unsigned int)arg1 coalesce:(_Bool)arg2;
- (_Bool)cleanupForRelaunch;
- (void)close:(_Bool)arg1;
- (void)setUID:(const char *)arg1;
@property(readonly, nonatomic) unsigned long long windowCount; // @dynamic windowCount;
@property(readonly, nonatomic) struct CGRect bounds; // @dynamic bounds;
@property(readonly, nonatomic) struct CGPoint closeBoxPosition; // @dynamic closeBoxPosition;
@property(readonly, nonatomic) NSDictionary *plist; // @dynamic plist;
- (void)dealloc;
- (void)invalidate;
- (id)description;
- (id)initWithPlist:(unsigned int)arg1 plist:(id)arg2;
- (id)initWithURL:(unsigned int)arg1 url:(id)arg2 inLayer:(_Bool)arg3 defaultBackground:(_Bool)arg4 size:(struct CGSize *)arg5 checkPlugin:(_Bool)arg6 scaleFactor:(float)arg7;

@end

