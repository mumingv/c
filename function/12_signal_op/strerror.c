/***********************************************************
 *     FileName: strerror.c
 *         Desc: 打印出错的原因描述字符串
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-04-18 19:53:05
 *      History:
 ***********************************************************/

// 语法：char *strerror(int errnum);

#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void) {
    close(5);
    printf("%s\n", strerror(errno)); //Bad file descriptor

    // 打印所有的错误原因描述字符串
    int i;
    for (i = 0; i < 300; i++) {
        printf("%03d: %s\n", i, strerror(i));
    }
    return 0;
}
/*
000: Success
001: Operation not permitted
002: No such file or directory
003: No such process
004: Interrupted system call
005: Input/output error
006: No such device or address
007: Argument list too long
008: Exec format error
009: Bad file descriptor
010: No child processes
011: Resource temporarily unavailable
012: Cannot allocate memory
013: Permission denied
014: Bad address
015: Block device required
016: Device or resource busy
017: File exists
018: Invalid cross-device link
019: No such device
020: Not a directory
021: Is a directory
022: Invalid argument
023: Too many open files in system
024: Too many open files
025: Inappropriate ioctl for device
026: Text file busy
027: File too large
028: No space left on device
029: Illegal seek
030: Read-only file system
031: Too many links
032: Broken pipe
033: Numerical argument out of domain
034: Numerical result out of range
035: Resource deadlock avoided
036: File name too long
037: No locks available
038: Function not implemented
039: Directory not empty
040: Too many levels of symbolic links
041: Unknown error 41
042: No message of desired type
043: Identifier removed
044: Channel number out of range
045: Level 2 not synchronized
046: Level 3 halted
047: Level 3 reset
048: Link number out of range
049: Protocol driver not attached
050: No CSI structure available
051: Level 2 halted
052: Invalid exchange
053: Invalid request descriptor
054: Exchange full
055: No anode
056: Invalid request code
057: Invalid slot
058: Unknown error 58
059: Bad font file format
060: Device not a stream
061: No data available
062: Timer expired
063: Out of streams resources
064: Machine is not on the network
065: Package not installed
066: Object is remote
067: Link has been severed
068: Advertise error
069: Srmount error
070: Communication error on send
071: Protocol error
072: Multihop attempted
073: RFS specific error
074: Bad message
075: Value too large for defined data type
076: Name not unique on network
077: File descriptor in bad state
078: Remote address changed
079: Can not access a needed shared library
080: Accessing a corrupted shared library
081: .lib section in a.out corrupted
082: Attempting to link in too many shared libraries
083: Cannot exec a shared library directly
084: Invalid or incomplete multibyte or wide character
085: Interrupted system call should be restarted
086: Streams pipe error
087: Too many users
088: Socket operation on non-socket
089: Destination address required
090: Message too long
091: Protocol wrong type for socket
092: Protocol not available
093: Protocol not supported
094: Socket type not supported
095: Operation not supported
096: Protocol family not supported
097: Address family not supported by protocol
098: Address already in use
099: Cannot assign requested address
100: Network is down
101: Network is unreachable
102: Network dropped connection on reset
103: Software caused connection abort
104: Connection reset by peer
105: No buffer space available
106: Transport endpoint is already connected
107: Transport endpoint is not connected
108: Cannot send after transport endpoint shutdown
109: Too many references: cannot splice
110: Connection timed out
111: Connection refused
112: Host is down
113: No route to host
114: Operation already in progress
115: Operation now in progress
116: Stale NFS file handle
117: Structure needs cleaning
118: Not a XENIX named type file
119: No XENIX semaphores available
120: Is a named type file
121: Remote I/O error
122: Disk quota exceeded
123: No medium found
124: Wrong medium type
125: Operation canceled
126: Unknown error 126
127: Unknown error 127
128: Unknown error 128
129: Unknown error 129
130: Unknown error 130
131: Unknown error 131
132: Unknown error 132
133: Unknown error 133
134: Unknown error 134
135: Unknown error 135
136: Unknown error 136
137: Unknown error 137
138: Unknown error 138
139: Unknown error 139
140: Unknown error 140
141: Unknown error 141
142: Unknown error 142
143: Unknown error 143
144: Unknown error 144
145: Unknown error 145
146: Unknown error 146
147: Unknown error 147
148: Unknown error 148
149: Unknown error 149
150: Unknown error 150
151: Unknown error 151
152: Unknown error 152
153: Unknown error 153
154: Unknown error 154
155: Unknown error 155
156: Unknown error 156
157: Unknown error 157
158: Unknown error 158
159: Unknown error 159
160: Unknown error 160
161: Unknown error 161
162: Unknown error 162
163: Unknown error 163
164: Unknown error 164
165: Unknown error 165
166: Unknown error 166
167: Unknown error 167
168: Unknown error 168
169: Unknown error 169
170: Unknown error 170
171: Unknown error 171
172: Unknown error 172
173: Unknown error 173
174: Unknown error 174
175: Unknown error 175
176: Unknown error 176
177: Unknown error 177
178: Unknown error 178
179: Unknown error 179
180: Unknown error 180
181: Unknown error 181
182: Unknown error 182
183: Unknown error 183
184: Unknown error 184
185: Unknown error 185
186: Unknown error 186
187: Unknown error 187
188: Unknown error 188
189: Unknown error 189
190: Unknown error 190
191: Unknown error 191
192: Unknown error 192
193: Unknown error 193
194: Unknown error 194
195: Unknown error 195
196: Unknown error 196
197: Unknown error 197
198: Unknown error 198
199: Unknown error 199
200: Unknown error 200
201: Unknown error 201
202: Unknown error 202
203: Unknown error 203
204: Unknown error 204
205: Unknown error 205
206: Unknown error 206
207: Unknown error 207
208: Unknown error 208
209: Unknown error 209
210: Unknown error 210
211: Unknown error 211
212: Unknown error 212
213: Unknown error 213
214: Unknown error 214
215: Unknown error 215
216: Unknown error 216
217: Unknown error 217
218: Unknown error 218
219: Unknown error 219
220: Unknown error 220
221: Unknown error 221
222: Unknown error 222
223: Unknown error 223
224: Unknown error 224
225: Unknown error 225
226: Unknown error 226
227: Unknown error 227
228: Unknown error 228
229: Unknown error 229
230: Unknown error 230
231: Unknown error 231
232: Unknown error 232
233: Unknown error 233
234: Unknown error 234
235: Unknown error 235
236: Unknown error 236
237: Unknown error 237
238: Unknown error 238
239: Unknown error 239
240: Unknown error 240
241: Unknown error 241
242: Unknown error 242
243: Unknown error 243
244: Unknown error 244
245: Unknown error 245
246: Unknown error 246
247: Unknown error 247
248: Unknown error 248
249: Unknown error 249
250: Unknown error 250
251: Unknown error 251
252: Unknown error 252
253: Unknown error 253
254: Unknown error 254
255: Unknown error 255
256: Unknown error 256
257: Unknown error 257
258: Unknown error 258
259: Unknown error 259
260: Unknown error 260
261: Unknown error 261
262: Unknown error 262
263: Unknown error 263
264: Unknown error 264
265: Unknown error 265
266: Unknown error 266
267: Unknown error 267
268: Unknown error 268
269: Unknown error 269
270: Unknown error 270
271: Unknown error 271
272: Unknown error 272
273: Unknown error 273
274: Unknown error 274
275: Unknown error 275
276: Unknown error 276
277: Unknown error 277
278: Unknown error 278
279: Unknown error 279
280: Unknown error 280
281: Unknown error 281
282: Unknown error 282
283: Unknown error 283
284: Unknown error 284
285: Unknown error 285
286: Unknown error 286
287: Unknown error 287
288: Unknown error 288
289: Unknown error 289
290: Unknown error 290
291: Unknown error 291
292: Unknown error 292
293: Unknown error 293
294: Unknown error 294
295: Unknown error 295
296: Unknown error 296
297: Unknown error 297
298: Unknown error 298
299: Unknown error 299
*/

